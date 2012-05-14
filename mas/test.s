
    lui $9,0x1234

    lui $10,0x2000
    sw $9,0x00E0($10)

    li $9,0
    lui $10,0
    addi $11,$0,0x10
    noop
    lw $4,there
    lw $5,0x12($6)
    noop
    j over
    noop
    noop
    addi $10,$10,1
back:
    addi $10,$10,1
    addi $10,$10,1
    noop
    noop
    bgez $10,hang
    noop
    noop
over:
here:
    noop
    noop
    beq $10,$11,back
    noop
    addi $10,$10,1
    j 0x2010
    j here
    ;jr $11
    noop
    addi $10,$10,1
hang:
    j hang
    noop
    addi $10,$10,1
    j hang

there: .word 0x12345678
    noop
    noop

    la $5,over

forever:
    b forever


lui $10,0x1234
lui $4,0x2000
sw $10,0x00E0($4)

;---- end sim ---
lui $4,0x2000
nop
nop
nop
nop
nop
sw $0,0x00F0($4)
beq $0,$0,0xFFFF
nop
