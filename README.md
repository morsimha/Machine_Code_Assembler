# Machine_Code_Assembler
A demi machine code assembler, that converts CPU assembly language to machine code, written in C. This project was a final product of a university C lab course.
Grade A+.

# Example input: Assembly code - *.as file
; file ps.as

.entry LIST

.extern W

MAIN: add r3, LIST

LOOP: prn #48

 lea STR, r6
 
 inc r6
 
mov r3, W

 sub r1, r4
 
 bne END
 
 cmp val1, #-6
 
 bne END[r15]
 
 dec K
 
.entry MAIN

 sub LOOP[r10] ,r14
 
END: stop

STR: .string "abcd"

LIST: .data 6, -9

 .data -100
 
.entry K

K: .data 31

.extern val1


# Example output: Binary code - *.am file:
	8 7
 
0100 A4-B0-C2-D0-E0

0101 A4-Ba-C0-D0-E0

0102 A4-B0-C0-D0-E1

0103 A4-B0-C0-D3-E3

0104 A4-B0-C0-D2-E1

0105 A4-B8-C0-D0-E0

0106 A4-B0-C0-D7-E4

0107 A4-B0-C0-D6-Ec

0108 A4-B0-C0-D6-Ec

0109 A4-B0-C0-D7-E4

0110 A4-B0-C0-D7-E2

0111 A4-B0-C0-D7-E2

0112 A4-B0-C0-D0-E0




![Perfect Example](https://github.com/morsimha/Machine_Code_Assembler/blob/main/screenshots%20and%20outputs/perfect_example.png)
