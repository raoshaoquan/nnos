;寄存器病毒
;[INSTRSET "i486p"]
[BITS 32]
	MOV EAX,1*8 ;OS段号
	MOV DS,AX	;存入DS
	MOV BYTE [0x102600],0
	;RETF
return:
	MOV EDX,4
	INT 0x40