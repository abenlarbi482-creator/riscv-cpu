.section .text
.globl _start

_start:

# ============================================================
# 0. INITIALISATION
# ============================================================

    addi x1, x0, 10
    addi x2, x0, 20
    addi x3, x0, 30


# ============================================================
# 1. RAW DISTANCE 1
# ============================================================
# Instruction productrice immédiatement suivie
# par l'instruction consommatrice.
#
# x4 = 10 + 20 = 30
# x5 = x4 + 1 = 31

    add  x4, x1, x2
    addi x5, x4, 1

# ATTENDU :
# x4 = 30
# x5 = 31


# ============================================================
# 2. RAW DISTANCE 2
# ============================================================
# Deux instructions entre producteur et consommateur.
#
# x6 = 10 + 20 = 30
# x7 et x8 sont exécutées avant l'utilisation de x6.

    add  x6, x1, x2
    addi x7, x0, 100
    addi x8, x0, 200
    add  x9, x6, x7

# ATTENDU :
# x6 = 30
# x9 = 130


# ============================================================
# 3. RAW DISTANCE 3
# ============================================================
# Trois instructions entre producteur et consommateur.

    add  x10, x1, x2

    addi x11, x0, 1
    addi x12, x0, 2
    addi x13, x0, 3

    add  x14, x10, x11

# ATTENDU :
# x10 = 30
# x14 = 31


# ============================================================
# 4. RAW EN CHAINE
# ============================================================
# Vérifie plusieurs dépendances consécutives.

    add  x15, x1, x2       # x15 = 30
    add  x16, x15, x3      # x16 = 60
    add  x17, x16, x15     # x17 = 90
    add  x18, x17, x16     # x18 = 150

# ATTENDU :
# x15 = 30
# x16 = 60
# x17 = 90
# x18 = 150


# ============================================================
# 5. LOAD-USE SUR RS1
# ============================================================
#
# lw produit x19
# instruction suivante utilise x19 comme RS1.

    addi x20, x0, 0x100

    addi x19, x0, 42
    sw   x19, 0(x20)

    lw   x19, 0(x20)
    add  x21, x19, x1

# ATTENDU :
# x19 = 42
# x21 = 52


# ============================================================
# 6. LOAD-USE SUR RS2
# ============================================================
#
# lw produit x22
# instruction suivante utilise x22 comme RS2.

    addi x23, x0, 55
    sw   x23, 4(x20)

    lw   x22, 4(x20)
    add  x24, x1, x22

# ATTENDU :
# x22 = 55
# x24 = 65


# ============================================================
# 7. LOAD-USE AVEC LES DEUX OPERANDES
# ============================================================

    addi x25, x0, 7
    addi x26, x0, 8

    sw   x25, 8(x20)
    sw   x26, 12(x20)

    lw   x25, 8(x20)
    lw   x26, 12(x20)

    add  x27, x25, x26

# ATTENDU :
# x27 = 15


# ============================================================
# 8. BEQ PRIS
# ============================================================
# x1 == x1 → branchement pris.
# x28 NE DOIT PAS devenir 111.

    addi x28, x0, 0

    beq  x1, x1, beq_taken

    addi x28, x0, 111      # NE DOIT PAS être exécuté

beq_taken:
    addi x28, x0, 222

# ATTENDU :
# x28 = 222


# ============================================================
# 9. BEQ NON PRIS
# ============================================================
# x1 != x2 → branchement non pris.
#
# x29 doit devenir 333.

    beq  x1, x2, beq_not_taken

    addi x29, x0, 333

beq_not_taken:
    addi x29, x29, 0

# ATTENDU :
# x29 = 333


# ============================================================
# 10. BNE PRIS
# ============================================================

    addi x30, x0, 0

    bne  x1, x2, bne_taken

    addi x30, x0, 111      # NE DOIT PAS être exécuté

bne_taken:
    addi x30, x0, 222

# ATTENDU :
# x30 = 222


# ============================================================
# 11. BNE NON PRIS
# ============================================================
# x1 == x1 → BNE non pris.

    bne  x1, x1, bne_not_taken

    addi x2, x0, 20

bne_not_taken:


# ============================================================
# 12. BLT PRIS
# ============================================================
# 10 < 20 → pris.

    addi x3, x0, 0

    blt  x1, x2, blt_taken

    addi x3, x0, 111      # NE DOIT PAS être exécuté

blt_taken:
    addi x3, x0, 222

# ATTENDU :
# x3 = 222


# ============================================================
# 13. BLT NON PRIS
# ============================================================
# 20 < 10 → faux.

    blt  x2, x1, blt_not_taken

    addi x3, x0, 333

blt_not_taken:

# ATTENDU :
# x3 = 333


# ============================================================
# 14. BGE PRIS
# ============================================================
# 20 >= 10 → pris.

    addi x4, x0, 0

    bge  x2, x1, bge_taken

    addi x4, x0, 111      # NE DOIT PAS être exécuté

bge_taken:
    addi x4, x0, 222

# ATTENDU :
# x4 = 222


# ============================================================
# 15. BGE NON PRIS
# ============================================================
# 10 >= 20 → faux.

    bge  x1, x2, bge_not_taken

    addi x4, x0, 333

bge_not_taken:

# ATTENDU :
# x4 = 333


# ============================================================
# 16. BRANCHES AVEC NEGATIFS
# ============================================================

    addi x5, x0, -10
    addi x6, x0, -5

    # -10 < -5 → pris
    blt  x5, x6, neg_blt_taken

    addi x7, x0, 111

neg_blt_taken:
    addi x7, x0, 222

# ATTENDU :
# x7 = 222


# ============================================================
# 17. JAL
# ============================================================
#
# Vérifie :
#   - saut
#   - écriture de PC+4 dans rd
#   - flush de l'instruction suivante

    jal  x8, jal_target

    addi x9, x0, 111      # NE DOIT PAS être exécuté

jal_target:
    addi x9, x0, 222

# ATTENDU :
# x9 = 222
# x8 = adresse de l'instruction après JAL


# ============================================================
# 18. JALR
# ============================================================
#
# Construction de l'adresse de destination.

    auipc x10, 0
    addi  x10, x10, 16

    jalr x11, 0(x10)

    addi x12, x0, 111     # NE DOIT PAS être exécuté

    addi x12, x0, 222

# ATTENDU :
# x12 = 222
# x11 = PC de l'instruction suivant JALR


# ============================================================
# 19. TEST FINAL
# ============================================================
# Boucle infinie pour arrêter proprement le testbench.

end:
    beq x0, x0, end
