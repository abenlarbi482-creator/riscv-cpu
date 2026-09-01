_start:
    # load-use
    li   x2, 0
    sw   x1, 0(x2)
    lw   x5, 0(x2)
    add  x6, x5, x1      # doit stall un cycle

    # branchement pris
    li   x1, 5
    li   x2, 5
    beq  x1, x2, cible
    li   x3, 99          # ne doit PAS s'executer
    li   x4, 99          # ne doit PAS s'executer
    cible:
    li   x5, 1
