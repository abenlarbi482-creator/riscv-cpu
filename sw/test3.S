_start:
    csrrs x1, 0xB00, x0      # lire mcycle
    csrrs x2, 0xB02, x0      # lire minstret
    addi  x3, x0, 42
    csrrw x4, 0x305, x3      # ecrire 42 dans mtvec, x4 = ancienne valeur
    csrrs x5, 0x305, x0      # relire mtvec -> doit valoir 42
end:
    beq x0, x0, end
