;; Insn constraint definitions for AVR 8-bit microcontrollers.
;; Copyright (C) 2006-2025 Free Software Foundation, Inc.
;;
;; This file is part of GCC.
;;
;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.
;;
;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.
;;
;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

;; Register constraints

(define_register_constraint "t" "R0_REG"
  "Temporary register r0")

(define_register_constraint "b" "BASE_POINTER_REGS"
  "Base pointer registers (r28--r31)")

(define_register_constraint "e" "POINTER_REGS"
  "Pointer registers (r26--r31)")

(define_register_constraint "w" "ADDW_REGS"
  "Registers from r24 to r31.  These registers
   can be used in @samp{adiw} command.")

(define_register_constraint "d" "LD_REGS"
  "Registers from r16 to r31.")

(define_register_constraint "l" "NO_LD_REGS"
  "Registers from r0 to r15.")

(define_register_constraint "a" "SIMPLE_LD_REGS"
  "Registers from r16 to r23.")

(define_register_constraint "x" "POINTER_X_REGS"
  "Register pair X (r27:r26).")

(define_register_constraint "y" "POINTER_Y_REGS"
  "Register pair Y (r29:r28).")

(define_register_constraint "z" "POINTER_Z_REGS"
  "Register pair Z (r31:r30).")

(define_register_constraint "q" "STACK_REG"
  "Stack pointer register (SPH:SPL).")

(define_constraint "I"
  "Integer constant in the range 0 @dots{} 63."
  (and (match_code "const_int")
       (match_test "ival >= 0 && ival <= 63")))

(define_constraint "J"
  "Integer constant in the range -63 @dots{} 0."
  (and (match_code "const_int")
       (match_test "ival <= 0 && ival >= -63")))

(define_constraint "K"
  "Integer constant 2."
  (and (match_code "const_int")
       (match_test "ival == 2")))

(define_constraint "L"
  "Zero."
  (and (match_code "const_int")
       (match_test "ival == 0")))

(define_constraint "M"
  "Integer constant in the range 0 @dots{} 0xff."
  (and (match_code "const_int")
       (match_test "ival >= 0 && ival <= 0xff")))

(define_constraint "N"
  "Constant integer @minus{}1."
  (and (match_code "const_int")
       (match_test "ival == -1")))

(define_constraint "O"
  "Constant integer 8, 16, or 24."
  (and (match_code "const_int")
       (match_test "ival == 8 || ival == 16 || ival == 24")))

(define_constraint "P"
  "Constant integer 1."
  (and (match_code "const_int")
       (match_test "ival == 1")))

(define_constraint "G"
  "Constant float 0."
  (and (match_code "const_double")
       (match_test "op == CONST0_RTX (SFmode)")))

(define_memory_constraint "Q"
  "A memory address based on Y or Z pointer with displacement."
  (and (match_code "mem")
       (match_test "extra_constraint_Q (op)")))

(define_constraint "Cm2"
  "Constant integer @minus{}2."
  (and (match_code "const_int")
       (match_test "ival == -2")))

(define_constraint "C03"
  "Constant integer 3."
  (and (match_code "const_int")
       (match_test "ival == 3")))

(define_constraint "C04"
  "Constant integer 4."
  (and (match_code "const_int")
       (match_test "ival == 4")))

(define_constraint "C05"
  "Constant integer 5."
  (and (match_code "const_int")
       (match_test "ival == 5")))

(define_constraint "C06"
  "Constant integer 6."
  (and (match_code "const_int")
       (match_test "ival == 6")))

(define_constraint "C07"
  "Constant integer 7."
  (and (match_code "const_int")
       (match_test "ival == 7")))

(define_constraint "C7c"
  "Constant integer the range 7 @dots{} 12."
  (and (match_code "const_int")
       (match_test "IN_RANGE (ival, 7, 12)")))

(define_constraint "C14"
  "Constant integer 14."
  (and (match_code "const_int")
       (match_test "ival == 14")))

(define_constraint "C15"
  "Constant integer 15."
  (and (match_code "const_int")
       (match_test "ival == 15")))

(define_constraint "C22"
  "Constant integer 22."
  (and (match_code "const_int")
       (match_test "ival == 22")))

(define_constraint "C23"
  "Constant integer 23."
  (and (match_code "const_int")
       (match_test "ival == 23")))

(define_constraint "C30"
  "Constant integer 30."
  (and (match_code "const_int")
       (match_test "ival == 30")))

(define_constraint "C31"
  "Constant integer 31."
  (and (match_code "const_int")
       (match_test "ival == 31")))

(define_constraint "Ca1"
  "Constant 1-byte integer that allows AND by means of CLT + BLD."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 1, 1<<7)")))

(define_constraint "Ca2"
  "Constant 2-byte integer that allows AND without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 2, (1<<0) | (1<<7) | (1<<8))")))

(define_constraint "Ca3"
  "Constant 3-byte integer that allows AND without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 3, (1<<0) | (1<<7) | (1<<8))")))

(define_constraint "Ca4"
  "Constant 4-byte integer that allows AND without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 4, (1<<0) | (1<<7) | (1<<8))")))

(define_constraint "Co1"
  "Constant 1-byte integer that allows OR by means of SET + BLD."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 1, 1<<1)")))

(define_constraint "Co2"
  "Constant 2-byte integer that allows OR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 2, (1<<0) | (1<<1) | (1<<8))")))

(define_constraint "Co3"
  "Constant 3-byte integer that allows OR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 3, (1<<0) | (1<<1) | (1<<8))")))

(define_constraint "Co4"
  "Constant 4-byte integer that allows OR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 4, (1<<0) | (1<<1) | (1<<8))")))

(define_constraint "Cb1"
  "Constant 1-byte integer that has exactly 1 bit set."
  (and (match_code "const_int")
       (match_test "single_one_operand (op, QImode)")))

(define_constraint "Cb2"
  "Constant 2-byte integer that has exactly 1 bit set."
  (and (match_code "const_int")
       (match_test "single_one_operand (op, HImode)")))

(define_constraint "Cb3"
  "Constant 3-byte integer that has exactly 1 bit set."
  (and (match_code "const_int")
       (match_test "single_one_operand (op, PSImode)")))

(define_constraint "Cb4"
  "Constant 4-byte integer that has exactly 1 bit set."
  (and (match_code "const_int")
       (match_test "single_one_operand (op, SImode)")))

(define_constraint "Cx2"
  "Constant 2-byte integer that allows XOR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 2, (1<<0) | (1<<8))")))

(define_constraint "Cx3"
  "Constant 3-byte integer that allows XOR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 3, (1<<0) | (1<<8))")))

(define_constraint "Cx4"
  "Constant 4-byte integer that allows XOR without clobber register."
  (and (match_code "const_int")
       (match_test "avr_popcount_each_byte (op, 4, (1<<0) | (1<<8))")))

(define_constraint "CX2"
  "Constant 2-byte integer that allows XOR without clobber register but requires a d-register."
  (and (match_code "const_int")
       (match_test "avr_xor_noclobber_dconst (op, 2)")))

(define_constraint "CX3"
  "Constant 3-byte integer that allows XOR without clobber register but requires a d-register."
  (and (match_code "const_int")
       (match_test "avr_xor_noclobber_dconst (op, 3)")))

(define_constraint "CX4"
  "Constant 4-byte integer that allows XOR without clobber register but requires a d-register."
  (and (match_code "const_int")
       (match_test "avr_xor_noclobber_dconst (op, 4)")))

(define_constraint "Csp"
  "Integer constant in the range -11 @dots{} 6."
  (and (match_code "const_int")
       (match_test "IN_RANGE (ival, -11, 6)")))

(define_constraint "Cxf"
  "32-bit integer constant where at least one nibble is 0xf."
  (and (match_code "const_int")
       (match_test "avr_has_nibble_0xf (op)")))

(define_constraint "C0f"
  "32-bit integer constant where no nibble equals 0xf."
  (and (match_code "const_int")
       (match_test "!avr_has_nibble_0xf (op)")))

(define_constraint "Cn8"
  "A negative constant integer in the range @minus{}255 @dots{} @minus{}1."
  (and (match_code "const_int")
       (match_test "IN_RANGE (ival, -255, -1)")))

(define_constraint "Cp8"
  "A constant integer or symbolic operand that is at least .p2align 8."
  (and (match_code "const_int,symbol_ref,const")
       (match_test "const_0mod256_operand (op, HImode)")))

(define_constraint "C2a"
  "A constant integer shift offset for a 2-byte ASHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (2, ival, ASHIFTRT)")))

(define_constraint "C2r"
  "A constant integer shift offset for a 2-byte LSHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (2, ival, LSHIFTRT)")))

(define_constraint "C2l"
  "A constant integer shift offset for a 2-byte ASHIFT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (2, ival, ASHIFT)")))

(define_constraint "C3a"
  "A constant integer shift offset for a 3-byte ASHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (3, ival, ASHIFTRT)")))

(define_constraint "C3r"
  "A constant integer shift offset for a 3-byte LSHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (3, ival, LSHIFTRT)")))

(define_constraint "C3l"
  "A constant integer shift offset for a 3-byte ASHIFT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (3, ival, ASHIFT)")))

(define_constraint "C4a"
  "A constant integer shift offset for a 4-byte ASHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (4, ival, ASHIFTRT)")))

(define_constraint "C4r"
  "A constant integer shift offset for a 4-byte LSHIFTRT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (4, ival, LSHIFTRT)")))

(define_constraint "C4l"
  "A constant integer shift offset for a 4-byte ASHIFT that's opt to being split."
  (and (match_code "const_int")
       (match_test "avr_split_shift_p (4, ival, ASHIFT)")))

(define_constraint "C4R"
  "A constant integer shift offset for a 4-byte LSHIFTRT that's a 3-operand insn independent of options."
  (and (match_code "const_int")
       (match_test "ival == 15 || IN_RANGE (ival, 25, 31)")))

(define_constraint "C4L"
  "A constant integer shift offset for a 4-byte ASHIFT that's a 3-operand insn independent of options."
  (and (match_code "const_int")
       (match_test "ival == 15 || IN_RANGE (ival, 25, 31)")))

;; CONST_FIXED is no element of 'n' so cook our own.
;; "i" or "s" would match but because the insn uses iterators that cover
;; INT_MODE, "i" or "s" is not always possible.

(define_constraint "Ynn"
  "Fixed-point constant known at compile time."
  (match_code "const_fixed"))

(define_constraint "Y00"
  "Fixed-point or integer constant with bit representation 0x0"
  (and (match_code "const_fixed,const_int")
       (match_test "op == CONST0_RTX (GET_MODE (op))")))

(define_constraint "Y01"
  "Fixed-point or integer constant with bit representation 0x1"
  (ior (and (match_code "const_fixed")
            (match_test "INTVAL (avr_to_int_mode (op)) == 1"))
       (match_test "satisfies_constraint_P (op)")))

(define_constraint "Ym1"
  "Fixed-point or integer constant with bit representation -0x1"
  (ior (and (match_code "const_fixed")
            (match_test "INTVAL (avr_to_int_mode (op)) == -1"))
       (match_test "satisfies_constraint_N (op)")))

(define_constraint "Y02"
  "Fixed-point or integer constant with bit representation 0x2"
  (ior (and (match_code "const_fixed")
            (match_test "INTVAL (avr_to_int_mode (op)) == 2"))
       (match_test "satisfies_constraint_K (op)")))

(define_constraint "Ym2"
  "Fixed-point or integer constant with bit representation -0x2"
  (ior (and (match_code "const_fixed")
            (match_test "INTVAL (avr_to_int_mode (op)) == -2"))
       (match_test "satisfies_constraint_Cm2 (op)")))

;; Constraint that's the empty set.  Useful with mode and code iterators.
(define_constraint "Yxx"
  "A constraints that is always false"
  (match_test "false"))

(define_constraint "Yx2"
  "Fixed-point or integer constant not in the range @minus{}2 @dots{} 2"
  (and (ior (match_code "const_int")
            (match_code "const_fixed"))
       (match_test "!IN_RANGE (INTVAL (avr_to_int_mode (op)), -2, 2)")))

;; Similar to "IJ" used with ADIW/SBIW, but for CONST_FIXED.

(define_constraint "YIJ"
  "Fixed-point constant from @minus{}0x003f to 0x003f."
  (and (match_code "const_fixed")
       (match_test "IN_RANGE (INTVAL (avr_to_int_mode (op)), -63, 63)")))

;; Similar to "M", but for CONST_FIXED.

(define_constraint "YMM"
  "Fixed-point constant in the range 0 @dots{} 0xff when viewed as CONST_INT."
  (and (match_code "const_fixed")
       (match_test "IN_RANGE (INTVAL (avr_to_int_mode (op)), 0, 0xff)")))

(define_constraint "Yil"
  "Memory in the lower half of the I/O space."
  (and (match_code "mem")
       (match_test "low_io_address_operand (XEXP (op, 0), Pmode)")))
