/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "emit-rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"
#include "insn-recog.h"


/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.
   The third parameter to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.cc) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/




int
pattern1 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
    {
    case AND:
      return pattern0 (x1, pnum_clobbers); /* [-1, 0] */

    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return 1;

    default:
      return -1;
    }
}

int
pattern16 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern25 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern27 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode)
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern36 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 8
      || GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 9
      || GET_MODE (x5) != E_XFmode)
    return -1;
  x6 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 10
      || GET_MODE (x7) != E_XFmode)
    return -1;
  x8 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 11
      || GET_MODE (x9) != E_XFmode)
    return -1;
  x10 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 12
      || GET_MODE (x11) != E_XFmode)
    return -1;
  x12 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x12, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 13
      || GET_MODE (x13) != E_XFmode)
    return -1;
  x14 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != REG
      || REGNO (x15) != 14
      || GET_MODE (x15) != E_XFmode)
    return -1;
  x16 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 15
      || GET_MODE (x17) != E_XFmode)
    return -1;
  return 0;
}

int
pattern47 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !general_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !general_operand (operands[2], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !x86_64_general_operand (operands[2], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern56 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern59 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], i1))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern65 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern64 (x3, 
E_V8QImode); /* [-1, 0] */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_operand (operands[1], E_V2SImode)
          || !register_operand (operands[2], E_V2SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern76 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case STRICT_LOW_PART:
      return pattern72 (x1, pnum_clobbers); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern73 (x2, pnum_clobbers) != 0)
            return -1;
          return 2;

        case E_HImode:
          if (pattern74 (x2, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V2SFmode:
          if (pattern7 (x2, 
E_V2SFmode) != 0)
            return -1;
          return 4;

        case E_V2BFmode:
          if (pattern7 (x2, 
E_V2BFmode) != 0)
            return -1;
          return 5;

        case E_V4BFmode:
          if (pattern7 (x2, 
E_V4BFmode) != 0)
            return -1;
          return 6;

        case E_V2HFmode:
          if (pattern7 (x2, 
E_V2HFmode) != 0)
            return -1;
          return 7;

        case E_V4HFmode:
          if (pattern7 (x2, 
E_V4HFmode) != 0)
            return -1;
          return 8;

        case E_V8QImode:
          if (pattern8 (x2, 
E_V8QImode) != 0)
            return -1;
          return 9;

        case E_V4HImode:
          if (pattern8 (x2, 
E_V4HImode) != 0)
            return -1;
          return 10;

        case E_V2SImode:
          if (pattern8 (x2, 
E_V2SImode) != 0)
            return -1;
          return 11;

        case E_V4QImode:
          if (pattern75 (x2, pnum_clobbers, 
E_V4QImode) != 0)
            return -1;
          return 12;

        case E_V2QImode:
          if (pattern75 (x2, pnum_clobbers, 
E_V2QImode) != 0)
            return -1;
          return 13;

        case E_V2HImode:
          if (pattern75 (x2, pnum_clobbers, 
E_V2HImode) != 0)
            return -1;
          return 14;

        case E_BFmode:
          if (pattern7 (x2, 
E_BFmode) != 0)
            return -1;
          return 15;

        case E_HFmode:
          if (pattern7 (x2, 
E_HFmode) != 0)
            return -1;
          return 16;

        case E_SFmode:
          if (pattern7 (x2, 
E_SFmode) != 0)
            return -1;
          return 17;

        case E_DFmode:
          if (pattern7 (x2, 
E_DFmode) != 0)
            return -1;
          return 18;

        case E_TFmode:
          if (pattern25 (x2, 
E_TFmode) != 0)
            return -1;
          return 19;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern110 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern117 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern121 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern132 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern131 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern131 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern131 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern143 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern128 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern128 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern129 (x1, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      if (pattern128 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern128 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern128 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V64QImode:
      if (pattern128 (x1, 
E_V64QImode, 
E_DImode) != 0)
        return -1;
      return 6;

    case E_V16QImode:
      if (pattern128 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 7;

    case E_V32QImode:
      if (pattern128 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 8;

    case E_V32HImode:
      if (pattern128 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 9;

    case E_V16HImode:
      if (pattern128 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (pattern129 (x1, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern155 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern150 (x3, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern150 (x3, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern150 (x3, 
E_V16QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern161 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern166 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern172 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern150 (x3, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern150 (x3, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern150 (x3, 
E_V16QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern182 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern186 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x8 = XVECEXP (x3, 0, 4);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return -1;
  x9 = XVECEXP (x3, 0, 5);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
    return -1;
  x10 = XVECEXP (x3, 0, 6);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
    return -1;
  x11 = XVECEXP (x3, 0, 7);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
    return -1;
  x12 = XVECEXP (x3, 0, 8);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x13 = XVECEXP (x3, 0, 9);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x14 = XVECEXP (x3, 0, 10);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x15 = XVECEXP (x3, 0, 11);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x16 = XVECEXP (x3, 0, 12);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
    return -1;
  x17 = XVECEXP (x3, 0, 13);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
    return -1;
  x18 = XVECEXP (x3, 0, 14);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
    return -1;
  x19 = XVECEXP (x3, 0, 15);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
    return -1;
  x20 = XEXP (x1, 1);
  x21 = XEXP (x20, 1);
  if (XVECLEN (x21, 0) != 16)
    return -1;
  x22 = XVECEXP (x21, 0, 0);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x21, 0, 1);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x24 = XVECEXP (x21, 0, 2);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x25 = XVECEXP (x21, 0, 3);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x26 = XVECEXP (x21, 0, 4);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
    return -1;
  x27 = XVECEXP (x21, 0, 5);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
    return -1;
  x28 = XVECEXP (x21, 0, 6);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
    return -1;
  x29 = XVECEXP (x21, 0, 7);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
    return -1;
  x30 = XVECEXP (x21, 0, 8);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x31 = XVECEXP (x21, 0, 9);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x32 = XVECEXP (x21, 0, 10);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x33 = XVECEXP (x21, 0, 11);
  if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  x34 = XVECEXP (x21, 0, 12);
  if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
    return -1;
  x35 = XVECEXP (x21, 0, 13);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
    return -1;
  x36 = XVECEXP (x21, 0, 14);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
    return -1;
  x37 = XVECEXP (x21, 0, 15);
  if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
      || pattern185 (x1, 
E_V32HImode, 
E_V16HImode) != 0)
    return -1;
  return 0;
}

int
pattern206 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], E_QImode))
    return -1;
  return pattern204 (x1); /* [-1, 3] */
}

int
pattern210 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern214 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V4SFmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_DUPLICATE
      || GET_MODE (x4) != E_V4SFmode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != FLOAT
      || GET_MODE (x5) != E_V2SFmode)
    return -1;
  x6 = XEXP (x3, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_V4SFmode))
    return -1;
  x9 = XEXP (x5, 0);
  operands[2] = x9;
  if (!register_mmxmem_operand (operands[2], E_V2SImode))
    return -1;
  x10 = XEXP (x3, 1);
  operands[1] = x10;
  if (!register_operand (operands[1], E_V4SFmode))
    return -1;
  x11 = XEXP (x7, 0);
  operands[3] = x11;
  if (!scratch_operand (operands[3], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern228 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PLUS)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  return 0;
}

int
pattern236 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern235 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern235 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern235 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern235 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern247 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern253 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x1, 0);
      if (GET_CODE (x8) != ZERO_EXTRACT)
        return -1;
      x9 = XEXP (x8, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x10 = XEXP (x8, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      if (!int248_register_operand (operands[0], E_VOIDmode))
        return -1;
      x12 = XEXP (x5, 0);
      operands[1] = x12;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      x13 = XEXP (x3, 1);
      operands[2] = x13;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      return pattern252 (x1); /* [-1, 2] */

    default:
      return -1;
    }
}

int
pattern275 (rtx x1, machine_mode i1, machine_mode i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3]
      || !register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x5 = XEXP (x1, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern284 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern283 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern283 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern290 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern298 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern161 (x1, 
E_DImode, 
E_V64QImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!register_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 1;

        case E_V32HImode:
          if (!register_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern312 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL)
    return -1;
  x6 = XEXP (x2, 1);
  if (GET_CODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != VEC_SELECT)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PARALLEL)
    return -1;
  x9 = XEXP (x4, 0);
  operands[1] = x9;
  x10 = XEXP (x7, 0);
  operands[2] = x10;
  x11 = XEXP (x1, 1);
  operands[3] = x11;
  x12 = XEXP (x1, 2);
  operands[4] = x12;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 8:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XVECEXP (x5, 0, 2);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x16 = XVECEXP (x5, 0, 3);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x17 = XVECEXP (x5, 0, 4);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x18 = XVECEXP (x5, 0, 5);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x19 = XVECEXP (x5, 0, 6);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x20 = XVECEXP (x5, 0, 7);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x8, 0) != 8)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x23 = XVECEXP (x8, 0, 2);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x24 = XVECEXP (x8, 0, 3);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x25 = XVECEXP (x8, 0, 4);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x26 = XVECEXP (x8, 0, 5);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x27 = XVECEXP (x8, 0, 6);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x28 = XVECEXP (x8, 0, 7);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || pattern311 (x1, 
E_V8DImode, 
E_V16SImode, 
E_V8SImode) != 0)
        return -1;
      return 0;

    case 4:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XVECEXP (x5, 0, 2);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x16 = XVECEXP (x5, 0, 3);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x8, 0) != 4)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x23 = XVECEXP (x8, 0, 2);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x24 = XVECEXP (x8, 0, 3);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || pattern311 (x1, 
E_V4DImode, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case 2:
      x13 = XVECEXP (x5, 0, 0);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XVECEXP (x5, 0, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || XVECLEN (x8, 0) != 2)
        return -1;
      x21 = XVECEXP (x8, 0, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XVECEXP (x8, 0, 1);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || GET_MODE (x3) != E_V2DImode
          || GET_MODE (x4) != E_V2SImode
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x6) != E_V2DImode
          || GET_MODE (x7) != E_V2SImode
          || !vector_operand (operands[2], E_V4SImode)
          || !nonimm_or_0_operand (operands[3], E_V2DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern348 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern347 (x1); /* [-1, 5] */
}

int
pattern352 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[4], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern356 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return -1;
  x6 = XEXP (x4, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x2, 0);
  operands[0] = x9;
  x10 = XEXP (x3, 1);
  operands[1] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return 0;

    case E_HImode:
      return 1;

    case E_SImode:
      return 2;

    case E_DImode:
      return 3;

    default:
      return -1;
    }
}

int
pattern365 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return -1;
  x6 = XEXP (x3, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  operands[2] = x8;
  x9 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x9))
    {
    case SET:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      return 0;

    case CLOBBER:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      switch (GET_MODE (x6))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_HImode))
            return -1;
          return 2;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_1_to_31_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_SImode))
            return -1;
          return 3;

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !const_1_to_63_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_DImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern389 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 32)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern388 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern388 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern397 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const248_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern396 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern396 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern406 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  return pattern405 (x6); /* [-1, 1] */
}

int
pattern411 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!general_gr_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 3)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 92)
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x3, 0);
  operands[0] = x9;
  x10 = XVECEXP (x4, 0, 0);
  operands[1] = x10;
  x11 = XEXP (x5, 0);
  operands[2] = x11;
  if (!general_reg_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode)
          || GET_MODE (x4) != E_SImode
          || !memory_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !memory_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern434 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern446 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern450 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  operands[2] = x7;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern449 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern449 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern463 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern462 (x1, 
E_DImode, 
E_V64QImode, 
E_V32HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern462 (x1, 
E_SImode, 
E_V32QImode, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern462 (x1, 
E_HImode, 
E_V16QImode, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern474 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern479 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern483 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern489 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[3] = x5;
  if (!const48_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern487 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern487 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16SFmode:
      if (pattern487 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern487 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern487 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern487 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern496 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i3))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1
      || !nonimm_or_0_operand (operands[2], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern502 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != CONST_VECTOR
      || XVECLEN (x4, 0) != 2
      || GET_MODE (x4) != E_V2SImode)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V4SImode)
      || GET_MODE (x1) != E_V4SImode
      || GET_MODE (x2) != E_V2SImode)
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return pattern501 (x2); /* [-1, 1] */
}

int
pattern508 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST_VECTOR)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  switch (GET_CODE (x6))
    {
    case VEC_SELECT:
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      x9 = XEXP (x3, 2);
      operands[3] = x9;
      switch (XVECLEN (x7, 0))
        {
        case 2:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 14:
              if (GET_MODE (x2) != E_V14QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x24 = XVECEXP (x2, 0, 12);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XVECEXP (x2, 0, 13);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern503 (x1, 
E_V16QImode, 
E_V2QImode) != 0)
                return -1;
              return 0;

            case 6:
              if (GET_MODE (x2) != E_V6HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern503 (x1, 
E_V8HImode, 
E_V2HImode) != 0)
                return -1;
              return 1;

            case 2:
              if (GET_MODE (x2) != E_V2SImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern503 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
                return -1;
              return 2;

            default:
              return -1;
            }

        case 4:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x26 = XVECEXP (x7, 0, 2);
          if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x27 = XVECEXP (x7, 0, 3);
          if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 12:
              if (GET_MODE (x2) != E_V12QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern504 (x1, 
E_V16QImode, 
E_V4QImode);
              if (res >= 0)
                return res + 3; /* [3, 4] */
              return -1;

            case 4:
              if (GET_MODE (x2) != E_V4HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern504 (x1, 
E_V8HImode, 
E_V4HImode);
              if (res >= 0)
                return res + 5; /* [5, 6] */
              return -1;

            default:
              return -1;
            }

        case 8:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x26 = XVECEXP (x7, 0, 2);
          if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x27 = XVECEXP (x7, 0, 3);
          if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x28 = XVECEXP (x7, 0, 4);
          if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x29 = XVECEXP (x7, 0, 5);
          if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x30 = XVECEXP (x7, 0, 6);
          if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x31 = XVECEXP (x7, 0, 7);
          if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || XVECLEN (x2, 0) != 8
              || GET_MODE (x2) != E_V8QImode)
            return -1;
          x12 = XVECEXP (x2, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x2, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x2, 0, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XVECEXP (x2, 0, 3);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XVECEXP (x2, 0, 4);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XVECEXP (x2, 0, 5);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x2, 0, 6);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x2, 0, 7);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x1) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V8QImode
              || GET_MODE (x6) != E_V8QImode
              || !nonimm_or_0_operand (operands[2], E_V16QImode))
            return -1;
          res = pattern505 ();
          if (res >= 0)
            return res + 7; /* [7, 9] */
          return -1;

        default:
          return -1;
        }

    case CONST_VECTOR:
      x9 = XEXP (x3, 2);
      operands[2] = x9;
      switch (XVECLEN (x6, 0))
        {
        case 2:
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 14:
              if (GET_MODE (x2) != E_V14QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x24 = XVECEXP (x2, 0, 12);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XVECEXP (x2, 0, 13);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern506 (x1, 
E_V2QImode, 
E_V16QImode) != 0)
                return -1;
              return 10;

            case 6:
              if (GET_MODE (x2) != E_V6HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern506 (x1, 
E_V2HImode, 
E_V8HImode) != 0)
                return -1;
              return 11;

            case 2:
              if (GET_MODE (x2) != E_V2SImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || pattern506 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
                return -1;
              return 12;

            default:
              return -1;
            }

        case 4:
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x34 = XVECEXP (x6, 0, 2);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x35 = XVECEXP (x6, 0, 3);
          if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (XVECLEN (x2, 0))
            {
            case 12:
              if (GET_MODE (x2) != E_V12QImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x16 = XVECEXP (x2, 0, 4);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x17 = XVECEXP (x2, 0, 5);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x18 = XVECEXP (x2, 0, 6);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x19 = XVECEXP (x2, 0, 7);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x20 = XVECEXP (x2, 0, 8);
              if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x21 = XVECEXP (x2, 0, 9);
              if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x22 = XVECEXP (x2, 0, 10);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x23 = XVECEXP (x2, 0, 11);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern507 (x1, 
E_V4QImode, 
E_V16QImode);
              if (res >= 0)
                return res + 13; /* [13, 14] */
              return -1;

            case 4:
              if (GET_MODE (x2) != E_V4HImode)
                return -1;
              x12 = XVECEXP (x2, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x2, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x14 = XVECEXP (x2, 0, 2);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x2, 0, 3);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              res = pattern507 (x1, 
E_V4HImode, 
E_V8HImode);
              if (res >= 0)
                return res + 15; /* [15, 16] */
              return -1;

            default:
              return -1;
            }

        case 8:
          if (GET_MODE (x6) != E_V8QImode)
            return -1;
          x32 = XVECEXP (x6, 0, 0);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x33 = XVECEXP (x6, 0, 1);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x34 = XVECEXP (x6, 0, 2);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x35 = XVECEXP (x6, 0, 3);
          if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x36 = XVECEXP (x6, 0, 4);
          if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x37 = XVECEXP (x6, 0, 5);
          if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x38 = XVECEXP (x6, 0, 6);
          if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x39 = XVECEXP (x6, 0, 7);
          if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || XVECLEN (x2, 0) != 8
              || GET_MODE (x2) != E_V8QImode)
            return -1;
          x12 = XVECEXP (x2, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x2, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x2, 0, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XVECEXP (x2, 0, 3);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XVECEXP (x2, 0, 4);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XVECEXP (x2, 0, 5);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x2, 0, 6);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x2, 0, 7);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x1) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V8QImode)
            return -1;
          res = pattern505 ();
          if (res >= 0)
            return res + 17; /* [17, 19] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern728 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!plusminuslogic_operator (x3, i1))
    return -1;
  operands[3] = x3;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  if (!nonmemory_operand (operands[2], i1)
      || pattern727 (x2) != 0)
    return -1;
  return 0;
}

int
pattern738 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern743 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern750 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  operands[3] = x5;
  if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern749 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern749 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern762 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern767 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern774 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern780 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x4, 1);
  operands[3] = x8;
  x9 = XEXP (x4, 2);
  operands[4] = x9;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  operands[5] = x10;
  if (!const48_operand (operands[5], E_SImode))
    return -1;
  return pattern778 (x1); /* [-1, 2] */
}

int
pattern796 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  return 0;
}

int
pattern803 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[1], i1)
      || !const0_operand (operands[2], i1)
      || !pmovzx_parallel (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern812 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern818 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      x2 = XEXP (x1, 0);
      if (GET_CODE (x2) != REG
          || REGNO (x2) != 17
          || GET_MODE (x2) != E_CCmode)
        return -1;
      return 0;

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 38)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern823 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != USE
      || !register_operand (operands[0], E_XFmode)
      || !register_operand (operands[1], E_XFmode))
    return -1;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!memory_operand (operands[2], E_HImode))
    return -1;
  x7 = XEXP (x5, 0);
  operands[3] = x7;
  if (!memory_operand (operands[3], E_HImode))
    return -1;
  return 0;
}

int
pattern830 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !x86_64_nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern834 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V2SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern696 (x5); /* [-1, 0] */

    case E_V2BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2BFmode) != 0)
        return -1;
      return 1;

    case E_V4BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4BFmode) != 0)
        return -1;
      return 2;

    case E_V2HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2HFmode) != 0)
        return -1;
      return 3;

    case E_V4HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4HFmode) != 0)
        return -1;
      return 4;

    case E_V32BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32BFmode) != 0)
        return -1;
      return 5;

    case E_V16BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16BFmode) != 0)
        return -1;
      return 6;

    case E_V8BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8BFmode) != 0)
        return -1;
      return 7;

    case E_V32HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32HFmode) != 0)
        return -1;
      return 8;

    case E_V16HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16HFmode) != 0)
        return -1;
      return 9;

    case E_V8HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8HFmode) != 0)
        return -1;
      return 10;

    case E_V16SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16SFmode) != 0)
        return -1;
      return 11;

    case E_V8SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8SFmode) != 0)
        return -1;
      return 12;

    case E_V4SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4SFmode) != 0)
        return -1;
      return 13;

    case E_V8DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8DFmode) != 0)
        return -1;
      return 14;

    case E_V4DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4DFmode) != 0)
        return -1;
      return 15;

    case E_V2DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V2DFmode) != 0)
        return -1;
      return 16;

    default:
      return -1;
    }
}

int
pattern870 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_DImode:
      if (!register_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_SImode:
      res = pattern869 ();
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_HImode:
      res = pattern740 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case E_QImode:
      res = pattern741 ();
      if (res >= 0)
        return res + 6; /* [6, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern881 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern858 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern858 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern890 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern900 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[3] = x2;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  operands[4] = x3;
  if (!const_0_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  operands[5] = x4;
  if (!const_0_to_3_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern908 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern915 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern920 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != CONST_VECTOR
      || XVECLEN (x4, 0) != 2
      || GET_MODE (x4) != E_V2SImode)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V4SImode)
      || GET_MODE (x1) != E_V4SImode
      || GET_MODE (x2) != E_V2SImode
      || !nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return pattern501 (x2); /* [-1, 1] */
}

int
pattern926 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern931 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  return 0;
}

int
pattern951 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x7))
    {
    case SET:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      return 0;

    case CLOBBER:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      res = pattern950 (x5);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern960 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i2))
    return -1;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_reg_operand (operands[3], i2))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != MULT)
        return -1;
      x7 = XEXP (x5, 0);
      operands[4] = x7;
      x8 = XEXP (x6, 0);
      switch (GET_CODE (x8))
        {
        case ZERO_EXTEND:
          if (GET_MODE (x8) != i1)
            return -1;
          x9 = XEXP (x6, 1);
          if (GET_CODE (x9) != ZERO_EXTEND
              || GET_MODE (x9) != i1)
            return -1;
          x10 = XVECEXP (x4, 0, 1);
          if (GET_CODE (x10) != CLOBBER)
            return -1;
          x11 = XEXP (x10, 0);
          if (GET_CODE (x11) != REG
              || REGNO (x11) != 17
              || GET_MODE (x11) != E_CCmode
              || !general_reg_operand (operands[4], i1)
              || GET_MODE (x6) != i1)
            return -1;
          x12 = XEXP (x8, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return -1;
          x13 = XEXP (x9, 0);
          if (!rtx_equal_p (x13, operands[0]))
            return -1;
          return 0;

        case REG:
          if (!rtx_equal_p (x8, operands[2]))
            return -1;
          x10 = XVECEXP (x4, 0, 1);
          if (GET_CODE (x10) != SET)
            return -1;
          x14 = XEXP (x10, 1);
          if (GET_CODE (x14) != UMUL_HIGHPART
              || GET_MODE (x14) != i2
              || !general_reg_operand (operands[4], i2)
              || GET_MODE (x6) != i2)
            return -1;
          x11 = XEXP (x10, 0);
          operands[5] = x11;
          if (!general_reg_operand (operands[5], i2))
            return -1;
          x9 = XEXP (x6, 1);
          if (!rtx_equal_p (x9, operands[0]))
            return -1;
          x15 = XEXP (x14, 0);
          if (!rtx_equal_p (x15, operands[2]))
            return -1;
          x16 = XEXP (x14, 1);
          if (!rtx_equal_p (x16, operands[0]))
            return -1;
          return 1;

        default:
          return -1;
        }

    case 3:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x10 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x10) != CLOBBER)
        return -1;
      x17 = XVECEXP (x4, 0, 2);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      x7 = XEXP (x5, 0);
      operands[4] = x7;
      return 2;

    default:
      return -1;
    }
}

int
pattern985 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V4HImode:
          if (!register_operand (operands[1], E_V4HImode)
              || !const_0_to_3_operand (operands[2], E_SImode))
            return -1;
          return 0;

        case E_V2HImode:
          if (!register_operand (operands[1], E_V2HImode)
              || !const_0_to_1_operand (operands[2], E_SImode))
            return -1;
          return 1;

        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !const_0_to_7_operand (operands[2], E_SImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_QImode:
      res = pattern984 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern995 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!vector_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8DFmode:
      if (!vector_operand (operands[1], E_V8DFmode))
        return -1;
      return 1;

    case E_V8SFmode:
      if (!vector_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1007 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i2)
      || !const0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1015 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1025 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1031 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1040 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_DImode:
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      return pattern1038 (x6); /* [-1, 0] */

    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_HImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 1;

        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 2;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 3;

        default:
          return -1;
        }

    case E_SImode:
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 4;

        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_QImode:
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 6;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 7;

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 8;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 9;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 10;

        case E_V2DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
            return -1;
          return 11;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1075 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1083 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (!nonimmediate_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[2], E_V16HFmode))
            return -1;
          return 1;

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[2], E_V16SFmode))
            return -1;
          return 2;

        case E_V16QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 3;

        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    case E_QImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 5;

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 6;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 7;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 8;

        case E_V2DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
            return -1;
          return 9;

        case E_V8HFmode:
          if (!nonimmediate_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[2], E_V8HFmode))
            return -1;
          return 10;

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[2], E_V8SFmode))
            return -1;
          return 11;

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[2], E_V4SFmode))
            return -1;
          return 12;

        case E_V8DFmode:
          if (!nonimmediate_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[2], E_V8DFmode))
            return -1;
          return 13;

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[2], E_V4DFmode))
            return -1;
          return 14;

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[2], E_V2DFmode))
            return -1;
          return 15;

        case E_V8HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 16;

        default:
          return -1;
        }

    case E_SImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V32HFmode:
          if (!nonimmediate_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[2], E_V32HFmode))
            return -1;
          return 17;

        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !nonimmediate_operand (operands[2], E_V32QImode))
            return -1;
          return 18;

        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V32HImode)
              || !nonimmediate_operand (operands[2], E_V32HImode))
            return -1;
          return 19;

        default:
          return -1;
        }

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern1137 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1145 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (!rtx_equal_p (x5, operands[2]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      return pattern1144 (x1, 
E_V16QImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern1144 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern1144 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1144 (x1, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1157 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  operands[3] = x5;
  if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XEXP (x1, 1);
  operands[2] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern1155 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1155 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1156 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1156 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1175 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1180 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != STRICT_LOW_PART)
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  return pattern374 (x4); /* [-1, 1] */
}

int
pattern1187 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1))
    return -1;
  x4 = XEXP (x1, 1);
  operands[4] = x4;
  if (!regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1196 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_gr_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 40
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XVECEXP (x3, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCCmode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != NEG
      || GET_MODE (x7) != i1)
    return -1;
  x8 = XVECEXP (x3, 0, 0);
  operands[2] = x8;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x7, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = PATTERN (peep2_next_insn (2));
  return pattern1195 (x11, 
i1); /* [-1, 0] */
}

int
pattern1209 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1217 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1223 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      return 1;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1233 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1232 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1232 (x1, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1237 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  switch (GET_MODE (x6))
    {
    case E_SImode:
      x7 = XEXP (x6, 0);
      if (GET_MODE (x7) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !scratch_operand (operands[0], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      x7 = XEXP (x6, 0);
      if (GET_MODE (x7) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode)
          || !scratch_operand (operands[0], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1244 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1243 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1243 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1252 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode))
            return -1;
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) != E_DImode)
            return -1;
          return 0;

        case E_TImode:
          x3 = XEXP (x1, 1);
          if (pattern1250 (x3, 
E_TImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      res = pattern1251 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1264 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1272 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1280 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i3)
      || !nonimmediate_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1289 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_all_ones_operand (operands[1], i2)
      || !const0_operand (operands[2], i2)
      || !register_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1298 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1309 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern1315 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XEXP (x2, 1);
  x9 = XEXP (x8, 0);
  x10 = XEXP (x9, 1);
  if (XVECLEN (x10, 0) != 2)
    return -1;
  x11 = XVECEXP (x10, 0, 0);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x10, 0, 1);
  if (GET_CODE (x12) != CONST_INT
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2DImode
      || GET_MODE (x3) != E_V2DImode
      || GET_MODE (x4) != E_V2SImode
      || !nonimmediate_operand (operands[1], E_V4SImode))
    return -1;
  return 0;
}

int
pattern1327 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1333 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND)
    return -1;
  return pattern699 (x1); /* [-1, 1] */
}

int
pattern1341 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_QImode:
      if (!general_reg_operand (operands[1], E_QImode)
          || !nonimmediate_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!general_reg_operand (operands[1], E_HImode)
          || !nonimmediate_operand (operands[2], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1348 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x2, 1);
  operands[5] = x5;
  x6 = XEXP (x4, 1);
  operands[6] = x6;
  x7 = XEXP (x4, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  return pattern1347 (x8, 
i1); /* [-1, 0] */
}

int
pattern1358 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[4], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1366 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || !vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1372 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1378 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!bcst_vector_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !bcst_vector_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1387 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1396 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[4] = x4;
  x5 = XEXP (x3, 2);
  operands[5] = x5;
  if (!register_operand (operands[5], E_QImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  operands[6] = x6;
  if (!const48_operand (operands[6], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1395 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1395 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1395 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1410 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1420 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  operands[3] = x5;
  if (!register_operand (operands[3], E_XFmode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x8 = XEXP (x6, 1);
  x9 = XVECEXP (x8, 0, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XVECEXP (x8, 0, 1);
  if (!rtx_equal_p (x10, operands[3]))
    return -1;
  return 0;
}

int
pattern1434 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return pattern196 (x1); /* [-1, 1] */
}

int
pattern1442 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case PLUS:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != ASHIFT)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
        return -1;
      x6 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x6) != SET)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != MEM
          || GET_MODE (x7) != E_BLKmode)
        return -1;
      x8 = XEXP (x6, 0);
      if (GET_CODE (x8) != MEM
          || GET_MODE (x8) != E_BLKmode)
        return -1;
      x9 = XVECEXP (x1, 0, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      x11 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x11, 1);
      x13 = XEXP (x12, 0);
      x14 = XEXP (x13, 0);
      operands[5] = x14;
      x15 = XEXP (x2, 0);
      operands[1] = x15;
      x16 = XEXP (x3, 1);
      operands[4] = x16;
      x17 = XEXP (x4, 0);
      if (!rtx_equal_p (x17, operands[5]))
        return -1;
      x18 = XEXP (x7, 0);
      if (!rtx_equal_p (x18, operands[4]))
        return -1;
      x19 = XEXP (x8, 0);
      if (!rtx_equal_p (x19, operands[3]))
        return -1;
      x20 = XVECEXP (x1, 0, 4);
      x21 = XEXP (x20, 0);
      if (!rtx_equal_p (x21, operands[5]))
        return -1;
      switch (GET_MODE (operands[2]))
        {
        case E_SImode:
          return pattern1440 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern1440 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 0L)
        return -1;
      x15 = XEXP (x2, 0);
      if (GET_CODE (x15) != MEM
          || GET_MODE (x15) != E_BLKmode)
        return -1;
      x6 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x6) != USE)
        return -1;
      x9 = XVECEXP (x1, 0, 0);
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      x11 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x11, 1);
      x13 = XEXP (x12, 0);
      x14 = XEXP (x13, 0);
      operands[4] = x14;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      if (!register_operand (operands[2], i2))
        return -1;
      x22 = XEXP (x15, 0);
      if (!rtx_equal_p (x22, operands[3]))
        return -1;
      x20 = XVECEXP (x1, 0, 4);
      x21 = XEXP (x20, 0);
      if (!rtx_equal_p (x21, operands[4]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1441 (x12, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern1441 (x12, 
E_DImode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1485 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1493 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  return 0;
}

int
pattern1503 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[2] = x8;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x9 = XEXP (x7, 1);
  operands[3] = x9;
  if (!nonimmediate_operand (operands[3], E_SImode))
    return -1;
  x10 = XEXP (x2, 0);
  operands[0] = x10;
  return pattern1501 (x1); /* [-1, 1] */
}

int
pattern1516 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1524 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i2
      || !vector_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_MODE (x7) != i2
      || !vector_operand (operands[2], i1)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1537 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1544 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1554 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x1, 1);
  x10 = XEXP (x9, 0);
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  x12 = XEXP (x10, 1);
  if (GET_MODE (x12) != i1)
    return -1;
  x13 = XEXP (x9, 1);
  x14 = XEXP (x13, 0);
  if (GET_MODE (x14) != i1)
    return -1;
  x15 = XEXP (x13, 1);
  if (GET_MODE (x15) != i1)
    return -1;
  return 0;
}

int
pattern1568 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1577 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  operands[3] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1576 (x1, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern1576 (x1, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern1576 (x1, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1585 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[2], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1593 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x3, 2);
  return pattern1592 (x4, 
i2, 
i1); /* [-1, 0] */
}

int
pattern1602 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      return pattern1601 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1601 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1614 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V4SImode:
      if (!register_operand (operands[2], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1622 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1630 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[4], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1640 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_4_to_7_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !nonimm_or_0_operand (operands[7], i1))
    return -1;
  return 0;
}

int
pattern1651 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1663 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !x86_64_hilo_general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1670 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1679 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_0_to_63_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern1692 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 3);
  operands[4] = x4;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x2, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[2]))
    return -1;
  return 0;
}

int
pattern1698 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[5], i3))
    return -1;
  return 0;
}

int
pattern1708 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[2], E_VOIDmode)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || !const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_0_to_7_operand (operands[7], E_VOIDmode)
      || !const_0_to_7_operand (operands[8], E_VOIDmode)
      || !const_0_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1719 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[2], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1727 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  operands[3] = x5;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!nonimmediate_operand (operands[4], E_V16QImode))
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  operands[5] = x7;
  if (!register_operand (operands[5], E_SImode))
    return -1;
  x8 = XVECEXP (x3, 0, 4);
  operands[6] = x8;
  if (!const_0_to_255_operand (operands[6], E_SImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 0);
  operands[1] = x10;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  x11 = XEXP (x9, 1);
  x12 = XVECEXP (x11, 0, 0);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  x14 = XVECEXP (x11, 0, 2);
  if (!rtx_equal_p (x14, operands[4]))
    return -1;
  x15 = XVECEXP (x11, 0, 3);
  if (!rtx_equal_p (x15, operands[5]))
    return -1;
  x16 = XVECEXP (x11, 0, 4);
  if (!rtx_equal_p (x16, operands[6]))
    return -1;
  x17 = XVECEXP (x1, 0, 2);
  x18 = XEXP (x17, 1);
  x19 = XVECEXP (x18, 0, 0);
  if (!rtx_equal_p (x19, operands[2]))
    return -1;
  x20 = XVECEXP (x18, 0, 1);
  if (!rtx_equal_p (x20, operands[3]))
    return -1;
  x21 = XVECEXP (x18, 0, 2);
  if (!rtx_equal_p (x21, operands[4]))
    return -1;
  x22 = XVECEXP (x18, 0, 3);
  if (!rtx_equal_p (x22, operands[5]))
    return -1;
  x23 = XVECEXP (x18, 0, 4);
  if (!rtx_equal_p (x23, operands[6]))
    return -1;
  return 0;
}

int
pattern1755 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || !const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_8_to_15_operand (operands[7], E_VOIDmode)
      || !const_8_to_15_operand (operands[8], E_VOIDmode)
      || !const_8_to_15_operand (operands[9], E_VOIDmode)
      || !const_8_to_15_operand (operands[10], E_VOIDmode)
      || !nonimm_or_0_operand (operands[11], i1))
    return -1;
  return 0;
}

int
pattern1770 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V16SImode:
      return pattern1768 (
E_HImode, 
E_V16SFmode, 
E_V16SImode); /* [-1, 0] */

    case E_V8DImode:
      if (pattern1768 (
E_QImode, 
E_V8SFmode, 
E_V8DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1778 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1784 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 12);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 13);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 14);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 15);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x6 = XVECEXP (x1, 0, 16);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XVECEXP (x1, 0, 17);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x8 = XVECEXP (x1, 0, 18);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x9 = XVECEXP (x1, 0, 19);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  return 0;
}

int
pattern1798 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1807 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[2], E_VOIDmode)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || !const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_0_to_7_operand (operands[7], E_VOIDmode)
      || !const_0_to_7_operand (operands[8], E_VOIDmode)
      || !const_0_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1815 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53, x54, x55, x56, x57;
  rtx x58, x59, x60, x61, x62, x63, x64, x65;
  rtx x66, x67, x68, x69, x70, x71, x72, x73;
  rtx x74, x75, x76, x77, x78, x79;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != E_SFmode)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x4, 1);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != E_SFmode)
    return -1;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return -1;
  x10 = XVECEXP (x9, 0, 0);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XEXP (x3, 1);
  if (GET_CODE (x11) != i1)
    return -1;
  x12 = XEXP (x11, 0);
  if (GET_CODE (x12) != VEC_SELECT
      || GET_MODE (x12) != E_SFmode)
    return -1;
  x13 = XEXP (x12, 1);
  if (GET_CODE (x13) != PARALLEL
      || XVECLEN (x13, 0) != 1)
    return -1;
  x14 = XVECEXP (x13, 0, 0);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x15 = XEXP (x11, 1);
  if (GET_CODE (x15) != VEC_SELECT
      || GET_MODE (x15) != E_SFmode)
    return -1;
  x16 = XEXP (x15, 1);
  if (GET_CODE (x16) != PARALLEL
      || XVECLEN (x16, 0) != 1)
    return -1;
  x17 = XVECEXP (x16, 0, 0);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x18 = XEXP (x2, 1);
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != i1)
    return -1;
  x20 = XEXP (x19, 0);
  if (GET_CODE (x20) != VEC_SELECT
      || GET_MODE (x20) != E_SFmode)
    return -1;
  x21 = XEXP (x20, 1);
  if (GET_CODE (x21) != PARALLEL
      || XVECLEN (x21, 0) != 1)
    return -1;
  x22 = XVECEXP (x21, 0, 0);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x23 = XEXP (x19, 1);
  if (GET_CODE (x23) != VEC_SELECT
      || GET_MODE (x23) != E_SFmode)
    return -1;
  x24 = XEXP (x23, 1);
  if (GET_CODE (x24) != PARALLEL
      || XVECLEN (x24, 0) != 1)
    return -1;
  x25 = XVECEXP (x24, 0, 0);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XEXP (x18, 1);
  if (GET_CODE (x26) != i1)
    return -1;
  x27 = XEXP (x26, 0);
  if (GET_CODE (x27) != VEC_SELECT
      || GET_MODE (x27) != E_SFmode)
    return -1;
  x28 = XEXP (x27, 1);
  if (GET_CODE (x28) != PARALLEL
      || XVECLEN (x28, 0) != 1)
    return -1;
  x29 = XVECEXP (x28, 0, 0);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x30 = XEXP (x26, 1);
  if (GET_CODE (x30) != VEC_SELECT
      || GET_MODE (x30) != E_SFmode)
    return -1;
  x31 = XEXP (x30, 1);
  if (GET_CODE (x31) != PARALLEL
      || XVECLEN (x31, 0) != 1)
    return -1;
  x32 = XVECEXP (x31, 0, 0);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x33 = XEXP (x1, 1);
  x34 = XEXP (x33, 0);
  x35 = XEXP (x34, 0);
  if (GET_CODE (x35) != i1)
    return -1;
  x36 = XEXP (x35, 0);
  if (GET_CODE (x36) != VEC_SELECT
      || GET_MODE (x36) != E_SFmode)
    return -1;
  x37 = XEXP (x36, 1);
  if (GET_CODE (x37) != PARALLEL
      || XVECLEN (x37, 0) != 1)
    return -1;
  x38 = XVECEXP (x37, 0, 0);
  if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x39 = XEXP (x35, 1);
  if (GET_CODE (x39) != VEC_SELECT
      || GET_MODE (x39) != E_SFmode)
    return -1;
  x40 = XEXP (x39, 1);
  if (GET_CODE (x40) != PARALLEL
      || XVECLEN (x40, 0) != 1)
    return -1;
  x41 = XVECEXP (x40, 0, 0);
  if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x42 = XEXP (x34, 1);
  if (GET_CODE (x42) != i1)
    return -1;
  x43 = XEXP (x42, 0);
  if (GET_CODE (x43) != VEC_SELECT
      || GET_MODE (x43) != E_SFmode)
    return -1;
  x44 = XEXP (x43, 1);
  if (GET_CODE (x44) != PARALLEL
      || XVECLEN (x44, 0) != 1)
    return -1;
  x45 = XVECEXP (x44, 0, 0);
  if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x46 = XEXP (x42, 1);
  if (GET_CODE (x46) != VEC_SELECT
      || GET_MODE (x46) != E_SFmode)
    return -1;
  x47 = XEXP (x46, 1);
  if (GET_CODE (x47) != PARALLEL
      || XVECLEN (x47, 0) != 1)
    return -1;
  x48 = XVECEXP (x47, 0, 0);
  if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x49 = XEXP (x33, 1);
  x50 = XEXP (x49, 0);
  if (GET_CODE (x50) != i1)
    return -1;
  x51 = XEXP (x50, 0);
  if (GET_CODE (x51) != VEC_SELECT
      || GET_MODE (x51) != E_SFmode)
    return -1;
  x52 = XEXP (x51, 1);
  if (GET_CODE (x52) != PARALLEL
      || XVECLEN (x52, 0) != 1)
    return -1;
  x53 = XVECEXP (x52, 0, 0);
  if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x54 = XEXP (x50, 1);
  if (GET_CODE (x54) != VEC_SELECT
      || GET_MODE (x54) != E_SFmode)
    return -1;
  x55 = XEXP (x54, 1);
  if (GET_CODE (x55) != PARALLEL
      || XVECLEN (x55, 0) != 1)
    return -1;
  x56 = XVECEXP (x55, 0, 0);
  if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x57 = XEXP (x49, 1);
  if (GET_CODE (x57) != i1)
    return -1;
  x58 = XEXP (x57, 0);
  if (GET_CODE (x58) != VEC_SELECT
      || GET_MODE (x58) != E_SFmode)
    return -1;
  x59 = XEXP (x58, 1);
  if (GET_CODE (x59) != PARALLEL
      || XVECLEN (x59, 0) != 1)
    return -1;
  x60 = XVECEXP (x59, 0, 0);
  if (x60 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x61 = XEXP (x57, 1);
  if (GET_CODE (x61) != VEC_SELECT
      || GET_MODE (x61) != E_SFmode)
    return -1;
  x62 = XEXP (x61, 1);
  if (GET_CODE (x62) != PARALLEL
      || XVECLEN (x62, 0) != 1)
    return -1;
  x63 = XVECEXP (x62, 0, 0);
  if (x63 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x64 = XEXP (x5, 0);
  operands[1] = x64;
  if (!register_operand (operands[1], E_V8SFmode))
    return -1;
  x65 = XEXP (x20, 0);
  operands[2] = x65;
  if (!nonimmediate_operand (operands[2], E_V8SFmode))
    return -1;
  x66 = XEXP (x8, 0);
  if (!rtx_equal_p (x66, operands[1]))
    return -1;
  x67 = XEXP (x12, 0);
  if (!rtx_equal_p (x67, operands[1]))
    return -1;
  x68 = XEXP (x15, 0);
  if (!rtx_equal_p (x68, operands[1]))
    return -1;
  x69 = XEXP (x23, 0);
  if (!rtx_equal_p (x69, operands[2]))
    return -1;
  x70 = XEXP (x27, 0);
  if (!rtx_equal_p (x70, operands[2]))
    return -1;
  x71 = XEXP (x30, 0);
  if (!rtx_equal_p (x71, operands[2]))
    return -1;
  x72 = XEXP (x36, 0);
  if (!rtx_equal_p (x72, operands[1]))
    return -1;
  x73 = XEXP (x39, 0);
  if (!rtx_equal_p (x73, operands[1]))
    return -1;
  x74 = XEXP (x43, 0);
  if (!rtx_equal_p (x74, operands[1]))
    return -1;
  x75 = XEXP (x46, 0);
  if (!rtx_equal_p (x75, operands[1]))
    return -1;
  x76 = XEXP (x51, 0);
  if (!rtx_equal_p (x76, operands[2]))
    return -1;
  x77 = XEXP (x54, 0);
  if (!rtx_equal_p (x77, operands[2]))
    return -1;
  x78 = XEXP (x58, 0);
  if (!rtx_equal_p (x78, operands[2]))
    return -1;
  x79 = XEXP (x61, 0);
  if (!rtx_equal_p (x79, operands[2]))
    return -1;
  return 0;
}

 int
recog_10 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCFPmode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x6) != VEC_SELECT)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != PARALLEL
      || XVECLEN (x7, 0) != 1)
    return -1;
  x8 = XVECEXP (x7, 0, 0);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XEXP (x1, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCFPmode)
    return -1;
  x10 = XEXP (x3, 0);
  operands[0] = x10;
  x11 = XEXP (x6, 0);
  operands[1] = x11;
  switch (GET_MODE (x3))
    {
    case E_HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x6) != E_HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !(
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
        return -1;
      return 3670; /* avx10_2_comxhf */

    case E_SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x6) != E_SFmode
          || !nonimmediate_operand (operands[1], E_V4SFmode)
          || !
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 3674; /* avx10_2_comxsf */

    case E_DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x6) != E_DFmode
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 3678; /* avx10_2_comxdf */

    default:
      return -1;
    }
}

 int
recog_11 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[0] = x4;
      if (!register_operand (operands[0], E_TFmode)
          || GET_MODE (x2) != E_CCmode
          || GET_MODE (x3) != E_CCmode)
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_TFmode)
          || !
#line 25371 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8956; /* ptesttf2 */

    case AND:
      switch (pattern602 (x1))
        {
        case 0:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8957; /* *ptestv16qi_and */

        case 1:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8958; /* *ptestv8hi_and */

        case 2:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8959; /* *ptestv4si_and */

        case 3:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8960; /* *ptestv2di_and */

        case 4:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8961; /* *ptestv1ti_and */

        case 5:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8962; /* *ptestv4sf_and */

        case 6:
          if (!
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()))
            return -1;
          return 8963; /* *ptestv2df_and */

        case 7:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8964; /* *ptestv32qi_and */

        case 8:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8965; /* *ptestv16hi_and */

        case 9:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8966; /* *ptestv8si_and */

        case 10:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8967; /* *ptestv4di_and */

        case 11:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8968; /* *ptestv2ti_and */

        case 12:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8969; /* *ptestv8sf_and */

        case 13:
          if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8970; /* *ptestv4df_and */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_15 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      return recog_14 (x1, insn, pnum_clobbers);

    case 2:
      return recog_13 (x1, insn, pnum_clobbers);

    case 3:
      switch (XINT (x2, 1))
        {
        case 39:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_CCGZmode)
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x3) != LTU)
            return -1;
          x4 = XEXP (x3, 0);
          if (GET_CODE (x4) != REG
              || REGNO (x4) != 17
              || GET_MODE (x4) != E_CCmode)
            return -1;
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XEXP (x1, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCGZmode)
            return -1;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!register_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 521; /* subsi3_carry_ccgz */

            case E_DImode:
              if (!register_operand (operands[1], E_DImode)
                  || !x86_64_general_operand (operands[2], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 522; /* subdi3_carry_ccgz */

            default:
              return -1;
            }

        case 59:
          return recog_12 (x1, insn, pnum_clobbers);

        case 48:
          if (GET_MODE (x2) != E_HFmode)
            return -1;
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          if (!nonimmediate_operand (operands[0], E_HFmode))
            return -1;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          if (!nonimm_or_0_operand (operands[2], E_HFmode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!register_operand (operands[3], E_QImode)
              || !
#line 26553 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1809; /* movhf_mask */

        case 51:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          x3 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x3))
            {
            case LT:
              switch (pattern735 (x2))
                {
                case 0:
                  if (
#line 26786 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()))
                    return 1827; /* *ieee_maxsf3_1 */
                  if (!
#line 26807 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1829; /* *ieee_minsf3_1 */

                case 1:
                  if (
#line 26786 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()))
                    return 1828; /* *ieee_maxdf3_1 */
                  if (!
#line 26807 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1830; /* *ieee_mindf3_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              operands[3] = x3;
              switch (GET_MODE (operands[0]))
                {
                case E_V2SFmode:
                  if (pattern968 (x2, 
E_V2SFmode) == 0
                      && 
#line 1317 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2075; /* mmx_blendvps */
                  break;

                case E_V8QImode:
                  if (pattern968 (x2, 
E_V8QImode) == 0
                      && 
#line 4314 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2241; /* mmx_pblendvb_v8qi */
                  break;

                case E_V4QImode:
                  if (pattern968 (x2, 
E_V4QImode) == 0
                      && 
#line 4390 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2245; /* mmx_pblendvb_v4qi */
                  break;

                case E_V2QImode:
                  if (pattern968 (x2, 
E_V2QImode) == 0
                      && 
#line 4390 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2246; /* mmx_pblendvb_v2qi */
                  break;

                case E_V2HImode:
                  if (pattern968 (x2, 
E_V2HImode) == 0
                      && 
#line 4390 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2247; /* mmx_pblendvb_v2hi */
                  break;

                case E_SFmode:
                  if (pattern968 (x2, 
E_SFmode) == 0
                      && 
#line 23557 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8691; /* sse4_1_blendvss */
                  break;

                case E_DFmode:
                  if (pattern968 (x2, 
E_DFmode) == 0
                      && 
#line 23557 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8692; /* sse4_1_blendvsd */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x3) != SUBREG)
                return -1;
              switch (pattern848 (x2))
                {
                case 0:
                  if (!
#line 4366 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2243; /* *mmx_pblendvb_v8qi_2 */

                case 1:
                  if (!
#line 4366 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2244; /* *mmx_pblendvb_v8qi_2 */

                case 2:
                  if (!
#line 4442 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2251; /* *mmx_pblendvb_v4qi_2 */

                default:
                  return -1;
                }

            case EQ:
              switch (pattern737 (x2))
                {
                case 0:
                  if (!
#line 4338 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
                    return -1;
                  return 2242; /* *mmx_pblendvb_v8qi_1 */

                case 1:
                  if (!
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2248; /* *mmx_pblendvb_v4qi_1 */

                case 2:
                  if (!
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2249; /* *mmx_pblendvb_v2qi_1 */

                case 3:
                  if (!
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                    return -1;
                  return 2250; /* *mmx_pblendvb_v2hi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 50:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[2] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[1] = x8;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V2SFmode:
              if (pattern969 (x2, 
E_V2SFmode) != 0
                  || !
#line 1261 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2072; /* sse4_1_insertps_v2sf */

            case E_V2SImode:
              if (pattern969 (x2, 
E_V2SImode) != 0
                  || !
#line 1261 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2073; /* sse4_1_insertps_v2si */

            default:
              return -1;
            }

        case 53:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          if (!nonimmediate_operand (operands[3], E_V16QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8QImode:
              if (pattern970 (x2, 
E_V8QImode) != 0
                  || !
#line 4512 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
                return -1;
              return 2263; /* mmx_ppermv64 */

            case E_V4QImode:
              if (pattern970 (x2, 
E_V4QImode) != 0
                  || !
#line 4524 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
                return -1;
              return 2264; /* mmx_ppermv32 */

            default:
              return -1;
            }

        case 47:
          if (GET_MODE (x2) != E_V8QImode)
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x3) != MEM
              || GET_MODE (x3) != E_V8QImode)
            return -1;
          x6 = XEXP (x1, 0);
          if (GET_CODE (x6) != MEM
              || GET_MODE (x6) != E_V8QImode)
            return -1;
          x9 = XEXP (x6, 0);
          operands[0] = x9;
          x7 = XVECEXP (x2, 0, 0);
          operands[1] = x7;
          switch (pattern1067 (x2, 
E_V8QImode))
            {
            case 0:
              if (!(
#line 6860 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 2385; /* *mmx_maskmovq */

            case 1:
              if (!(
#line 6860 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 2386; /* *mmx_maskmovq */

            default:
              return -1;
            }

        case 157:
          x6 = XEXP (x1, 0);
          operands[0] = x6;
          x7 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              x3 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x3) != CONST_INT)
                return -1;
              x8 = XVECEXP (x2, 0, 1);
              operands[2] = x8;
              if (XWINT (x3, 0) == 0L)
                {
                  switch (pattern967 (x2))
                    {
                    case 0:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3502; /* *avx512vl_eqv16qi3_1 */
                      break;

                    case 1:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3514; /* *avx512vl_eqv16hi3_1 */
                      break;

                    case 2:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3570; /* *avx512f_eqv16si3_1 */
                      break;

                    case 3:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3518; /* *avx512vl_eqv8hi3_1 */
                      break;

                    case 4:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3574; /* *avx512vl_eqv8si3_1 */
                      break;

                    case 5:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3578; /* *avx512vl_eqv4si3_1 */
                      break;

                    case 6:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3582; /* *avx512f_eqv8di3_1 */
                      break;

                    case 7:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3586; /* *avx512vl_eqv4di3_1 */
                      break;

                    case 8:
                      if ((
#line 4670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3590; /* *avx512vl_eqv2di3_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x3;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              switch (pattern67 (x2))
                {
                case 0:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3522; /* avx512vl_ucmpv16qi3 */

                case 1:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3528; /* avx512vl_ucmpv16hi3 */

                case 2:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3592; /* avx512f_ucmpv16si3 */

                case 3:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3530; /* avx512vl_ucmpv8hi3 */

                case 4:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3594; /* avx512vl_ucmpv8si3 */

                case 5:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3596; /* avx512vl_ucmpv4si3 */

                case 6:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3598; /* avx512f_ucmpv8di3 */

                case 7:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3600; /* avx512vl_ucmpv4di3 */

                case 8:
                  if (!(
#line 4685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3602; /* avx512vl_ucmpv2di3 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern418 (x2))
                {
                case 0:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3649; /* *avx512vl_ucmpv16qi3_1 */

                case 1:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3655; /* *avx512vl_ucmpv16hi3_1 */

                case 2:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3657; /* *avx512vl_ucmpv8hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 52:
          if (pattern59 (x1, pnum_clobbers, 
E_V8QImode) != 0)
            return -1;
          x8 = XVECEXP (x2, 0, 1);
          operands[2] = x8;
          if (!register_mmxmem_operand (operands[2], E_V8QImode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[4] = x3;
          if (!reg_or_const_vector_operand (operands[4], E_V4SImode)
              || !
#line 23163 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          *pnum_clobbers = 1;
          return 8634; /* *ssse3_pshufbv8qi3 */

        case 132:
          if (pnum_clobbers == NULL
              || pattern249 (x1) != 0
              || !nonimmediate_operand (operands[3], E_V16QImode))
            return -1;
          x3 = XVECEXP (x2, 0, 2);
          operands[4] = x3;
          if (!const_0_to_255_operand (operands[4], E_SImode)
              || !
#line 26083 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          *pnum_clobbers = 2;
          return 8988; /* sse4_2_pcmpistr_cconly */

        default:
          return -1;
        }

    case 5:
      if (pnum_clobbers == NULL
          || XINT (x2, 1) != 131
          || pattern249 (x1) != 0
          || !register_operand (operands[3], E_SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 2);
      operands[4] = x3;
      if (!nonimmediate_operand (operands[4], E_V16QImode))
        return -1;
      x10 = XVECEXP (x2, 0, 3);
      operands[5] = x10;
      if (!register_operand (operands[5], E_SImode))
        return -1;
      x11 = XVECEXP (x2, 0, 4);
      operands[6] = x11;
      if (!const_0_to_255_operand (operands[6], E_SImode)
          || !
#line 25958 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      *pnum_clobbers = 2;
      return 8984; /* sse4_2_pcmpestr_cconly */

    default:
      return -1;
    }
}

 int
recog_29 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_DFmode:
      if (GET_MODE (x3) != E_DFmode)
        return -1;
      if (nonimm_ssenomem_operand (operands[0], E_DFmode)
          && nonimmediate_operand (operands[1], E_SFmode)
          && 
#line 5295 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)))
        return 200; /* *extendsfdf2 */
      if (!register_operand (operands[0], E_DFmode)
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 5451 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 202; /* *extendhfdf2 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 5451 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 201; /* *extendhfsf2 */

    case E_XFmode:
      if (!nonimmediate_operand (operands[0], E_XFmode))
        return -1;
      switch (pattern423 (x3, 
E_XFmode))
        {
        case 0:
          if (!
#line 5513 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 204; /* *extendsfxf2_i387 */

        case 1:
          if (!
#line 5513 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 205; /* *extenddfxf2_i387 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_32 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      switch (pattern262 (x3, 
E_SImode))
        {
        case 0:
          if (!
#line 5769 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 213; /* fixuns_trunchfsi2 */

        case 1:
          if (!
#line 5876 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 218; /* fixuns_truncsfsi2_avx512f */

        case 2:
          if (!
#line 5876 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 219; /* fixuns_truncdfsi2_avx512f */

        default:
          return -1;
        }

    case E_DImode:
      switch (pattern262 (x3, 
E_DImode))
        {
        case 0:
          if (!(
#line 5769 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 215; /* fixuns_trunchfdi2 */

        case 1:
          if (!
#line 5834 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 216; /* fixuns_truncsfdi2 */

        case 2:
          if (!
#line 5834 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 217; /* fixuns_truncdfdi2 */

        default:
          return -1;
        }

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !
#line 8979 "../../src/gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
        return -1;
      return 4907; /* fixuns_truncv2dfv2si2 */

    default:
      return -1;
    }
}

 int
recog_35 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (pattern82 (x1, pnum_clobbers))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          x2 = XEXP (x1, 1);
          if (pattern73 (x2, pnum_clobbers) != 0
              || !(
#line 12501 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 704; /* *andti3_doubleword */

        case E_HImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, 
E_HImode) != 0)
            return -1;
          if (
#line 12671 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 719; /* *andhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 12671 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 720; /* *andhi_1 */

        case E_QImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, 
E_QImode) != 0)
            return -1;
          if (
#line 12709 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 723; /* *andqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 12709 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 724; /* *andqi_1 */

        case E_V2SFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2SFmode) != 0
              || !
#line 1357 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2077; /* andv2sf3 */

        case E_V2BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2BFmode) != 0
              || !
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2111; /* andv2bf3 */

        case E_V4BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4BFmode) != 0
              || !(
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2114; /* andv4bf3 */

        case E_V2HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2HFmode) != 0
              || !
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2117; /* andv2hf3 */

        case E_V4HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4HFmode) != 0
              || !(
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2120; /* andv4hf3 */

        case E_V8QImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V8QImode, operands)))
            return -1;
          return 2274; /* *mmx_andv8qi3 */

        case E_V4HImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V4HImode, operands)))
            return -1;
          return 2277; /* *mmx_andv4hi3 */

        case E_V2SImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (AND, V2SImode, operands)))
            return -1;
          return 2280; /* *mmx_andv2si3 */

        case E_V4QImode:
          x2 = XEXP (x1, 1);
          if (pattern75 (x2, pnum_clobbers, 
E_V4QImode) != 0
              || !
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V4QImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2283; /* *andv4qi3 */

        case E_V2QImode:
          x2 = XEXP (x1, 1);
          if (pattern75 (x2, pnum_clobbers, 
E_V2QImode) != 0
              || !
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2QImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2286; /* *andv2qi3 */

        case E_V2HImode:
          x2 = XEXP (x1, 1);
          if (pattern75 (x2, pnum_clobbers, 
E_V2HImode) != 0
              || !
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (AND, V2HImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 2289; /* *andv2hi3 */

        case E_BFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_BFmode) != 0
              || !
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3785; /* andbf3 */

        case E_HFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_HFmode) != 0
              || !
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3788; /* andhf3 */

        case E_SFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_SFmode) != 0
              || !
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3791; /* andsf3 */

        case E_DFmode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_DFmode) != 0
              || !(
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return -1;
          return 3794; /* anddf3 */

        case E_TFmode:
          x2 = XEXP (x1, 1);
          if (pattern25 (x2, 
E_TFmode) != 0
              || !
#line 5736 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 3797; /* *andtf3 */

        default:
          return -1;
        }

    case 1:
      if (!
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 725; /* *andqi_1_slp */

    case 2:
      if (!
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 728; /* *andhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_43 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (pattern4 (x1, pnum_clobbers))
    {
    case 0:
      if (!
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1292; /* *rotlqi3_mask_1 */

    case 1:
      if (!
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1294; /* *rotlhi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1308; /* *rotlqi3_add_1 */

    case 3:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1310; /* *rotlhi3_add_1 */

    case 4:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1324; /* *rotlqi3_sub_1 */

    case 5:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1326; /* *rotlhi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      switch (pattern267 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1284; /* *rotlqi3_mask */
            }
          break;

        case 1:
          if (
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1286; /* *rotlhi3_mask */
            }
          break;

        case 2:
          if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1300; /* *rotlqi3_add */
            }
          break;

        case 3:
          if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1302; /* *rotlhi3_add */
            }
          break;

        case 4:
          if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1316; /* *rotlqi3_sub */
            }
          break;

        case 5:
          if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1318; /* *rotlhi3_sub */
            }
          break;

        case 6:
          if (pnum_clobbers != NULL
              && pattern615 (x3) == 0
              && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 1333; /* ix86_rotlti3_doubleword */
            }
          x4 = XEXP (x3, 1);
          if (XWINT (x4, 0) == 64L
              && register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && 
#line 18445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1338; /* rotl64ti2_doubleword */
          break;

        default:
          break;
        }
      x4 = XEXP (x3, 1);
      operands[2] = x4;
      switch (pattern268 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1373; /* *rotlqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1374; /* *rotlqi3_1 */

        case 1:
          if (
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1377; /* *rotlhi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1378; /* *rotlhi3_1 */

        case 2:
          if (!
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1381; /* *rotlqi3_1_slp */

        case 3:
          if (!
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1383; /* *rotlhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_49 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !ix86_comparison_operator (operands[1], E_HImode))
            return -1;
          if (
#line 19473 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_ZU))
            return 1444; /* *setcc_hi_zu */
          if (pnum_clobbers != NULL
              && 
#line 19497 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 1448; /* *setcc_hi_1_and */
            }
          if (!
#line 19514 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))))
            return -1;
          return 1450; /* *setcc_hi_1_movzbl */

        case E_QImode:
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !ix86_comparison_operator (operands[1], E_QImode))
            return -1;
          return 1452; /* *setcc_qi */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_QImode)
          || !ix86_comparison_operator (operands[1], E_QImode))
        return -1;
      return 1453; /* *setcc_qi_slp */

    default:
      return -1;
    }
}

 int
recog_54 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          x3 = XEXP (x1, 1);
          if (pattern73 (x3, pnum_clobbers) != 0
              || !(
#line 8069 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 381; /* *subti3_doubleword */

        case E_QImode:
          x3 = XEXP (x1, 1);
          if (pattern74 (x3, 
E_QImode) != 0)
            return -1;
          if (
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 384; /* *subqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 385; /* *subqi_1 */

        case E_HImode:
          x3 = XEXP (x1, 1);
          if (pattern74 (x3, 
E_HImode) != 0)
            return -1;
          if (
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 386; /* *subhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 387; /* *subhi_1 */

        case E_HFmode:
          x3 = XEXP (x1, 1);
          if (pattern5 (x3, 
E_HFmode) != 0
              || !
#line 23445 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1677; /* *subhf */

        case E_V8QImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V8QImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)))
            return -1;
          return 2125; /* *mmx_subv8qi3 */

        case E_V4HImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V4HImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)))
            return -1;
          return 2127; /* *mmx_subv4hi3 */

        case E_V2SImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V2SImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)))
            return -1;
          return 2129; /* *mmx_subv2si3 */

        case E_V1DImode:
          x3 = XEXP (x1, 1);
          if (pattern8 (x3, 
E_V1DImode) != 0
              || !(
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)) && 
#line 50 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2)))
            return -1;
          return 2131; /* *mmx_subv1di3 */

        case E_V4QImode:
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V4QImode) != 0
              || !
#line 3227 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2133; /* subv4qi3 */

        case E_V2HImode:
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V2HImode) != 0
              || !
#line 3227 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2135; /* subv2hi3 */

        case E_V2QImode:
          if (pnum_clobbers == NULL)
            return -1;
          x3 = XEXP (x1, 1);
          if (pattern7 (x3, 
E_V2QImode) != 0
              || !
#line 3241 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          *pnum_clobbers = 1;
          return 2137; /* subv2qi3 */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          x3 = XEXP (x1, 1);
          if (pattern1075 (x3, 
E_QImode) != 0
              || !
#line 8189 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 403; /* *subqi_1_slp */

        case E_HImode:
          x3 = XEXP (x1, 1);
          if (pattern1075 (x3, 
E_HImode) != 0
              || !
#line 8189 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 404; /* *subhi_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_62 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x6) == CONST_INT
          && GET_MODE (x2) == E_V2SFmode)
        {
          switch (XWINT (x5, 0))
            {
            case 1L:
              if (register_operand (operands[0], E_V2SFmode))
                {
                  switch (XWINT (x6, 0))
                    {
                    case 0L:
                      if (register_mmxmem_operand (operands[1], E_V2SFmode)
                          && 
#line 1641 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A || TARGET_MMX_WITH_SSE))
                        return 2084; /* mmx_pswapdv2sf2 */
                      break;

                    case 1L:
                      if (register_operand (operands[1], E_V2SFmode)
                          && 
#line 1657 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                        return 2085; /* *mmx_movshdup */
                      break;

                    default:
                      break;
                    }
                }
              break;

            case 0L:
              switch (XWINT (x6, 0))
                {
                case 0L:
                  if (register_operand (operands[0], E_V2SFmode)
                      && register_operand (operands[1], E_V2SFmode)
                      && 
#line 1673 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2086; /* *mmx_movsldup */
                  break;

                case 1L:
                  if (nonimmediate_operand (operands[0], E_V2SFmode)
                      && nonimmediate_operand (operands[1], E_V4SFmode)
                      && 
#line 11652 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5282; /* sse_storelps */
                  break;

                default:
                  break;
                }
              break;

            case 2L:
              if (XWINT (x6, 0) == 3L
                  && nonimmediate_operand (operands[0], E_V2SFmode)
                  && nonimmediate_operand (operands[1], E_V4SFmode)
                  && 
#line 11599 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 5280; /* sse_storehps */
              break;

            default:
              break;
            }
        }
      operands[2] = x5;
      if (const_0_to_1_operand (operands[2], E_VOIDmode))
        {
          operands[3] = x6;
          if (const_0_to_1_operand (operands[3], E_VOIDmode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2SImode:
                  if (register_operand (operands[0], E_V2SImode)
                      && GET_MODE (x2) == E_V2SImode
                      && register_operand (operands[1], E_V2SImode)
                      && 
#line 5575 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2335; /* *mmx_pshufd_1 */
                  break;

                case E_V2HFmode:
                  if (register_operand (operands[0], E_V2HFmode)
                      && GET_MODE (x2) == E_V2HFmode
                      && register_operand (operands[1], E_V2HFmode)
                      && 
#line 6236 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2371; /* *pshufwv2hf_1 */
                  break;

                case E_V2BFmode:
                  if (register_operand (operands[0], E_V2BFmode)
                      && GET_MODE (x2) == E_V2BFmode
                      && register_operand (operands[1], E_V2BFmode)
                      && 
#line 6236 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2372; /* *pshufwv2bf_1 */
                  break;

                case E_V2HImode:
                  if (register_operand (operands[0], E_V2HImode)
                      && GET_MODE (x2) == E_V2HImode
                      && register_operand (operands[1], E_V2HImode)
                      && 
#line 6236 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2373; /* *pshufwv2hi_1 */
                  break;

                default:
                  break;
                }
            }
        }
      if (XWINT (x5, 0) != 1L
          || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_V2SImode)
          || GET_MODE (x2) != E_V2SImode
          || !register_mmxmem_operand (operands[1], E_V2SImode)
          || !
#line 5643 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
        return -1;
      return 2342; /* mmx_pswapdv2si2 */

    case 1:
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      switch (XWINT (x5, 0))
        {
        case 0L:
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              switch (pattern975 (x2))
                {
                case 0:
                  if (
#line 1783 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 2093; /* *vec_extractv2sf_0 */
                  break;

                case 1:
                  if (
#line 12336 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5338; /* *vec_extractv4sf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_HFmode:
              switch (pattern976 (x2))
                {
                case 0:
                  if ((
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 548 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5397; /* *vec_extractv32hf_0 */
                  break;

                case 1:
                  if (
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5398; /* *vec_extractv16hf_0 */
                  break;

                case 2:
                  if (
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5399; /* *vec_extractv8hf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_BFmode:
              switch (pattern977 (x2))
                {
                case 0:
                  if ((
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 549 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5400; /* *vec_extractv32bf_0 */
                  break;

                case 1:
                  if (
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5401; /* *vec_extractv16bf_0 */
                  break;

                case 2:
                  if (
#line 13245 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 5402; /* *vec_extractv8bf_0 */
                  break;

                default:
                  break;
                }
              break;

            case E_DFmode:
              if (nonimmediate_operand (operands[0], E_DFmode)
                  && GET_MODE (x2) == E_DFmode
                  && nonimmediate_operand (operands[1], E_V2DFmode))
                {
                  if (
#line 14663 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7216; /* sse2_storelpd */
                  if (
#line 14692 "../../src/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7217; /* *vec_extractv2df_0_sse */
                }
              break;

            case E_QImode:
              if (memory_operand (operands[0], E_QImode)
                  && GET_MODE (x2) == E_QImode
                  && register_operand (operands[1], E_V16QImode)
                  && (
#line 21077 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()) && 
#line 21070 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8460; /* *vec_extractv16qi_0_mem */
              break;

            case E_HImode:
              if (memory_operand (operands[0], E_HImode)
                  && GET_MODE (x2) == E_HImode
                  && register_operand (operands[1], E_V8HImode)
                  && 
#line 21077 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && !TARGET_SSE4_1
   && (TARGET_INTER_UNIT_MOVES_FROM_VEC
       || optimize_function_for_speed_p (cfun))
   && ix86_pre_reload_split ()))
                return 8461; /* *vec_extractv8hi_0_mem */
              break;

            default:
              break;
            }
          break;

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (nonimmediate_operand (operands[0], E_SFmode)
                  && GET_MODE (x2) == E_SFmode
                  && nonimmediate_operand (operands[1], E_V2SFmode)
                  && 
#line 1798 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 2094; /* *vec_extractv2sf_1 */
              break;

            case E_DFmode:
              if (nonimmediate_operand (operands[0], E_DFmode)
                  && GET_MODE (x2) == E_DFmode
                  && nonimmediate_operand (operands[1], E_V2DFmode))
                {
                  if (
#line 14606 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7214; /* sse2_storehpd */
                  if (
#line 14639 "../../src/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                    return 7215; /* *vec_extractv2df_1_sse */
                }
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (GET_MODE (x2) != E_HImode)
            return -1;
          if (register_sse4nonimm_operand (operands[0], E_HImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V4HImode:
                  if (register_operand (operands[1], E_V4HImode)
                      && const_0_to_3_operand (operands[2], E_SImode)
                      && 
#line 5381 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                    return 2321; /* *mmx_pextrw */
                  break;

                case E_V2HImode:
                  if (register_operand (operands[1], E_V2HImode)
                      && const_0_to_1_operand (operands[2], E_SImode)
                      && 
#line 6047 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return 2359; /* *pextrw */
                  break;

                case E_V8HImode:
                  if (register_operand (operands[1], E_V8HImode)
                      && const_0_to_7_operand (operands[2], E_SImode)
                      && 
#line 21101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return 8463; /* *vec_extractv8hi */
                  break;

                default:
                  break;
                }
            }
          if (!register_operand (operands[0], E_HImode)
              || !memory_operand (operands[1], E_V8HImode)
              || !const_0_to_7_operand (operands[2], E_VOIDmode)
              || !
#line 21162 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8470; /* *vec_extractv8hi_mem */

        case E_HFmode:
          if (!register_sse4nonimm_operand (operands[0], E_HFmode)
              || GET_MODE (x2) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!register_operand (operands[1], E_V4HFmode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 5401 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                return -1;
              return 2322; /* *mmx_pextrwv4hf */

            case E_V2HFmode:
              if (!register_operand (operands[1], E_V2HFmode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 6064 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2360; /* *pextrwv2hf */

            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !const_0_to_7_operand (operands[2], E_SImode)
                  || !
#line 13257 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5403; /* *vec_extracthf */

            default:
              return -1;
            }

        case E_BFmode:
          if (!register_sse4nonimm_operand (operands[0], E_BFmode)
              || GET_MODE (x2) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4BFmode:
              if (!register_operand (operands[1], E_V4BFmode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 5401 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
                return -1;
              return 2323; /* *mmx_pextrwv4bf */

            case E_V2BFmode:
              if (!register_operand (operands[1], E_V2BFmode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 6064 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2361; /* *pextrwv2bf */

            case E_V8BFmode:
              if (!register_operand (operands[1], E_V8BFmode)
                  || !const_0_to_7_operand (operands[2], E_SImode)
                  || !
#line 13257 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5404; /* *vec_extractbf */

            default:
              return -1;
            }

        case E_QImode:
          if (GET_MODE (x2) != E_QImode)
            return -1;
          if (nonimmediate_operand (operands[0], E_QImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V8QImode:
                  if (register_operand (operands[1], E_V8QImode)
                      && const_0_to_7_operand (operands[2], E_SImode)
                      && 
#line 5454 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                    return 2326; /* *mmx_pextrb */
                  break;

                case E_V4QImode:
                  if (register_operand (operands[1], E_V4QImode)
                      && const_0_to_3_operand (operands[2], E_SImode)
                      && 
#line 6110 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                    return 2364; /* *pextrb */
                  break;

                default:
                  break;
                }
            }
          if (register_sse4nonimm_operand (operands[0], E_QImode)
              && register_operand (operands[1], E_V16QImode)
              && const_0_to_15_operand (operands[2], E_SImode)
              && (
#line 21101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 21070 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
            return 8462; /* *vec_extractv16qi */
          if (!register_operand (operands[0], E_QImode)
              || !memory_operand (operands[1], E_V16QImode)
              || !const_0_to_15_operand (operands[2], E_VOIDmode)
              || !
#line 21162 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8469; /* *vec_extractv16qi_mem */

        case E_SFmode:
          if (GET_MODE (x2) != E_SFmode)
            return -1;
          if (nonimmediate_operand (operands[0], E_SFmode)
              && register_operand (operands[1], E_V4SFmode)
              && const_0_to_3_operand (operands[2], E_SImode)
              && 
#line 12347 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 5339; /* *sse4_1_extractps */
          if (!register_operand (operands[0], E_SFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!memory_operand (operands[1], E_V4SFmode)
                  || !const_0_to_3_operand (operands[2], E_VOIDmode)
                  || !
#line 12390 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 5340; /* *vec_extractv4sf_mem */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !const_0_to_15_operand (operands[2], E_VOIDmode)
                  || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && 
#line 302 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 7099; /* *vec_extractv16sfsf_valign */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !const_0_to_7_operand (operands[2], E_VOIDmode)
                  || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SFmode) >= 16) && 
#line 302 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 7100; /* *vec_extractv8sfsf_valign */

            default:
              return -1;
            }

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !const_0_to_7_operand (operands[2], E_VOIDmode)
                  || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && 
#line 303 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 7101; /* *vec_extractv8dfdf_valign */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !const_0_to_3_operand (operands[2], E_VOIDmode)
                  || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DFmode) >= 16) && 
#line 303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 7102; /* *vec_extractv4dfdf_valign */

            default:
              return -1;
            }

        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x2) != E_TImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2TImode:
              if (!register_operand (operands[1], E_V2TImode)
                  || !const_0_to_1_operand (operands[2], E_SImode)
                  || !
#line 21418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 8481; /* *vec_extractv2ti */

            case E_V4TImode:
              if (!register_operand (operands[1], E_V4TImode)
                  || !const_0_to_3_operand (operands[2], E_SImode)
                  || !
#line 21436 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 8482; /* *vec_extractv4ti */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4:
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      if (pattern673 (x4) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HFmode:
          if (!register_operand (operands[0], E_V4HFmode)
              || GET_MODE (x2) != E_V4HFmode
              || !register_mmxmem_operand (operands[1], E_V4HFmode)
              || !
#line 5543 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2332; /* mmx_pshufwv4hf_1 */

        case E_V4BFmode:
          if (!register_operand (operands[0], E_V4BFmode)
              || GET_MODE (x2) != E_V4BFmode
              || !register_mmxmem_operand (operands[1], E_V4BFmode)
              || !
#line 5543 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2333; /* mmx_pshufwv4bf_1 */

        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x2) != E_V4HImode
              || !register_mmxmem_operand (operands[1], E_V4HImode)
              || !
#line 5543 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2334; /* mmx_pshufwv4hi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_82 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern603 (x3, 
E_SImode) != 0
                      || !
#line 8039 "../../src/gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))))
                    return -1;
                  return 377; /* *leasi_general_4 */

                case E_DImode:
                  if (GET_MODE (x3) != E_DImode
                      || GET_MODE (x4) != E_DImode)
                    return -1;
                  if (register_operand (operands[0], E_DImode)
                      && register_no_SP_operand (operands[1], E_DImode)
                      && const_0_to_3_operand (operands[2], E_VOIDmode)
                      && const_int_operand (operands[3], E_VOIDmode)
                      && (
#line 8039 "../../src/gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 379; /* *leadi_general_4 */
                  if (!nonimmediate_operand (operands[0], E_DImode)
                      || !register_operand (operands[1], E_DImode)
                      || !const_int_operand (operands[2], E_QImode)
                      || !const_scalar_int_operand (operands[3], E_DImode)
                      || !(
#line 14137 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    return -1;
                  return 930; /* *concatsidi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern605 (x3, 
E_SImode, 
E_DImode) != 0
                  || !(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 894; /* *concatsidi3_1 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern258 (x3, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 906; /* *concatsidi3_3 */

            case 1:
              if (!(
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 936; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern258 (x3, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 909; /* *concatsidi3_3 */

            case 1:
              if (!(
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 939; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case CONST_INT:
          switch (pattern286 (x3, pnum_clobbers))
            {
            case 0:
              x6 = XEXP (x4, 1);
              operands[2] = x6;
              if (register_operand (operands[2], E_QImode))
                {
                  switch (pattern752 (x3))
                    {
                    case 0:
                      if (
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                        {
                          *pnum_clobbers = 1;
                          return 1392; /* *btcsi */
                        }
                      break;

                    case 1:
                      if ((
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pnum_clobbers = 1;
                          return 1394; /* *btcdi */
                        }
                      break;

                    default:
                      break;
                    }
                }
              if (GET_CODE (x6) != SUBREG)
                return -1;
              switch (pattern761 (x3))
                {
                case 0:
                  if (!
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1396; /* *btcsi_mask */

                case 1:
                  if (!(
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1398; /* *btcdi_mask */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 18852 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1400; /* *btcsi_mask_1 */

            case 2:
              if (!(
#line 18852 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1402; /* *btcdi_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern434 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 820; /* *xordi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 833; /* *xordi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 834; /* *xordi_1 */
                }
            }
          if (pnum_clobbers == NULL
              || !const_int_operand (operands[2], E_DImode)
              || !
#line 13655 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return -1;
          *pnum_clobbers = 1;
          return 839; /* *xordi_1_btc */

        case 1:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 829; /* *xorsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 830; /* *xorsi_1 */

        default:
          return -1;
        }

    case AND:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != XOR)
        return -1;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x9 = XEXP (x5, 1);
      operands[2] = x9;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1087 (x3, 
E_SImode) != 0
              || !
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 841; /* *xor2andn */

        case E_DImode:
          if (pattern1087 (x3, 
E_DImode) != 0
              || !(
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 842; /* *xor2andn */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern112 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL)
            {
              x7 = XEXP (x3, 1);
              operands[2] = x7;
              if (x86_64_zext_immediate_operand (operands[2], E_DImode)
                  && register_operand (operands[0], E_DImode)
                  && 
#line 13762 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                {
                  *pnum_clobbers = 1;
                  return 866; /* *xorsi_1_zext_imm */
                }
            }
          x7 = XEXP (x3, 1);
          operands[2] = x7;
          if (!const_scalar_int_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[0], E_DImode)
              || !(
#line 14198 "../../src/gcc/config/i386/i386.md"
(DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 948; /* *concatsidi3_7 */

        case 1:
          if (!(
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 900; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 918; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 921; /* *concatsidi3_4 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (pattern441 (x5, 
SUBREG, 
63) != 0)
        return -1;
      x9 = XEXP (x5, 1);
      if (maybe_ne (SUBREG_BYTE (x9), 0)
          || GET_MODE (x9) != E_SImode)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != CLZ
          || GET_MODE (x10) != E_DImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x11 = XEXP (x10, 0);
      operands[1] = x11;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21309 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1530; /* *bsr_rex64_2 */

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      switch (XWINT (x6, 0))
        {
        case -1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern755 (x3, 
E_SImode) != 0
                  || !
#line 21863 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1578; /* *bmi_blsmsk_si */

            case E_DImode:
              if (pattern755 (x3, 
E_DImode) != 0
                  || !(
#line 21863 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1579; /* *bmi_blsmsk_di */

            default:
              return -1;
            }

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern755 (x3, 
E_SImode) != 0
                  || !
#line 22209 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1612; /* *tbm_blcmsk_si */

            case E_DImode:
              if (pattern755 (x3, 
E_DImode) != 0
                  || !(
#line 22209 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1613; /* *tbm_blcmsk_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_95 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (register_operand (operands[2], E_SImode)
      && register_operand (operands[0], E_SImode))
    {
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) == E_SImode
          && nonimmediate_operand (operands[1], E_SImode)
          && 
#line 15900 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
        return 1086; /* *bmi2_ashlsi3_1 */
    }
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DImode)
        return -1;
      if (register_operand (operands[0], E_DImode))
        {
          if (pnum_clobbers != NULL
              && reg_or_pm1_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 1056; /* ashldi3_doubleword */
            }
          if (nonimmediate_operand (operands[1], E_DImode)
              && register_operand (operands[2], E_DImode)
              && (
#line 15900 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1087; /* *bmi2_ashldi3_1 */
        }
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
      if ((
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1090; /* *ashldi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1091; /* *ashldi3_1 */

    case E_SImode:
      x2 = XEXP (x1, 1);
      if (pattern623 (x2, 
E_SImode) != 0)
        return -1;
      if (
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1088; /* *ashlsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1089; /* *ashlsi3_1 */

    default:
      return -1;
    }
}

 int
recog_100 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern118 (x3, pnum_clobbers))
        {
        case 0:
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case REG:
            case SUBREG:
              if (pnum_clobbers != NULL
                  && pattern621 (x3) == 0
                  && (
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1123; /* *ashrdi3_doubleword_mask */
                }
              operands[2] = x5;
              if (register_operand (operands[2], E_SImode)
                  && register_operand (operands[0], E_SImode)
                  && GET_MODE (x3) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 17313 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
                return 1172; /* *bmi2_ashrsi3_1 */
              break;

            case CONST_INT:
              operands[2] = x5;
              if (const_int_operand (operands[2], E_QImode)
                  && nonimmediate_operand (operands[0], E_SImode)
                  && GET_MODE (x3) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode))
                {
                  if (
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1166; /* ashrsi3_cvt_nf */
                  if (pnum_clobbers != NULL
                      && 
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
                    {
                      *pnum_clobbers = 1;
                      return 1167; /* ashrsi3_cvt */
                    }
                }
              break;

            default:
              break;
            }
          operands[2] = x5;
          res = recog_99 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern622 (x3))
            {
            case 0:
              if (!
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1246; /* *ashrsi3_mask */

            case 1:
              if (!(
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1249; /* *ashrdi3_mask */

            case 2:
              if (!
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1258; /* *ashrsi3_add */

            case 3:
              if (!(
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1261; /* *ashrdi3_add */

            case 4:
              if (!
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1270; /* *ashrsi3_sub */

            case 5:
              if (!(
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1273; /* *ashrdi3_sub */

            default:
              return -1;
            }

        case 1:
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && (
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1127; /* *ashrdi3_doubleword_mask_1 */
            }
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1255; /* *ashrdi3_mask_1 */

        case 2:
          if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1252; /* *ashrsi3_mask_1 */

        case 3:
          if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1264; /* *ashrsi3_add_1 */

        case 4:
          if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1267; /* *ashrdi3_add_1 */

        case 5:
          if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1276; /* *ashrsi3_sub_1 */

        case 6:
          if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1279; /* *ashrdi3_sub_1 */

        default:
          return -1;
        }

    case ASHIFT:
      if (pnum_clobbers == NULL
          || pattern290 (x3, 
E_DImode) != 0
          || !(
#line 17988 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1280; /* *extenddi2_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_112 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (pattern126 (x3))
    {
    case 0:
      *pnum_clobbers = 1;
      return 1514; /* ctzsi2 */

    case 1:
      if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1515; /* ctzdi2 */

    default:
      return -1;
    }
}

 int
recog_113 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  switch (GET_CODE (x4))
    {
    case CTZ:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1520; /* *ctzsidi2_sext */

    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      if (pattern441 (x5, 
CLZ, 
31) != 0)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x4, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x8 = XEXP (x6, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21333 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1531; /* *bsr_2 */

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 49)
        return -1;
      x9 = XVECEXP (x4, 0, 0);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
          operands[1] = x9;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SFmode:
              if (register_operand (operands[1], E_V8SFmode)
                  && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8516; /* *avx_movmskps256_ext */
              break;

            case E_V4SFmode:
              if (register_operand (operands[1], E_V4SFmode)
                  && 
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return 8518; /* *sse_movmskps_ext */
              break;

            case E_V4DFmode:
              if (register_operand (operands[1], E_V4DFmode)
                  && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 8520; /* *avx_movmskpd256_ext */
              break;

            case E_V2DFmode:
              if (register_operand (operands[1], E_V2DFmode)
                  && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 8522; /* *sse2_movmskpd_ext */
              break;

            case E_V16QImode:
              if (register_operand (operands[1], E_V16QImode)
                  && 
#line 22132 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return 8564; /* *sse2_pmovmskb_ext */
              break;

            default:
              break;
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern1082 (x9))
            {
            case 0:
              if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8540; /* *avx_movmskps256_ext_lt_avx512 */

            case 1:
              if (!
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8542; /* *sse_movmskps_ext_lt_avx512 */

            case 2:
              if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8544; /* *avx_movmskpd256_ext_lt_avx512 */

            case 3:
              if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8546; /* *sse2_movmskpd_ext_lt_avx512 */

            case 4:
              if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8552; /* *avx_movmskps256_ext_shift */

            case 5:
              if (!
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8554; /* *sse_movmskps_ext_shift */

            case 6:
              if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8556; /* *avx_movmskpd256_ext_shift */

            case 7:
              if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8558; /* *sse2_movmskpd_ext_shift */

            default:
              return -1;
            }

        case LT:
          switch (pattern991 (x9))
            {
            case 0:
              if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8532; /* *avx_movmskps256_ext_lt */

            case 1:
              if (!
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                return -1;
              return 8534; /* *sse_movmskps_ext_lt */

            case 2:
              if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8536; /* *avx_movmskpd256_ext_lt */

            case 3:
              if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8538; /* *sse2_movmskpd_ext_lt */

            case 4:
              if (!
#line 22328 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return -1;
              return 8574; /* *sse2_pmovmskb_ext_lt */

            default:
              return -1;
            }

        case VEC_MERGE:
          switch (pattern983 (x9))
            {
            case 0:
              if (!(
#line 22357 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8575; /* *sse2_pmovmskb_ext_lt_avx512 */

            case 1:
              if (!
#line 22357 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                return -1;
              return 8576; /* *sse2_pmovmskb_ext_lt_avx512 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_124 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern629 (x2))
    {
    case 0:
      if (pattern632 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4424; /* avx512fp16_vcvtph2uw_v32hi_mask */

    case 1:
      if (pattern773 (x2, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!vector_operand (operands[1], E_V16HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4432; /* avx512fp16_vcvtph2udq_v16si_mask */

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4847; /* avx512f_fixuns_notruncv16sfv16si_mask */

        default:
          return -1;
        }

    case 2:
      switch (pattern1096 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4440; /* avx512fp16_vcvtph2uqq_v8di_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8752 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4867; /* avx512dq_cvtps2uqqv8di_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5113; /* fixuns_notruncv8dfv8di2_mask */

        default:
          return -1;
        }

    case 3:
      if (pattern632 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4448; /* avx512fp16_vcvtph2uw_v16hi_mask */

    case 4:
      switch (pattern1096 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4456; /* avx512fp16_vcvtph2udq_v8si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4851; /* avx512vl_fixuns_notruncv8sfv8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5019; /* fixuns_notruncv8dfv8si2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern1097 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4464; /* avx512fp16_vcvtph2uqq_v4di_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8752 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4871; /* avx512dq_cvtps2uqqv4di_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5117; /* fixuns_notruncv4dfv4di2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern632 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4471; /* avx512fp16_vcvtph2uw_v8hi_mask */

    case 7:
      switch (pattern1097 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4475; /* avx512fp16_vcvtph2udq_v4si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4854; /* avx512vl_fixuns_notruncv4sfv4si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5023; /* fixuns_notruncv4dfv4si2_mask */

        default:
          return -1;
        }

    case 8:
      switch (pattern1098 (x2))
        {
        case 0:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4479; /* avx512fp16_vcvtph2uqq_v2di_mask */

        case 1:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5120; /* fixuns_notruncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 4874; /* avx512dq_cvtps2uqqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_130 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (pattern456 (x2))
        {
        case 0:
          if (!(
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 5421; /* avx512f_vmscalefv8hf */

        case 1:
          if (!
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 5425; /* avx512f_vmscalefv4sf */

        case 2:
          if (!(
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5429; /* avx512f_vmscalefv2df */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[4] = x6;
      x7 = XEXP (x2, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1104 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 5435; /* avx512bw_scalefv32hf_mask */

        case E_V16HFmode:
          if (pattern1104 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 5439; /* avx512vl_scalefv16hf_mask */

        case E_V8HFmode:
          if (pattern1104 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 5442; /* avx512fp16_scalefv8hf_mask */

        case E_V16SFmode:
          if (pattern1104 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5445; /* avx512f_scalefv16sf_mask */

        case E_V8SFmode:
          if (pattern1104 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5449; /* avx512vl_scalefv8sf_mask */

        case E_V4SFmode:
          if (pattern1104 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5452; /* avx512vl_scalefv4sf_mask */

        case E_V8DFmode:
          if (pattern1104 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5455; /* avx512f_scalefv8df_mask */

        case E_V4DFmode:
          if (pattern1104 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5459; /* avx512vl_scalefv4df_mask */

        case E_V2DFmode:
          if (pattern1104 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5462; /* avx512vl_scalefv2df_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_137 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  operands[3] = x6;
  if (!const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[5] = x7;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern471 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9965; /* avx512dq_rangepv16sf_mask */

        case E_V8SFmode:
          if (pattern471 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9969; /* avx512dq_rangepv8sf_mask */

        case E_V4SFmode:
          if (pattern471 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9972; /* avx512dq_rangepv4sf_mask */

        case E_V8DFmode:
          if (pattern471 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9975; /* avx512dq_rangepv8df_mask */

        case E_V4DFmode:
          if (pattern471 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9979; /* avx512dq_rangepv4df_mask */

        case E_V2DFmode:
          if (pattern471 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9982; /* avx512dq_rangepv2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      switch (pattern1105 (x2))
        {
        case 0:
          if (!
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ))
            return -1;
          return 9983; /* avx512dq_rangesv4sf */

        case 1:
          if (!(
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9987; /* avx512dq_rangesv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_143 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XINT (x3, 1))
    {
    case 192:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (pattern456 (x2))
        {
        case 0:
          if (!(
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3225; /* reducesv8hf */

        case 1:
          if (!
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))))
            return -1;
          return 3229; /* reducesv4sf */

        case 2:
          if (!(
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3233; /* reducesv2df */

        default:
          return -1;
        }

    case 59:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!cmpps_imm_operand (operands[3], E_SImode))
        return -1;
      switch (pattern1105 (x2))
        {
        case 0:
          if (!
#line 4313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3269; /* avx_vmcmpv4sf3 */

        case 1:
          if (!(
#line 4313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3270; /* avx_vmcmpv2df3 */

        default:
          return -1;
        }

    case 133:
      return recog_133 (x1, insn, pnum_clobbers);

    case 217:
      switch (pattern470 (x2))
        {
        case 0:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4330; /* fma_fmaddc_v32hf_maskz_1 */

        case 1:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4338; /* fma_fmaddc_v16hf_maskz_1 */

        case 2:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4345; /* fma_fmaddc_v8hf_maskz_1 */

        case 3:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4372; /* avx512bw_fmaddc_v32hf_mask */

        case 4:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4376; /* avx512vl_fmaddc_v16hf_mask */

        case 5:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4380; /* avx512fp16_fmaddc_v8hf_mask */

        case 6:
          if (!
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4402; /* avx512fp16_fma_fmaddcsh_v8hf */

        default:
          return -1;
        }

    case 219:
      switch (pattern470 (x2))
        {
        case 0:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4334; /* fma_fcmaddc_v32hf_maskz_1 */

        case 1:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4342; /* fma_fcmaddc_v16hf_maskz_1 */

        case 2:
          if (!(
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4347; /* fma_fcmaddc_v8hf_maskz_1 */

        case 3:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4374; /* avx512bw_fcmaddc_v32hf_mask */

        case 4:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4378; /* avx512vl_fcmaddc_v16hf_mask */

        case 5:
          if (!(
#line 7298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4381; /* avx512fp16_fcmaddc_v8hf_mask */

        case 6:
          if (!
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4406; /* avx512fp16_fma_fcmaddcsh_v8hf */

        default:
          return -1;
        }

    case 167:
      return recog_140 (x1, insn, pnum_clobbers);

    case 121:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern476 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 23236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8644; /* avx512bw_palignrv64qi_mask */

        case E_V32QImode:
          if (pattern476 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 23236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8645; /* avx2_palignrv32qi_mask */

        case E_V16QImode:
          if (pattern476 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !
#line 23236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)))
            return -1;
          return 8646; /* ssse3_palignrv16qi_mask */

        default:
          return -1;
        }

    case 128:
      switch (pattern472 (x2, 
E_SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 8727; /* avx10_2_mpsadbw_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23842 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8729; /* avx2_mpsadbw_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23842 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 8731; /* sse4_1_mpsadbw_mask */

        default:
          return -1;
        }

    case 155:
      return recog_132 (x1, insn, pnum_clobbers);

    case 194:
      return recog_137 (x1, insn, pnum_clobbers);

    case 166:
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_15_operand (operands[3], E_SImode))
        return -1;
      switch (pattern456 (x2))
        {
        case 0:
          if (!(
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 10045; /* avx512f_vgetmantv8hf */

        case 1:
          if (!
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 10049; /* avx512f_vgetmantv4sf */

        case 2:
          if (!(
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 10053; /* avx512f_vgetmantv2df */

        default:
          return -1;
        }

    case 186:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1280 (x2, 
E_QImode, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10058; /* avx512bw_dbpsadbwv8hi_mask */

        case E_V16HImode:
          if (pattern1280 (x2, 
E_HImode, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10060; /* avx512bw_dbpsadbwv16hi_mask */

        case E_V32HImode:
          if (pattern1280 (x2, 
E_SImode, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10062; /* avx512bw_dbpsadbwv32hi_mask */

        default:
          return -1;
        }

    case 195:
      switch (pattern475 (x2))
        {
        case 0:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10118; /* vpmadd52luqv8di_maskz_1 */

        case 1:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10120; /* vpmadd52luqv4di_maskz_1 */

        case 2:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10122; /* vpmadd52luqv2di_maskz_1 */

        case 3:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10124; /* vpmadd52luqv8di_mask */

        case 4:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10126; /* vpmadd52luqv4di_mask */

        case 5:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10128; /* vpmadd52luqv2di_mask */

        default:
          return -1;
        }

    case 196:
      switch (pattern475 (x2))
        {
        case 0:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10119; /* vpmadd52huqv8di_maskz_1 */

        case 1:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10121; /* vpmadd52huqv4di_maskz_1 */

        case 2:
          if (!(
#line 30255 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10123; /* vpmadd52huqv2di_maskz_1 */

        case 3:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10125; /* vpmadd52huqv8di_mask */

        case 4:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10127; /* vpmadd52huqv4di_mask */

        case 5:
          if (!(
#line 30271 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10129; /* vpmadd52huqv2di_mask */

        default:
          return -1;
        }

    case 198:
      switch (pattern472 (x2, 
E_VOIDmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10169; /* vgf2p8affineinvqb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10171; /* vgf2p8affineinvqb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10173; /* vgf2p8affineinvqb_v16qi_mask */

        default:
          return -1;
        }

    case 199:
      switch (pattern472 (x2, 
E_VOIDmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10175; /* vgf2p8affineqb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10177; /* vgf2p8affineqb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10179; /* vgf2p8affineqb_v16qi_mask */

        default:
          return -1;
        }

    case 202:
      return recog_141 (x1, insn, pnum_clobbers);

    case 201:
      return recog_142 (x1, insn, pnum_clobbers);

    case 203:
      return recog_136 (x1, insn, pnum_clobbers);

    case 204:
      return recog_135 (x1, insn, pnum_clobbers);

    case 205:
      switch (pattern482 (x2))
        {
        case 0:
          if (!(
#line 30622 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10279; /* vpdpbusd_v16si_mask */

        case 1:
          if (!(
#line 30622 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10280; /* vpdpbusd_v8si_mask */

        case 2:
          if (!(
#line 30622 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10281; /* vpdpbusd_v4si_mask */

        case 3:
          if (!(
#line 30651 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10282; /* vpdpbusd_v16si_maskz_1 */

        case 4:
          if (!(
#line 30651 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10283; /* vpdpbusd_v8si_maskz_1 */

        case 5:
          if (!(
#line 30651 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10284; /* vpdpbusd_v4si_maskz_1 */

        default:
          return -1;
        }

    case 206:
      switch (pattern482 (x2))
        {
        case 0:
          if (!(
#line 30691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10288; /* vpdpbusds_v16si_mask */

        case 1:
          if (!(
#line 30691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10289; /* vpdpbusds_v8si_mask */

        case 2:
          if (!(
#line 30691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10290; /* vpdpbusds_v4si_mask */

        case 3:
          if (!(
#line 30720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10291; /* vpdpbusds_v16si_maskz_1 */

        case 4:
          if (!(
#line 30720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10292; /* vpdpbusds_v8si_maskz_1 */

        case 5:
          if (!(
#line 30720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10293; /* vpdpbusds_v4si_maskz_1 */

        default:
          return -1;
        }

    case 207:
      switch (pattern482 (x2))
        {
        case 0:
          if (!(
#line 30760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10297; /* vpdpwssd_v16si_mask */

        case 1:
          if (!(
#line 30760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10298; /* vpdpwssd_v8si_mask */

        case 2:
          if (!(
#line 30760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10299; /* vpdpwssd_v4si_mask */

        case 3:
          if (!(
#line 30789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10300; /* vpdpwssd_v16si_maskz_1 */

        case 4:
          if (!(
#line 30789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10301; /* vpdpwssd_v8si_maskz_1 */

        case 5:
          if (!(
#line 30789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10302; /* vpdpwssd_v4si_maskz_1 */

        default:
          return -1;
        }

    case 208:
      switch (pattern482 (x2))
        {
        case 0:
          if (!(
#line 30829 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10306; /* vpdpwssds_v16si_mask */

        case 1:
          if (!(
#line 30829 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10307; /* vpdpwssds_v8si_mask */

        case 2:
          if (!(
#line 30829 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10308; /* vpdpwssds_v4si_mask */

        case 3:
          if (!(
#line 30858 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10309; /* vpdpwssds_v16si_maskz_1 */

        case 4:
          if (!(
#line 30858 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10310; /* vpdpwssds_v8si_maskz_1 */

        case 5:
          if (!(
#line 30858 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10311; /* vpdpwssds_v4si_maskz_1 */

        default:
          return -1;
        }

    case 216:
      return recog_138 (x1, insn, pnum_clobbers);

    case 227:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10392; /* vpdpbssd_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10398; /* vpdpbssd_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10404; /* vpdpbssd_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10410; /* *vpdpbssd_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10416; /* *vpdpbssd_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10422; /* *vpdpbssd_v4si_maskz */

        default:
          return -1;
        }

    case 228:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10393; /* vpdpbssds_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10399; /* vpdpbssds_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10405; /* vpdpbssds_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10411; /* *vpdpbssds_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10417; /* *vpdpbssds_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10423; /* *vpdpbssds_v4si_maskz */

        default:
          return -1;
        }

    case 229:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10394; /* vpdpbsud_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10400; /* vpdpbsud_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10406; /* vpdpbsud_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10412; /* *vpdpbsud_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10418; /* *vpdpbsud_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10424; /* *vpdpbsud_v4si_maskz */

        default:
          return -1;
        }

    case 230:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10395; /* vpdpbsuds_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10401; /* vpdpbsuds_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10407; /* vpdpbsuds_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10413; /* *vpdpbsuds_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10419; /* *vpdpbsuds_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10425; /* *vpdpbsuds_v4si_maskz */

        default:
          return -1;
        }

    case 231:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10396; /* vpdpbuud_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10402; /* vpdpbuud_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10408; /* vpdpbuud_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10414; /* *vpdpbuud_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10420; /* *vpdpbuud_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10426; /* *vpdpbuud_v4si_maskz */

        default:
          return -1;
        }

    case 232:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10397; /* vpdpbuuds_v16si_mask */

        case 1:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10403; /* vpdpbuuds_v8si_mask */

        case 2:
          if (!
#line 31599 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10409; /* vpdpbuuds_v4si_mask */

        case 3:
          if (!(
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10415; /* *vpdpbuuds_v16si_maskz */

        case 4:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10421; /* *vpdpbuuds_v8si_maskz */

        case 5:
          if (!
#line 31626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10427; /* *vpdpbuuds_v4si_maskz */

        default:
          return -1;
        }

    case 233:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10546; /* vpdpwusd_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10552; /* vpdpwusd_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10558; /* vpdpwusd_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10564; /* *vpdpwusd_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10570; /* *vpdpwusd_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10576; /* *vpdpwusd_v4si_maskz */

        default:
          return -1;
        }

    case 234:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10547; /* vpdpwusds_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10553; /* vpdpwusds_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10559; /* vpdpwusds_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10565; /* *vpdpwusds_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10571; /* *vpdpwusds_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10577; /* *vpdpwusds_v4si_maskz */

        default:
          return -1;
        }

    case 235:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10548; /* vpdpwsud_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10554; /* vpdpwsud_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10560; /* vpdpwsud_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10566; /* *vpdpwsud_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10572; /* *vpdpwsud_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10578; /* *vpdpwsud_v4si_maskz */

        default:
          return -1;
        }

    case 236:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10549; /* vpdpwsuds_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10555; /* vpdpwsuds_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10561; /* vpdpwsuds_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10567; /* *vpdpwsuds_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10573; /* *vpdpwsuds_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10579; /* *vpdpwsuds_v4si_maskz */

        default:
          return -1;
        }

    case 237:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10550; /* vpdpwuud_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10556; /* vpdpwuud_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10562; /* vpdpwuud_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10568; /* *vpdpwuud_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10574; /* *vpdpwuud_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10580; /* *vpdpwuud_v4si_maskz */

        default:
          return -1;
        }

    case 238:
      switch (pattern484 (x2))
        {
        case 0:
          if (!(
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10551; /* vpdpwuuds_v16si_mask */

        case 1:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10557; /* vpdpwuuds_v8si_mask */

        case 2:
          if (!
#line 32008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10563; /* vpdpwuuds_v4si_mask */

        case 3:
          if (!(
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10569; /* *vpdpwuuds_v16si_maskz */

        case 4:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10575; /* *vpdpwuuds_v8si_maskz */

        case 5:
          if (!
#line 32035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10581; /* *vpdpwuuds_v4si_maskz */

        default:
          return -1;
        }

    case 244:
      return recog_139 (x1, insn, pnum_clobbers);

    case 277:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1281 (x2, 
E_SImode, 
E_V32BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10936; /* avx10_2_minmaxbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1281 (x2, 
E_HImode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10938; /* avx10_2_minmaxbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1281 (x2, 
E_QImode, 
E_V8BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10940; /* avx10_2_minmaxbf16_v8bf_mask */

        default:
          return -1;
        }

    case 278:
      return recog_134 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_170 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (pattern929 (x4) != 0)
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  x7 = XVECEXP (x4, 0, 0);
  switch (XWINT (x7, 0))
    {
    case 8L:
      x8 = XVECEXP (x4, 0, 1);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (XWINT (x9, 0) != 10L)
        return -1;
      x10 = XVECEXP (x4, 0, 3);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x4, 0, 4);
      if (XWINT (x11, 0) != 12L)
        return -1;
      x12 = XVECEXP (x4, 0, 5);
      if (XWINT (x12, 0) != 13L)
        return -1;
      x13 = XVECEXP (x4, 0, 6);
      if (XWINT (x13, 0) != 14L)
        return -1;
      x14 = XVECEXP (x4, 0, 7);
      if (XWINT (x14, 0) != 15L)
        return -1;
      switch (pattern1821 (x2))
        {
        case 0:
          if (!(
#line 12704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5357; /* vec_extract_hi_v16sf_mask */

        case 1:
          if (!(
#line 12704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5358; /* vec_extract_hi_v16si_mask */

        default:
          return -1;
        }

    case 0L:
      x8 = XVECEXP (x4, 0, 1);
      if (XWINT (x8, 0) != 1L
          || pattern1557 (x4) != 0)
        return -1;
      switch (pattern1821 (x2))
        {
        case 0:
          if (!(
#line 12808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5361; /* vec_extract_lo_v16sf_mask */

        case 1:
          if (!(
#line 12808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5362; /* vec_extract_lo_v16si_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_175 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[6] = x5;
  res = recog_174 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x4, 0, 5);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x7 = XVECEXP (x4, 0, 6);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x8 = XVECEXP (x4, 0, 7);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern1470 (x4) != 0
      || pattern755 (x2, 
E_V16HImode) != 0
      || pattern900 (x4) != 0)
    return -1;
  x9 = XVECEXP (x4, 0, 8);
  operands[6] = x9;
  if (!const_8_to_11_operand (operands[6], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x4, 0, 9);
  operands[7] = x10;
  if (!const_8_to_11_operand (operands[7], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x4, 0, 10);
  operands[8] = x11;
  if (!const_8_to_11_operand (operands[8], E_VOIDmode))
    return -1;
  x12 = XVECEXP (x4, 0, 11);
  operands[9] = x12;
  if (!const_8_to_11_operand (operands[9], E_VOIDmode))
    return -1;
  x13 = XEXP (x2, 1);
  operands[10] = x13;
  if (!nonimm_or_0_operand (operands[10], E_V16HImode))
    return -1;
  x14 = XEXP (x2, 2);
  operands[11] = x14;
  if (!register_operand (operands[11], E_HImode)
      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))))
    return -1;
  return 8450; /* avx2_pshuflw_1_mask */
}

 int
recog_181 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      x5 = XEXP (x3, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x5;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          operands[2] = x4;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[1] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1282 (x2, 
E_V8HFmode) != 0
                  || !(
#line 1691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 2497; /* avx512f_movhf_mask */

            case E_V4SFmode:
              if (pattern1282 (x2, 
E_V4SFmode) != 0
                  || !
#line 1691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2498; /* avx512f_movsf_mask */

            case E_V2DFmode:
              if (pattern1282 (x2, 
E_V2DFmode) != 0
                  || !(
#line 1691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2499; /* avx512f_movdf_mask */

            default:
              return -1;
            }

        case VEC_DUPLICATE:
          operands[1] = x4;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          x7 = XEXP (x3, 2);
          operands[3] = x7;
          if (!const_int_operand (operands[3], E_SImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[4] = x8;
          x6 = XEXP (x2, 2);
          operands[5] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1283 (x2, 
E_V8DFmode, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12406 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512))))
                return -1;
              return 8394; /* avx512dq_vinsertf64x2_1_mask */

            case E_V8DImode:
              if (pattern1283 (x2, 
E_V8DImode, 
E_V2DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512))))
                return -1;
              return 8396; /* avx512dq_vinserti64x2_1_mask */

            case E_V16SFmode:
              if (pattern1283 (x2, 
E_V16SFmode, 
E_V4SFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8398; /* avx512f_vinsertf32x4_1_mask */

            case E_V16SImode:
              if (pattern1283 (x2, 
E_V16SImode, 
E_V4SImode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8400; /* avx512f_vinserti32x4_1_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x10 = XEXP (x4, 0);
      switch (GET_CODE (x10))
        {
        case SUBREG:
        case MEM:
          operands[1] = x10;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          x7 = XEXP (x3, 2);
          operands[3] = x7;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1284 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 1720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 2500; /* *avx512f_loadhf_mask */

            case E_V4SFmode:
              if (pattern1284 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 1720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2501; /* *avx512f_loadsf_mask */

            case E_V2DFmode:
              if (pattern1284 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !
#line 1720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2502; /* *avx512f_loaddf_mask */

            default:
              return -1;
            }

        case SQRT:
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x11 = XEXP (x10, 0);
          operands[1] = x11;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1285 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2954; /* *avx512fp16_vmsqrtv8hf2_mask */

            case E_V4SFmode:
              if (pattern1285 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2958; /* *sse_vmsqrtv4sf2_mask */

            case E_V2DFmode:
              if (pattern1285 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2962; /* *sse2_vmsqrtv2df2_mask */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x10, 0) != 1
              || XINT (x10, 1) != 55
              || GET_MODE (x10) != E_HFmode)
            return -1;
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1002 (x2, 
E_V8HFmode) != 0)
            return -1;
          x12 = XVECEXP (x10, 0, 0);
          operands[1] = x12;
          if (!nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
            return -1;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_V8HFmode)
              || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3250 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2993; /* *avx512fp16_vmrsqrtv8hf2 */

        case FLOAT_EXTEND:
          x6 = XEXP (x2, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          x7 = XEXP (x3, 2);
          operands[4] = x7;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x8 = XEXP (x2, 1);
          operands[2] = x8;
          x11 = XEXP (x10, 0);
          switch (GET_CODE (x11))
            {
            case VEC_SELECT:
              if (GET_MODE (x11) != E_HFmode)
                return -1;
              x13 = XEXP (x11, 1);
              if (GET_CODE (x13) != PARALLEL
                  || XVECLEN (x13, 0) != 1)
                return -1;
              x14 = XVECEXP (x13, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XEXP (x11, 0);
              operands[1] = x15;
              if (!register_operand (operands[1], E_V8HFmode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1457 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4763; /* avx512fp16_vcvtsh2sd_mask */

                case E_V4SFmode:
                  if (pattern1457 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4767; /* avx512fp16_vcvtsh2ss_mask */

                default:
                  return -1;
                }

            case SUBREG:
            case MEM:
              operands[1] = x11;
              if (!memory_operand (operands[1], E_HFmode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1457 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8325 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4771; /* avx512fp16_vcvtsh2sd_mask_mem */

                case E_V4SFmode:
                  if (pattern1457 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8325 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4773; /* avx512fp16_vcvtsh2ss_mask_mem */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          x11 = XEXP (x10, 0);
          switch (GET_CODE (x11))
            {
            case VEC_SELECT:
              x13 = XEXP (x11, 1);
              if (GET_CODE (x13) != PARALLEL
                  || XVECLEN (x13, 0) != 1)
                return -1;
              x14 = XVECEXP (x13, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x6 = XEXP (x2, 2);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                  || pattern883 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                return -1;
              x15 = XEXP (x11, 0);
              operands[1] = x15;
              x5 = XEXP (x3, 1);
              operands[3] = x5;
              if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                return -1;
              x7 = XEXP (x3, 2);
              operands[4] = x7;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x8 = XEXP (x2, 1);
              operands[2] = x8;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (x11))
                {
                case E_DFmode:
                  if (!register_operand (operands[1], E_V2DFmode)
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4776; /* avx512fp16_vcvtsd2sh_mask */

                case E_SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4780; /* avx512fp16_vcvtss2sh_mask */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              x7 = XEXP (x3, 2);
              switch (GET_CODE (x7))
                {
                case REG:
                case SUBREG:
                  operands[4] = x7;
                  if (!register_operand (operands[4], E_QImode))
                    return -1;
                  x6 = XEXP (x2, 2);
                  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                      || pattern883 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                    return -1;
                  operands[1] = x11;
                  x5 = XEXP (x3, 1);
                  operands[3] = x5;
                  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                    return -1;
                  x8 = XEXP (x2, 1);
                  operands[2] = x8;
                  if (!register_operand (operands[2], E_V8HFmode))
                    return -1;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_SFmode:
                      if (!memory_operand (operands[1], E_SFmode)
                          || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4783; /* avx512fp16_vcvtss2sh_mask_mem */

                    case E_DFmode:
                      if (!memory_operand (operands[1], E_DFmode)
                          || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4785; /* avx512fp16_vcvtsd2sh_mask_mem */

                    default:
                      return -1;
                    }

                case CONST_INT:
                  if (XWINT (x7, 0) != 1L
                      || pattern883 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0
                      || pattern1370 (x2, 
E_V4SFmode, 
E_V2DFmode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 5170; /* sse2_cvtsd2ss_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2763; /* avx512fp16_vmaddv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2771; /* sse_vmaddv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2779; /* sse2_vmaddv2df3_mask */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2767; /* avx512fp16_vmsubv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2775; /* sse_vmsubv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2783; /* sse2_vmsubv2df3_mask */

        default:
          return -1;
        }

    case MULT:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2829; /* avx512fp16_vmmulv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2837; /* sse_vmmulv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2845; /* sse2_vmmulv2df3_mask */

        default:
          return -1;
        }

    case DIV:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2833; /* avx512fp16_vmdivv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2841; /* sse_vmdivv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2849; /* sse2_vmdivv2df3_mask */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_147 (x1, insn, pnum_clobbers);

    case SQRT:
      x6 = XEXP (x2, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      x7 = XEXP (x3, 2);
      operands[4] = x7;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[2] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1211 (x2, 
E_V8HFmode) != 0
              || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2942; /* avx512fp16_vmsqrtv8hf2_mask */

        case E_V4SFmode:
          if (pattern1211 (x2, 
E_V4SFmode) != 0
              || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2946; /* sse_vmsqrtv4sf2_mask */

        case E_V2DFmode:
          if (pattern1211 (x2, 
E_V2DFmode) != 0
              || !(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2950; /* sse2_vmsqrtv2df2_mask */

        default:
          return -1;
        }

    case SMAX:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3134; /* *avx512fp16_vmsmaxv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3142; /* *sse_vmsmaxv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3150; /* *sse2_vmsmaxv2df3_mask */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern304 (x2))
        {
        case 0:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3138; /* *avx512fp16_vmsminv8hf3_mask */

        case 1:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3146; /* *sse_vmsminv4sf3_mask */

        case 2:
          if (!(
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3154; /* *sse2_vmsminv2df3_mask */

        default:
          return -1;
        }

    case FMA:
      return recog_146 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      if (pattern305 (x4, 
1, 
E_V2SFmode, 
E_V2DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V2DFmode
          || pattern1370 (x2, 
E_V2DFmode, 
E_V4SFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 5175; /* sse2_cvtss2sd_mask */

    default:
      return -1;
    }
}

 int
recog_196 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern127 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3730; /* *xorv8sf3_mask */

        case E_V4SFmode:
          if (pattern127 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 3736; /* *xorv4sf3_mask */

        case E_V4DFmode:
          if (pattern127 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3742; /* *xorv4df3_mask */

        case E_V2DFmode:
          if (pattern127 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3748; /* *xorv2df3_mask */

        case E_V16SFmode:
          if (pattern128 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 32 != 16)) && 
#line 493 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3760; /* *xorv16sf3_mask */

        case E_V8DFmode:
          if (pattern128 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!true || 64 != 16)) && 
#line 494 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3766; /* *xorv8df3_mask */

        case E_V16SImode:
          if (pattern485 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V16SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8013; /* *xorv16si3_mask */

        case E_V8SImode:
          if (pattern485 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8019; /* *xorv8si3_mask */

        case E_V4SImode:
          if (pattern485 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))))
            return -1;
          return 8025; /* *xorv4si3_mask */

        case E_V8DImode:
          if (pattern485 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V8DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8031; /* *xorv8di3_mask */

        case E_V4DImode:
          if (pattern485 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8037; /* *xorv4di3_mask */

        case E_V2DImode:
          if (pattern485 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))))
            return -1;
          return 8043; /* *xorv2di3_mask */

        default:
          return -1;
        }

    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1016 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 7961; /* one_cmplv16si2_mask */

        case E_V8DImode:
          if (pattern1016 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 7963; /* one_cmplv8di2_mask */

        case E_V8SImode:
          if (pattern1016 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode)) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 7971; /* one_cmplv8si2_mask */

        case E_V4SImode:
          if (pattern1016 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || SImode == SImode
       || SImode == DImode))))
            return -1;
          return 7973; /* one_cmplv4si2_mask */

        case E_V4DImode:
          if (pattern1016 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode)) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 7975; /* one_cmplv4di2_mask */

        case E_V2DImode:
          if (pattern1016 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!true
       || DImode == SImode
       || DImode == DImode))))
            return -1;
          return 7977; /* one_cmplv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_207 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x2) != E_V64QImode
          || !memory_operand (operands[1], E_V64QImode)
          || !(
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 514 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10989; /* avx10_2_vmovrsbv64qi */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode
          || !memory_operand (operands[1], E_V32QImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10991; /* avx10_2_vmovrsbv32qi */

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || !memory_operand (operands[1], E_V16QImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10993; /* avx10_2_vmovrsbv16qi */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !memory_operand (operands[1], E_V32HImode)
          || !(
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 515 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10995; /* avx10_2_vmovrswv32hi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !memory_operand (operands[1], E_V16HImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10997; /* avx10_2_vmovrswv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !memory_operand (operands[1], E_V8HImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 10999; /* avx10_2_vmovrswv8hi */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || !memory_operand (operands[1], E_V16SImode)
          || !(
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 516 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 11001; /* avx10_2_vmovrsdv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !memory_operand (operands[1], E_V8SImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11003; /* avx10_2_vmovrsdv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || !memory_operand (operands[1], E_V4SImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11005; /* avx10_2_vmovrsdv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !memory_operand (operands[1], E_V8DImode)
          || !(
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 11007; /* avx10_2_vmovrsqv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !memory_operand (operands[1], E_V4DImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11009; /* avx10_2_vmovrsqv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !memory_operand (operands[1], E_V2DImode)
          || !
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS))
        return -1;
      return 11011; /* avx10_2_vmovrsqv2di */

    default:
      return -1;
    }
}

 int
recog_215 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || !nonimmediate_operand (operands[1], E_V16SImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10075; /* *conflictv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10077; /* *conflictv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10079; /* *conflictv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10081; /* *conflictv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10083; /* *conflictv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10085; /* *conflictv2di */

    default:
      return -1;
    }
}

 int
recog_222 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case PLUS:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2764; /* avx512fp16_vmaddv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2772; /* sse_vmaddv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2780; /* sse2_vmaddv2df3_mask_round */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2768; /* avx512fp16_vmsubv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2776; /* sse_vmsubv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2784; /* sse2_vmsubv2df3_mask_round */

        default:
          return -1;
        }

    case MULT:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2830; /* avx512fp16_vmmulv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2838; /* sse_vmmulv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2846; /* sse2_vmmulv2df3_mask_round */

        default:
          return -1;
        }

    case DIV:
      switch (pattern779 (x2))
        {
        case 0:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2834; /* avx512fp16_vmdivv8hf3_mask_round */

        case 1:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2842; /* sse_vmdivv4sf3_mask_round */

        case 2:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2850; /* sse2_vmdivv2df3_mask_round */

        default:
          return -1;
        }

    case SQRT:
      x6 = XEXP (x3, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x4, 1);
      operands[3] = x8;
      x9 = XEXP (x4, 2);
      operands[4] = x9;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[2] = x10;
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1550 (x2, 
E_V8HFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 2943; /* avx512fp16_vmsqrtv8hf2_mask_round */

        case E_V4SFmode:
          if (pattern1550 (x2, 
E_V4SFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 2947; /* sse_vmsqrtv4sf2_mask_round */

        case E_V2DFmode:
          if (pattern1550 (x2, 
E_V2DFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 2951; /* sse2_vmsqrtv2df2_mask_round */

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case SQRT:
          x6 = XEXP (x3, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x12 = XEXP (x7, 0);
          operands[1] = x12;
          x8 = XEXP (x4, 1);
          operands[3] = x8;
          x9 = XEXP (x4, 2);
          operands[4] = x9;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x10 = XEXP (x3, 1);
          operands[2] = x10;
          if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1584 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                return -1;
              return 2955; /* *avx512fp16_vmsqrtv8hf2_mask_round */

            case E_V4SFmode:
              if (pattern1584 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
                return -1;
              return 2959; /* *sse_vmsqrtv4sf2_mask_round */

            case E_V2DFmode:
              if (pattern1584 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                return -1;
              return 2963; /* *sse2_vmsqrtv2df2_mask_round */

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x12 = XEXP (x7, 0);
          if (GET_CODE (x12) != VEC_SELECT
              || GET_MODE (x12) != E_HFmode
              || pattern1216 (x3) != 0)
            return -1;
          x13 = XEXP (x12, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x8 = XEXP (x4, 1);
          operands[3] = x8;
          x9 = XEXP (x4, 2);
          operands[4] = x9;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          x10 = XEXP (x3, 1);
          operands[2] = x10;
          if (!const48_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern1764 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4765; /* avx512fp16_vcvtsh2sd_mask_round */

            case E_V4SFmode:
              if (pattern1764 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4769; /* avx512fp16_vcvtsh2ss_mask_round */

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
            return -1;
          x12 = XEXP (x7, 0);
          switch (GET_CODE (x12))
            {
            case VEC_SELECT:
              if (pattern1216 (x3) != 0
                  || pattern1472 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
                return -1;
              x13 = XEXP (x12, 0);
              operands[1] = x13;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
                return -1;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[2] = x10;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (x12))
                {
                case E_DFmode:
                  if (!register_operand (operands[1], E_V2DFmode)
                      || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4777; /* avx512fp16_vcvtsd2sh_mask_round */

                case E_SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4781; /* avx512fp16_vcvtss2sh_mask_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[2] = x12;
              if (!nonimmediate_operand (operands[2], E_V2DFmode))
                return -1;
              x9 = XEXP (x4, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
                  || pattern1472 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              operands[1] = x8;
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[3] = x10;
              if (!nonimm_or_0_operand (operands[3], E_V4SFmode))
                return -1;
              x6 = XEXP (x3, 2);
              operands[4] = x6;
              if (!register_operand (operands[4], E_QImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 5171; /* sse2_cvtsd2ss_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SMAX:
      switch (pattern780 (x2))
        {
        case 0:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 3136; /* *avx512fp16_vmsmaxv8hf3_mask_round */

        case 1:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 3144; /* *sse_vmsmaxv4sf3_mask_round */

        case 2:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 3152; /* *sse2_vmsmaxv2df3_mask_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern780 (x2))
        {
        case 0:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
            return -1;
          return 3140; /* *avx512fp16_vmsminv8hf3_mask_round */

        case 1:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
            return -1;
          return 3148; /* *sse_vmsminv4sf3_mask_round */

        case 2:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
            return -1;
          return 3156; /* *sse2_vmsminv2df3_mask_round */

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x5, 0))
        {
        case 2:
          x6 = XEXP (x3, 2);
          if (GET_CODE (x6) != CONST_INT)
            return -1;
          switch (XINT (x5, 1))
            {
            case 63:
              switch (pattern1124 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3160; /* avx512fp16_ieee_vmmaxv8hf3_mask_round */

                case 1:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
                    return -1;
                  return 3168; /* sse_ieee_vmmaxv4sf3_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3176; /* sse2_ieee_vmmaxv2df3_mask_round */

                default:
                  return -1;
                }

            case 62:
              switch (pattern1124 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3164; /* avx512fp16_ieee_vmminv8hf3_mask_round */

                case 1:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))))
                    return -1;
                  return 3172; /* sse_ieee_vmminv4sf3_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3180; /* sse2_ieee_vmminv2df3_mask_round */

                default:
                  return -1;
                }

            case 221:
              if (pattern1125 (x2) != 0
                  || !(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 412 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4417; /* avx512fp16_fmulcsh_v8hf_mask_round */

            case 222:
              if (pattern1125 (x2) != 0
                  || !(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 412 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4421; /* avx512fp16_fcmulcsh_v8hf_mask_round */

            case 58:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[1] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[2] = x15;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[5] = x11;
              if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
                return -1;
              switch (pattern1644 (x2))
                {
                case 0:
                  if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 5424; /* avx512f_vmscalefv8hf_mask_round */

                case 1:
                  if (!
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 5428; /* avx512f_vmscalefv4sf_mask_round */

                case 2:
                  if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 5432; /* avx512f_vmscalefv2df_mask_round */

                default:
                  return -1;
                }

            case 165:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[1] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[2] = x15;
              x8 = XEXP (x4, 1);
              operands[3] = x8;
              x9 = XEXP (x4, 2);
              operands[4] = x9;
              if (!register_operand (operands[4], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[5] = x11;
              if (!const48_operand (operands[5], E_SImode))
                return -1;
              switch (pattern1644 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 7074; /* avx512f_sgetexpv8hf_mask_round */

                case 1:
                  if (!
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7078; /* avx512f_sgetexpv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7082; /* avx512f_sgetexpv2df_mask_round */

                default:
                  return -1;
                }

            case 94:
              if (XWINT (x6, 0) != 1L)
                return -1;
              x14 = XVECEXP (x5, 0, 0);
              operands[2] = x14;
              x15 = XVECEXP (x5, 0, 1);
              operands[3] = x15;
              if (!const_0_to_255_operand (operands[3], E_SImode))
                return -1;
              x8 = XEXP (x4, 1);
              operands[4] = x8;
              x9 = XEXP (x4, 2);
              operands[5] = x9;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              x10 = XEXP (x3, 1);
              operands[1] = x10;
              x11 = XVECEXP (x2, 0, 1);
              operands[6] = x11;
              if (!const48_operand (operands[6], E_SImode))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (pattern1732 (x2, 
E_V8HFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 7178; /* avx512f_rndscalev8hf_mask_round */

                case E_V4SFmode:
                  if (pattern1732 (x2, 
E_V4SFmode) != 0
                      || !
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7182; /* avx512f_rndscalev4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1732 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7186; /* avx512f_rndscalev2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 3:
          x6 = XEXP (x3, 2);
          if (GET_CODE (x6) != CONST_INT)
            return -1;
          x14 = XVECEXP (x5, 0, 0);
          operands[1] = x14;
          x15 = XVECEXP (x5, 0, 1);
          operands[2] = x15;
          x16 = XVECEXP (x5, 0, 2);
          operands[3] = x16;
          switch (XINT (x5, 1))
            {
            case 192:
              switch (pattern1397 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 3228; /* reducesv8hf_mask_round */

                case 1:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))))))
                    return -1;
                  return 3232; /* reducesv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 3236; /* reducesv2df_mask_round */

                default:
                  return -1;
                }

            case 217:
              switch (pattern1398 (x2))
                {
                case 0:
                  if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 394 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4405; /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */

                case 1:
                  if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4411; /* avx512fp16_fmaddcsh_v8hf_mask_round */

                default:
                  return -1;
                }

            case 219:
              switch (pattern1398 (x2))
                {
                case 0:
                  if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 394 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4409; /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */

                case 1:
                  if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 4413; /* avx512fp16_fcmaddcsh_v8hf_mask_round */

                default:
                  return -1;
                }

            case 194:
              if (XWINT (x6, 0) != 1L
                  || !const_0_to_15_operand (operands[3], E_SImode))
                return -1;
              x8 = XEXP (x4, 1);
              operands[4] = x8;
              x9 = XEXP (x4, 2);
              operands[5] = x9;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              x11 = XVECEXP (x2, 0, 1);
              operands[6] = x11;
              if (!const48_operand (operands[6], E_SImode))
                return -1;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1395 (x2, 
E_V4SFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ))))
                    return -1;
                  return 9986; /* avx512dq_rangesv4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1395 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 9990; /* avx512dq_rangesv2df_mask_round */

                default:
                  return -1;
                }

            case 166:
              if (XWINT (x6, 0) != 1L
                  || !const_0_to_15_operand (operands[3], E_SImode))
                return -1;
              switch (pattern1396 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 10048; /* avx512f_vgetmantv8hf_mask_round */

                case 1:
                  if (!
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 10052; /* avx512f_vgetmantv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 10056; /* avx512f_vgetmantv2df_mask_round */

                default:
                  return -1;
                }

            case 278:
              switch (pattern1397 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))))
                    return -1;
                  return 10980; /* avx10_2_minmaxsv8hf_mask_round */

                case 1:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10984; /* avx10_2_minmaxsv4sf_mask_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 378 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 10988; /* avx10_2_minmaxsv2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 4:
          if (XINT (x5, 1) != 163)
            return -1;
          x14 = XVECEXP (x5, 0, 0);
          operands[1] = x14;
          x15 = XVECEXP (x5, 0, 1);
          operands[2] = x15;
          x16 = XVECEXP (x5, 0, 2);
          operands[3] = x16;
          x17 = XVECEXP (x5, 0, 3);
          operands[4] = x17;
          if (!const_0_to_255_operand (operands[4], E_SImode))
            return -1;
          x11 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x11, E_SImode))
            return -1;
          x8 = XEXP (x4, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x6 = XEXP (x3, 2);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x9 = XEXP (x4, 2);
              operands[6] = x9;
              if (!register_operand (operands[6], E_QImode))
                return -1;
              operands[7] = x11;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[2]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1765 (x2, 
E_V4SFmode, 
E_V4SImode) != 0
                      || !
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7136; /* avx512f_sfixupimmv4sf_maskz_1_round */

                case E_V2DFmode:
                  if (pattern1765 (x2, 
E_V2DFmode, 
E_V2DImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 154 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14207 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))))
                    return -1;
                  return 7140; /* avx512f_sfixupimmv2df_maskz_1_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              if (!rtx_equal_p (x8, operands[2]))
                return -1;
              x9 = XEXP (x4, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x6 = XEXP (x3, 2);
              operands[5] = x6;
              if (!register_operand (operands[5], E_QImode))
                return -1;
              operands[6] = x11;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1766 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                      || !
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7142; /* avx512f_sfixupimmv4sf_mask_round */

                case E_V2DFmode:
                  if (pattern1766 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14226 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 7144; /* avx512f_sfixupimmv2df_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FMA:
      return recog_217 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      if (GET_MODE (x5) != E_V2DFmode)
        return -1;
      x7 = XEXP (x5, 0);
      if (pattern907 (x7, 
2, 
E_V2SFmode) != 0)
        return -1;
      x18 = XEXP (x7, 1);
      x19 = XVECEXP (x18, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern1475 (x2, 
E_V2DFmode) != 0)
        return -1;
      x12 = XEXP (x7, 0);
      operands[2] = x12;
      if (!register_operand (operands[2], E_V4SFmode))
        return -1;
      x8 = XEXP (x4, 1);
      operands[1] = x8;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[3] = x10;
      if (!nonimm_or_0_operand (operands[3], E_V2DFmode))
        return -1;
      x6 = XEXP (x3, 2);
      operands[4] = x6;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x11 = XVECEXP (x2, 0, 1);
      operands[5] = x11;
      if (!const48_operand (operands[5], E_SImode)
          || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 5176; /* sse2_cvtss2sd_mask_round */

    default:
      return -1;
    }
}

 int
recog_232 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern488 (x3))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2684; /* *addv32hf3_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2692; /* *addv16hf3_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2700; /* *addv8hf3_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2708; /* *addv16sf3_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2716; /* *addv8sf3_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2724; /* *addv4sf3_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2732; /* *addv8df3_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2740; /* *addv4df3_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2748; /* *addv2df3_round */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_228 (x1, insn, pnum_clobbers);

    case MINUS:
      switch (pattern488 (x3))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2688; /* *subv32hf3_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2696; /* *subv16hf3_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2704; /* *subv8hf3_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2712; /* *subv16sf3_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2720; /* *subv8sf3_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2728; /* *subv4sf3_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2736; /* *subv8df3_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2744; /* *subv4df3_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2752; /* *subv2df3_round */

        default:
          return -1;
        }

    case MULT:
      switch (pattern488 (x3))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && 1 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2786; /* *mulv32hf3_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && 1 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2790; /* *mulv16hf3_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && 1 && ((V8HFmode == V16SFmode
							       || V8HFmode == V8DFmode
							       || V8HFmode == V8DImode
							       || V8HFmode == V16SImode
							       || V8HFmode == V32HImode
							       || V8HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8HFmode == V8SFmode
								       || V8HFmode == V4DFmode
								       || V8HFmode == V4DImode
								       || V8HFmode == V8SImode
								       || V8HFmode == V16HImode
								       || V8HFmode == V16HFmode)))) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2794; /* *mulv8hf3_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2798; /* *mulv16sf3_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2802; /* *mulv8sf3_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && 1 && ((V4SFmode == V16SFmode
							       || V4SFmode == V8DFmode
							       || V4SFmode == V8DImode
							       || V4SFmode == V16SImode
							       || V4SFmode == V32HImode
							       || V4SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4SFmode == V8SFmode
								       || V4SFmode == V4DFmode
								       || V4SFmode == V4DImode
								       || V4SFmode == V8SImode
								       || V4SFmode == V16HImode
								       || V4SFmode == V16HFmode))))))
            return -1;
          return 2806; /* *mulv4sf3_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && 1 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2810; /* *mulv8df3_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && 1 && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2814; /* *mulv4df3_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && 1 && ((V2DFmode == V16SFmode
							       || V2DFmode == V8DFmode
							       || V2DFmode == V8DImode
							       || V2DFmode == V16SImode
							       || V2DFmode == V32HImode
							       || V2DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V2DFmode == V8SFmode
								       || V2DFmode == V4DFmode
								       || V2DFmode == V4DImode
								       || V2DFmode == V8SImode
								       || V2DFmode == V16HImode
								       || V2DFmode == V16HFmode)))) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2818; /* *mulv2df3_round */

        default:
          return -1;
        }

    case DIV:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x3, 0, 1);
      operands[3] = x7;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern487 (x3, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2852; /* avx512fp16_divv32hf3_round */

        case E_V16HFmode:
          if (pattern487 (x3, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2856; /* avx512fp16_divv16hf3_round */

        case E_V16SFmode:
          if (pattern487 (x3, 
E_V16SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2862; /* avx512f_divv16sf3_round */

        case E_V8SFmode:
          if (pattern487 (x3, 
E_V8SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2866; /* avx_divv8sf3_round */

        case E_V8DFmode:
          if (pattern487 (x3, 
E_V8DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2872; /* avx512f_divv8df3_round */

        case E_V4DFmode:
          if (pattern487 (x3, 
E_V4DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2876; /* avx_divv4df3_round */

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1018 (x3, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V32HFmode == V16SFmode
							       || V32HFmode == V8DFmode
							       || V32HFmode == V8DImode
							       || V32HFmode == V16SImode
							       || V32HFmode == V32HImode
							       || V32HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HFmode == V8SFmode
								       || V32HFmode == V4DFmode
								       || V32HFmode == V4DImode
								       || V32HFmode == V8SImode
								       || V32HFmode == V16HImode
								       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2911; /* avx512fp16_sqrtv32hf2_round */

        case E_V16HFmode:
          if (pattern1018 (x3, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16HFmode == V16SFmode
							       || V16HFmode == V8DFmode
							       || V16HFmode == V8DImode
							       || V16HFmode == V16SImode
							       || V16HFmode == V32HImode
							       || V16HFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HFmode == V8SFmode
								       || V16HFmode == V4DFmode
								       || V16HFmode == V4DImode
								       || V16HFmode == V8SImode
								       || V16HFmode == V16HImode
								       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2915; /* avx512fp16_sqrtv16hf2_round */

        case E_V16SFmode:
          if (pattern1018 (x3, 
E_V16SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2921; /* avx512f_sqrtv16sf2_round */

        case E_V8SFmode:
          if (pattern1018 (x3, 
E_V8SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2925; /* avx_sqrtv8sf2_round */

        case E_V8DFmode:
          if (pattern1018 (x3, 
E_V8DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2931; /* avx512f_sqrtv8df2_round */

        case E_V4DFmode:
          if (pattern1018 (x3, 
E_V4DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2935; /* avx_sqrtv4df2_round */

        default:
          return -1;
        }

    case SMAX:
      switch (pattern489 (x3))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V32HFmode == V16SFmode
									       || V32HFmode == V8DFmode
									       || V32HFmode == V8DImode
									       || V32HFmode == V16SImode
									       || V32HFmode == V32HImode
									       || V32HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HFmode == V8SFmode
										       || V32HFmode == V4DFmode
										       || V32HFmode == V4DImode
										       || V32HFmode == V8SImode
										       || V32HFmode == V16HImode
										       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2995; /* *smaxv32hf3_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16HFmode == V16SFmode
									       || V16HFmode == V8DFmode
									       || V16HFmode == V8DImode
									       || V16HFmode == V16SImode
									       || V16HFmode == V32HImode
									       || V16HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HFmode == V8SFmode
										       || V16HFmode == V4DFmode
										       || V16HFmode == V4DImode
										       || V16HFmode == V8SImode
										       || V16HFmode == V16HImode
										       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3003; /* *smaxv16hf3_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3015; /* *smaxv16sf3_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3023; /* *smaxv8sf3_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3035; /* *smaxv8df3_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3043; /* *smaxv4df3_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern489 (x3))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V32HFmode == V16SFmode
									       || V32HFmode == V8DFmode
									       || V32HFmode == V8DImode
									       || V32HFmode == V16SImode
									       || V32HFmode == V32HImode
									       || V32HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HFmode == V8SFmode
										       || V32HFmode == V4DFmode
										       || V32HFmode == V4DImode
										       || V32HFmode == V8SImode
										       || V32HFmode == V16HImode
										       || V32HFmode == V16HFmode)))) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2999; /* *sminv32hf3_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16HFmode == V16SFmode
									       || V16HFmode == V8DFmode
									       || V16HFmode == V8DImode
									       || V16HFmode == V16SImode
									       || V16HFmode == V32HImode
									       || V16HFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HFmode == V8SFmode
										       || V16HFmode == V4DFmode
										       || V16HFmode == V4DImode
										       || V16HFmode == V8SImode
										       || V16HFmode == V16HImode
										       || V16HFmode == V16HFmode)))) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3007; /* *sminv16hf3_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3019; /* *sminv16sf3_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3027; /* *sminv8sf3_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3039; /* *sminv8df3_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3047; /* *sminv4df3_round */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_229 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_230 (x1, insn, pnum_clobbers);

    case FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1021 (x3))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
							       || V16HImode == V8DFmode
							       || V16HImode == V8DImode
							       || V16HImode == V16SImode
							       || V16HImode == V32HImode
							       || V16HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HImode == V8SFmode
								       || V16HImode == V4DFmode
								       || V16HImode == V4DImode
								       || V16HImode == V8SImode
								       || V16HImode == V16HImode
								       || V16HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4487; /* avx512fp16_vcvtw2ph_v16hi_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
							       || V16SImode == V8DFmode
							       || V16SImode == V8DImode
							       || V16SImode == V16SImode
							       || V16SImode == V32HImode
							       || V16SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SImode == V8SFmode
								       || V16SImode == V4DFmode
								       || V16SImode == V4DImode
								       || V16SImode == V8SImode
								       || V16SImode == V16HImode
								       || V16SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4511; /* avx512fp16_vcvtdq2ph_v16si_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern490 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
							       || V32HImode == V8DFmode
							       || V32HImode == V8DImode
							       || V32HImode == V16SImode
							       || V32HImode == V32HImode
							       || V32HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HImode == V8SFmode
								       || V32HImode == V4DFmode
								       || V32HImode == V4DImode
								       || V32HImode == V8SImode
								       || V32HImode == V16HImode
								       || V32HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4495; /* avx512fp16_vcvtw2ph_v32hi_round */

        case E_V8HFmode:
          switch (pattern1022 (x3))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4503; /* avx512fp16_vcvtdq2ph_v8si_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4519; /* avx512fp16_vcvtqq2ph_v8di_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern490 (x3, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4816; /* floatv16siv16sf2_round */

        case E_V8SFmode:
          switch (pattern1023 (x3))
            {
            case 0:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 4820; /* floatv8siv8sf2_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4974; /* floatv8div8sf2_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1024 (x3, 
E_V8DFmode, 
E_V8DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4954; /* floatv8div8df2_round */

        case E_V4DFmode:
          if (pattern1024 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4962; /* floatv4div4df2_round */

        case E_V4SFmode:
          if (pattern1024 (x3, 
E_V4SFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4982; /* floatv4div4sf2_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1021 (x3))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
							       || V16HImode == V8DFmode
							       || V16HImode == V8DImode
							       || V16HImode == V16SImode
							       || V16HImode == V32HImode
							       || V16HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16HImode == V8SFmode
								       || V16HImode == V4DFmode
								       || V16HImode == V4DImode
								       || V16HImode == V8SImode
								       || V16HImode == V16HImode
								       || V16HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4491; /* avx512fp16_vcvtuw2ph_v16hi_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
							       || V16SImode == V8DFmode
							       || V16SImode == V8DImode
							       || V16SImode == V16SImode
							       || V16SImode == V32HImode
							       || V16SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SImode == V8SFmode
								       || V16SImode == V4DFmode
								       || V16SImode == V4DImode
								       || V16SImode == V8SImode
								       || V16SImode == V16HImode
								       || V16SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4515; /* avx512fp16_vcvtudq2ph_v16si_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern490 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
							       || V32HImode == V8DFmode
							       || V32HImode == V8DImode
							       || V32HImode == V16SImode
							       || V32HImode == V32HImode
							       || V32HImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V32HImode == V8SFmode
								       || V32HImode == V4DFmode
								       || V32HImode == V4DImode
								       || V32HImode == V8SImode
								       || V32HImode == V16HImode
								       || V32HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4499; /* avx512fp16_vcvtuw2ph_v32hi_round */

        case E_V8HFmode:
          switch (pattern1022 (x3))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
							       || V8SImode == V8DFmode
							       || V8SImode == V8DImode
							       || V8SImode == V16SImode
							       || V8SImode == V32HImode
							       || V8SImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SImode == V8SFmode
								       || V8SImode == V4DFmode
								       || V8SImode == V4DImode
								       || V8SImode == V8SImode
								       || V8SImode == V16HImode
								       || V8SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4507; /* avx512fp16_vcvtudq2ph_v8si_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4523; /* avx512fp16_vcvtuqq2ph_v8di_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern1024 (x3, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4826; /* *floatunsv16siv16sf2_round */

        case E_V8SFmode:
          switch (pattern1023 (x3))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4830; /* *floatunsv8siv8sf2_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DImode == V16SFmode
							       || V8DImode == V8DFmode
							       || V8DImode == V8DImode
							       || V8DImode == V16SImode
							       || V8DImode == V32HImode
							       || V8DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DImode == V8SFmode
								       || V8DImode == V4DFmode
								       || V8DImode == V4DImode
								       || V8DImode == V8SImode
								       || V8DImode == V16HImode
								       || V8DImode == V16HFmode)))) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4978; /* floatunsv8div8sf2_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1024 (x3, 
E_V8DFmode, 
E_V8DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4958; /* floatunsv8div8df2_round */

        case E_V4DFmode:
          if (pattern1024 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
							       || V4DFmode == V8DFmode
							       || V4DFmode == V8DImode
							       || V4DFmode == V16SImode
							       || V4DFmode == V32HImode
							       || V4DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DFmode == V8SFmode
								       || V4DFmode == V4DFmode
								       || V4DFmode == V4DImode
								       || V4DFmode == V8SImode
								       || V4DFmode == V16HImode
								       || V4DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4966; /* floatunsv4div4df2_round */

        case E_V4SFmode:
          if (pattern1024 (x3, 
E_V4SFmode, 
E_V4DImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DImode == V16SFmode
							       || V4DImode == V8DFmode
							       || V4DImode == V8DImode
							       || V4DImode == V16SImode
							       || V4DImode == V32HImode
							       || V4DImode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V4DImode == V8SFmode
								       || V4DImode == V4DFmode
								       || V4DImode == V4DImode
								       || V4DImode == V8SImode
								       || V4DImode == V16HImode
								       || V4DImode == V16HFmode)))) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4986; /* floatunsv4div4sf2_round */

        default:
          return -1;
        }

    case VEC_CONCAT:
      return recog_231 (x1, insn, pnum_clobbers);

    case FIX:
      switch (pattern492 (x3))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
									       || V16HImode == V8DFmode
									       || V16HImode == V8DImode
									       || V16HImode == V16SImode
									       || V16HImode == V32HImode
									       || V16HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HImode == V8SFmode
										       || V16HImode == V4DFmode
										       || V16HImode == V4DImode
										       || V16HImode == V8SImode
										       || V16HImode == V16HImode
										       || V16HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4615; /* avx512fp16_fix_truncv16hi2_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
									       || V32HImode == V8DFmode
									       || V32HImode == V8DImode
									       || V32HImode == V16SImode
									       || V32HImode == V32HImode
									       || V32HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HImode == V8SFmode
										       || V32HImode == V4DFmode
										       || V32HImode == V4DImode
										       || V32HImode == V8SImode
										       || V32HImode == V16HImode
										       || V32HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4623; /* avx512fp16_fix_truncv32hi2_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
									       || V8SImode == V8DFmode
									       || V8SImode == V8DImode
									       || V8SImode == V16SImode
									       || V8SImode == V32HImode
									       || V8SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SImode == V8SFmode
										       || V8SImode == V4DFmode
										       || V8SImode == V4DImode
										       || V8SImode == V8SImode
										       || V8SImode == V16HImode
										       || V8SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4631; /* avx512fp16_fix_truncv8si2_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5037; /* fix_truncv8dfv8si2_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
									       || V16SImode == V8DFmode
									       || V16SImode == V8DImode
									       || V16SImode == V16SImode
									       || V16SImode == V32HImode
									       || V16SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SImode == V8SFmode
										       || V16SImode == V4DFmode
										       || V16SImode == V4DImode
										       || V16SImode == V8SImode
										       || V16SImode == V16HImode
										       || V16SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4639; /* avx512fp16_fix_truncv16si2_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4884; /* fix_truncv16sfv16si2_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4647; /* avx512fp16_fix_truncv8di2_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5082; /* fix_truncv8dfv8di2_round */

        case 8:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5090; /* fix_truncv4dfv4di2_round */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern492 (x3))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HImode == V16SFmode
									       || V16HImode == V8DFmode
									       || V16HImode == V8DImode
									       || V16HImode == V16SImode
									       || V16HImode == V32HImode
									       || V16HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16HImode == V8SFmode
										       || V16HImode == V4DFmode
										       || V16HImode == V4DImode
										       || V16HImode == V8SImode
										       || V16HImode == V16HImode
										       || V16HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4619; /* avx512fp16_fixuns_truncv16hi2_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HImode == V16SFmode
									       || V32HImode == V8DFmode
									       || V32HImode == V8DImode
									       || V32HImode == V16SImode
									       || V32HImode == V32HImode
									       || V32HImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V32HImode == V8SFmode
										       || V32HImode == V4DFmode
										       || V32HImode == V4DImode
										       || V32HImode == V8SImode
										       || V32HImode == V16HImode
										       || V32HImode == V16HFmode)))) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4627; /* avx512fp16_fixuns_truncv32hi2_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SImode == V16SFmode
									       || V8SImode == V8DFmode
									       || V8SImode == V8DImode
									       || V8SImode == V16SImode
									       || V8SImode == V32HImode
									       || V8SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SImode == V8SFmode
										       || V8SImode == V4DFmode
										       || V8SImode == V4DImode
										       || V8SImode == V8SImode
										       || V8SImode == V16HImode
										       || V8SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4635; /* avx512fp16_fixuns_truncv8si2_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5041; /* fixuns_truncv8dfv8si2_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SImode == V16SFmode
									       || V16SImode == V8DFmode
									       || V16SImode == V8DImode
									       || V16SImode == V16SImode
									       || V16SImode == V32HImode
									       || V16SImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SImode == V8SFmode
										       || V16SImode == V4DFmode
										       || V16SImode == V4DImode
										       || V16SImode == V8SImode
										       || V16SImode == V16HImode
										       || V16SImode == V16HFmode)))) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4643; /* avx512fp16_fixuns_truncv16si2_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4888; /* fixuns_truncv16sfv16si2_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DImode == V16SFmode
									       || V8DImode == V8DFmode
									       || V8DImode == V8DImode
									       || V8DImode == V16SImode
									       || V8DImode == V32HImode
									       || V8DImode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DImode == V8SFmode
										       || V8DImode == V4DFmode
										       || V8DImode == V4DImode
										       || V8DImode == V8SImode
										       || V8DImode == V16HImode
										       || V8DImode == V16HFmode)))) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4651; /* avx512fp16_fixuns_truncv8di2_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5086; /* fixuns_truncv8dfv8di2_round */

        case 8:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode)))) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5094; /* fixuns_truncv4dfv4di2_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[0], E_V8DFmode)
                  || GET_MODE (x3) != E_V8DFmode
                  || GET_MODE (x4) != E_V8DFmode)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8HFmode:
                  if (!register_operand (operands[1], E_V8HFmode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 4715; /* avx512fp16_float_extend_phv8df2_round */

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1 && ((V8DFmode == V16SFmode
									       || V8DFmode == V8DFmode
									       || V8DFmode == V8DImode
									       || V8DFmode == V16SImode
									       || V8DFmode == V32HImode
									       || V8DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8DFmode == V8SFmode
										       || V8DFmode == V4DFmode
										       || V8DFmode == V4DImode
										       || V8DFmode == V8SImode
										       || V8DFmode == V16HImode
										       || V8DFmode == V16HFmode)))) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return -1;
                  return 5191; /* avx512f_cvtps2pd512_round */

                default:
                  return -1;
                }

            case E_V16SFmode:
              if (pattern490 (x3, 
E_V16HFmode, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
									       || V16SFmode == V8DFmode
									       || V16SFmode == V8DImode
									       || V16SFmode == V16SImode
									       || V16SFmode == V32HImode
									       || V16SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V16SFmode == V8SFmode
										       || V16SFmode == V4DFmode
										       || V16SFmode == V4DImode
										       || V16SFmode == V8SImode
										       || V16SFmode == V16HImode
										       || V16SFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4719; /* avx512fp16_float_extend_phv16sf2_round */

            case E_V8SFmode:
              if (pattern490 (x3, 
E_V8HFmode, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
									       || V8SFmode == V8DFmode
									       || V8SFmode == V8DImode
									       || V8SFmode == V16SImode
									       || V8SFmode == V32HImode
									       || V8SFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V8SFmode == V8SFmode
										       || V8SFmode == V4DFmode
										       || V8SFmode == V4DImode
										       || V8SFmode == V8SImode
										       || V8SFmode == V16HImode
										       || V8SFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4723; /* avx512fp16_float_extend_phv8sf2_round */

            case E_V4DFmode:
              if (pattern490 (x3, 
E_V4SFmode, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1 && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode))))))
                return -1;
              return 5195; /* avx_cvtps2pd256_round */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (GET_MODE (x5) != E_V4HFmode)
            return -1;
          x8 = XEXP (x5, 1);
          if (GET_CODE (x8) != PARALLEL
              || XVECLEN (x8, 0) != 4)
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XVECEXP (x8, 0, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x11 = XVECEXP (x8, 0, 2);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x12 = XVECEXP (x8, 0, 3);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode
              || GET_MODE (x4) != E_V4DFmode)
            return -1;
          x13 = XEXP (x5, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_V8HFmode)
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DFmode == V16SFmode
									       || V4DFmode == V8DFmode
									       || V4DFmode == V8DImode
									       || V4DFmode == V16SImode
									       || V4DFmode == V32HImode
									       || V4DFmode == V32HFmode)
									       || (TARGET_AVX10_2_256
										   && (V4DFmode == V8SFmode
										       || V4DFmode == V4DFmode
										       || V4DFmode == V4DImode
										       || V4DFmode == V8SImode
										       || V4DFmode == V16HImode
										       || V4DFmode == V16HFmode))))))
            return -1;
          return 4727; /* avx512fp16_float_extend_phv4df2_round */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x3) != E_V8HFmode
              || GET_MODE (x4) != E_V8HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8DFmode == V16SFmode
							       || V8DFmode == V8DFmode
							       || V8DFmode == V8DImode
							       || V8DFmode == V16SImode
							       || V8DFmode == V32HImode
							       || V8DFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8DFmode == V8SFmode
								       || V8DFmode == V4DFmode
								       || V8DFmode == V4DImode
								       || V8DFmode == V8SImode
								       || V8DFmode == V16HImode
								       || V8DFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4741; /* avx512fp16_vcvtpd2ph_v8df_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V8SFmode == V16SFmode
							       || V8SFmode == V8DFmode
							       || V8SFmode == V8DImode
							       || V8SFmode == V16SImode
							       || V8SFmode == V32HImode
							       || V8SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V8SFmode == V8SFmode
								       || V8SFmode == V4DFmode
								       || V8SFmode == V4DImode
								       || V8SFmode == V8SImode
								       || V8SFmode == V16HImode
								       || V8SFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4749; /* avx512fp16_vcvtps2ph_v8sf_round */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern490 (x3, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16SFmode == V16SFmode
							       || V16SFmode == V8DFmode
							       || V16SFmode == V8DImode
							       || V16SFmode == V16SImode
							       || V16SFmode == V32HImode
							       || V16SFmode == V32HFmode)
							       || (TARGET_AVX10_2_256
								   && (V16SFmode == V8SFmode
								       || V16SFmode == V4DFmode
								       || V16SFmode == V4DImode
								       || V16SFmode == V8SImode
								       || V16SFmode == V16HImode
								       || V16SFmode == V16HFmode)))) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4745; /* avx512fp16_vcvtps2ph_v16sf_round */

        case E_V8SFmode:
          if (pattern490 (x3, 
E_V8DFmode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5179; /* *avx512f_cvtpd2ps512_round */

        case E_V4SFmode:
          if (pattern490 (x3, 
E_V4DFmode, 
E_V4SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5183; /* avx_cvtpd2ps256_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_306 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      switch (pattern532 (x2))
        {
        case 0:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5543; /* *avx512bw_vpternlogv64qi_1 */

        case 1:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5570; /* *avx512vl_vpternlogv32qi_1 */

        case 2:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5597; /* *avx512vl_vpternlogv16qi_1 */

        case 3:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5624; /* *avx512bw_vpternlogv32hi_1 */

        case 4:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5651; /* *avx512vl_vpternlogv16hi_1 */

        case 5:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5678; /* *avx512vl_vpternlogv8hi_1 */

        case 6:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5705; /* *avx512f_vpternlogv16si_1 */

        case 7:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5732; /* *avx512vl_vpternlogv8si_1 */

        case 8:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5759; /* *avx512vl_vpternlogv4si_1 */

        case 9:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5786; /* *avx512f_vpternlogv8di_1 */

        case 10:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5813; /* *avx512vl_vpternlogv4di_1 */

        case 11:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5840; /* *avx512vl_vpternlogv2di_1 */

        case 12:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5546; /* *avx512bw_vpternlogv64qi_1 */

        case 13:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5573; /* *avx512vl_vpternlogv32qi_1 */

        case 14:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5600; /* *avx512vl_vpternlogv16qi_1 */

        case 15:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5627; /* *avx512bw_vpternlogv32hi_1 */

        case 16:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5654; /* *avx512vl_vpternlogv16hi_1 */

        case 17:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5681; /* *avx512vl_vpternlogv8hi_1 */

        case 18:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5708; /* *avx512f_vpternlogv16si_1 */

        case 19:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5735; /* *avx512vl_vpternlogv8si_1 */

        case 20:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5762; /* *avx512vl_vpternlogv4si_1 */

        case 21:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5789; /* *avx512f_vpternlogv8di_1 */

        case 22:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5816; /* *avx512vl_vpternlogv4di_1 */

        case 23:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5843; /* *avx512vl_vpternlogv2di_1 */

        case 24:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5549; /* *avx512bw_vpternlogv64qi_1 */

        case 25:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5576; /* *avx512vl_vpternlogv32qi_1 */

        case 26:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5603; /* *avx512vl_vpternlogv16qi_1 */

        case 27:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5630; /* *avx512bw_vpternlogv32hi_1 */

        case 28:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5657; /* *avx512vl_vpternlogv16hi_1 */

        case 29:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5684; /* *avx512vl_vpternlogv8hi_1 */

        case 30:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5711; /* *avx512f_vpternlogv16si_1 */

        case 31:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5738; /* *avx512vl_vpternlogv8si_1 */

        case 32:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5765; /* *avx512vl_vpternlogv4si_1 */

        case 33:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5792; /* *avx512f_vpternlogv8di_1 */

        case 34:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5819; /* *avx512vl_vpternlogv4di_1 */

        case 35:
          if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 5846; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6827; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6836; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6845; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6854; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6863; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6872; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6881; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6890; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6899; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6908; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6917; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6926; /* *avx512vl_vpternlogv2di_3 */

        default:
          return -1;
        }

    case AND:
      switch (pattern534 (x2))
        {
        case 0:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6191; /* *avx512bw_vpternlogv64qi_2 */

        case 1:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6218; /* *avx512vl_vpternlogv32qi_2 */

        case 2:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6245; /* *avx512vl_vpternlogv16qi_2 */

        case 3:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6272; /* *avx512bw_vpternlogv32hi_2 */

        case 4:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6299; /* *avx512vl_vpternlogv16hi_2 */

        case 5:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6326; /* *avx512vl_vpternlogv8hi_2 */

        case 6:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6353; /* *avx512f_vpternlogv16si_2 */

        case 7:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6380; /* *avx512vl_vpternlogv8si_2 */

        case 8:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6407; /* *avx512vl_vpternlogv4si_2 */

        case 9:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6434; /* *avx512f_vpternlogv8di_2 */

        case 10:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6461; /* *avx512vl_vpternlogv4di_2 */

        case 11:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6488; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern534 (x2))
        {
        case 0:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6194; /* *avx512bw_vpternlogv64qi_2 */

        case 1:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6221; /* *avx512vl_vpternlogv32qi_2 */

        case 2:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6248; /* *avx512vl_vpternlogv16qi_2 */

        case 3:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6275; /* *avx512bw_vpternlogv32hi_2 */

        case 4:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6302; /* *avx512vl_vpternlogv16hi_2 */

        case 5:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6329; /* *avx512vl_vpternlogv8hi_2 */

        case 6:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6356; /* *avx512f_vpternlogv16si_2 */

        case 7:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6383; /* *avx512vl_vpternlogv8si_2 */

        case 8:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6410; /* *avx512vl_vpternlogv4si_2 */

        case 9:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6437; /* *avx512f_vpternlogv8di_2 */

        case 10:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6464; /* *avx512vl_vpternlogv4di_2 */

        case 11:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6491; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern534 (x2))
        {
        case 0:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6197; /* *avx512bw_vpternlogv64qi_2 */

        case 1:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6224; /* *avx512vl_vpternlogv32qi_2 */

        case 2:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6251; /* *avx512vl_vpternlogv16qi_2 */

        case 3:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6278; /* *avx512bw_vpternlogv32hi_2 */

        case 4:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6305; /* *avx512vl_vpternlogv16hi_2 */

        case 5:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6332; /* *avx512vl_vpternlogv8hi_2 */

        case 6:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6359; /* *avx512f_vpternlogv16si_2 */

        case 7:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6386; /* *avx512vl_vpternlogv8si_2 */

        case 8:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6413; /* *avx512vl_vpternlogv4si_2 */

        case 9:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6440; /* *avx512f_vpternlogv8di_2 */

        case 10:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6467; /* *avx512vl_vpternlogv4di_2 */

        case 11:
          if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
            return -1;
          return 6494; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_315 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16BFmode:
          if (pattern25 (x2, 
E_V16BFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3714; /* *iorv16bf3 */

        case E_V8BFmode:
          if (pattern25 (x2, 
E_V8BFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3717; /* *iorv8bf3 */

        case E_V16HFmode:
          if (pattern25 (x2, 
E_V16HFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3720; /* *iorv16hf3 */

        case E_V8HFmode:
          if (pattern25 (x2, 
E_V8HFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3723; /* *iorv8hf3 */

        case E_V8SFmode:
          if (pattern25 (x2, 
E_V8SFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3727; /* *iorv8sf3 */

        case E_V4SFmode:
          if (pattern25 (x2, 
E_V4SFmode) != 0
              || !
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 3733; /* *iorv4sf3 */

        case E_V4DFmode:
          if (pattern25 (x2, 
E_V4DFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3739; /* *iorv4df3 */

        case E_V2DFmode:
          if (pattern25 (x2, 
E_V2DFmode) != 0
              || !(
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3745; /* *iorv2df3 */

        case E_V32BFmode:
          if (pattern5 (x2, 
E_V32BFmode) != 0
              || !(
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 491 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3750; /* *iorv32bf3 */

        case E_V32HFmode:
          if (pattern5 (x2, 
E_V32HFmode) != 0
              || !(
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 492 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3753; /* *iorv32hf3 */

        case E_V16SFmode:
          if (pattern5 (x2, 
E_V16SFmode) != 0
              || !(
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 32 != 16)) && 
#line 493 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3757; /* *iorv16sf3 */

        case E_V8DFmode:
          if (pattern5 (x2, 
E_V8DFmode) != 0
              || !(
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 64 != 16)) && 
#line 494 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3763; /* *iorv8df3 */

        case E_V16SImode:
          if (pattern180 (x2, 
E_V16SImode) != 0
              || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V16SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8010; /* *iorv16si3 */

        case E_V8SImode:
          if (pattern180 (x2, 
E_V8SImode) != 0
              || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8016; /* *iorv8si3 */

        case E_V4SImode:
          if (pattern180 (x2, 
E_V4SImode) != 0
              || !
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4SImode, operands)))
            return -1;
          return 8022; /* *iorv4si3 */

        case E_V8DImode:
          if (pattern180 (x2, 
E_V8DImode) != 0
              || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V8DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8028; /* *iorv8di3 */

        case E_V4DImode:
          if (pattern180 (x2, 
E_V4DImode) != 0
              || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8034; /* *iorv4di3 */

        case E_V2DImode:
          if (pattern180 (x2, 
E_V2DImode) != 0
              || !
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (IOR, V2DImode, operands)))
            return -1;
          return 8040; /* *iorv2di3 */

        case E_V64QImode:
          if (pattern25 (x2, 
E_V64QImode) != 0
              || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8045; /* *iorv64qi3 */

        case E_V32QImode:
          if (pattern25 (x2, 
E_V32QImode) != 0
              || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8048; /* *iorv32qi3 */

        case E_V16QImode:
          if (pattern25 (x2, 
E_V16QImode) != 0
              || !
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 8051; /* *iorv16qi3 */

        case E_V32HImode:
          if (pattern25 (x2, 
E_V32HImode) != 0
              || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8054; /* *iorv32hi3 */

        case E_V16HImode:
          if (pattern25 (x2, 
E_V16HImode) != 0
              || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8057; /* *iorv16hi3 */

        case E_V8HImode:
          if (pattern25 (x2, 
E_V8HImode) != 0
              || !
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 8060; /* *iorv8hi3 */

        case E_V1TImode:
          if (pattern669 (x2, 
E_V1TImode) != 0
              || !
#line 18943 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8063; /* iorv1ti3 */

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern532 (x2))
            {
            case 0:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5524; /* *avx512bw_vpternlogv64qi_1 */

            case 1:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5551; /* *avx512vl_vpternlogv32qi_1 */

            case 2:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5578; /* *avx512vl_vpternlogv16qi_1 */

            case 3:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5605; /* *avx512bw_vpternlogv32hi_1 */

            case 4:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5632; /* *avx512vl_vpternlogv16hi_1 */

            case 5:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5659; /* *avx512vl_vpternlogv8hi_1 */

            case 6:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5686; /* *avx512f_vpternlogv16si_1 */

            case 7:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5713; /* *avx512vl_vpternlogv8si_1 */

            case 8:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5740; /* *avx512vl_vpternlogv4si_1 */

            case 9:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5767; /* *avx512f_vpternlogv8di_1 */

            case 10:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5794; /* *avx512vl_vpternlogv4di_1 */

            case 11:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5821; /* *avx512vl_vpternlogv2di_1 */

            case 12:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5527; /* *avx512bw_vpternlogv64qi_1 */

            case 13:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5554; /* *avx512vl_vpternlogv32qi_1 */

            case 14:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5581; /* *avx512vl_vpternlogv16qi_1 */

            case 15:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5608; /* *avx512bw_vpternlogv32hi_1 */

            case 16:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5635; /* *avx512vl_vpternlogv16hi_1 */

            case 17:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5662; /* *avx512vl_vpternlogv8hi_1 */

            case 18:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5689; /* *avx512f_vpternlogv16si_1 */

            case 19:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5716; /* *avx512vl_vpternlogv8si_1 */

            case 20:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5743; /* *avx512vl_vpternlogv4si_1 */

            case 21:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5770; /* *avx512f_vpternlogv8di_1 */

            case 22:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5797; /* *avx512vl_vpternlogv4di_1 */

            case 23:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5824; /* *avx512vl_vpternlogv2di_1 */

            case 24:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5530; /* *avx512bw_vpternlogv64qi_1 */

            case 25:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5557; /* *avx512vl_vpternlogv32qi_1 */

            case 26:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5584; /* *avx512vl_vpternlogv16qi_1 */

            case 27:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5611; /* *avx512bw_vpternlogv32hi_1 */

            case 28:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5638; /* *avx512vl_vpternlogv16hi_1 */

            case 29:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5665; /* *avx512vl_vpternlogv8hi_1 */

            case 30:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5692; /* *avx512f_vpternlogv16si_1 */

            case 31:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5719; /* *avx512vl_vpternlogv8si_1 */

            case 32:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5746; /* *avx512vl_vpternlogv4si_1 */

            case 33:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5773; /* *avx512f_vpternlogv8di_1 */

            case 34:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 5800; /* *avx512vl_vpternlogv4di_1 */

            case 35:
              if (!
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 5827; /* *avx512vl_vpternlogv2di_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6820; /* *avx512bw_vpternlogv64qi_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6829; /* *avx512vl_vpternlogv32qi_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6838; /* *avx512vl_vpternlogv16qi_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6847; /* *avx512bw_vpternlogv32hi_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6856; /* *avx512vl_vpternlogv16hi_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6865; /* *avx512vl_vpternlogv8hi_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6874; /* *avx512f_vpternlogv16si_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6883; /* *avx512vl_vpternlogv8si_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6892; /* *avx512vl_vpternlogv4si_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6901; /* *avx512f_vpternlogv8di_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6910; /* *avx512vl_vpternlogv4di_3 */

            case 47:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6919; /* *avx512vl_vpternlogv2di_3 */

            default:
              return -1;
            }

        case AND:
          switch (pattern534 (x2))
            {
            case 0:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6172; /* *avx512bw_vpternlogv64qi_2 */

            case 1:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6199; /* *avx512vl_vpternlogv32qi_2 */

            case 2:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6226; /* *avx512vl_vpternlogv16qi_2 */

            case 3:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6253; /* *avx512bw_vpternlogv32hi_2 */

            case 4:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6280; /* *avx512vl_vpternlogv16hi_2 */

            case 5:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6307; /* *avx512vl_vpternlogv8hi_2 */

            case 6:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6334; /* *avx512f_vpternlogv16si_2 */

            case 7:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6361; /* *avx512vl_vpternlogv8si_2 */

            case 8:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6388; /* *avx512vl_vpternlogv4si_2 */

            case 9:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6415; /* *avx512f_vpternlogv8di_2 */

            case 10:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6442; /* *avx512vl_vpternlogv4di_2 */

            case 11:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6469; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        case IOR:
          switch (pattern534 (x2))
            {
            case 0:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6175; /* *avx512bw_vpternlogv64qi_2 */

            case 1:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6202; /* *avx512vl_vpternlogv32qi_2 */

            case 2:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6229; /* *avx512vl_vpternlogv16qi_2 */

            case 3:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6256; /* *avx512bw_vpternlogv32hi_2 */

            case 4:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6283; /* *avx512vl_vpternlogv16hi_2 */

            case 5:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6310; /* *avx512vl_vpternlogv8hi_2 */

            case 6:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6337; /* *avx512f_vpternlogv16si_2 */

            case 7:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6364; /* *avx512vl_vpternlogv8si_2 */

            case 8:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6391; /* *avx512vl_vpternlogv4si_2 */

            case 9:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6418; /* *avx512f_vpternlogv8di_2 */

            case 10:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6445; /* *avx512vl_vpternlogv4di_2 */

            case 11:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6472; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        case XOR:
          switch (pattern534 (x2))
            {
            case 0:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6178; /* *avx512bw_vpternlogv64qi_2 */

            case 1:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6205; /* *avx512vl_vpternlogv32qi_2 */

            case 2:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6232; /* *avx512vl_vpternlogv16qi_2 */

            case 3:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6259; /* *avx512bw_vpternlogv32hi_2 */

            case 4:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6286; /* *avx512vl_vpternlogv16hi_2 */

            case 5:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6313; /* *avx512vl_vpternlogv8hi_2 */

            case 6:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6340; /* *avx512f_vpternlogv16si_2 */

            case 7:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6367; /* *avx512vl_vpternlogv8si_2 */

            case 8:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6394; /* *avx512vl_vpternlogv4si_2 */

            case 9:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6421; /* *avx512f_vpternlogv8di_2 */

            case 10:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6448; /* *avx512vl_vpternlogv4di_2 */

            case 11:
              if (!
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))))
                return -1;
              return 6475; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      return recog_305 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_304 (x1, insn, pnum_clobbers);

    case NOT:
      switch (pattern335 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern933 (x2, 
E_V16SImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8065; /* *iornotv16si3 */

            case E_V8DImode:
              if (pattern933 (x2, 
E_V8DImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8066; /* *iornotv8di3 */

            case E_V64QImode:
              if (pattern933 (x2, 
E_V64QImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8067; /* *iornotv64qi3 */

            case E_V32QImode:
              if (pattern933 (x2, 
E_V32QImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8068; /* *iornotv32qi3 */

            case E_V16QImode:
              if (pattern933 (x2, 
E_V16QImode) != 0
                  || !
#line 18970 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
                return -1;
              return 8069; /* *iornotv16qi3 */

            case E_V32HImode:
              if (pattern933 (x2, 
E_V32HImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8070; /* *iornotv32hi3 */

            case E_V16HImode:
              if (pattern933 (x2, 
E_V16HImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8071; /* *iornotv16hi3 */

            case E_V8HImode:
              if (pattern933 (x2, 
E_V8HImode) != 0
                  || !
#line 18970 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
                return -1;
              return 8072; /* *iornotv8hi3 */

            case E_V8SImode:
              if (pattern933 (x2, 
E_V8SImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8073; /* *iornotv8si3 */

            case E_V4SImode:
              if (pattern933 (x2, 
E_V4SImode) != 0
                  || !
#line 18970 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
                return -1;
              return 8074; /* *iornotv4si3 */

            case E_V4DImode:
              if (pattern933 (x2, 
E_V4DImode) != 0
                  || !(
#line 18970 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8075; /* *iornotv4di3 */

            case E_V2DImode:
              if (pattern933 (x2, 
E_V2DImode) != 0
                  || !
#line 18970 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
                return -1;
              return 8076; /* *iornotv2di3 */

            default:
              return -1;
            }

        case 1:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8090; /* *nandv16si3 */

        case 2:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8092; /* *nandv8di3 */

        case 3:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8094; /* *nandv64qi3 */

        case 4:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8096; /* *nandv32qi3 */

        case 5:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
            return -1;
          return 8098; /* *nandv16qi3 */

        case 6:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8100; /* *nandv32hi3 */

        case 7:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8102; /* *nandv16hi3 */

        case 8:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
            return -1;
          return 8104; /* *nandv8hi3 */

        case 9:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8106; /* *nandv8si3 */

        case 10:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
            return -1;
          return 8108; /* *nandv4si3 */

        case 11:
          if (!(
#line 19034 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8110; /* *nandv4di3 */

        case 12:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
            return -1;
          return 8112; /* *nandv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_342 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern26 (x1))
    {
    case 0:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 2998; /* *sminv32hf3 */

    case 1:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3006; /* *sminv16hf3 */

    case 2:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3012; /* *sminv8hf3 */

    case 3:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3018; /* *sminv16sf3 */

    case 4:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3026; /* *sminv8sf3 */

    case 5:
      if (!
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1))
        return -1;
      return 3032; /* *sminv4sf3 */

    case 6:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3038; /* *sminv8df3 */

    case 7:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3046; /* *sminv4df3 */

    case 8:
      if (!(
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3052; /* *sminv2df3 */

    case 9:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7763; /* *avx2_sminv32qi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7840; /* *avx512bw_sminv32qi3 */

    case 10:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7767; /* *avx2_sminv16hi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7856; /* *avx512bw_sminv16hi3 */

    case 11:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7771; /* *avx2_sminv8si3 */
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7784; /* *avx512f_sminv8si3 */

    case 12:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7776; /* *avx512f_sminv16si3 */

    case 13:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7792; /* *avx512f_sminv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7876; /* *sse4_1_sminv4si3 */

    case 14:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7800; /* *avx512f_sminv8di3 */

    case 15:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7808; /* *avx512f_sminv4di3 */

    case 16:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7816; /* *avx512f_sminv2di3 */

    case 17:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7824; /* *avx512bw_sminv64qi3 */

    case 18:
      if (nonimmediate_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7832; /* *avx512bw_sminv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7872; /* *sse4_1_sminv16qi3 */

    case 19:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7848; /* *avx512bw_sminv32hi3 */

    case 20:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7864; /* *avx512bw_sminv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17843 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7879; /* *sminv8hi3 */

    case 21:
      if (!(
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10599; /* avx10_2_sminbf16_v32bf */

    case 22:
      if (!
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10603; /* avx10_2_sminbf16_v16bf */

    case 23:
      if (!
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10607; /* avx10_2_sminbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_349 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode
          || !nonimmediate_operand (operands[1], E_V16SImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10063; /* clzv16si2 */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10065; /* clzv8si2 */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10067; /* clzv4si2 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10069; /* clzv8di2 */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10071; /* clzv4di2 */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10073; /* clzv2di2 */

    default:
      return -1;
    }
}

 int
recog_352 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern32 (x1))
    {
    case 0:
      if (!
#line 17566 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7702; /* *rotlv1ti3_internal */

    case 1:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7738; /* avx512f_rolv16si */

    case 2:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7742; /* avx512vl_rolv8si */

    case 3:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7746; /* avx512vl_rolv4si */
      if (!const_0_to_31_operand (operands[2], E_SImode)
          || !
#line 26611 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9038; /* xop_rotlv4si3 */

    case 4:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7750; /* avx512f_rolv8di */

    case 5:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7754; /* avx512vl_rolv4di */

    case 6:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7758; /* avx512vl_rolv2di */
      if (!const_0_to_63_operand (operands[2], E_SImode)
          || !
#line 26611 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9039; /* xop_rotlv2di3 */

    case 7:
      if (!
#line 26611 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9036; /* xop_rotlv16qi3 */

    case 8:
      if (!
#line 26611 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9037; /* xop_rotlv8hi3 */

    case 9:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7714; /* avx512f_rolvv16si */

    case 10:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7718; /* avx512vl_rolvv8si */

    case 11:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7722; /* avx512vl_rolvv4si */

    case 12:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7726; /* avx512f_rolvv8di */

    case 13:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7730; /* avx512vl_rolvv4di */

    case 14:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7734; /* avx512vl_rolvv2di */

    default:
      return -1;
    }
}

 int
recog_363 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XINT (x3, 1))
    {
    case 39:
      if (GET_MODE (x3) != E_CCGZmode)
        return -1;
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != LTU)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17
          || GET_MODE (x5) != E_CCmode)
        return -1;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCGZmode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1674 (x4, 
E_SImode) != 0
              || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 521; /* subsi3_carry_ccgz */

        case E_DImode:
          if (pattern1674 (x4, 
E_DImode) != 0
              || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 522; /* subdi3_carry_ccgz */

        default:
          return -1;
        }

    case 22:
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 7
          || pattern549 (x1) != 0)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1560 (x3, 
E_SImode) != 0
              || !(
#line 23348 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            return -1;
          return 1669; /* *tls_dynamic_gnu2_call_64_si */

        case E_DImode:
          if (pattern1560 (x3, 
E_DImode) != 0
              || !(
#line 23348 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            return -1;
          return 1670; /* *tls_dynamic_gnu2_call_64_di */

        default:
          return -1;
        }

    case 52:
      if (GET_MODE (x3) != E_V8QImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      if (pattern936 (x1) != 0
          || !
#line 23163 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8634; /* *ssse3_pshufbv8qi3 */

    case 132:
      if (pattern552 (x1, 
132, 
3) != 0)
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x10 = XVECEXP (x3, 0, 1);
      operands[2] = x10;
      if (!nonimmediate_operand (operands[2], E_V16QImode))
        return -1;
      x4 = XVECEXP (x3, 0, 2);
      operands[3] = x4;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x8, 1);
      x13 = XVECEXP (x12, 0, 0);
      if (!rtx_equal_p (x13, operands[1]))
        return -1;
      x14 = XVECEXP (x12, 0, 1);
      if (!rtx_equal_p (x14, operands[2]))
        return -1;
      x15 = XVECEXP (x12, 0, 2);
      if (!rtx_equal_p (x15, operands[3]))
        return -1;
      switch (pattern1771 (x3))
        {
        case 0:
          if (!
#line 26039 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8986; /* sse4_2_pcmpistri */

        case 1:
          if (!
#line 26063 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8987; /* sse4_2_pcmpistrm */

        default:
          return -1;
        }

    case 153:
      x4 = XVECEXP (x3, 0, 2);
      if (GET_CODE (x4) != MEM)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != UNSPEC
          || XVECLEN (x5, 0) != 3
          || XINT (x5, 1) != 154)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      x16 = XVECEXP (x5, 0, 2);
      if (!const1248_operand (x16, E_SImode))
        return -1;
      x9 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
          operands[1] = x9;
          x10 = XVECEXP (x3, 0, 1);
          operands[7] = x10;
          operands[6] = x4;
          x17 = XVECEXP (x5, 0, 0);
          operands[4] = x17;
          x18 = XVECEXP (x5, 0, 1);
          operands[3] = x18;
          operands[5] = x16;
          x11 = XEXP (x8, 0);
          operands[2] = x11;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (!register_operand (operands[0], E_V16SImode)
                  || GET_MODE (x3) != E_V16SImode
                  || !vsib_mem_operator (operands[6], E_SImode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V16SImode:
                  if (!register_operand (operands[1], E_V16SImode))
                    return -1;
                  switch (pattern1823 (x5, 
E_HImode, 
E_V16SImode))
                    {
                    case 0:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9747; /* *avx512f_gathersiv16si */

                    case 1:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9759; /* *avx512f_gathersiv16si */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  if (!register_operand (operands[1], E_V8SImode))
                    return -1;
                  switch (pattern1823 (x5, 
E_QImode, 
E_V8DImode))
                    {
                    case 0:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9795; /* *avx512f_gatherdiv16si */

                    case 1:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9807; /* *avx512f_gatherdiv16si */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V16SFmode:
              if (!register_operand (operands[0], E_V16SFmode)
                  || GET_MODE (x3) != E_V16SFmode
                  || !vsib_mem_operator (operands[6], E_SFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V16SFmode:
                  if (!register_operand (operands[1], E_V16SFmode))
                    return -1;
                  switch (pattern1823 (x5, 
E_HImode, 
E_V16SImode))
                    {
                    case 0:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9748; /* *avx512f_gathersiv16sf */

                    case 1:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9760; /* *avx512f_gathersiv16sf */

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode))
                    return -1;
                  switch (pattern1823 (x5, 
E_QImode, 
E_V8DImode))
                    {
                    case 0:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9796; /* *avx512f_gatherdiv16sf */

                    case 1:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9808; /* *avx512f_gatherdiv16sf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8DImode:
              switch (pattern1744 (x3, 
E_DImode, 
E_V8DImode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9749; /* *avx512f_gathersiv8di */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9797; /* *avx512f_gatherdiv8di */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9761; /* *avx512f_gathersiv8di */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9809; /* *avx512f_gatherdiv8di */

                default:
                  return -1;
                }

            case E_V8DFmode:
              switch (pattern1744 (x3, 
E_DFmode, 
E_V8DFmode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9750; /* *avx512f_gathersiv8df */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9798; /* *avx512f_gatherdiv8df */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9762; /* *avx512f_gathersiv8df */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9810; /* *avx512f_gatherdiv8df */

                default:
                  return -1;
                }

            case E_V8SImode:
              if (pattern1745 (x3, 
E_SImode, 
E_V8SImode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SImode:
                  if (!register_operand (operands[1], E_V8SImode))
                    return -1;
                  switch (pattern1832 (x5, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9751; /* *avx512f_gathersiv8si */

                    case 1:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9763; /* *avx512f_gathersiv8si */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  if (!register_operand (operands[1], E_V4SImode))
                    return -1;
                  switch (pattern1832 (x5, 
E_V4DImode))
                    {
                    case 0:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9799; /* *avx512f_gatherdiv8si */

                    case 1:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9811; /* *avx512f_gatherdiv8si */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V8SFmode:
              if (pattern1745 (x3, 
E_SFmode, 
E_V8SFmode) != 0)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode))
                    return -1;
                  switch (pattern1832 (x5, 
E_V8SImode))
                    {
                    case 0:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9752; /* *avx512f_gathersiv8sf */

                    case 1:
                      if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9764; /* *avx512f_gathersiv8sf */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  if (!register_operand (operands[1], E_V4SFmode))
                    return -1;
                  switch (pattern1832 (x5, 
E_V4DImode))
                    {
                    case 0:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                        return -1;
                      return 9800; /* *avx512f_gatherdiv8sf */

                    case 1:
                      if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                        return -1;
                      return 9812; /* *avx512f_gatherdiv8sf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1747 (x3, 
E_DImode, 
E_V4DImode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9753; /* *avx512f_gathersiv4di */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9801; /* *avx512f_gatherdiv4di */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9765; /* *avx512f_gathersiv4di */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9813; /* *avx512f_gatherdiv4di */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1747 (x3, 
E_DFmode, 
E_V4DFmode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9754; /* *avx512f_gathersiv4df */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9802; /* *avx512f_gatherdiv4df */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9766; /* *avx512f_gathersiv4df */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9814; /* *avx512f_gatherdiv4df */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1749 (x3, 
E_SImode, 
E_V4SImode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9755; /* *avx512f_gathersiv4si */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9803; /* *avx512f_gatherdiv4si */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9767; /* *avx512f_gathersiv4si */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9815; /* *avx512f_gatherdiv4si */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1749 (x3, 
E_SFmode, 
E_V4SFmode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9756; /* *avx512f_gathersiv4sf */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9804; /* *avx512f_gatherdiv4sf */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9768; /* *avx512f_gathersiv4sf */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9816; /* *avx512f_gatherdiv4sf */

                default:
                  return -1;
                }

            case E_V2DImode:
              switch (pattern1749 (x3, 
E_DImode, 
E_V2DImode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9757; /* *avx512f_gathersiv2di */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9805; /* *avx512f_gatherdiv2di */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9769; /* *avx512f_gathersiv2di */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9817; /* *avx512f_gatherdiv2di */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1749 (x3, 
E_DFmode, 
E_V2DFmode))
                {
                case 0:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9758; /* *avx512f_gathersiv2df */

                case 1:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9806; /* *avx512f_gatherdiv2df */

                case 2:
                  if (!(
#line 29480 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9770; /* *avx512f_gathersiv2df */

                case 3:
                  if (!(
#line 29542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9818; /* *avx512f_gatherdiv2df */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PC:
          x10 = XVECEXP (x3, 0, 1);
          operands[6] = x10;
          operands[5] = x4;
          x17 = XVECEXP (x5, 0, 0);
          operands[3] = x17;
          x18 = XVECEXP (x5, 0, 1);
          operands[2] = x18;
          operands[4] = x16;
          x11 = XEXP (x8, 0);
          operands[1] = x11;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              switch (pattern1718 (x3, 
E_SImode, 
E_V16SImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9771; /* *avx512f_gathersiv16si_2 */

                case 1:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9783; /* *avx512f_gathersiv16si_2 */

                case 2:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9819; /* *avx512f_gatherdiv16si_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9831; /* *avx512f_gatherdiv16si_2 */

                default:
                  return -1;
                }

            case E_V16SFmode:
              switch (pattern1718 (x3, 
E_SFmode, 
E_V16SFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9772; /* *avx512f_gathersiv16sf_2 */

                case 1:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9784; /* *avx512f_gathersiv16sf_2 */

                case 2:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9820; /* *avx512f_gatherdiv16sf_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9832; /* *avx512f_gatherdiv16sf_2 */

                default:
                  return -1;
                }

            case E_V8DImode:
              switch (pattern1720 (x3, 
E_DImode, 
E_V8DImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9773; /* *avx512f_gathersiv8di_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9821; /* *avx512f_gatherdiv8di_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9785; /* *avx512f_gathersiv8di_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9833; /* *avx512f_gatherdiv8di_2 */

                default:
                  return -1;
                }

            case E_V8DFmode:
              switch (pattern1720 (x3, 
E_DFmode, 
E_V8DFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9774; /* *avx512f_gathersiv8df_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9822; /* *avx512f_gatherdiv8df_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9786; /* *avx512f_gathersiv8df_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9834; /* *avx512f_gatherdiv8df_2 */

                default:
                  return -1;
                }

            case E_V8SImode:
              switch (pattern1722 (x3, 
E_SImode, 
E_V8SImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9775; /* *avx512f_gathersiv8si_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9823; /* *avx512f_gatherdiv8si_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9787; /* *avx512f_gathersiv8si_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9835; /* *avx512f_gatherdiv8si_2 */

                default:
                  return -1;
                }

            case E_V8SFmode:
              switch (pattern1722 (x3, 
E_SFmode, 
E_V8SFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9776; /* *avx512f_gathersiv8sf_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9824; /* *avx512f_gatherdiv8sf_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9788; /* *avx512f_gathersiv8sf_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9836; /* *avx512f_gatherdiv8sf_2 */

                default:
                  return -1;
                }

            case E_V4DImode:
              switch (pattern1724 (x3, 
E_DImode, 
E_V4DImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9777; /* *avx512f_gathersiv4di_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9825; /* *avx512f_gatherdiv4di_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9789; /* *avx512f_gathersiv4di_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9837; /* *avx512f_gatherdiv4di_2 */

                default:
                  return -1;
                }

            case E_V4DFmode:
              switch (pattern1724 (x3, 
E_DFmode, 
E_V4DFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9778; /* *avx512f_gathersiv4df_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9826; /* *avx512f_gatherdiv4df_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9790; /* *avx512f_gathersiv4df_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9838; /* *avx512f_gatherdiv4df_2 */

                default:
                  return -1;
                }

            case E_V4SImode:
              switch (pattern1726 (x3, 
E_SImode, 
E_V4SImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9779; /* *avx512f_gathersiv4si_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9827; /* *avx512f_gatherdiv4si_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9791; /* *avx512f_gathersiv4si_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9839; /* *avx512f_gatherdiv4si_2 */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern1726 (x3, 
E_SFmode, 
E_V4SFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9780; /* *avx512f_gathersiv4sf_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9828; /* *avx512f_gatherdiv4sf_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9792; /* *avx512f_gathersiv4sf_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9840; /* *avx512f_gatherdiv4sf_2 */

                default:
                  return -1;
                }

            case E_V2DImode:
              switch (pattern1726 (x3, 
E_DImode, 
E_V2DImode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9781; /* *avx512f_gathersiv2di_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9829; /* *avx512f_gatherdiv2di_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9793; /* *avx512f_gathersiv2di_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9841; /* *avx512f_gatherdiv2di_2 */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern1726 (x3, 
E_DFmode, 
E_V2DFmode))
                {
                case 0:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9782; /* *avx512f_gathersiv2df_2 */

                case 1:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return -1;
                  return 9830; /* *avx512f_gatherdiv2df_2 */

                case 2:
                  if (!(
#line 29501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9794; /* *avx512f_gathersiv2df_2 */

                case 3:
                  if (!(
#line 29563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return -1;
                  return 9842; /* *avx512f_gatherdiv2df_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_405 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  switch (pattern199 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      switch (pattern701 (x1))
        {
        case 0:
          if ((
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1122; /* *lshrdi3_doubleword_mask */
          break;

        case 1:
          if ((
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1124; /* *lshrti3_doubleword_mask */
          break;

        case 2:
          if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return 2602; /* klshiftrtqi */
          break;

        case 3:
          if (
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2604; /* klshiftrthi */
          break;

        case 4:
          if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2606; /* klshiftrtsi */
          break;

        case 5:
          if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2608; /* klshiftrtdi */
          break;

        default:
          break;
        }
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern702 (x1))
        {
        case 0:
          operands[0] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (register_operand (operands[0], E_DImode)
                  && GET_MODE (x4) == E_DImode
                  && register_operand (operands[1], E_DImode)
                  && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return 1130; /* lshrdi3_doubleword */
              break;

            case E_TImode:
              if (register_operand (operands[0], E_TImode)
                  && GET_MODE (x4) == E_TImode
                  && register_operand (operands[1], E_TImode)
                  && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 1132; /* lshrti3_doubleword */
              break;

            case E_SImode:
              if (nonimmediate_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
                return 1181; /* *lshrsi3_1 */
              break;

            case E_QImode:
              if (nonimmediate_operand (operands[0], E_QImode)
                  && GET_MODE (x4) == E_QImode
                  && nonimmediate_operand (operands[1], E_QImode)
                  && 
#line 17561 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
                return 1213; /* *lshrqi3_1 */
              break;

            case E_HImode:
              if (nonimmediate_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && nonimmediate_operand (operands[1], E_HImode)
                  && 
#line 17599 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
                return 1215; /* *lshrhi3_1 */
              break;

            case E_V2QImode:
              if (register_operand (operands[0], E_V2QImode)
                  && GET_MODE (x4) == E_V2QImode
                  && register_operand (operands[1], E_V2QImode)
                  && 
#line 4007 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                return 2215; /* lshrv2qi3 */
              break;

            default:
              break;
            }
          break;

        case 1:
          x6 = XEXP (x3, 0);
          operands[0] = x6;
          switch (pattern374 (x4))
            {
            case 0:
              if (
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 1216; /* *lshrqi3_1_slp */
              break;

            case 1:
              if (
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 1218; /* *lshrhi3_1_slp */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      switch (GET_CODE (x5))
        {
        case CONST_INT:
          if (pattern1163 (x2) == 0
              && GET_MODE (x4) == E_DImode
              && nonimmediate_operand (operands[1], E_DImode)
              && 
#line 17361 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1179; /* *highpartdisi2 */
          break;

        case SUBREG:
          switch (pattern1166 (x2, 
E_SImode))
            {
            case 0:
              if (
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return 1245; /* *lshrsi3_mask */
              break;

            case 1:
              if (
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1257; /* *lshrsi3_add */
              break;

            case 2:
              if (
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return 1269; /* *lshrsi3_sub */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[0] = x3;
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      operands[2] = x5;
      if (nonmemory_operand (operands[2], E_QImode)
          && (
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1183; /* *lshrdi3_1 */
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_QImode)
        return -1;
      x9 = XEXP (x5, 0);
      switch (pattern1164 (x9))
        {
        case 0:
          if (!(
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1248; /* *lshrdi3_mask */

        case 1:
          if (!(
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1260; /* *lshrdi3_add */

        case 2:
          if (!(
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1272; /* *lshrdi3_sub */

        default:
          return -1;
        }

    case 1:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && (
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return 1126; /* *lshrdi3_doubleword_mask_1 */
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !(
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1254; /* *lshrdi3_mask_1 */

    case 2:
      if (!(
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1128; /* *lshrti3_doubleword_mask_1 */

    case 3:
      if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
        return -1;
      return 1251; /* *lshrsi3_mask_1 */

    case 4:
      if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1263; /* *lshrsi3_add_1 */

    case 5:
      if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1266; /* *lshrdi3_add_1 */

    case 6:
      if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1275; /* *lshrsi3_sub_1 */

    case 7:
      if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1278; /* *lshrdi3_sub_1 */

    default:
      return -1;
    }
}

 int
recog_418 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 4
      || XINT (x4, 1) != 153)
    return -1;
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) != MEM)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != UNSPEC
      || XVECLEN (x6, 0) != 3
      || XINT (x6, 1) != 154)
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x7) != MEM
      || GET_MODE (x7) != E_BLKmode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != SCRATCH)
    return -1;
  x9 = XEXP (x3, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 4)
    return -1;
  x10 = XVECEXP (x9, 0, 0);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x11 = XVECEXP (x9, 0, 1);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x12 = XVECEXP (x9, 0, 2);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x13 = XVECEXP (x9, 0, 3);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x14 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x2, 0);
  operands[0] = x15;
  x16 = XVECEXP (x6, 0, 1);
  if (!register_operand (x16, E_V4DImode))
    return -1;
  x17 = XVECEXP (x6, 0, 2);
  if (!const1248_operand (x17, E_SImode))
    return -1;
  x18 = XEXP (x14, 0);
  operands[1] = x18;
  x19 = XVECEXP (x4, 0, 0);
  switch (GET_CODE (x19))
    {
    case REG:
    case SUBREG:
      operands[2] = x19;
      operands[7] = x5;
      x20 = XVECEXP (x6, 0, 0);
      operands[3] = x20;
      operands[4] = x16;
      operands[6] = x17;
      x21 = XVECEXP (x4, 0, 3);
      operands[5] = x21;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          switch (pattern1850 (x3, 
E_V8SImode, 
E_V4SImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 29417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9739; /* *avx2_gatherdiv8si_3 */

            case 1:
              if (!(
#line 29417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9741; /* *avx2_gatherdiv8si_3 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1850 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!(
#line 29417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9740; /* *avx2_gatherdiv8sf_3 */

            case 1:
              if (!(
#line 29417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9742; /* *avx2_gatherdiv8sf_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PC:
      operands[6] = x5;
      x20 = XVECEXP (x6, 0, 0);
      operands[2] = x20;
      operands[3] = x16;
      operands[5] = x17;
      x21 = XVECEXP (x4, 0, 3);
      operands[4] = x21;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          switch (pattern1846 (x3, 
E_V8SImode, 
E_V4SImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 29441 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9743; /* *avx2_gatherdiv8si_4 */

            case 1:
              if (!(
#line 29441 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9745; /* *avx2_gatherdiv8si_4 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1846 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!(
#line 29441 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 9744; /* *avx2_gatherdiv8sf_4 */

            case 1:
              if (!(
#line 29441 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 9746; /* *avx2_gatherdiv8sf_4 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_427 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCOmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MULT)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ZERO_EXTEND)
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_CODE (x6) != ZERO_EXTEND)
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != MULT)
    return -1;
  x9 = XEXP (x2, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCOmode)
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x10) != SET)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != MULT)
    return -1;
  x12 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x5, 0);
  operands[1] = x13;
  x14 = XEXP (x6, 0);
  operands[2] = x14;
  x15 = XEXP (x10, 0);
  operands[0] = x15;
  x16 = XEXP (x12, 0);
  operands[3] = x16;
  x17 = XEXP (x8, 0);
  if (!rtx_equal_p (x17, operands[1]))
    return -1;
  x18 = XEXP (x8, 1);
  if (!rtx_equal_p (x18, operands[2]))
    return -1;
  x19 = XEXP (x11, 0);
  if (!rtx_equal_p (x19, operands[1]))
    return -1;
  x20 = XEXP (x11, 1);
  if (!rtx_equal_p (x20, operands[2]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (pattern1799 (x1, 
E_HImode, 
E_SImode) != 0
          || !
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 610; /* *umulvhi4 */

    case E_DImode:
      if (pattern1799 (x1, 
E_SImode, 
E_DImode) != 0
          || !
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 611; /* *umulvsi4 */

    case E_TImode:
      if (pattern1799 (x1, 
E_DImode, 
E_TImode) != 0
          || !(
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 612; /* *umulvdi4 */

    default:
      return -1;
    }
}

 int
recog_430 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
    {
    case UNSIGNED_FIX:
      switch (pattern385 (x1))
        {
        case 0:
          if (!
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
            return -1;
          return 223; /* *fixuns_truncsf_1 */

        case 1:
          if (!
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
            return -1;
          return 224; /* *fixuns_truncdf_1 */

        default:
          return -1;
        }

    case FIX:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != USE)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != USE)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      x9 = XEXP (x5, 0);
      operands[2] = x9;
      if (!memory_operand (operands[2], E_HImode))
        return -1;
      x10 = XEXP (x6, 0);
      operands[3] = x10;
      if (!memory_operand (operands[3], E_HImode))
        return -1;
      x11 = XEXP (x3, 0);
      operands[4] = x11;
      if (!scratch_operand (operands[4], E_XFmode)
          || !
#line 6021 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))))
        return -1;
      return 235; /* fix_truncdi_i387 */

    case FLOAT:
      switch (pattern387 (x1))
        {
        case 0:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 254; /* floatdisf2_i387_with_xmm */

        case 1:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 255; /* floatdidf2_i387_with_xmm */

        case 2:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          return 256; /* floatdixf2_i387_with_xmm */

        default:
          return -1;
        }

    case DIV:
      switch (pattern392 (x1, 
MOD))
        {
        case 0:
          return 639; /* divmodsi4_1 */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 640; /* divmoddi4_1 */

        case 2:
          if (!
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
            return -1;
          return 667; /* *divmodhi4_noext */

        case 3:
          return 669; /* *divmodsi4_noext */

        case 4:
          if (!
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 671; /* *divmoddi4_noext */

        default:
          return -1;
        }

    case UDIV:
      switch (pattern392 (x1, 
UMOD))
        {
        case 0:
          return 641; /* udivmodsi4_1 */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 642; /* udivmoddi4_1 */

        case 2:
          if (!
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
            return -1;
          return 668; /* *udivmodhi4_noext */

        case 3:
          return 670; /* *udivmodsi4_noext */

        case 4:
          if (!
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 672; /* *udivmoddi4_noext */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != SET)
        return -1;
      x11 = XEXP (x3, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return -1;
      switch (pattern1054 (x1))
        {
        case 0:
          switch (pattern1502 (x1, 
MOD))
            {
            case 0:
              if (!
#line 11485 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 643; /* divmodsi4_zext_1 */

            case 1:
              if (!
#line 11880 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 673; /* *divmodsi4_noext_zext_1 */

            default:
              return -1;
            }

        case 1:
          switch (pattern1502 (x1, 
UMOD))
            {
            case 0:
              if (!
#line 11521 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 644; /* udivmodsi4_zext_1 */

            case 1:
              if (!
#line 11880 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 674; /* *udivmodsi4_noext_zext_1 */

            default:
              return -1;
            }

        case 2:
          switch (pattern1503 (x1, 
DIV))
            {
            case 0:
              if (!
#line 11544 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 645; /* divmodsi4_zext_2 */

            case 1:
              if (!
#line 11894 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 675; /* *divmodsi4_noext_zext_2 */

            default:
              return -1;
            }

        case 3:
          switch (pattern1503 (x1, 
UDIV))
            {
            case 0:
              if (!
#line 11581 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 646; /* udivmodsi4_zext_2 */

            case 1:
              if (!
#line 11894 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 676; /* *udivmodsi4_noext_zext_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (XVECLEN (x4, 0))
        {
        case 4:
          if (XINT (x4, 1) != 20
              || pattern814 (x4) != 0
              || pattern1249 (x1) != 0
              || !tls_symbolic_operand (operands[2], E_VOIDmode))
            return -1;
          x12 = XVECEXP (x4, 0, 2);
          operands[3] = x12;
          if (!constant_call_address_operand (operands[3], E_VOIDmode))
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x5, 0);
          operands[4] = x9;
          if (!scratch_operand (operands[4], E_SImode))
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          x10 = XEXP (x6, 0);
          operands[5] = x10;
          if (!scratch_operand (operands[5], E_SImode)
              || !
#line 22933 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          return 1649; /* *tls_global_dynamic_32_gnu */

        case 3:
          if (XINT (x4, 1) != 21
              || GET_MODE (x4) != E_SImode)
            return -1;
          x12 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x12) != REG
              || REGNO (x12) != 7
              || GET_MODE (x12) != E_SImode
              || pattern1249 (x1) != 0
              || !constant_call_address_operand (operands[2], E_VOIDmode))
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x5, 0);
          operands[3] = x9;
          if (!scratch_operand (operands[3], E_SImode))
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          x10 = XEXP (x6, 0);
          operands[4] = x10;
          if (!scratch_operand (operands[4], E_SImode)
              || !
#line 23053 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          return 1653; /* *tls_local_dynamic_base_32_gnu */

        case 1:
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != USE)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != USE
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode)
            return -1;
          x13 = XVECEXP (x4, 0, 0);
          operands[1] = x13;
          if (!register_operand (operands[1], E_XFmode))
            return -1;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_HImode))
            return -1;
          x10 = XEXP (x6, 0);
          operands[3] = x10;
          if (!memory_operand (operands[3], E_HImode))
            return -1;
          x11 = XEXP (x3, 0);
          operands[4] = x11;
          if (!scratch_operand (operands[4], E_XFmode))
            return -1;
          switch (XINT (x4, 1))
            {
            case 78:
              if (!
#line 25356 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1750; /* fistdi2_floor */

            case 79:
              if (!
#line 25356 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1751; /* fistdi2_ceil */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pattern393 (x1) != 0)
        return -1;
      return 1657; /* *tls_local_dynamic_32_once */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 3)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern712 (x5, 
7, 
MINUS) != 0)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (pattern953 (x6, 
E_CCmode, 
17) != 0)
        return -1;
      x11 = XEXP (x3, 0);
      if (GET_CODE (x11) != MEM
          || GET_MODE (x11) != E_BLKmode)
        return -1;
      x14 = XEXP (x11, 0);
      if (GET_CODE (x14) != SCRATCH)
        return -1;
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      x13 = XVECEXP (x4, 0, 0);
      operands[1] = x13;
      x15 = XEXP (x5, 1);
      x16 = XEXP (x15, 1);
      operands[2] = x16;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1777 (x1, 
E_SImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1863; /* adjust_stack_and_probe_si */

        case E_DImode:
          if (pattern1777 (x1, 
E_DImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1864; /* adjust_stack_and_probe_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_6 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case AND:
      switch (pattern70 (x3))
        {
        case 0:
          if (!(
#line 3704 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0) && 
#line 3710 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_22 (insn, operands);

        case 1:
          if (!(
#line 3726 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1) && 
#line 3732 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_25 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_28 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (pattern829 (x3, 
E_QImode) != 0
              || !
#line 7095 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_129 (insn, operands);

        case E_HImode:
          if (pattern829 (x3, 
E_HImode) != 0
              || !
#line 7095 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_130 (insn, operands);

        case E_SImode:
          if (pattern830 (x3, 
E_SImode) != 0
              || !
#line 7095 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_131 (insn, operands);

        case E_DImode:
          if (pattern830 (x3, 
E_DImode) != 0
              || !(
#line 7095 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed
   && ix86_lea_for_add_ok (insn, operands)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_132 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          switch (pattern426 (x3))
            {
            case 0:
              if (!(
#line 7898 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7900 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_150 (insn, operands);

            case 1:
              if (!(
#line 7898 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7900 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_151 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          switch (pattern429 (x3))
            {
            case 0:
              if (!(
#line 7964 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7966 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_156 (insn, operands);

            case 1:
              if (!(
#line 7964 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7966 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_157 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          switch (pattern576 (x3))
            {
            case 0:
              if (!(
#line 7990 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7992 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_158 (insn, operands);

            case 1:
              if (!(
#line 7990 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7992 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_159 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case MULT:
      switch (pattern397 (x3))
        {
        case 0:
          if (!(
#line 7920 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7922 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_152 (insn, operands);

        case 1:
          if (!(
#line 7920 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7922 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_153 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
            case CONST_POLY_INT:
            case CONST_FIXED:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case CONST:
            case REG:
            case SUBREG:
            case LABEL_REF:
            case SYMBOL_REF:
            case HIGH:
              operands[3] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1074 (x3, 
E_QImode) != 0
                      || !(
#line 7941 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7943 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_154 (insn, operands);

                case E_HImode:
                  if (pattern1074 (x3, 
E_HImode) != 0
                      || !(
#line 7941 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7943 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_155 (insn, operands);

                case E_DImode:
                  if (pattern604 (x3, 
E_DImode) != 0
                      || !((
#line 14137 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT / 2
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14151 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_466 (insn, operands);

                case E_TImode:
                  if (pattern604 (x3, 
E_TImode) != 0
                      || !((
#line 14137 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 16 * BITS_PER_UNIT / 2
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14151 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_469 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              switch (pattern955 (x3))
                {
                case 0:
                  if (!((
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14062 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_430 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_433 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          switch (pattern715 (x3))
            {
            case 0:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_442 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_448 (insn, operands);

            case 2:
              if (!((
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14183 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_472 (insn, operands);

            case 3:
              if (!((
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14183 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_478 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          switch (pattern715 (x3))
            {
            case 0:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_445 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_451 (insn, operands);

            case 2:
              if (!((
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT
   && (DImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14183 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_475 (insn, operands);

            case 3:
              if (!((
#line 14169 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT
   && (TImode == DImode
       ? CONST_INT_P (operands[3])
	 && (UINTVAL (operands[3]) & ~GET_MODE_MASK (SImode)) == 0
       : CONST_INT_P (operands[3])
       ? INTVAL (operands[3]) >= 0
       : CONST_WIDE_INT_NUNITS (operands[3]) == 2
	 && CONST_WIDE_INT_ELT (operands[3], 1) == 0)
   && !(CONST_INT_P (operands[3])
	? ix86_endbr_immediate_operand (operands[3], VOIDmode)
	: ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[3],
								     0)),
					VOIDmode))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14183 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_481 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern402 (x3))
        {
        case 0:
          if (!((
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14079 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_436 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_439 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_454 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_460 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_457 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_463 (insn, operands);

        case 6:
          if (!((
#line 14198 "../../src/gcc/config/i386/i386.md"
(DImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14209 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_484 (insn, operands);

        case 7:
          if (!((
#line 14198 "../../src/gcc/config/i386/i386.md"
(TImode == DImode
   ? CONST_INT_P (operands[2])
     && (UINTVAL (operands[2]) & GET_MODE_MASK (SImode)) == 0
     && !ix86_endbr_immediate_operand (operands[2], VOIDmode)
   : CONST_WIDE_INT_P (operands[2])
     && CONST_WIDE_INT_NUNITS (operands[2]) == 2
     && CONST_WIDE_INT_ELT (operands[2], 0) == 0
     && !ix86_endbr_immediate_operand (GEN_INT (CONST_WIDE_INT_ELT (operands[2],
								    1)),
				       VOIDmode)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14209 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_487 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_20 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (pattern229 (x2, 
E_CCmode, 
17) != 0)
    return NULL;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[1] = x5;
      switch (pattern1178 (x3))
        {
        case 0:
          if ((
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_289 (insn, operands);
          break;

        case 1:
          if ((
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_292 (insn, operands);
          break;

        case 2:
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if (x86_64_hilo_general_operand (operands[2], E_DImode)
                  && ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13529 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_388 (insn, operands);
              if (const_int_operand (operands[2], E_DImode)
                  && (
#line 13655 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && 
#line 13659 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_395 (insn, operands);
            }
          if (const_int_operand (operands[2], E_DImode))
            {
              if (QIreg_operand (operands[0], E_DImode)
                  && register_operand (operands[1], E_DImode)
                  && (
#line 13952 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_423 (insn, operands);
              if (any_QIreg_operand (operands[0], E_DImode)
                  && general_operand (operands[1], E_DImode)
                  && (
#line 13990 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_429 (insn, operands);
            }
          break;

        case 3:
          if (((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13529 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_390 (insn, operands);
          break;

        case 4:
          if (QIreg_operand (operands[0], E_HImode)
              && register_operand (operands[1], E_HImode)
              && 
#line 13952 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
            return gen_split_419 (insn, operands);
          if (any_QIreg_operand (operands[0], E_HImode)
              && general_operand (operands[1], E_HImode)
              && 
#line 13990 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_425 (insn, operands);
          break;

        case 5:
          if (QIreg_operand (operands[0], E_SImode)
              && register_operand (operands[1], E_SImode)
              && 
#line 13952 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
            return gen_split_421 (insn, operands);
          if (any_QIreg_operand (operands[0], E_SImode)
              && general_operand (operands[1], E_SImode)
              && 
#line 13990 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_427 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG
          || pattern1177 (x4) != 0)
        return NULL;
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (pattern1683 (x3))
        {
        case 0:
          if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_295 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_298 (insn, operands);
          break;

        case 2:
          if (((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_301 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x7;
      switch (pattern1684 (x3))
        {
        case 0:
          if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_304 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_307 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_310 (insn, operands);

        case 3:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_324 (insn, operands);

        case 4:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_327 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_330 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != IOR)
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1243 (x4, 
E_SImode) != 0)
            return NULL;
          x10 = XEXP (x4, 1);
          operands[3] = x10;
          if (nonimmediate_operand (operands[3], E_SImode))
            {
              if (nonimmediate_operand (operands[2], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 13436 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                    return gen_split_379 (insn, operands);
                }
              if (register_operand (operands[2], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 13455 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                    return gen_split_381 (insn, operands);
                }
            }
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          if (!nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          if (nonimmediate_operand (operands[2], E_SImode)
              && rtx_equal_p (x10, operands[1])
              && 
#line 13474 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return gen_split_383 (insn, operands);
          if (!register_operand (operands[2], E_SImode)
              || !rtx_equal_p (x10, operands[2])
              || !
#line 13493 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return NULL;
          return gen_split_385 (insn, operands);

        case E_DImode:
          if (pattern1243 (x4, 
E_DImode) != 0)
            return NULL;
          x10 = XEXP (x4, 1);
          operands[3] = x10;
          if (nonimmediate_operand (operands[3], E_DImode))
            {
              if (nonimmediate_operand (operands[2], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 13436 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_380 (insn, operands);
                }
              if (register_operand (operands[2], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && (
#line 13455 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_382 (insn, operands);
                }
            }
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          if (!nonimmediate_operand (operands[3], E_DImode))
            return NULL;
          if (nonimmediate_operand (operands[2], E_DImode)
              && rtx_equal_p (x10, operands[1])
              && (
#line 13474 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_384 (insn, operands);
          if (!register_operand (operands[2], E_DImode)
              || !rtx_equal_p (x10, operands[2])
              || !(
#line 13493 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_386 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != XOR)
        return NULL;
      switch (pattern1049 (x3))
        {
        case 0:
          if (!(
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 13686 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_396 (insn, operands);

        case 1:
          if (!(
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 13686 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_397 (insn, operands);

        case 2:
          if (!((
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13686 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_398 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      switch (pattern1058 (x3, 
1))
        {
        case 0:
          if (!(
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18829 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_797 (insn, operands);

        case 1:
          if (!((
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18829 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_799 (insn, operands);

        case 2:
          if (!(
#line 18852 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18857 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_801 (insn, operands);

        case 3:
          if (!((
#line 18852 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18857 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_803 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return NULL;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return NULL;
      x9 = XEXP (x6, 1);
      if (GET_CODE (x9) != SUBREG
          || maybe_ne (SUBREG_BYTE (x9), 0)
          || GET_MODE (x9) != E_SImode)
        return NULL;
      x12 = XEXP (x9, 0);
      if (GET_CODE (x12) != CLZ
          || GET_MODE (x12) != E_DImode)
        return NULL;
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !(
#line 21309 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 21311 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_878 (insn, operands);

    case PLUS:
      x11 = XEXP (x5, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return NULL;
      switch (pattern952 (x3))
        {
        case 0:
          if (!
#line 21865 "../../src/gcc/config/i386/i386.md"
(TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
            return NULL;
          return gen_split_902 (insn, operands);

        case 1:
          if (!(
#line 21865 "../../src/gcc/config/i386/i386.md"
(TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_903 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_30 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (pattern338 (x1) != 0)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (pattern1150 (x3))
        {
        case 0:
          if (!(
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4841 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_57 (insn, operands);

        case 1:
          if (!(
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4841 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_58 (insn, operands);

        case 2:
          if (!(
#line 4893 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 4895 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_59 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_nonmemory_operand (operands[2], E_SImode))
            return NULL;
          if (
#line 7065 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands)))
            return gen_split_124 (insn, operands);
          if (!
#line 7115 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_133 (insn, operands);

        case UNSPEC:
          if (pattern1153 (x5) != 0)
            return NULL;
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !(
#line 23231 "../../src/gcc/config/i386/i386.md"
(TARGET_X32) && 
#line 23233 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_922 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      if (GET_MODE (x4) != E_SImode
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case REG:
        case SUBREG:
          if (!register_operand (operands[2], E_QImode)
              || !register_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 16086 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
            return NULL;
          return gen_split_574 (insn, operands);

        case CONST_INT:
          if (!const_0_to_3_operand (operands[2], E_VOIDmode)
              || !general_reg_operand (operands[0], E_DImode)
              || !index_reg_operand (operands[1], E_SImode)
              || !
#line 16321 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
            return NULL;
          return gen_split_585 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      if (pattern1173 (x3) != 0
          || !
#line 17522 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
        return NULL;
      return gen_split_626 (insn, operands);

    case ASHIFTRT:
      if (pattern1173 (x3) != 0
          || !
#line 17522 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed))
        return NULL;
      return gen_split_627 (insn, operands);

    case ROTATE:
      if (pattern1174 (x3) != 0
          || !
#line 18634 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed
   && !optimize_function_for_size_p (cfun)))
        return NULL;
      return gen_split_788 (insn, operands);

    case ROTATERT:
      if (pattern1174 (x3) != 0
          || !
#line 18650 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed
   && !optimize_function_for_size_p (cfun)))
        return NULL;
      return gen_split_789 (insn, operands);

    case CTZ:
      if (pattern1175 (x3, 
E_SImode, 
E_DImode) != 0
          || !
#line 21171 "../../src/gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
        return NULL;
      return gen_split_877 (insn, operands);

    case CLZ:
      if (pattern1175 (x3, 
E_SImode, 
E_DImode) != 0
          || !(
#line 21596 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT) && 
#line 21598 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_889 (insn, operands);

    case POPCOUNT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern346 (x3, 
E_SImode, 
E_DImode) != 0
              || !(
#line 22433 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT) && 
#line 22441 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_913 (insn, operands);

        case E_SImode:
          if (pattern346 (x3, 
E_HImode, 
E_SImode) != 0
              || !(
#line 22499 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()) && 
#line 22502 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_915 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_36 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (promotable_binary_operator (operands[3], E_VOIDmode)
      && pattern338 (x1) == 0
      && general_reg_operand (operands[0], E_VOIDmode))
    {
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_VOIDmode))
        {
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (aligned_operand (operands[2], E_VOIDmode)
              && 
#line 27650 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))))
            return gen_split_983 (insn, operands);
        }
    }
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return NULL;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_CODE (x3))
    {
    case PLUS:
      if (GET_MODE (x3) != E_V2QImode)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && general_reg_operand (operands[2], E_V2QImode)
          && 
#line 3260 "../../src/gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
        return gen_split_1048 (insn, operands);
      if (!sse_reg_operand (operands[1], E_V2QImode)
          || !sse_reg_operand (operands[0], E_V2QImode)
          || !sse_reg_operand (operands[2], E_V2QImode)
          || !
#line 3294 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1050 (insn, operands);

    case MINUS:
      if (GET_MODE (x3) != E_V2QImode)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && general_reg_operand (operands[2], E_V2QImode)
          && 
#line 3260 "../../src/gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
        return gen_split_1049 (insn, operands);
      if (!sse_reg_operand (operands[1], E_V2QImode)
          || !sse_reg_operand (operands[0], E_V2QImode)
          || !sse_reg_operand (operands[2], E_V2QImode)
          || !
#line 3294 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1051 (insn, operands);

    case ASHIFT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V2QImode:
          if (pattern1250 (x3, 
E_V2QImode) != 0
              || !
#line 4009 "../../src/gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
            return NULL;
          return gen_split_1059 (insn, operands);

        case E_QImode:
          if (pattern1340 (x3, 
E_QImode) != 0
              || !
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1224 (insn, operands);

        case E_HImode:
          if (pattern1340 (x3, 
E_HImode) != 0
              || !
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1226 (insn, operands);

        case E_SImode:
          if (pattern1340 (x3, 
E_SImode) != 0
              || !(
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1228 (insn, operands);

        case E_DImode:
          if (pattern1340 (x3, 
E_DImode) != 0
              || !(
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1230 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case NOT:
          x9 = XEXP (x4, 0);
          operands[1] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V4QImode:
              if (GET_MODE (x3) != E_V4QImode
                  || GET_MODE (x4) != E_V4QImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V4QImode)
                  && general_reg_operand (operands[1], E_V4QImode)
                  && general_reg_operand (operands[2], E_V4QImode))
                {
                  if (
#line 4622 "../../src/gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1075 (insn, operands);
                  if (
#line 4639 "../../src/gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1078 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V4QImode)
                  || !sse_reg_operand (operands[1], E_V4QImode)
                  || !sse_reg_operand (operands[2], E_V4QImode)
                  || !
#line 4658 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1081 (insn, operands);

            case E_V2QImode:
              if (GET_MODE (x3) != E_V2QImode
                  || GET_MODE (x4) != E_V2QImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V2QImode)
                  && general_reg_operand (operands[1], E_V2QImode)
                  && general_reg_operand (operands[2], E_V2QImode))
                {
                  if (
#line 4622 "../../src/gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1076 (insn, operands);
                  if (
#line 4639 "../../src/gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1079 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V2QImode)
                  || !sse_reg_operand (operands[1], E_V2QImode)
                  || !sse_reg_operand (operands[2], E_V2QImode)
                  || !
#line 4658 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1082 (insn, operands);

            case E_V2HImode:
              if (GET_MODE (x3) != E_V2HImode
                  || GET_MODE (x4) != E_V2HImode)
                return NULL;
              if (general_reg_operand (operands[0], E_V2HImode)
                  && general_reg_operand (operands[1], E_V2HImode)
                  && general_reg_operand (operands[2], E_V2HImode))
                {
                  if (
#line 4622 "../../src/gcc/config/i386/mmx.md"
(TARGET_BMI && reload_completed))
                    return gen_split_1077 (insn, operands);
                  if (
#line 4639 "../../src/gcc/config/i386/mmx.md"
(!TARGET_BMI && reload_completed))
                    return gen_split_1080 (insn, operands);
                }
              if (!sse_reg_operand (operands[0], E_V2HImode)
                  || !sse_reg_operand (operands[1], E_V2HImode)
                  || !sse_reg_operand (operands[2], E_V2HImode)
                  || !
#line 4658 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1083 (insn, operands);

            case E_QImode:
              if (pattern1507 (x3, 
E_QImode) != 0
                  || !
#line 2162 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1207 (insn, operands);

            case E_HImode:
              if (pattern1507 (x3, 
E_HImode) != 0
                  || !
#line 2162 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1208 (insn, operands);

            case E_SImode:
              if (pattern1507 (x3, 
E_SImode) != 0
                  || !(
#line 2162 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1209 (insn, operands);

            case E_DImode:
              if (pattern1507 (x3, 
E_DImode) != 0
                  || !(
#line 2162 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1210 (insn, operands);

            default:
              return NULL;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (pattern1254 (x3))
            {
            case 0:
              if (nonimmediate_gr_operand (operands[0], E_V4QImode)
                  && nonimmediate_gr_operand (operands[1], E_V4QImode)
                  && reg_or_const_vector_operand (operands[2], E_V4QImode)
                  && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1084 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V4QImode)
                  || !sse_reg_operand (operands[1], E_V4QImode)
                  || !sse_reg_operand (operands[2], E_V4QImode)
                  || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1093 (insn, operands);

            case 1:
              if (nonimmediate_gr_operand (operands[0], E_V2QImode)
                  && nonimmediate_gr_operand (operands[1], E_V2QImode)
                  && reg_or_const_vector_operand (operands[2], E_V2QImode)
                  && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1087 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V2QImode)
                  || !sse_reg_operand (operands[1], E_V2QImode)
                  || !sse_reg_operand (operands[2], E_V2QImode)
                  || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1096 (insn, operands);

            case 2:
              if (nonimmediate_gr_operand (operands[0], E_V2HImode)
                  && nonimmediate_gr_operand (operands[1], E_V2HImode)
                  && reg_or_const_vector_operand (operands[2], E_V2HImode)
                  && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
                return gen_split_1090 (insn, operands);
              if (!sse_reg_operand (operands[0], E_V2HImode)
                  || !sse_reg_operand (operands[1], E_V2HImode)
                  || !sse_reg_operand (operands[2], E_V2HImode)
                  || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
                return NULL;
              return gen_split_1099 (insn, operands);

            case 3:
              if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1195 (insn, operands);

            case 4:
              if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1198 (insn, operands);

            case 5:
              if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1201 (insn, operands);

            case 6:
              if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1204 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      switch (pattern1254 (x3))
        {
        case 0:
          if (nonimmediate_gr_operand (operands[0], E_V4QImode)
              && nonimmediate_gr_operand (operands[1], E_V4QImode)
              && reg_or_const_vector_operand (operands[2], E_V4QImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1085 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V4QImode)
              || !sse_reg_operand (operands[1], E_V4QImode)
              || !sse_reg_operand (operands[2], E_V4QImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1094 (insn, operands);

        case 1:
          if (nonimmediate_gr_operand (operands[0], E_V2QImode)
              && nonimmediate_gr_operand (operands[1], E_V2QImode)
              && reg_or_const_vector_operand (operands[2], E_V2QImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1088 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !sse_reg_operand (operands[2], E_V2QImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1097 (insn, operands);

        case 2:
          if (nonimmediate_gr_operand (operands[0], E_V2HImode)
              && nonimmediate_gr_operand (operands[1], E_V2HImode)
              && reg_or_const_vector_operand (operands[2], E_V2HImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1091 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2HImode)
              || !sse_reg_operand (operands[1], E_V2HImode)
              || !sse_reg_operand (operands[2], E_V2HImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1100 (insn, operands);

        case 3:
          if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1196 (insn, operands);

        case 4:
          if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1199 (insn, operands);

        case 5:
          if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1202 (insn, operands);

        case 6:
          if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1205 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern1254 (x3))
        {
        case 0:
          if (nonimmediate_gr_operand (operands[0], E_V4QImode)
              && nonimmediate_gr_operand (operands[1], E_V4QImode)
              && reg_or_const_vector_operand (operands[2], E_V4QImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1086 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V4QImode)
              || !sse_reg_operand (operands[1], E_V4QImode)
              || !sse_reg_operand (operands[2], E_V4QImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1095 (insn, operands);

        case 1:
          if (nonimmediate_gr_operand (operands[0], E_V2QImode)
              && nonimmediate_gr_operand (operands[1], E_V2QImode)
              && reg_or_const_vector_operand (operands[2], E_V2QImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1089 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !sse_reg_operand (operands[2], E_V2QImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1098 (insn, operands);

        case 2:
          if (nonimmediate_gr_operand (operands[0], E_V2HImode)
              && nonimmediate_gr_operand (operands[1], E_V2HImode)
              && reg_or_const_vector_operand (operands[2], E_V2HImode)
              && 
#line 4725 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
            return gen_split_1092 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2HImode)
              || !sse_reg_operand (operands[1], E_V2HImode)
              || !sse_reg_operand (operands[2], E_V2HImode)
              || !
#line 4749 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1101 (insn, operands);

        case 3:
          if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1197 (insn, operands);

        case 4:
          if (!
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1200 (insn, operands);

        case 5:
          if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1203 (insn, operands);

        case 6:
          if (!(
#line 2126 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1206 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_53 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_SELECT:
      if (GET_MODE (x4) != E_SImode)
        return NULL;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL
          || XVECLEN (x5, 0) != 1)
        return NULL;
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      if (XWINT (x6, 0) == 0L)
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V2SImode:
              if (register_operand (operands[1], E_V2SImode)
                  && 
#line 5774 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2 && reload_completed))
                return gen_split_1119 (insn, operands);
              break;

            case E_V4SImode:
              if (register_operand (operands[1], E_V4SImode)
                  && 
#line 21251 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
                return gen_split_3392 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[2] = x6;
      switch (GET_MODE (operands[1]))
        {
        case E_V2SImode:
          if (!memory_operand (operands[1], E_V2SImode)
              || !const_0_to_1_operand (operands[2], E_SImode)
              || !(
#line 5842 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT) && 
#line 5844 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1121 (insn, operands);

        case E_V4SImode:
          if (!memory_operand (operands[1], E_V4SImode)
              || !const_0_to_3_operand (operands[2], E_SImode)
              || !(
#line 21326 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 21328 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3393 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x7 = XEXP (x4, 0);
      switch (GET_CODE (x7))
        {
        case REG:
          operands[1] = x7;
          if (!mask_reg_operand (operands[1], E_SImode)
              || !mask_reg_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode
              || !
#line 2239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && reload_completed))
            return NULL;
          return gen_split_1215 (insn, operands);

        case SUBREG:
          if (maybe_ne (SUBREG_BYTE (x7), 0)
              || GET_MODE (x7) != E_HImode)
            return NULL;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != UNSPEC
              || XVECLEN (x8, 0) != 1
              || XINT (x8, 1) != 49
              || GET_MODE (x8) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_HImode)
            return NULL;
          x9 = XVECEXP (x8, 0, 0);
          operands[1] = x9;
          if (!register_operand (operands[1], E_V16QImode)
              || !
#line 22165 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return NULL;
          return gen_split_3441 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 49
          || GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return NULL;
      x10 = XVECEXP (x4, 0, 0);
      switch (GET_CODE (x10))
        {
        case LT:
          switch (pattern981 (x10))
            {
            case 0:
              if (!((
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3413 (insn, operands);

            case 1:
              if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3415 (insn, operands);

            case 2:
              if (!((
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3417 (insn, operands);

            case 3:
              if (!((
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3419 (insn, operands);

            case 4:
              if (!((
#line 22276 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22278 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3450 (insn, operands);

            case 5:
              if (!(
#line 22276 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22278 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3451 (insn, operands);

            default:
              return NULL;
            }

        case SUBREG:
          switch (pattern1082 (x10))
            {
            case 0:
              if (!((
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3421 (insn, operands);

            case 1:
              if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3423 (insn, operands);

            case 2:
              if (!((
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3425 (insn, operands);

            case 3:
              if (!((
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3427 (insn, operands);

            case 4:
              if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3433 (insn, operands);

            case 5:
              if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3435 (insn, operands);

            case 6:
              if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3437 (insn, operands);

            case 7:
              if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3439 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          switch (pattern983 (x10))
            {
            case 0:
              if (!((
#line 22305 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22307 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3452 (insn, operands);

            case 1:
              if (!(
#line 22305 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22307 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3453 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SUBREG:
      if (pattern111 (x3) != 0
          || !(
#line 22151 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22153 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3440 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_61 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern835 (x3) != 0)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SFmode:
          if (!register_operand (operands[1], E_V16SFmode)
              || !(
#line 12554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1561 (insn, operands);

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 12955 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1570 (insn, operands);

        default:
          return NULL;
        }

    case E_V4SImode:
      if (!nonimmediate_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode)
              || !(
#line 12554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1562 (insn, operands);

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !
#line 12955 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1569 (insn, operands);

        default:
          return NULL;
        }

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 12619 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1563 (insn, operands);

    case E_V4DImode:
      if (!nonimmediate_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 12619 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || (REG_P (operands[0]) && !EXT_REX_SSE_REG_P (operands[1])))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1564 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_64 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      switch (pattern532 (x2))
        {
        case 0:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1677 (insn, operands);

        case 1:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1704 (insn, operands);

        case 2:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1731 (insn, operands);

        case 3:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1758 (insn, operands);

        case 4:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1785 (insn, operands);

        case 5:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1812 (insn, operands);

        case 6:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1839 (insn, operands);

        case 7:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1866 (insn, operands);

        case 8:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1893 (insn, operands);

        case 9:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1920 (insn, operands);

        case 10:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1947 (insn, operands);

        case 11:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1974 (insn, operands);

        case 12:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1680 (insn, operands);

        case 13:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1707 (insn, operands);

        case 14:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1734 (insn, operands);

        case 15:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1761 (insn, operands);

        case 16:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1788 (insn, operands);

        case 17:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1815 (insn, operands);

        case 18:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1842 (insn, operands);

        case 19:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1869 (insn, operands);

        case 20:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1896 (insn, operands);

        case 21:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1923 (insn, operands);

        case 22:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1950 (insn, operands);

        case 23:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1977 (insn, operands);

        case 24:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1683 (insn, operands);

        case 25:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1710 (insn, operands);

        case 26:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1737 (insn, operands);

        case 27:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1764 (insn, operands);

        case 28:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1791 (insn, operands);

        case 29:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1818 (insn, operands);

        case 30:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1845 (insn, operands);

        case 31:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1872 (insn, operands);

        case 32:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1899 (insn, operands);

        case 33:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1926 (insn, operands);

        case 34:
          if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1953 (insn, operands);

        case 35:
          if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1980 (insn, operands);

        case 36:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2961 (insn, operands);

        case 37:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2970 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2979 (insn, operands);

        case 39:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2988 (insn, operands);

        case 40:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2997 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3006 (insn, operands);

        case 42:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3015 (insn, operands);

        case 43:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3024 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3033 (insn, operands);

        case 45:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3042 (insn, operands);

        case 46:
          if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3051 (insn, operands);

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3060 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      switch (pattern534 (x2))
        {
        case 0:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2325 (insn, operands);

        case 1:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2352 (insn, operands);

        case 2:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2379 (insn, operands);

        case 3:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2406 (insn, operands);

        case 4:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2433 (insn, operands);

        case 5:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2460 (insn, operands);

        case 6:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2487 (insn, operands);

        case 7:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2514 (insn, operands);

        case 8:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2541 (insn, operands);

        case 9:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2568 (insn, operands);

        case 10:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2595 (insn, operands);

        case 11:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2622 (insn, operands);

        default:
          return NULL;
        }

    case IOR:
      switch (pattern534 (x2))
        {
        case 0:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2328 (insn, operands);

        case 1:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2355 (insn, operands);

        case 2:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2382 (insn, operands);

        case 3:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2409 (insn, operands);

        case 4:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2436 (insn, operands);

        case 5:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2463 (insn, operands);

        case 6:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2490 (insn, operands);

        case 7:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2517 (insn, operands);

        case 8:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2544 (insn, operands);

        case 9:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2571 (insn, operands);

        case 10:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2598 (insn, operands);

        case 11:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2625 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern534 (x2))
        {
        case 0:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2331 (insn, operands);

        case 1:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2358 (insn, operands);

        case 2:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2385 (insn, operands);

        case 3:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2412 (insn, operands);

        case 4:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2439 (insn, operands);

        case 5:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2466 (insn, operands);

        case 6:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2493 (insn, operands);

        case 7:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2520 (insn, operands);

        case 8:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2547 (insn, operands);

        case 9:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2574 (insn, operands);

        case 10:
          if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2601 (insn, operands);

        case 11:
          if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2628 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_74 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return split_72 (x1, insn);

    case IOR:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern536 (x2))
            {
            case 0:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1994 (insn, operands);

            case 1:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2021 (insn, operands);

            case 2:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2048 (insn, operands);

            case 3:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2075 (insn, operands);

            case 4:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2102 (insn, operands);

            case 5:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2129 (insn, operands);

            case 6:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2156 (insn, operands);

            case 7:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2183 (insn, operands);

            case 8:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2210 (insn, operands);

            case 9:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2237 (insn, operands);

            case 10:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2264 (insn, operands);

            case 11:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2291 (insn, operands);

            case 12:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1997 (insn, operands);

            case 13:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2024 (insn, operands);

            case 14:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2051 (insn, operands);

            case 15:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2078 (insn, operands);

            case 16:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2105 (insn, operands);

            case 17:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2132 (insn, operands);

            case 18:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2159 (insn, operands);

            case 19:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2186 (insn, operands);

            case 20:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2213 (insn, operands);

            case 21:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2240 (insn, operands);

            case 22:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2267 (insn, operands);

            case 23:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2294 (insn, operands);

            case 24:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2000 (insn, operands);

            case 25:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2027 (insn, operands);

            case 26:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2054 (insn, operands);

            case 27:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2081 (insn, operands);

            case 28:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2108 (insn, operands);

            case 29:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2135 (insn, operands);

            case 30:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2162 (insn, operands);

            case 31:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2189 (insn, operands);

            case 32:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2216 (insn, operands);

            case 33:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2243 (insn, operands);

            case 34:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2270 (insn, operands);

            case 35:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2297 (insn, operands);

            case 36:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3068 (insn, operands);

            case 37:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3077 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3086 (insn, operands);

            case 39:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3095 (insn, operands);

            case 40:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3104 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3113 (insn, operands);

            case 42:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3122 (insn, operands);

            case 43:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3131 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3140 (insn, operands);

            case 45:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3149 (insn, operands);

            case 46:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3158 (insn, operands);

            case 47:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3167 (insn, operands);

            default:
              return NULL;
            }

        case AND:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2642 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2669 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2696 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2723 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2750 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2777 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2804 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2831 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2858 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2885 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2912 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2939 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2645 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2672 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2699 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2726 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2753 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2780 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2807 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2834 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2861 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2888 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2915 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2942 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2648 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2675 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2702 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2729 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2756 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2783 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2810 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2837 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2864 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2891 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2918 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2945 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
        case NOT:
          switch (pattern536 (x2))
            {
            case 0:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2003 (insn, operands);

            case 1:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2030 (insn, operands);

            case 2:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2057 (insn, operands);

            case 3:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2084 (insn, operands);

            case 4:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2111 (insn, operands);

            case 5:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2138 (insn, operands);

            case 6:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2165 (insn, operands);

            case 7:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2192 (insn, operands);

            case 8:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2219 (insn, operands);

            case 9:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2246 (insn, operands);

            case 10:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2273 (insn, operands);

            case 11:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2300 (insn, operands);

            case 12:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2006 (insn, operands);

            case 13:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2033 (insn, operands);

            case 14:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2060 (insn, operands);

            case 15:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2087 (insn, operands);

            case 16:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2114 (insn, operands);

            case 17:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2141 (insn, operands);

            case 18:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2168 (insn, operands);

            case 19:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2195 (insn, operands);

            case 20:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2222 (insn, operands);

            case 21:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2249 (insn, operands);

            case 22:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2276 (insn, operands);

            case 23:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2303 (insn, operands);

            case 24:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2009 (insn, operands);

            case 25:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2036 (insn, operands);

            case 26:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2063 (insn, operands);

            case 27:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2090 (insn, operands);

            case 28:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2117 (insn, operands);

            case 29:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2144 (insn, operands);

            case 30:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2171 (insn, operands);

            case 31:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2198 (insn, operands);

            case 32:
              if (!(
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2225 (insn, operands);

            case 33:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2252 (insn, operands);

            case 34:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2279 (insn, operands);

            case 35:
              if (!((
#line 13790 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13802 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2306 (insn, operands);

            case 36:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3071 (insn, operands);

            case 37:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3080 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3089 (insn, operands);

            case 39:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3098 (insn, operands);

            case 40:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3107 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3116 (insn, operands);

            case 42:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3125 (insn, operands);

            case 43:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3134 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3143 (insn, operands);

            case 45:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3152 (insn, operands);

            case 46:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3161 (insn, operands);

            case 47:
              if (!((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3170 (insn, operands);

            default:
              return NULL;
            }

        case AND:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2651 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2678 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2705 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2732 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2759 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2786 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2813 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2840 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2867 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2894 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2921 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2948 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2654 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2681 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2708 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2735 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2762 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2789 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2816 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2843 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2870 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2897 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2924 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2951 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern537 (x2))
            {
            case 0:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2657 (insn, operands);

            case 1:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2684 (insn, operands);

            case 2:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2711 (insn, operands);

            case 3:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2738 (insn, operands);

            case 4:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2765 (insn, operands);

            case 5:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2792 (insn, operands);

            case 6:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2819 (insn, operands);

            case 7:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2846 (insn, operands);

            case 8:
              if (!(
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2873 (insn, operands);

            case 9:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2900 (insn, operands);

            case 10:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2927 (insn, operands);

            case 11:
              if (!((
#line 13875 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()
   && (rtx_equal_p (STRIP_UNARY (operands[1]),
		    STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[4]))
       || rtx_equal_p (STRIP_UNARY (operands[1]),
		       STRIP_UNARY (operands[3]))
       || rtx_equal_p (STRIP_UNARY (operands[2]),
		       STRIP_UNARY (operands[3])))) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2954 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}
