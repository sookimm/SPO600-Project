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
pattern6 (rtx x1, machine_mode i1)
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
pattern11 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern19 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  return pattern18 (x1); /* [-1, 1] */
}

int
pattern23 (rtx x1)
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
pattern29 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 1;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      return 2;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 3;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      return 4;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      return 5;

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode)
        return -1;
      return 6;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode)
        return -1;
      return 7;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode)
        return -1;
      return 8;

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || GET_MODE (x3) != E_V1TImode)
        return -1;
      return 9;

    case E_V4TImode:
      if (!register_operand (operands[0], E_V4TImode)
          || GET_MODE (x3) != E_V4TImode
          || !nonimmediate_operand (operands[1], E_V4TImode)
          || !const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      return 10;

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || GET_MODE (x3) != E_V2TImode
          || !const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern48 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  return pattern47 (x5); /* [-1, 3] */
}

int
pattern53 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V4HImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!register_mmxmem_operand (operands[2], E_V4HImode))
    return -1;
  x6 = XEXP (x1, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x7, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern60 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!nonimmediate_operand (operands[0], E_HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern66 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  return 0;
}

int
pattern73 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || !nonimmediate_operand (operands[1], E_TImode)
      || !x86_64_hilo_general_operand (operands[2], E_TImode))
    return -1;
  return 0;
}

int
pattern80 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode
      || !register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern84 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  operands[4] = x8;
  if (!nonimmediate_operand (operands[4], i2))
    return -1;
  x9 = XEXP (x1, 1);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
      operands[1] = x9;
      if (!register_operand (operands[1], i1))
        return -1;
      return 0;

    case ZERO_EXTEND:
      if (GET_MODE (x9) != i1)
        return -1;
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      if (!nonimmediate_operand (operands[1], i2))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern97 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], E_V2DImode))
    return -1;
  return 0;
}

int
pattern102 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != ASHIFT
      || GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND
      || GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != ZERO_EXTEND
      || GET_MODE (x5) != E_DImode)
    return -1;
  return pattern85 (x1, 
E_DImode, 
E_SImode); /* [-1, 1] */
}

int
pattern111 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 49
      || GET_MODE (x3) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  return 0;
}

int
pattern118 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
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
      return 0;

    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern116 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case PLUS:
      res = pattern19 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern117 (x1);
      if (res >= 0)
        return res + 5; /* [5, 6] */
      return -1;

    default:
      return -1;
    }
}

int
pattern134 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  operands[3] = x3;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 0;

        case E_V16HFmode:
          return 1;

        case E_V32HFmode:
          return 2;

        case E_V16SFmode:
          return 3;

        case E_V8SFmode:
          return 4;

        case E_V4SFmode:
          return 5;

        case E_V8DFmode:
          return 6;

        case E_V4DFmode:
          return 7;

        case E_V2DFmode:
          return 8;

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x5) != E_V2SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL
          || XVECLEN (x6, 0) != 2)
        return -1;
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || GET_MODE (x4) != E_V2DFmode)
        return -1;
      x9 = XEXP (x5, 0);
      operands[1] = x9;
      if (!nonimmediate_operand (operands[1], E_V4SImode)
          || !nonimm_or_0_operand (operands[2], E_V2DFmode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern149 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  operands[3] = x3;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          return pattern147 (x1, 
E_V16HImode, 
E_V16QImode, 
E_HImode); /* [-1, 0] */

        case E_V32HImode:
          if (pattern147 (x1, 
E_V32HImode, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_V8HImode:
          if (pattern148 (x1, 
E_V8HImode, 
E_V8QImode) != 0)
            return -1;
          return 2;

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x1) != E_V16SImode
              || GET_MODE (x4) != E_V16SImode
              || !nonimm_or_0_operand (operands[2], E_V16SImode)
              || !register_operand (operands[3], E_HImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              return 3;

            case E_V16HImode:
              if (!nonimmediate_operand (operands[1], E_V16HImode))
                return -1;
              return 4;

            default:
              return -1;
            }

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x1) != E_V8SImode
              || GET_MODE (x4) != E_V8SImode
              || !nonimm_or_0_operand (operands[2], E_V8SImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8QImode:
              if (!memory_operand (operands[1], E_V8QImode))
                return -1;
              return 5;

            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              return 6;

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x1) != E_V4SImode
              || GET_MODE (x4) != E_V4SImode
              || !nonimm_or_0_operand (operands[2], E_V4SImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4QImode:
              if (!memory_operand (operands[1], E_V4QImode))
                return -1;
              return 7;

            case E_V4HImode:
              if (!memory_operand (operands[1], E_V4HImode))
                return -1;
              return 8;

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x1) != E_V8DImode
              || GET_MODE (x4) != E_V8DImode
              || !nonimm_or_0_operand (operands[2], E_V8DImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8QImode:
              if (!memory_operand (operands[1], E_V8QImode))
                return -1;
              return 9;

            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              return 10;

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode))
                return -1;
              return 11;

            default:
              return -1;
            }

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x1) != E_V4DImode
              || GET_MODE (x4) != E_V4DImode
              || !nonimm_or_0_operand (operands[2], E_V4DImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4QImode:
              if (!memory_operand (operands[1], E_V4QImode))
                return -1;
              return 12;

            case E_V4HImode:
              if (!memory_operand (operands[1], E_V4HImode))
                return -1;
              return 13;

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              return 14;

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x1) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || !nonimm_or_0_operand (operands[2], E_V2DImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2QImode:
              if (!memory_operand (operands[1], E_V2QImode))
                return -1;
              return 15;

            case E_V2HImode:
              if (!memory_operand (operands[1], E_V2HImode))
                return -1;
              return 16;

            case E_V2SImode:
              if (!memory_operand (operands[1], E_V2SImode))
                return -1;
              return 17;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      return 18;

    default:
      return -1;
    }
}

int
pattern198 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern196 (x3); /* [-1, 1] */
}

int
pattern204 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern203 (x1); /* [-1, 3] */
}

int
pattern205 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern204 (x1); /* [-1, 3] */
}

int
pattern208 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  switch (GET_CODE (x7))
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
      return 0;

    case AND:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern205 (x5);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    case PLUS:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern206 (x5);
      if (res >= 0)
        return res + 5; /* [5, 8] */
      return -1;

    case MINUS:
      if (GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      res = pattern207 (x5);
      if (res >= 0)
        return res + 9; /* [9, 12] */
      return -1;

    default:
      return -1;
    }
}

int
pattern224 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != SET)
    return -1;
  return 0;
}

int
pattern232 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (!ix86_comparison_operator (x3, E_VOIDmode))
    return -1;
  operands[1] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x1, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x7;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      return 0;

    case STRICT_LOW_PART:
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern249 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[3] = x5;
  return 0;
}

int
pattern259 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[2] = x2;
      x3 = XEXP (x2, 1);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern265 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern270 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern269 (x1, 
E_V4HImode, 
E_V4QImode, 
E_V8QImode); /* [-1, 0] */

    case E_V4HImode:
      if (pattern269 (x1, 
E_V2SImode, 
E_V2HImode, 
E_V4HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern280 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern287 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (!register_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern295 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern293 (x1); /* [-1, 2] */

    case E_DImode:
      res = pattern294 (x1);
      if (res >= 0)
        return res + 3; /* [3, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern301 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode
      || !register_operand (operands[0], E_DImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  if (!register_mmxmem_operand (operands[2], E_DImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern309 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != E_DImode
      || !const0_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern318 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      if (XVECLEN (x3, 0) != 3
          || XINT (x3, 1) != 59)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[3] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[4] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[5] = x6;
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          return pattern316 (x1, 
E_V8SFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern316 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V4DFmode:
          if (pattern316 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 2;

        case E_V2DFmode:
          if (pattern316 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case NOT:
      x7 = XEXP (x3, 0);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 3
          || XINT (x7, 1) != 59
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[3] = x8;
      x9 = XVECEXP (x7, 0, 1);
      operands[4] = x9;
      x10 = XVECEXP (x7, 0, 2);
      operands[5] = x10;
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern317 (x1, 
E_V8SFmode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern317 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 5;

        case E_V4DFmode:
          if (pattern317 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern317 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 7;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern335 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[2] = x4;
      return 0;

    case NOT:
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern334 (x1, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern334 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        case E_V64QImode:
          if (pattern334 (x1, 
E_V64QImode) != 0)
            return -1;
          return 3;

        case E_V32QImode:
          if (pattern334 (x1, 
E_V32QImode) != 0)
            return -1;
          return 4;

        case E_V16QImode:
          if (pattern334 (x1, 
E_V16QImode) != 0)
            return -1;
          return 5;

        case E_V32HImode:
          if (pattern334 (x1, 
E_V32HImode) != 0)
            return -1;
          return 6;

        case E_V16HImode:
          if (pattern334 (x1, 
E_V16HImode) != 0)
            return -1;
          return 7;

        case E_V8HImode:
          if (pattern334 (x1, 
E_V8HImode) != 0)
            return -1;
          return 8;

        case E_V8SImode:
          if (pattern334 (x1, 
E_V8SImode) != 0)
            return -1;
          return 9;

        case E_V4SImode:
          if (pattern334 (x1, 
E_V4SImode) != 0)
            return -1;
          return 10;

        case E_V4DImode:
          if (pattern334 (x1, 
E_V4DImode) != 0)
            return -1;
          return 11;

        case E_V2DImode:
          if (pattern334 (x1, 
E_V2DImode) != 0)
            return -1;
          return 12;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern347 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern346 (x1, 
E_QImode, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern361 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !memory_operand (operands[0], i1)
      || !nonmemory_operand (operands[1], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern366 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 110)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_V2SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2SFmode))
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern374 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !register_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern382 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern388 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern395 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !memory_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern404 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 1);
  switch (GET_CODE (x6))
    {
    case AND:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      return pattern205 (x5); /* [-1, 3] */

    case PLUS:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      res = pattern206 (x5);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    case MINUS:
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      res = pattern207 (x5);
      if (res >= 0)
        return res + 8; /* [8, 11] */
      return -1;

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
      return 12;

    default:
      return -1;
    }
}

int
pattern420 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
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
  return 0;
}

int
pattern431 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return 0;

    case E_HImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern442 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  operands[2] = x1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return 0;

    case E_DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern451 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return 0;

    case E_DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern457 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[4] = x5;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern454 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern454 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern454 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern454 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern454 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern454 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern454 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern454 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern454 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x5, 0) != 1L)
        return -1;
      res = pattern456 (x1);
      if (res >= 0)
        return res + 9; /* [9, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern481 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XVECEXP (x2, 0, 2);
  operands[3] = x5;
  x6 = XEXP (x1, 1);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      x7 = XEXP (x1, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return pattern478 (x1, 
E_V32HImode, 
E_SImode); /* [-1, 0] */

        case E_V16SImode:
          if (pattern478 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern478 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16HImode:
          if (pattern478 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SImode:
          if (pattern478 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4DImode:
          if (pattern478 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8HImode:
          if (pattern478 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4SImode:
          if (pattern478 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DImode:
          if (pattern478 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x1, 2);
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern480 (x1, 
E_V32HImode, 
E_SImode) != 0)
            return -1;
          return 9;

        case E_V16SImode:
          if (pattern480 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 10;

        case E_V8DImode:
          if (pattern480 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 11;

        case E_V16HImode:
          if (pattern480 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 12;

        case E_V8SImode:
          if (pattern480 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V4DImode:
          if (pattern480 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V8HImode:
          if (pattern480 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 15;

        case E_V4SImode:
          if (pattern480 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 16;

        case E_V2DImode:
          if (pattern480 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 17;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern509 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i2
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern514 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!vector_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!vector_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!vector_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern520 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern530 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x2, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern529 (x1, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern529 (x1, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern529 (x1, 
E_V16QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern529 (x1, 
E_V32HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern529 (x1, 
E_V16HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern529 (x1, 
E_V8HImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern529 (x1, 
E_V16SImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern529 (x1, 
E_V8SImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern529 (x1, 
E_V4SImode) != 0)
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern529 (x1, 
E_V8DImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern529 (x1, 
E_V4DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern529 (x1, 
E_V2DImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern539 (rtx x1, machine_mode i1)
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
    case E_V4QImode:
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      return 0;

    case E_V4HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern542 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern544 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          return 1;

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 38)
        return -1;
      res = pattern543 (x1);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern558 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x2;
      x3 = XEXP (x2, 1);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x4 = XEXP (x2, 2);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern567 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern573 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_BLKmode
      || !memory_operand (operands[0], E_BLKmode)
      || !register_operand (operands[1], E_SImode)
      || !register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern577 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !const_int_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !const_int_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !const_int_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !const_int_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern588 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x8, 1);
  if (!rtx_equal_p (x10, operands[3]))
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
pattern594 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern600 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SUBREG
      || maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      return 0;

    default:
      return -1;
    }
}

int
pattern605 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i2)
      || !const_int_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[3] = x4;
  if (!nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern612 (rtx x1, machine_mode i1)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern619 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern626 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern634 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 2);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern632 (x1, 
E_V16SImode, 
E_HImode, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern632 (x1, 
E_V8SImode, 
E_QImode, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern632 (x1, 
E_V4SImode, 
E_QImode, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern640 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!vector_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!vector_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!vector_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern644 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!nonimmediate_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V2DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern652 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
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

    default:
      return -1;
    }
}

int
pattern659 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NOT)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  operands[1] = x6;
  x7 = XEXP (x4, 0);
  operands[3] = x7;
  if (!register_operand (operands[3], E_VOIDmode))
    return -1;
  x8 = XEXP (x2, 1);
  operands[4] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      return pattern658 (x1, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern658 (x1, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern667 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != i1)
    return -1;
  return 0;
}

int
pattern671 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern679 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  switch (XVECLEN (x7, 0))
    {
    case 4:
      return pattern676 (x1, 
E_V16QImode, 
E_V4QImode); /* [-1, 1] */

    case 2:
      if (pattern677 (x1, 
E_V2HImode, 
E_V8HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern687 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
pattern695 (rtx x1, machine_mode i1)
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
pattern702 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
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
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case STRICT_LOW_PART:
      return 1;

    default:
      return -1;
    }
}

int
pattern710 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XVECEXP (x6, 0, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_V16QImode))
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  operands[3] = x8;
  return 0;
}

int
pattern715 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern713 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

        case E_TImode:
          if (pattern713 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern714 (x1, 
E_DImode, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (pattern714 (x1, 
E_TImode, 
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
pattern730 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[4] = x4;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  return pattern729 (x6, 
i1); /* [-1, 0] */
}

int
pattern739 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern745 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern753 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return pattern278 (x1); /* [-1, 4] */
}

int
pattern760 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x4, 0);
  operands[2] = x7;
  x8 = XEXP (x2, 1);
  switch (XWINT (x8, 0))
    {
    case 64L:
      return pattern759 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

    case 32L:
      if (pattern759 (x1, 
E_SImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern771 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 1)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  x9 = XEXP (x1, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern770 (x1, 
E_HFmode, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern770 (x1, 
E_SFmode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern770 (x1, 
E_DFmode, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern783 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern790 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (!rtx_equal_p (x2, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern789 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern789 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern789 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern789 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern789 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern789 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern789 (x1, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern789 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern789 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern789 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern789 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern789 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      if (pattern789 (x1, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      if (pattern789 (x1, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      if (pattern789 (x1, 
E_V8HFmode, 
E_QImode) != 0)
        return -1;
      return 14;

    case E_V32BFmode:
      if (pattern789 (x1, 
E_V32BFmode, 
E_SImode) != 0)
        return -1;
      return 15;

    case E_V16BFmode:
      if (pattern789 (x1, 
E_V16BFmode, 
E_HImode) != 0)
        return -1;
      return 16;

    case E_V8BFmode:
      if (pattern789 (x1, 
E_V8BFmode, 
E_QImode) != 0)
        return -1;
      return 17;

    case E_V16SFmode:
      if (pattern789 (x1, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      return 18;

    case E_V8SFmode:
      if (pattern789 (x1, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      return 19;

    case E_V4SFmode:
      if (pattern789 (x1, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      return 20;

    case E_V8DFmode:
      if (pattern789 (x1, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      return 21;

    case E_V4DFmode:
      if (pattern789 (x1, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      return 22;

    case E_V2DFmode:
      if (pattern789 (x1, 
E_V2DFmode, 
E_QImode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern833 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_TFmode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_TFmode
      || !vector_operand (operands[1], E_TFmode))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!vector_operand (operands[2], E_TFmode))
    return -1;
  return 0;
}

int
pattern841 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x2, operands[0]))
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) != PC)
        return -1;
      return 0;

    case CALL:
      x4 = XEXP (x2, 0);
      if (GET_CODE (x4) != MEM
          || GET_MODE (x4) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[2] = x3;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[0]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern848 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != EQ)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != EQ)
    return -1;
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  x6 = XEXP (x4, 1);
  operands[4] = x6;
  x7 = XEXP (x3, 1);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x1) != E_V8QImode
          || !register_operand (operands[1], E_V8QImode)
          || !register_operand (operands[2], E_V8QImode)
          || GET_MODE (x2) != E_V8QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4HImode:
          return pattern847 (x4, 
E_V4HImode); /* [-1, 0] */

        case E_V2SImode:
          if (pattern847 (x4, 
E_V2SImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x1) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !register_operand (operands[2], E_V4QImode)
          || GET_MODE (x2) != E_V4QImode
          || GET_MODE (x3) != E_V2HImode
          || pattern847 (x4, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern864 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern871 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern877 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern876 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern876 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern883 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern893 (rtx x1, machine_mode i1)
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
    case E_V8SImode:
      if (!nonimmediate_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!nonimmediate_operand (operands[1], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern902 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_V4QImode:
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      return 0;

    case E_V4HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern911 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern917 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern921 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8QImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != VEC_SELECT
      || GET_MODE (x4) != E_V8QImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 8)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x5, 0, 2);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x9 = XVECEXP (x5, 0, 3);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x10 = XVECEXP (x5, 0, 4);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x11 = XVECEXP (x5, 0, 5);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x12 = XVECEXP (x5, 0, 6);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x13 = XVECEXP (x5, 0, 7);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode
      || GET_MODE (x2) != E_V8QImode
      || !nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x14 = XEXP (x4, 0);
  operands[2] = x14;
  if (!nonimm_or_0_operand (operands[2], E_V16QImode))
    return -1;
  x15 = XEXP (x2, 2);
  operands[3] = x15;
  x16 = XEXP (x1, 1);
  operands[4] = x16;
  if (!const0_operand (operands[4], E_V8QImode))
    return -1;
  return 0;
}

int
pattern937 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  return pattern818 (x6, pnum_clobbers); /* [-1, 1] */
}

int
pattern945 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern952 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern201 (x3, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern201 (x3, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern959 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      if (peep2_current_count < 4)
        return -1;
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!general_reg_operand (operands[2], i1))
        return -1;
      x3 = XEXP (x1, 1);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      x4 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x4) != PARALLEL
          || XVECLEN (x4, 0) != 2)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != ASHIFTRT
          || GET_MODE (x6) != i1)
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      x9 = XEXP (x6, 1);
      operands[4] = x9;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      x10 = XEXP (x6, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x5, 0);
      if (!rtx_equal_p (x11, operands[2]))
        return -1;
      x12 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x12) != SET)
        return -1;
      x13 = XEXP (x12, 0);
      operands[3] = x13;
      if (!memory_operand (operands[3], i1))
        return -1;
      x14 = XEXP (x12, 1);
      if (!rtx_equal_p (x14, operands[2]))
        return -1;
      return 0;

    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return -1;
      x15 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x15) != SET)
        return -1;
      x16 = XEXP (x15, 1);
      if (GET_CODE (x16) != ASHIFTRT
          || GET_MODE (x16) != i1)
        return -1;
      x17 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      x19 = XEXP (x15, 0);
      operands[2] = x19;
      if (!general_reg_operand (operands[2], i1))
        return -1;
      x20 = XEXP (x16, 1);
      operands[4] = x20;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      x21 = XEXP (x16, 0);
      if (!rtx_equal_p (x21, operands[1]))
        return -1;
      x4 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x4) != SET)
        return -1;
      x22 = XEXP (x4, 0);
      operands[3] = x22;
      if (!memory_operand (operands[3], i1))
        return -1;
      x23 = XEXP (x4, 1);
      if (!rtx_equal_p (x23, operands[2]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern982 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern988 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[2], E_V32HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !nonimmediate_operand (operands[2], E_V32QImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V32HImode:
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern999 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1001 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 0);
  if (!register_operand (x3, i1))
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (!register_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1012 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  x3 = XEXP (x1, 2);
  x4 = XVECEXP (x3, 0, 1);
  operands[4] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[5] = x5;
  x6 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case NOT:
      x7 = XEXP (x6, 0);
      operands[3] = x7;
      if (!const_0_to_7_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern1011 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_V16QImode:
          if (pattern1011 (x1, 
E_V16QImode, 
E_HImode) != 0)
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
pattern1028 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1038 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], E_V64QImode)
      || !nonimmediate_operand (operands[2], E_V64QImode)
      || !register_operand (operands[4], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  return 0;
}

int
pattern1041 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x4, 0, 1);
  operands[2] = x6;
  x7 = XVECEXP (x4, 0, 2);
  operands[3] = x7;
  if (!const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 0);
  operands[4] = x9;
  x10 = XEXP (x8, 1);
  x11 = XVECEXP (x10, 0, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XVECEXP (x10, 0, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  x13 = XVECEXP (x10, 0, 2);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  switch (XINT (x4, 1))
    {
    case 59:
      if (XINT (x10, 1) != 59)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          return pattern1039 (x1, 
E_HImode); /* [-1, 20] */

        case E_SImode:
          res = pattern1039 (x1, 
E_SImode);
          if (res >= 0)
            return res + 21; /* [21, 41] */
          return -1;

        case E_DImode:
          res = pattern1039 (x1, 
E_DImode);
          if (res >= 0)
            return res + 42; /* [42, 62] */
          return -1;

        default:
          return -1;
        }

    case 157:
      if (XINT (x10, 1) != 157)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          res = pattern1040 (x1, 
E_HImode);
          if (res >= 0)
            return res + 63; /* [63, 74] */
          return -1;

        case E_SImode:
          res = pattern1040 (x1, 
E_SImode);
          if (res >= 0)
            return res + 75; /* [75, 86] */
          return -1;

        case E_DImode:
          res = pattern1040 (x1, 
E_DImode);
          if (res >= 0)
            return res + 87; /* [87, 98] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1058 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  return pattern1057 (x2); /* [-1, 3] */
}

int
pattern1061 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!sse_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !sse_reg_operand (operands[2], i2)
      || !sse_reg_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1067 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1078 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_carry_flag_unset_operator (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1087 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1094 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1097 (rtx x1, machine_mode i1)
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

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1105 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      return pattern455 (x1, 
E_V4SFmode); /* [-1, 0] */

    case E_V2DFmode:
      if (pattern455 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1113 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1119 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i4
      || !register_operand (operands[1], i3))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i4
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1128 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 2);
  operands[3] = x4;
  x5 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x5, E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 223)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[5] = x8;
      operands[6] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern1126 (x1, 
E_HImode, 
E_SImode, 
E_V32HFmode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern1126 (x1, 
E_QImode, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      x7 = XEXP (x2, 2);
      switch (GET_CODE (x7))
        {
        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 223)
            return -1;
          x8 = XVECEXP (x7, 0, 0);
          operands[4] = x8;
          operands[5] = x5;
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1127 (x1, 
E_HImode, 
E_SImode, 
E_V32HFmode) != 0)
                return -1;
              return 2;

            case E_V16HFmode:
              if (pattern1127 (x1, 
E_QImode, 
E_HImode, 
E_V16HFmode) != 0)
                return -1;
              return 3;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x7, 0) != 3L
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V8HFmode
              || GET_MODE (x3) != E_V8HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !register_operand (operands[2], E_V8HFmode)
              || !register_operand (operands[3], E_V8HFmode))
            return -1;
          operands[4] = x5;
          if (!rtx_equal_p (x6, operands[2]))
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
pattern1164 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case AND:
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case PLUS:
      x2 = XEXP (x1, 0);
      operands[2] = x2;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    case MINUS:
      x2 = XEXP (x1, 0);
      operands[3] = x2;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x3 = XEXP (x1, 1);
      operands[2] = x3;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1183 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LABEL_REF:
      x4 = XEXP (x2, 2);
      if (GET_CODE (x4) != PC)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_CODE (x5) != PC)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 0);
      operands[2] = x8;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!register_operand (operands[1], E_QImode))
            return -1;
          return 0;

        case E_HImode:
          if (!register_operand (operands[1], E_HImode))
            return -1;
          return 1;

        case E_SImode:
          if (!register_operand (operands[1], E_SImode))
            return -1;
          return 2;

        case E_DImode:
          if (!register_operand (operands[1], E_DImode))
            return -1;
          return 3;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x3;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x2, 0);
      operands[1] = x6;
      x7 = XEXP (x6, 0);
      operands[4] = x7;
      x4 = XEXP (x2, 2);
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !register_operand (operands[2], E_QImode)
              || !register_operand (operands[3], E_QImode))
            return -1;
          res = pattern1181 ();
          if (res >= 0)
            return res + 4; /* [4, 7] */
          return -1;

        case E_HImode:
          res = pattern1182 (x2, 
E_HImode);
          if (res >= 0)
            return res + 8; /* [8, 11] */
          return -1;

        case E_SImode:
          res = pattern1182 (x2, 
E_SImode);
          if (res >= 0)
            return res + 12; /* [12, 15] */
          return -1;

        case E_DImode:
          res = pattern1182 (x2, 
E_DImode);
          if (res >= 0)
            return res + 16; /* [16, 19] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1214 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1221 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16SImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HFmode:
      if (!register_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V16SFmode:
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1229 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (maybe_ne (SUBREG_BYTE (x4), 0))
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != NOT)
    return -1;
  x6 = XEXP (x5, 0);
  operands[3] = x6;
  x7 = XEXP (x3, 1);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !vector_operand (operands[1], E_V16QImode)
          || !register_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || GET_MODE (x5) != E_V16QImode
          || !register_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (GET_MODE (x4) != E_V4SImode
              || !vector_all_ones_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (GET_MODE (x4) != E_V2DImode
              || !vector_all_ones_operand (operands[4], E_V2DImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !vector_operand (operands[1], E_V32QImode)
          || !register_operand (operands[2], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x5) != E_V32QImode
          || !register_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (GET_MODE (x4) != E_V8SImode
              || !vector_all_ones_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (GET_MODE (x4) != E_V4DImode
              || !vector_all_ones_operand (operands[4], E_V4DImode))
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
pattern1253 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !mask_reg_operand (operands[1], i1)
      || !mask_reg_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1259 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 4
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!memory_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[4] = x6;
  if (!memory_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1268 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[4] = x4;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x6 = XEXP (x4, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return pattern1267 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1278 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1288 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern1297 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1306 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16HFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V16HFmode
      || !nonimm_or_0_operand (operands[2], E_V16HFmode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      return 0;

    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1318 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1322 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[2]))
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XEXP (x7, 0);
  switch (GET_MODE (x8))
    {
    case E_QImode:
      return pattern1321 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1321 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1321 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !const_1_to_63_operand (operands[2], E_QImode)
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1336 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      return pattern389 (x1); /* [-1, 1] */

    case CLOBBER:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern388 (x1, 
E_HImode) != 0)
            return -1;
          return 2;

        case E_SImode:
          if (pattern388 (x1, 
E_SImode) != 0)
            return -1;
          return 3;

        case E_DImode:
          if (pattern388 (x1, 
E_DImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case USE:
      res = pattern391 (x1);
      if (res >= 0)
        return res + 5; /* [5, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1355 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern1354 (); /* [-1, 2] */
}

int
pattern1359 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern1375 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2)
      || pattern1374 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1382 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1389 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1399 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x4, 1);
  if (!register_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern1406 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1405 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1405 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1405 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1416 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !vector_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i1
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1429 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1436 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1443 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1448 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_HImode:
      if (!register_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1457 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1467 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XVECEXP (x2, 0, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NOT)
    return -1;
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      return pattern1465 (x1, 
E_V4SImode, 
E_V16QImode); /* [-1, 0] */

    case E_V2DImode:
      if (pattern1465 (x1, 
E_V2DImode, 
E_V16QImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern1465 (x1, 
E_V8SImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V4DImode:
      if (pattern1465 (x1, 
E_V4DImode, 
E_V32QImode) != 0)
        return -1;
      return 3;

    case E_V32QImode:
      if (pattern1466 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 4;

    case E_V16QImode:
      if (pattern1466 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern1482 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 7);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 8);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 10);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 11);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1]
      || pattern1470 (x1) != 0)
    return -1;
  return 0;
}

int
pattern1492 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1504 (rtx x1, machine_mode i1)
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
pattern1508 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 7);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 8);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 10);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 11);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1]
      || pattern1415 (x1) != 0)
    return -1;
  return 0;
}

int
pattern1523 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1531 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
  x11 = XEXP (x3, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  x12 = XEXP (x3, 1);
  if (!rtx_equal_p (x12, operands[3]))
    return -1;
  return 0;
}

int
pattern1542 (rtx x1, machine_mode i1)
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
pattern1549 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i3)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i3)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i3)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_MODE (x7) != i3
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[5], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1563 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x3, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 1);
  x12 = XEXP (x11, 0);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  x13 = XEXP (x4, 1);
  switch (GET_CODE (x13))
    {
    case SIGN_EXTEND:
      x14 = XEXP (x13, 0);
      operands[2] = x14;
      x15 = XEXP (x8, 1);
      if (!rtx_equal_p (x15, operands[2]))
        return -1;
      x16 = XEXP (x11, 1);
      if (!rtx_equal_p (x16, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return pattern1561 (x1, 
E_QImode, 
E_HImode); /* [-1, 0] */

        case E_SImode:
          if (pattern1561 (x1, 
E_HImode, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || GET_MODE (x13) != E_DImode
              || !x86_64_sext_operand (operands[2], E_SImode)
              || pattern718 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || GET_MODE (x13) != E_TImode
              || pattern718 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 3;

        case E_POImode:
          if (pattern719 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x13;
      x15 = XEXP (x8, 1);
      operands[2] = x15;
      x16 = XEXP (x11, 1);
      if (!rtx_equal_p (x16, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          if (pattern1562 (x1, 
E_QImode, 
E_HImode) != 0)
            return -1;
          return 5;

        case E_SImode:
          if (pattern1562 (x1, 
E_HImode, 
E_SImode) != 0)
            return -1;
          return 6;

        case E_DImode:
          if (pattern1562 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 7;

        case E_TImode:
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || pattern718 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 8;

        case E_POImode:
          if (pattern720 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 9;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1613 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[6], E_QImode)
      || !vsib_mem_operator (operands[5], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1612 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1612 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1624 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[4] = x4;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x6 = XEXP (x4, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      return pattern1044 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1635 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1644 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1643 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1643 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1643 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1653 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1652 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1652 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1667 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[2], E_VOIDmode)
      || !const_0_to_15_operand (operands[3], E_VOIDmode)
      || !const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1674 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1683 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != STRICT_LOW_PART)
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 1);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return pattern1622 (); /* [-1, 2] */
}

int
pattern1689 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!bt_comparison_operator (operands[3], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_V16QImode:
      return pattern1688 (x1, 
E_V16QImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern1688 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern1688 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1688 (x1, 
E_V2DImode) != 0)
        return -1;
      return 3;

    case E_V1TImode:
      if (pattern1688 (x1, 
E_V1TImode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern1688 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V2DFmode:
      if (pattern1688 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 6;

    case E_V32QImode:
      if (pattern1688 (x1, 
E_V32QImode) != 0)
        return -1;
      return 7;

    case E_V16HImode:
      if (pattern1688 (x1, 
E_V16HImode) != 0)
        return -1;
      return 8;

    case E_V8SImode:
      if (pattern1688 (x1, 
E_V8SImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern1688 (x1, 
E_V4DImode) != 0)
        return -1;
      return 10;

    case E_V2TImode:
      if (pattern1688 (x1, 
E_V2TImode) != 0)
        return -1;
      return 11;

    case E_V8SFmode:
      if (pattern1688 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 12;

    case E_V4DFmode:
      if (pattern1688 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 13;

    default:
      return -1;
    }
}

int
pattern1716 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !scratch_operand (operands[1], E_QImode))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      return pattern1715 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1715 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1729 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  operands[3] = x5;
  if (!any_QIreg_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1736 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 2);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1745 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1)
      || !scratch_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1751 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[3], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1759 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_HImode:
      if (!memory_operand (operands[0], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_HImode
          || !nonmemory_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_SImode
          || !nonmemory_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 0);
      if (GET_MODE (x6) != E_DImode
          || !nonmemory_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1776 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return 0;

    case E_DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1783 (rtx x1, machine_mode i1, machine_mode i2, rtx_code i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != MULT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i3
      || GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 4)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != SIGN_EXTEND
      || GET_MODE (x9) != i2)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 4)
    return -1;
  x12 = XVECEXP (x11, 0, 0);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x14 = XVECEXP (x11, 0, 2);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x15 = XVECEXP (x11, 0, 3);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  return 0;
}

int
pattern1809 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  return 0;
}

int
pattern1817 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1824 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonmemory_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1830 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_15_operand (operands[2], E_VOIDmode)
      || !const_0_to_15_operand (operands[3], E_VOIDmode)
      || !const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode)
      || !const_0_to_15_operand (operands[6], E_VOIDmode)
      || !const_0_to_15_operand (operands[7], E_VOIDmode)
      || !const_0_to_15_operand (operands[8], E_VOIDmode)
      || !const_0_to_15_operand (operands[9], E_VOIDmode)
      || !const_0_to_15_operand (operands[10], E_VOIDmode)
      || !const_0_to_15_operand (operands[11], E_VOIDmode)
      || !const_0_to_15_operand (operands[12], E_VOIDmode)
      || !const_0_to_15_operand (operands[13], E_VOIDmode)
      || !const_0_to_15_operand (operands[14], E_VOIDmode)
      || !const_0_to_15_operand (operands[15], E_VOIDmode)
      || !const_0_to_15_operand (operands[16], E_VOIDmode)
      || !const_0_to_15_operand (operands[17], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1843 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SIGN_EXTEND
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  return 0;
}

int
pattern1847 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i1)
      || !register_operand (operands[4], i1)
      || !register_operand (operands[5], i1)
      || !register_operand (operands[0], i1)
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1853 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_15_operand (operands[4], E_VOIDmode)
      || !const_0_to_15_operand (operands[5], E_VOIDmode)
      || !const_0_to_15_operand (operands[6], E_VOIDmode)
      || !const_0_to_15_operand (operands[7], E_VOIDmode)
      || !const_0_to_15_operand (operands[8], E_VOIDmode)
      || !const_0_to_15_operand (operands[9], E_VOIDmode)
      || !const_0_to_15_operand (operands[10], E_VOIDmode)
      || !const_16_to_31_operand (operands[11], E_VOIDmode)
      || !const_16_to_31_operand (operands[12], E_VOIDmode)
      || !const_16_to_31_operand (operands[13], E_VOIDmode)
      || !const_16_to_31_operand (operands[14], E_VOIDmode)
      || !const_16_to_31_operand (operands[15], E_VOIDmode)
      || !const_16_to_31_operand (operands[16], E_VOIDmode)
      || !const_16_to_31_operand (operands[17], E_VOIDmode)
      || !const_16_to_31_operand (operands[18], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1863 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  return 0;
}

int
pattern1873 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!x86_64_immediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1877 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_MODE (x7) != i2
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1875 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1885 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 24);
  if (XWINT (x2, 0) != 24L)
    return -1;
  x3 = XVECEXP (x1, 0, 25);
  if (XWINT (x3, 0) != 25L)
    return -1;
  x4 = XVECEXP (x1, 0, 26);
  if (XWINT (x4, 0) != 26L)
    return -1;
  x5 = XVECEXP (x1, 0, 27);
  if (XWINT (x5, 0) != 27L)
    return -1;
  return 0;
}

int
pattern1887 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x4) != i3
      || !register_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i3
      || !vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

 int
recog_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  if (pattern56 (x1, 
E_CCFPmode) != 0)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != E_CCFPmode)
    return -1;
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[0] = x4;
          x5 = XEXP (x3, 1);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !
#line 2029 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
                return -1;
              return 49; /* *cmpiuxf_i387 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !register_ssemem_operand (operands[1], E_SFmode)
                  || !
#line 2069 "../../src/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return -1;
              return 57; /* *cmpiusf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !register_ssemem_operand (operands[1], E_DFmode)
                  || !
#line 2069 "../../src/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return -1;
              return 59; /* *cmpiudf */

            case E_HFmode:
              if (!register_operand (operands[0], E_HFmode)
                  || !nonimmediate_operand (operands[1], E_HFmode)
                  || !
#line 2106 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return -1;
              return 61; /* *cmpiuhf */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (pattern601 (x3) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          operands[0] = x6;
          x5 = XEXP (x3, 1);
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          switch (GET_MODE (x4))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x5) != E_HFmode
                  || !nonimmediate_operand (operands[1], E_V8HFmode)
                  || !(
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3684; /* avx512fp16_ucomi */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x5) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode))
                return -1;
              return 3688; /* sse_ucomi */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x5) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode))
                return -1;
              return 3692; /* sse2_ucomi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x3, 0))
        {
        case 1:
          if (XINT (x3, 1) != 44)
            return -1;
          x8 = XVECEXP (x3, 0, 0);
          if (GET_CODE (x8) != COMPARE
              || GET_MODE (x8) != E_CCFPmode)
            return -1;
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x10 = XEXP (x8, 1);
          operands[1] = x10;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !nonimmediate_operand (operands[1], E_SFmode)
                  || !
#line 2045 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 51; /* *cmpxusf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !nonimmediate_operand (operands[1], E_DFmode)
                  || !
#line 2045 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 53; /* *cmpxudf */

            case E_HFmode:
              if (!register_operand (operands[0], E_HFmode)
                  || !nonimmediate_operand (operands[1], E_HFmode)
                  || !
#line 2058 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return -1;
              return 55; /* *cmpxuhf */

            default:
              return -1;
            }

        case 2:
          if (XINT (x3, 1) != 61
              || pattern846 (x3) != 0)
            return -1;
          x8 = XVECEXP (x3, 0, 0);
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x11 = XVECEXP (x3, 0, 1);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          switch (GET_MODE (x8))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x11) != E_HFmode
                  || !nonimmediate_operand (operands[1], E_V8HFmode)
                  || !(
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3672; /* avx10_2_ucomxhf */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x11) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 3676; /* avx10_2_ucomxsf */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x11) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 3680; /* avx10_2_ucomxdf */

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
recog_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V1TImode:
      if (!push_operand (operands[0], E_V1TImode)
          || !register_operand (operands[1], E_V1TImode))
        return -1;
      if ((
#line 2175 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
        return 65; /* *pushv1ti2 */
      if (!(
#line 2175 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 66; /* *pushv1ti2 */

    case E_DImode:
      if (push_operand (operands[0], E_DImode)
          && general_no_elim_operand (operands[1], E_DImode))
        {
          if (
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 67; /* *pushdi2 */
          if (
#line 2206 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 69; /* *pushdi2_rex64 */
        }
      if (nonimmediate_operand (operands[0], E_DImode)
          && pop_operand (operands[1], E_DImode)
          && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
        return 77; /* *popdi1 */
      if (pnum_clobbers != NULL
          && const0_operand (operands[1], E_DImode))
        {
          if (register_operand (operands[0], E_DImode)
              && (
#line 2424 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 85; /* *movdi_xor */
            }
          if (memory_operand (operands[0], E_DImode)
              && (
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 88; /* *movdi_and */
            }
        }
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_DImode)
          && (
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 91; /* *movdi_or */
        }
      if (!general_operand (operands[1], E_DImode)
          || !
#line 2584 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 95; /* *movdi_internal */

    case E_TImode:
      if (push_operand (operands[0], E_TImode)
          && general_no_elim_operand (operands[1], E_TImode)
          && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return 68; /* *pushti2 */
      if (!nonimmediate_operand (operands[0], E_TImode)
          || !general_operand (operands[1], E_TImode)
          || !
#line 2500 "../../src/gcc/config/i386/i386.md"
((TARGET_64BIT
    && !(MEM_P (operands[0]) && MEM_P (operands[1])))
   || (TARGET_SSE
       && nonimmediate_or_sse_const_operand (operands[1], TImode)
       && (register_operand (operands[0], TImode)
	   || register_operand (operands[1], TImode)))))
        return -1;
      return 94; /* *movti_internal */

    case E_SImode:
      if (push_operand (operands[0], E_SImode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_SImode)
              && 
#line 2249 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 70; /* *pushsi2_rex64 */
          if (general_no_elim_operand (operands[1], E_SImode)
              && 
#line 2259 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 71; /* *pushsi2 */
        }
      if (nonimmediate_operand (operands[0], E_SImode)
          && pop_operand (operands[1], E_SImode)
          && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
        return 76; /* *popsi1 */
      if (pnum_clobbers != NULL
          && const0_operand (operands[1], E_SImode))
        {
          if (register_operand (operands[0], E_SImode)
              && 
#line 2424 "../../src/gcc/config/i386/i386.md"
(reload_completed))
            {
              *pnum_clobbers = 1;
              return 84; /* *movsi_xor */
            }
          if (memory_operand (operands[0], E_SImode)
              && 
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed))
            {
              *pnum_clobbers = 1;
              return 87; /* *movsi_and */
            }
        }
      if (!nonimmediate_operand (operands[0], E_SImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_SImode)
          && 
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 90; /* *movsi_or */
        }
      if (!general_operand (operands[1], E_SImode)
          || !
#line 2824 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 96; /* *movsi_internal */

    case E_QImode:
      if (push_operand (operands[0], E_QImode)
          && nonmemory_no_elim_operand (operands[1], E_QImode))
        return 72; /* *pushqi2 */
      if (!nonimmediate_operand (operands[0], E_QImode)
          || !general_operand (operands[1], E_QImode)
          || !
#line 3144 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 98; /* *movqi_internal */

    case E_HImode:
      if (push_operand (operands[0], E_HImode)
          && nonmemory_no_elim_operand (operands[1], E_HImode))
        return 73; /* *pushhi2 */
      if (pnum_clobbers != NULL
          && memory_operand (operands[0], E_HImode)
          && const0_operand (operands[1], E_HImode)
          && 
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 86; /* *movhi_and */
        }
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      if (pnum_clobbers != NULL
          && constm1_operand (operands[1], E_HImode)
          && 
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 89; /* *movhi_or */
        }
      if (!general_operand (operands[1], E_HImode)
          || !
#line 2981 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 97; /* *movhi_internal */

    case E_TFmode:
      if (push_operand (operands[0], E_TFmode)
          && general_no_elim_operand (operands[1], E_TFmode)
          && 
#line 3765 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE))
        return 152; /* *pushtf */
      if (!nonimmediate_operand (operands[0], E_TFmode)
          || !general_operand (operands[1], E_TFmode)
          || !
#line 4034 "../../src/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || (standard_sse_constant_p (operands[1], TFmode) == 1
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode)))))
        return -1;
      return 167; /* *movtf_internal */

    case E_XFmode:
      if (push_operand (operands[0], E_XFmode)
          && general_no_elim_operand (operands[1], E_XFmode))
        return 153; /* *pushxf */
      if (!nonimmediate_operand (operands[0], E_XFmode)
          || !general_operand (operands[1], E_XFmode)
          || !
#line 4094 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))
       || !TARGET_HARD_XF_REGS)))
        return -1;
      return 168; /* *movxf_internal */

    case E_DFmode:
      if (push_operand (operands[0], E_DFmode)
          && general_no_elim_operand (operands[1], E_DFmode))
        return 154; /* *pushdf */
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || !general_operand (operands[1], E_DFmode)
          || !
#line 4166 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && IS_STACK_MODE (DFmode)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], DFmode))
       || (TARGET_SSE2 && TARGET_SSE_MATH
	   && standard_sse_constant_p (operands[1], DFmode) == 1
	   && !memory_operand (operands[0], DFmode))
       || ((TARGET_64BIT || !TARGET_MEMORY_MISMATCH_STALL)
	   && memory_operand (operands[0], DFmode))
       || !TARGET_HARD_DF_REGS)))
        return -1;
      return 169; /* *movdf_internal */

    case E_HFmode:
      if (push_operand (operands[0], E_HFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_HFmode)
              && 
#line 3861 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 155; /* *pushhf_rex64 */
          if (general_no_elim_operand (operands[1], E_HFmode)
              && 
#line 3874 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 157; /* *pushhf */
        }
      if (!nonimmediate_operand (operands[0], E_HFmode)
          || !general_operand (operands[1], E_HFmode)
          || !
#line 4478 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], HFmode) == 1)
      || memory_operand (operands[0], HFmode))))
        return -1;
      return 171; /* *movhf_internal */

    case E_BFmode:
      if (push_operand (operands[0], E_BFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_BFmode)
              && 
#line 3861 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 156; /* *pushbf_rex64 */
          if (general_no_elim_operand (operands[1], E_BFmode)
              && 
#line 3874 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 158; /* *pushbf */
        }
      if (!nonimmediate_operand (operands[0], E_BFmode)
          || !general_operand (operands[1], E_BFmode)
          || !
#line 4478 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
  && (lra_in_progress
      || reload_completed
      || !CONST_DOUBLE_P (operands[1])
      || (TARGET_SSE2
	  && standard_sse_constant_p (operands[1], BFmode) == 1)
      || memory_operand (operands[0], BFmode))))
        return -1;
      return 172; /* *movbf_internal */

    case E_SFmode:
      if (push_operand (operands[0], E_SFmode))
        {
          if (nonmemory_no_elim_operand (operands[1], E_SFmode)
              && 
#line 3949 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 165; /* *pushsf_rex64 */
          if (general_no_elim_operand (operands[1], E_SFmode)
              && 
#line 3963 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 166; /* *pushsf */
        }
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !general_operand (operands[1], E_SFmode)
          || !
#line 4343 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (lra_in_progress || reload_completed
       || !CONST_DOUBLE_P (operands[1])
       || ((optimize_function_for_size_p (cfun)
	    || (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC))
	   && IS_STACK_MODE (SFmode)
	   && standard_80387_constant_p (operands[1]) > 0)
       || (TARGET_SSE && TARGET_SSE_MATH
	   && standard_sse_constant_p (operands[1], SFmode) == 1)
       || memory_operand (operands[0], SFmode)
       || !TARGET_HARD_SF_REGS)))
        return -1;
      return 170; /* *movsf_internal */

    case E_V8QImode:
      if (nonimmediate_operand (operands[0], E_V8QImode)
          && nonimm_or_0_operand (operands[1], E_V8QImode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2019; /* *movv8qi_internal */
      if (!memory_operand (operands[0], E_V8QImode)
          || !x86_64_const_vector_operand (operands[1], E_V8QImode)
          || !
#line 87 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2035; /* *movv8qi_imm */

    case E_V4HImode:
      if (nonimmediate_operand (operands[0], E_V4HImode)
          && nonimm_or_0_operand (operands[1], E_V4HImode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2020; /* *movv4hi_internal */
      if (!memory_operand (operands[0], E_V4HImode)
          || !x86_64_const_vector_operand (operands[1], E_V4HImode)
          || !
#line 87 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2036; /* *movv4hi_imm */

    case E_V2SImode:
      if (nonimmediate_operand (operands[0], E_V2SImode)
          && nonimm_or_0_operand (operands[1], E_V2SImode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2021; /* *movv2si_internal */
      if (!memory_operand (operands[0], E_V2SImode)
          || !x86_64_const_vector_operand (operands[1], E_V2SImode)
          || !
#line 89 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2039; /* *movv2si_imm */

    case E_V1DImode:
      if (!nonimmediate_operand (operands[0], E_V1DImode)
          || !nonimm_or_0_operand (operands[1], E_V1DImode)
          || !
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2022; /* *movv1di_internal */

    case E_V2SFmode:
      if (nonimmediate_operand (operands[0], E_V2SFmode)
          && nonimm_or_0_operand (operands[1], E_V2SFmode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2023; /* *movv2sf_internal */
      if (!memory_operand (operands[0], E_V2SFmode)
          || !x86_64_const_vector_operand (operands[1], E_V2SFmode)
          || !
#line 89 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2040; /* *movv2sf_imm */

    case E_V4HFmode:
      if (nonimmediate_operand (operands[0], E_V4HFmode)
          && nonimm_or_0_operand (operands[1], E_V4HFmode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2024; /* *movv4hf_internal */
      if (!memory_operand (operands[0], E_V4HFmode)
          || !x86_64_const_vector_operand (operands[1], E_V4HFmode)
          || !
#line 88 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2037; /* *movv4hf_imm */

    case E_V4BFmode:
      if (nonimmediate_operand (operands[0], E_V4BFmode)
          && nonimm_or_0_operand (operands[1], E_V4BFmode)
          && 
#line 189 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2025; /* *movv4bf_internal */
      if (!memory_operand (operands[0], E_V4BFmode)
          || !x86_64_const_vector_operand (operands[1], E_V4BFmode)
          || !
#line 88 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2038; /* *movv4bf_imm */

    case E_V4QImode:
      if (nonimmediate_operand (operands[0], E_V4QImode)
          && general_operand (operands[1], E_V4QImode)
          && 
#line 344 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2026; /* *movv4qi_internal */
      if (memory_operand (operands[0], E_V4QImode)
          && x86_64_const_vector_operand (operands[1], E_V4QImode))
        return 2032; /* *movv4qi_imm */
      if (!push_operand (operands[0], E_V4QImode)
          || !nonmemory_no_elim_operand (operands[1], E_V4QImode)
          || !
#line 430 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2041; /* *pushv4qi2_rex64 */

    case E_V2HImode:
      if (nonimmediate_operand (operands[0], E_V2HImode)
          && general_operand (operands[1], E_V2HImode)
          && 
#line 344 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2027; /* *movv2hi_internal */
      if (memory_operand (operands[0], E_V2HImode)
          && x86_64_const_vector_operand (operands[1], E_V2HImode))
        return 2033; /* *movv2hi_imm */
      if (!push_operand (operands[0], E_V2HImode)
          || !nonmemory_no_elim_operand (operands[1], E_V2HImode)
          || !
#line 430 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2042; /* *pushv2hi2_rex64 */

    case E_V1SImode:
      if (nonimmediate_operand (operands[0], E_V1SImode)
          && general_operand (operands[1], E_V1SImode)
          && 
#line 344 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2028; /* *movv1si_internal */
      if (!push_operand (operands[0], E_V1SImode)
          || !nonmemory_no_elim_operand (operands[1], E_V1SImode)
          || !
#line 430 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2043; /* *pushv1si2_rex64 */

    case E_V2HFmode:
      if (nonimmediate_operand (operands[0], E_V2HFmode)
          && general_operand (operands[1], E_V2HFmode)
          && 
#line 344 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2029; /* *movv2hf_internal */
      if (memory_operand (operands[0], E_V2HFmode)
          && x86_64_const_vector_operand (operands[1], E_V2HFmode))
        return 2034; /* *movv2hf_imm */
      if (!push_operand (operands[0], E_V2HFmode)
          || !nonmemory_no_elim_operand (operands[1], E_V2HFmode)
          || !
#line 430 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2044; /* *pushv2hf2_rex64 */

    case E_V2BFmode:
      if (nonimmediate_operand (operands[0], E_V2BFmode)
          && general_operand (operands[1], E_V2BFmode)
          && 
#line 344 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2030; /* *movv2bf_internal */
      if (!push_operand (operands[0], E_V2BFmode)
          || !nonmemory_no_elim_operand (operands[1], E_V2BFmode)
          || !
#line 430 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT))
        return -1;
      return 2045; /* *pushv2bf2_rex64 */

    case E_V2QImode:
      if (memory_operand (operands[0], E_V2QImode)
          && x86_64_const_vector_operand (operands[1], E_V2QImode))
        return 2031; /* *movv2qi_imm */
      if (nonimmediate_operand (operands[0], E_V2QImode)
          && general_operand (operands[1], E_V2QImode)
          && 
#line 472 "../../src/gcc/config/i386/mmx.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return 2046; /* *movv2qi_internal */
      if (!push_operand (operands[0], E_V2QImode)
          || !nonmemory_no_elim_operand (operands[1], E_V2QImode))
        return -1;
      return 2047; /* *pushv2qi2 */

    case E_P2QImode:
      if (!nonimmediate_operand (operands[0], E_P2QImode)
          || !nonimmediate_operand (operands[1], E_P2QImode)
          || !
#line 30958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 10333; /* *movp2qi_internal */

    case E_P2HImode:
      if (!nonimmediate_operand (operands[0], E_P2HImode)
          || !nonimmediate_operand (operands[1], E_P2HImode)
          || !
#line 30958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 10334; /* *movp2hi_internal */

    default:
      return -1;
    }
}

 int
recog_30 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_SFmode:
      if (GET_MODE (x3) != E_SFmode)
        return -1;
      if (nonimm_ssenomem_operand (operands[0], E_SFmode)
          && register_ssemem_operand (operands[1], E_DFmode)
          && 
#line 5530 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)))
        return 206; /* truncdfsf2 */
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !register_operand (operands[1], E_XFmode)
          || !
#line 5658 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 207; /* truncxfsf2 */

    case E_DFmode:
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !register_operand (operands[1], E_XFmode)
          || !
#line 5658 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 208; /* truncxfdf2 */

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode))
        return -1;
      switch (pattern423 (x3, 
E_HFmode))
        {
        case 0:
          if (!
#line 5699 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 209; /* *truncsfhf2 */

        case 1:
          if (!
#line 5699 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 210; /* *truncdfhf2 */

        default:
          return -1;
        }

    case E_BFmode:
      if (!register_operand (operands[0], E_BFmode)
          || GET_MODE (x3) != E_BFmode
          || !register_operand (operands[1], E_SFmode)
          || !
#line 5715 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2 && !HONOR_NANS (BFmode) && !flag_rounding_math
   && (flag_unsafe_math_optimizations
       || TARGET_AVXNECONVERT
       || (TARGET_AVX512BF16 && TARGET_AVX512VL))))
        return -1;
      return 211; /* truncsfbf2 */

    case E_V2SFmode:
      if (!register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 10165 "../../src/gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE))
        return -1;
      return 5187; /* truncv2dfv2sf2 */

    default:
      return -1;
    }
}

 int
recog_34 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_HFmode:
      switch (pattern263 (x3, 
E_HFmode))
        {
        case 0:
          if (!
#line 6136 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 249; /* floatunssihf2 */

        case 1:
          if (!(
#line 6136 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 251; /* floatunsdihf2 */

        default:
          return -1;
        }

    case E_SFmode:
      switch (pattern263 (x3, 
E_SFmode))
        {
        case 0:
          if (!
#line 6280 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 257; /* *floatunssisf2_avx512 */

        case 1:
          if (!(
#line 6280 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 258; /* *floatunsdisf2_avx512 */

        default:
          return -1;
        }

    case E_DFmode:
      switch (pattern263 (x3, 
E_DFmode))
        {
        case 0:
          if (!
#line 6280 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 259; /* *floatunssidf2_avx512 */

        case 1:
          if (!(
#line 6280 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_SSE_MATH) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 260; /* *floatunsdidf2_avx512 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_37 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      switch (pattern1070 (x2))
        {
        case 0:
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !nonimmediate_operand (operands[2], E_V16SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3283; /* avx512f_cmpv16si3_mask */

            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[2], E_V16HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3307; /* avx512vl_cmpv16hf3_mask */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[2], E_V16SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3313; /* avx512f_cmpv16sf3_mask */

            case E_V16QImode:
              if (!register_operand (operands[1], E_V16QImode)
                  || !nonimmediate_operand (operands[2], E_V16QImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3439; /* avx512vl_cmpv16qi3_mask */

            case E_V16HImode:
              if (!register_operand (operands[1], E_V16HImode)
                  || !nonimmediate_operand (operands[2], E_V16HImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3445; /* avx512vl_cmpv16hi3_mask */

            case E_V16BFmode:
              if (!register_operand (operands[1], E_V16BFmode)
                  || !nonimmediate_operand (operands[2], E_V16BFmode)
                  || !const_0_to_31_operand (operands[3], E_VOIDmode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32459 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10732; /* avx10_2_cmpbf16_v16bf_mask */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !nonimmediate_operand (operands[2], E_V8SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3287; /* avx512vl_cmpv8si3_mask */

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !nonimmediate_operand (operands[2], E_V4SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3290; /* avx512vl_cmpv4si3_mask */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !nonimmediate_operand (operands[2], E_V8DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3293; /* avx512f_cmpv8di3_mask */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !nonimmediate_operand (operands[2], E_V4DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3297; /* avx512vl_cmpv4di3_mask */

            case E_V2DImode:
              if (!register_operand (operands[1], E_V2DImode)
                  || !nonimmediate_operand (operands[2], E_V2DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3300; /* avx512vl_cmpv2di3_mask */

            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[2], E_V8HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3310; /* avx512fp16_cmpv8hf3_mask */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[2], E_V8SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3317; /* avx512vl_cmpv8sf3_mask */

            case E_V4SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[2], E_V4SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3320; /* avx512vl_cmpv4sf3_mask */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[2], E_V8DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3323; /* avx512f_cmpv8df3_mask */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[2], E_V4DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3327; /* avx512vl_cmpv4df3_mask */

            case E_V2DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[2], E_V2DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3330; /* avx512vl_cmpv2df3_mask */

            case E_V8HImode:
              if (!register_operand (operands[1], E_V8HImode)
                  || !nonimmediate_operand (operands[2], E_V8HImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3447; /* avx512vl_cmpv8hi3_mask */

            case E_V8BFmode:
              if (!register_operand (operands[1], E_V8BFmode)
                  || !nonimmediate_operand (operands[2], E_V8BFmode)
                  || !const_0_to_31_operand (operands[3], E_VOIDmode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32459 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10734; /* avx10_2_cmpbf16_v8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L
          || pattern1201 (x2) != 0)
        return -1;
      switch (pattern1510 ())
        {
        case 0:
          if (!(
#line 4818 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3658; /* avx512f_vmcmpv8hf3 */

        case 1:
          if (!
#line 4818 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 3660; /* avx512f_vmcmpv4sf3 */

        case 2:
          if (!(
#line 4818 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3662; /* avx512f_vmcmpv2df3 */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern1201 (x2) != 0)
        return -1;
      x5 = XEXP (x3, 0);
      operands[4] = x5;
      if (!register_operand (operands[4], E_QImode))
        return -1;
      switch (pattern1510 ())
        {
        case 0:
          if (!(
#line 4836 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3664; /* avx512f_vmcmpv8hf3_mask */

        case 1:
          if (!
#line 4836 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 3666; /* avx512f_vmcmpv4sf3_mask */

        case 2:
          if (!(
#line 4836 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3668; /* avx512f_vmcmpv2df3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_51 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if (
#line 22516 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_APX_NF))
        return 1638; /* popcounthi2_nf */
      if (pnum_clobbers == NULL
          || !
#line 22516 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && true))
        return -1;
      *pnum_clobbers = 1;
      return 1639; /* popcounthi2 */

    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x3) != E_V8QImode
          || !register_operand (operands[1], E_V8QImode)
          || !(
#line 6931 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG) && 
#line 76 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2389; /* popcountv8qi2 */

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x3) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !
#line 6931 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2390; /* popcountv4qi2 */

    case E_V2QImode:
      if (!register_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2QImode)
          || !
#line 6931 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2391; /* popcountv2qi2 */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_operand (operands[1], E_V4HImode)
          || !(
#line 6938 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG) && 
#line 73 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2392; /* popcountv4hi2 */

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2HImode)
          || !
#line 6938 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BITALG))
        return -1;
      return 2393; /* popcountv2hi2 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_operand (operands[1], E_V2SImode)
          || !
#line 6945 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VPOPCNTDQ && TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
        return -1;
      return 2394; /* popcountv2si2 */

    default:
      return -1;
    }
}

 int
recog_59 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      switch (XINT (x2, 1))
        {
        case 20:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29134 "../../src/gcc/config/i386/i386.md"
(TARGET_FXSR))
            return -1;
          return 1901; /* fxsave */

        case 22:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29144 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR))
            return -1;
          return 1902; /* fxsave64 */

        case 24:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !
#line 29214 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1905; /* xsave */

        case 28:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29214 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29175 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1906; /* xsaveopt */

        case 34:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29214 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29176 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1907; /* xsavec */

        case 30:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 29214 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29177 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1908; /* xsaves */

        case 40:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29345 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          *pnum_clobbers = 8;
          return 1927; /* fnstenv */

        case 42:
          if (GET_MODE (x2) != E_HImode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !
#line 29373 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 1929; /* fnstsw */

        case 49:
          if (pattern57 (x1, 
E_CCZmode) != 0
              || !
#line 29659 "../../src/gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1972; /* xtest_1 */

        case 74:
          if (pattern57 (x1, 
E_CCCmode) != 0
              || !
#line 29844 "../../src/gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1998; /* testui */

        case 88:
          if (GET_MODE (x2) != E_BLKmode)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 30072 "../../src/gcc/config/i386/i386.md"
(TARGET_AMX_TILE))
            return -1;
          return 2014; /* sttilecfg */

        case 89:
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          x3 = XVECEXP (x2, 0, 0);
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (!register_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !memory_operand (operands[1], E_QImode)
                  || !
#line 30083 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2015; /* movrsqi */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !memory_operand (operands[1], E_HImode)
                  || !
#line 30083 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2016; /* movrshi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      switch (XINT (x2, 1))
        {
        case 24:
          if (pattern92 (x1) != 0
              || !
#line 29227 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1909; /* xsave_rex64 */

        case 28:
          if (pattern92 (x1) != 0
              || !(
#line 29227 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29175 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1910; /* xsaveopt_rex64 */

        case 34:
          if (pattern92 (x1) != 0
              || !(
#line 29227 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29176 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1911; /* xsavec_rex64 */

        case 30:
          if (pattern92 (x1) != 0
              || !(
#line 29227 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29177 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1912; /* xsaves_rex64 */

        case 26:
          if (pattern92 (x1) != 0
              || !
#line 29241 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1913; /* xsave64 */

        case 29:
          if (pattern92 (x1) != 0
              || !(
#line 29241 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29181 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT)))
            return -1;
          return 1914; /* xsaveopt64 */

        case 35:
          if (pattern92 (x1) != 0
              || !(
#line 29241 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29182 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVEC)))
            return -1;
          return 1915; /* xsavec64 */

        case 32:
          if (pattern92 (x1) != 0
              || !(
#line 29241 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29183 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1916; /* xsaves64 */

        case 79:
          switch (pattern93 (x1))
            {
            case 0:
              if (!(
#line 29826 "../../src/gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1992; /* enqcmd_si */

            case 1:
              if (!(
#line 29826 "../../src/gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1994; /* enqcmd_di */

            default:
              return -1;
            }

        case 80:
          switch (pattern93 (x1))
            {
            case 0:
              if (!(
#line 29826 "../../src/gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1993; /* enqcmds_si */

            case 1:
              if (!(
#line 29826 "../../src/gcc/config/i386/i386.md"
(TARGET_ENQCMD) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1995; /* enqcmds_di */

            default:
              return -1;
            }

        case 69:
          if (pattern94 (x1) != 0
              || !
#line 29865 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 2000; /* umwait */

        case 71:
          if (pattern94 (x1) != 0
              || !
#line 29892 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 2004; /* tpause */

        case 111:
          if (pnum_clobbers == NULL)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          x5 = XVECEXP (x2, 0, 1);
          operands[2] = x5;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x3))
            {
            case PLUS:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11053; /* atomic_addqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11054; /* atomic_addhi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11057; /* atomic_subqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11058; /* atomic_subhi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11061; /* atomic_andqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11064; /* atomic_andhi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11062; /* atomic_orqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11065; /* atomic_orhi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern859 (x2))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11063; /* atomic_xorqi */

                case 1:
                  *pnum_clobbers = 1;
                  return 11066; /* atomic_xorhi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      if (pattern44 (x1, 
E_CCCmode) != 0)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[0] = x3;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[2] = x6;
      switch (XINT (x2, 1))
        {
        case 15:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29430 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP))
                return -1;
              return 1937; /* lwp_lwpinssi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29430 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1938; /* lwp_lwpinsdi */

            default:
              return -1;
            }

        case 69:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29875 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 2001; /* umwait_rex64 */

        case 71:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29902 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_WAITPKG))
            return -1;
          return 2005; /* tpause_rex64 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_71 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (pattern278 (x2))
        {
        case 0:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 288; /* *addqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 289; /* *addqi_1_zextsi */

        case 1:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if (
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 292; /* *addhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 293; /* *addhi_1_zextsi */

        case 2:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 290; /* *addqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 291; /* *addqi_1_zextdi */

        case 3:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if (
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 294; /* *addhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 295; /* *addhi_1_zextdi */

        case 4:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode)
              || !
#line 6760 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 296; /* addsi_1_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case LTU:
        case UNLT:
          operands[3] = x6;
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17)
            return -1;
          x8 = XEXP (x6, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x4, 1);
          operands[1] = x9;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (pattern278 (x2))
            {
            case 0:
              if (pattern1539 (x4, 
E_QImode) != 0
                  || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 466; /* *addqi3_carry_zextsi */

            case 1:
              if (pattern1539 (x4, 
E_HImode) != 0
                  || !
#line 8914 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 468; /* *addhi3_carry_zextsi */

            case 2:
              if (pattern1539 (x4, 
E_QImode) != 0
                  || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 467; /* *addqi3_carry_zextdi */

            case 3:
              if (pattern1539 (x4, 
E_HImode) != 0
                  || !
#line 8914 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 469; /* *addhi3_carry_zextdi */

            case 4:
              if (pattern1539 (x4, 
E_SImode) != 0
                  || !
#line 8933 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 470; /* *addsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern279 (x2, pnum_clobbers))
        {
        case 0:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 472; /* *addqi3_carry_zextsi_0 */

        case 1:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 474; /* *addhi3_carry_zextsi_0 */

        case 2:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 473; /* *addqi3_carry_zextdi_0 */

        case 3:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 475; /* *addhi3_carry_zextdi_0 */

        case 4:
          if (!ix86_carry_flag_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 8980 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 476; /* *addsi3_carry_zext_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern279 (x2, pnum_clobbers))
        {
        case 0:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 478; /* *addqi3_carry_zextsi_0r */

        case 1:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 480; /* *addhi3_carry_zextsi_0r */

        case 2:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 479; /* *addqi3_carry_zextdi_0r */

        case 3:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 481; /* *addhi3_carry_zextdi_0r */

        case 4:
          if (!ix86_carry_flag_unset_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 9025 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 482; /* *addsi3_carry_zext_0r */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 19
          || GET_MODE (x4) != E_SImode)
        return -1;
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XEXP (x3, 1);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 23231 "../../src/gcc/config/i386/i386.md"
(TARGET_X32))
        return -1;
      *pnum_clobbers = 1;
      return 1663; /* *add_tp_x32_zext */

    default:
      return -1;
    }
}

 int
recog_78 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  if (
#line 15401 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF))
    return 1062; /* x86_64_shld_nf */
  if (pnum_clobbers == NULL
      || !
#line 15401 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && true))
    return -1;
  *pnum_clobbers = 1;
  return 1063; /* x86_64_shld */
}

 int
recog_79 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  if (
#line 16786 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF))
    return 1142; /* x86_64_shrd_nf */
  if (pnum_clobbers == NULL
      || !
#line 16786 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && true))
    return -1;
  *pnum_clobbers = 1;
  return 1143; /* x86_64_shrd */
}

 int
recog_81 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      return recog_80 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (pattern434 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 819; /* *iordi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 831; /* *iordi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 832; /* *iordi_1 */
                }
            }
          if (pnum_clobbers == NULL
              || !const_int_operand (operands[2], E_DImode)
              || !
#line 13633 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return -1;
          *pnum_clobbers = 1;
          return 838; /* *iordi_1_bts */

        case 1:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 827; /* *iorsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 828; /* *iorsi_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern112 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL)
            {
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              if (x86_64_zext_immediate_operand (operands[2], E_DImode)
                  && register_operand (operands[0], E_DImode)
                  && 
#line 13762 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                {
                  *pnum_clobbers = 1;
                  return 865; /* *iorsi_1_zext_imm */
                }
            }
          x5 = XEXP (x3, 1);
          operands[2] = x5;
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
          return 947; /* *concatsidi3_7 */

        case 1:
          if (!(
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 899; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 917; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 920; /* *concatsidi3_4 */

        default:
          return -1;
        }

    case LSHIFTRT:
      x6 = XEXP (x4, 1);
      switch (GET_CODE (x6))
        {
        case AND:
          switch (pattern288 (x3, 
ASHIFT))
            {
            case 0:
              x5 = XEXP (x3, 1);
              x7 = XEXP (x5, 0);
              x8 = XEXP (x7, 0);
              x9 = XEXP (x8, 0);
              operands[1] = x9;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  res = recog_79 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[2] = x9;
              if (!register_operand (operands[0], E_DImode))
                return -1;
              x10 = XEXP (x4, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              x11 = XEXP (x6, 0);
              operands[3] = x11;
              x12 = XEXP (x7, 1);
              x13 = XEXP (x12, 1);
              x14 = XEXP (x13, 0);
              if (!rtx_equal_p (x14, operands[3]))
                return -1;
              if (
#line 16807 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1144; /* x86_64_shrd_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 16807 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1145; /* x86_64_shrd_ndd */

            case 1:
              if (pattern287 (x3, 
E_SImode, 
E_DImode) != 0)
                return -1;
              x5 = XEXP (x3, 1);
              x7 = XEXP (x5, 0);
              x8 = XEXP (x7, 0);
              x9 = XEXP (x8, 0);
              operands[1] = x9;
              if (nonimmediate_operand (operands[0], E_SImode))
                {
                  x11 = XEXP (x6, 0);
                  operands[2] = x11;
                  x10 = XEXP (x4, 0);
                  if (rtx_equal_p (x10, operands[0]))
                    {
                      x12 = XEXP (x7, 1);
                      x13 = XEXP (x12, 1);
                      x14 = XEXP (x13, 0);
                      if (rtx_equal_p (x14, operands[2]))
                        {
                          if (
#line 17016 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF))
                            return 1154; /* x86_shrd_nf */
                          if (pnum_clobbers != NULL)
                            {
                              *pnum_clobbers = 1;
                              return 1155; /* x86_shrd */
                            }
                        }
                    }
                }
              operands[2] = x9;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              x10 = XEXP (x4, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              x11 = XEXP (x6, 0);
              operands[3] = x11;
              x12 = XEXP (x7, 1);
              x13 = XEXP (x12, 1);
              x14 = XEXP (x13, 0);
              if (!rtx_equal_p (x14, operands[3]))
                return -1;
              if (
#line 17038 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1156; /* x86_shrd_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17038 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1157; /* x86_shrd_ndd */

            default:
              return -1;
            }

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
          x5 = XEXP (x3, 1);
          switch (GET_CODE (x5))
            {
            case SUBREG:
              switch (pattern437 (x3, 
ASHIFT))
                {
                case 0:
                  operands[2] = x6;
                  if (pattern1360 (x3) == 0)
                    {
                      if (
#line 16822 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1146; /* x86_64_shrd_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 16822 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1147; /* x86_64_shrd_1 */
                        }
                    }
                  operands[3] = x6;
                  if (pattern1361 (x3) != 0)
                    return -1;
                  if (
#line 16844 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1148; /* x86_64_shrd_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16844 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1149; /* x86_64_shrd_ndd_1 */

                case 1:
                  operands[2] = x6;
                  if (pattern1362 (x3) == 0)
                    {
                      if (
#line 17053 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1158; /* x86_shrd_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 17053 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1159; /* x86_shrd_1 */
                        }
                    }
                  operands[3] = x6;
                  if (pattern1363 (x3) != 0)
                    return -1;
                  if (
#line 17075 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && TARGET_APX_NF))
                    return 1160; /* x86_shrd_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17075 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1161; /* x86_shrd_ndd_1 */

                default:
                  return -1;
                }

            case ASHIFT:
              switch (pattern440 (x3, pnum_clobbers))
                {
                case 0:
                  if (
#line 16860 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1150; /* *x86_64_shrd_shld_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16916 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1151; /* *x86_64_shrd_shld_1_nozext */

                case 1:
                  if (
#line 17091 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1162; /* *x86_shrd_shld_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 17147 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1163; /* *x86_shrd_shld_1_nozext */

                case 2:
                  x7 = XEXP (x5, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      operands[2] = x6;
                      x10 = XEXP (x4, 0);
                      if (rtx_equal_p (x10, operands[0]))
                        {
                          x15 = XEXP (x5, 1);
                          x16 = XEXP (x15, 1);
                          if (rtx_equal_p (x16, operands[2])
                              && 
#line 16969 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1152; /* *x86_64_shrd_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  x10 = XEXP (x4, 0);
                  operands[1] = x10;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  operands[3] = x6;
                  x15 = XEXP (x5, 1);
                  x16 = XEXP (x15, 1);
                  if (!rtx_equal_p (x16, operands[2])
                      || !
#line 16990 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1153; /* *x86_64_shrd_ndd_2 */

                case 3:
                  x7 = XEXP (x5, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      operands[2] = x6;
                      x10 = XEXP (x4, 0);
                      if (rtx_equal_p (x10, operands[0]))
                        {
                          x15 = XEXP (x5, 1);
                          x16 = XEXP (x15, 1);
                          if (rtx_equal_p (x16, operands[2])
                              && 
#line 17199 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1164; /* *x86_shrd_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  x10 = XEXP (x4, 0);
                  operands[1] = x10;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  operands[3] = x6;
                  x15 = XEXP (x5, 1);
                  x16 = XEXP (x15, 1);
                  if (!rtx_equal_p (x16, operands[3])
                      || !
#line 17220 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1165; /* *x86_shrd_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      if (pnum_clobbers == NULL)
        return -1;
      x10 = XEXP (x4, 0);
      if (GET_CODE (x10) != PLUS)
        return -1;
      x17 = XEXP (x10, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x18 = XEXP (x10, 0);
      operands[1] = x18;
      x5 = XEXP (x3, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern986 (x3, 
E_SImode) != 0
              || !
#line 22182 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          *pnum_clobbers = 1;
          return 1608; /* *tbm_blci_si */

        case E_DImode:
          if (pattern986 (x3, 
E_DImode) != 0
              || !(
#line 22182 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1609; /* *tbm_blci_di */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      switch (XWINT (x6, 0))
        {
        case 1L:
          switch (pattern757 (x3))
            {
            case 0:
              if (!
#line 22222 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1614; /* *tbm_blcs_si */

            case 1:
              if (!(
#line 22222 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1615; /* *tbm_blcs_di */

            case 2:
              if (!
#line 22263 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1620; /* *tbm_t1mskc_si */

            case 3:
              if (!(
#line 22263 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1621; /* *tbm_t1mskc_di */

            default:
              return -1;
            }

        case -1L:
          switch (pattern757 (x3))
            {
            case 0:
              if (!
#line 22235 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1616; /* *tbm_blsfill_si */

            case 1:
              if (!(
#line 22235 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1617; /* *tbm_blsfill_di */

            case 2:
              if (!
#line 22249 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              *pnum_clobbers = 1;
              return 1618; /* *tbm_blsic_si */

            case 3:
              if (!(
#line 22249 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1619; /* *tbm_blsic_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case AND:
      if (pattern113 (x3) != 0
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      x7 = XEXP (x5, 0);
      x8 = XEXP (x7, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      return 1646; /* bswaphisi2_lowpart */

    default:
      return -1;
    }
}

 int
recog_102 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (pattern20 (x1, pnum_clobbers))
    {
    case 0:
      if (!
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1296; /* *rotlsi3_mask_1 */

    case 1:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1298; /* *rotldi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1312; /* *rotlsi3_add_1 */

    case 3:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1314; /* *rotldi3_add_1 */

    case 4:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1328; /* *rotlsi3_sub_1 */

    case 5:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1330; /* *rotldi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case SUBREG:
          switch (pattern448 (x2, pnum_clobbers))
            {
            case 0:
              if (
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1288; /* *rotlsi3_mask */
                }
              break;

            case 1:
              if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1290; /* *rotldi3_mask */
                }
              break;

            case 2:
              if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1304; /* *rotlsi3_add */
                }
              break;

            case 3:
              if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1306; /* *rotldi3_add */
                }
              break;

            case 4:
              if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1320; /* *rotlsi3_sub */
                }
              break;

            case 5:
              if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1322; /* *rotldi3_sub */
                }
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          if (pnum_clobbers != NULL)
            {
              operands[2] = x3;
              if (const_1_to_31_operand (operands[2], E_QImode)
                  && register_operand (operands[0], E_DImode)
                  && GET_MODE (x2) == E_DImode
                  && register_operand (operands[1], E_DImode)
                  && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                {
                  *pnum_clobbers = 2;
                  return 1332; /* ix86_rotldi3_doubleword */
                }
            }
          if (XWINT (x3, 0) == 32L
              && register_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && register_operand (operands[1], E_DImode)
              && 
#line 18427 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 1336; /* rotl32di2_doubleword */
          break;

        default:
          break;
        }
      operands[2] = x3;
      if (!nonmemory_operand (operands[2], E_QImode))
        return -1;
      switch (pattern16 (x2))
        {
        case 0:
          if (
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1342; /* *rotlsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1343; /* *rotlsi3_1 */

        case 1:
          if ((
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1346; /* *rotldi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1347; /* *rotldi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_110 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      return recog_109 (x1, insn, pnum_clobbers);

    case 1:
      return recog_108 (x1, insn, pnum_clobbers);

    case 4:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XVECEXP (x2, 0, 3);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 7
          || GET_MODE (x3) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x2, 0, 2);
      operands[3] = x7;
      switch (XINT (x2, 1))
        {
        case 20:
          if (!register_operand (operands[1], E_SImode)
              || !tls_symbolic_operand (operands[2], E_VOIDmode)
              || !constant_call_address_operand (operands[3], E_VOIDmode)
              || !
#line 22933 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          *pnum_clobbers = 3;
          return 1649; /* *tls_global_dynamic_32_gnu */

        case 22:
          if (!tls_symbolic_operand (operands[1], E_VOIDmode)
              || !register_operand (operands[2], E_SImode)
              || !register_operand (operands[3], E_SImode)
              || !
#line 23288 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          *pnum_clobbers = 1;
          return 1665; /* *tls_dynamic_gnu2_call_32 */

        default:
          return -1;
        }

    case 3:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (XINT (x2, 1))
        {
        case 21:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_SImode)
            return -1;
          x7 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 7
              || GET_MODE (x7) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (!constant_call_address_operand (operands[2], E_VOIDmode)
              || !
#line 23053 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS))
            return -1;
          *pnum_clobbers = 3;
          return 1653; /* *tls_local_dynamic_base_32_gnu */

        case 22:
          if (pnum_clobbers == NULL)
            return -1;
          x7 = XVECEXP (x2, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 7)
            return -1;
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1207 (x2, 
E_SImode) != 0
                  || !(
#line 23348 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1669; /* *tls_dynamic_gnu2_call_64_si */

            case E_DImode:
              if (pattern1207 (x2, 
E_DImode) != 0
                  || !(
#line 23348 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1670; /* *tls_dynamic_gnu2_call_64_di */

            default:
              return -1;
            }

        case 59:
          x5 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x5;
              x7 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x7) != CONST_INT)
                return -1;
              operands[3] = x7;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              switch (pattern23 (x2))
                {
                case 0:
                  switch (GET_MODE (operands[1]))
                    {
                    case E_V32HFmode:
                      if (register_operand (operands[1], E_V32HFmode)
                          && nonimmediate_operand (operands[2], E_V32HFmode)
                          && const_0_to_31_operand (operands[3], E_SImode)
                          && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                        return 3301; /* avx512bw_cmpv32hf3 */
                      break;

                    case E_V32QImode:
                      if (register_operand (operands[1], E_V32QImode)
                          && nonimmediate_operand (operands[2], E_V32QImode)
                          && const_0_to_7_operand (operands[3], E_SImode)
                          && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3440; /* avx512vl_cmpv32qi3 */
                      break;

                    case E_V32HImode:
                      if (register_operand (operands[1], E_V32HImode)
                          && nonimmediate_operand (operands[2], E_V32HImode)
                          && const_0_to_7_operand (operands[3], E_SImode)
                          && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3442; /* avx512bw_cmpv32hi3 */
                      break;

                    case E_V32BFmode:
                      if (register_operand (operands[1], E_V32BFmode)
                          && nonimmediate_operand (operands[2], E_V32BFmode)
                          && const_0_to_31_operand (operands[3], E_VOIDmode)
                          && (
#line 32459 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                        return 10729; /* avx10_2_cmpbf16_v32bf */
                      break;

                    default:
                      break;
                    }
                  break;

                case 1:
                  if (register_operand (operands[1], E_V64QImode)
                      && nonimmediate_operand (operands[2], E_V64QImode)
                      && const_0_to_7_operand (operands[3], E_SImode)
                      && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 3436; /* avx512bw_cmpv64qi3 */
                  break;

                default:
                  break;
                }
              if (XWINT (x7, 0) != 0L)
                return -1;
              operands[2] = x6;
              switch (pattern990 (x2))
                {
                case 0:
                  if (!(
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3496; /* *avx512bw_eqv64qi3_1 */

                case 1:
                  if (!(
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3504; /* *avx512vl_eqv32qi3_1 */

                case 2:
                  if (!(
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3508; /* *avx512bw_eqv32hi3_1 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern453 (x2))
                {
                case 0:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3646; /* *avx512bw_ucmpv64qi3_1 */

                case 1:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3650; /* *avx512vl_ucmpv32qi3_1 */

                case 2:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3652; /* *avx512bw_ucmpv32hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          x5 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x5))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x5;
              x7 = XVECEXP (x2, 0, 2);
              if (GET_CODE (x7) != CONST_INT)
                return -1;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              if (XWINT (x7, 0) == 0L)
                {
                  switch (pattern990 (x2))
                    {
                    case 0:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3498; /* *avx512bw_eqv64qi3_1 */
                      break;

                    case 1:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return 3506; /* *avx512vl_eqv32qi3_1 */
                      break;

                    case 2:
                      if ((
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 3510; /* *avx512bw_eqv32hi3_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x7;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              switch (pattern298 (x2))
                {
                case 0:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3520; /* avx512bw_ucmpv64qi3 */

                case 1:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3524; /* avx512vl_ucmpv32qi3 */

                case 2:
                  if (!(
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3526; /* avx512bw_ucmpv32hi3 */

                default:
                  return -1;
                }

            case US_MINUS:
              switch (pattern453 (x2))
                {
                case 0:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3647; /* *avx512bw_ucmpv64qi3_1 */

                case 1:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3651; /* *avx512vl_ucmpv32qi3_1 */

                case 2:
                  if (!(
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3653; /* *avx512bw_ucmpv32hi3_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 121:
          if (pattern301 (x2) != 0
              || !
#line 23283 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8650; /* ssse3_palignrdi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_127 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 2);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (pattern998 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 7043; /* avx512bw_getexpv32hf_mask */

    case E_V16HFmode:
      if (pattern998 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 7047; /* avx512vl_getexpv16hf_mask */

    case E_V8HFmode:
      if (pattern998 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 7050; /* avx512fp16_getexpv8hf_mask */

    case E_V16SFmode:
      if (pattern998 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7053; /* avx512f_getexpv16sf_mask */

    case E_V8SFmode:
      if (pattern998 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7057; /* avx512vl_getexpv8sf_mask */

    case E_V4SFmode:
      if (pattern998 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7060; /* avx512vl_getexpv4sf_mask */

    case E_V8DFmode:
      if (pattern998 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7063; /* avx512f_getexpv8df_mask */

    case E_V4DFmode:
      if (pattern998 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7067; /* avx512vl_getexpv4df_mask */

    case E_V2DFmode:
      if (pattern998 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7070; /* avx512vl_getexpv2df_mask */

    case E_V32BFmode:
      if (pattern626 (x2, 
E_V32BFmode, 
E_SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10700; /* avx10_2_getexpbf16_v32bf_mask */

    case E_V16BFmode:
      if (pattern626 (x2, 
E_V16BFmode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10702; /* avx10_2_getexpbf16_v16bf_mask */

    case E_V8BFmode:
      if (pattern626 (x2, 
E_V8BFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10704; /* avx10_2_getexpbf16_v8bf_mask */

    default:
      return -1;
    }
}

 int
recog_134 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_255_operand (operands[3], E_SImode))
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
        case E_V32HFmode:
          if (pattern471 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 531 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10943; /* avx10_2_minmaxpv32hf_mask */

        case E_V16HFmode:
          if (pattern471 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10947; /* avx10_2_minmaxpv16hf_mask */

        case E_V8HFmode:
          if (pattern471 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10951; /* avx10_2_minmaxpv8hf_mask */

        case E_V16SFmode:
          if (pattern471 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10955; /* avx10_2_minmaxpv16sf_mask */

        case E_V8SFmode:
          if (pattern471 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10959; /* avx10_2_minmaxpv8sf_mask */

        case E_V4SFmode:
          if (pattern471 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10963; /* avx10_2_minmaxpv4sf_mask */

        case E_V8DFmode:
          if (pattern471 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10967; /* avx10_2_minmaxpv8df_mask */

        case E_V4DFmode:
          if (pattern471 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10971; /* avx10_2_minmaxpv4df_mask */

        case E_V2DFmode:
          if (pattern471 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10975; /* avx10_2_minmaxpv2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      switch (pattern456 (x2))
        {
        case 0:
          if (!(
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 10977; /* avx10_2_minmaxsv8hf */

        case 1:
          if (!
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10981; /* avx10_2_minmaxsv4sf */

        case 2:
          if (!(
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 10985; /* avx10_2_minmaxsv2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_141 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern477 (x2))
    {
    case 0:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10187; /* vpshrd_v32hi_mask */

    case 1:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10189; /* vpshrd_v16si_mask */

    case 2:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10191; /* vpshrd_v8di_mask */

    case 3:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10193; /* vpshrd_v16hi_mask */

    case 4:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10195; /* vpshrd_v8si_mask */

    case 5:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10197; /* vpshrd_v4di_mask */

    case 6:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10199; /* vpshrd_v8hi_mask */

    case 7:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10201; /* vpshrd_v4si_mask */

    case 8:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10203; /* vpshrd_v2di_mask */

    default:
      return -1;
    }
}

 int
recog_148 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      x4 = XEXP (x2, 0);
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[1] = x6;
      switch (XWINT (x3, 0))
        {
        case 3L:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1005 (x2, 
E_V8HFmode, 
E_V2HFmode) == 0
                  && 
#line 11874 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5299; /* *vec_concatv8hf_movss */
              break;

            case E_V8BFmode:
              if (pattern1005 (x2, 
E_V8BFmode, 
E_V2BFmode) == 0
                  && 
#line 11874 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5300; /* *vec_concatv8bf_movss */
              break;

            case E_V8HImode:
              if (pattern1005 (x2, 
E_V8HImode, 
E_V2HImode) == 0
                  && 
#line 11874 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5301; /* *vec_concatv8hi_movss */
              break;

            default:
              break;
            }
          break;

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SImode:
              if (pattern1006 (x2, 
E_V4SImode, 
E_SImode) == 0
                  && 
#line 11896 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5302; /* vec_setv4si_0 */
              break;

            case E_V4SFmode:
              if (pattern1006 (x2, 
E_V4SFmode, 
E_SFmode) == 0
                  && 
#line 11896 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 5303; /* vec_setv4sf_0 */
              break;

            case E_V8HImode:
              if (pattern1005 (x2, 
E_V8HImode, 
E_HImode) == 0
                  && 
#line 11977 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5304; /* vec_setv8hi_0 */
              break;

            case E_V8HFmode:
              if (pattern1005 (x2, 
E_V8HFmode, 
E_HFmode) == 0
                  && 
#line 11977 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5305; /* vec_setv8hf_0 */
              break;

            case E_V8BFmode:
              if (pattern1005 (x2, 
E_V8BFmode, 
E_BFmode) == 0
                  && 
#line 11977 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5306; /* vec_setv8bf_0 */
              break;

            case E_V16HImode:
              if (pattern1007 (x2, 
E_V16HImode, 
E_HImode) == 0
                  && 
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5310; /* vec_setv16hi_0 */
              break;

            case E_V32HImode:
              if (pattern1007 (x2, 
E_V32HImode, 
E_HImode) == 0
                  && (
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 984 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5311; /* vec_setv32hi_0 */
              break;

            case E_V16HFmode:
              if (pattern1007 (x2, 
E_V16HFmode, 
E_HFmode) == 0
                  && 
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5312; /* vec_setv16hf_0 */
              break;

            case E_V32HFmode:
              if (pattern1007 (x2, 
E_V32HFmode, 
E_HFmode) == 0
                  && (
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 985 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5313; /* vec_setv32hf_0 */
              break;

            case E_V16BFmode:
              if (pattern1007 (x2, 
E_V16BFmode, 
E_BFmode) == 0
                  && 
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return 5314; /* vec_setv16bf_0 */
              break;

            case E_V32BFmode:
              if (pattern1007 (x2, 
E_V32BFmode, 
E_BFmode) == 0
                  && (
#line 12072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 986 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5315; /* vec_setv32bf_0 */
              break;

            case E_V8SImode:
              if (pattern1007 (x2, 
E_V8SImode, 
E_SImode) == 0
                  && 
#line 12179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 5327; /* vec_setv8si_0 */
              break;

            case E_V8SFmode:
              if (pattern1007 (x2, 
E_V8SFmode, 
E_SFmode) == 0
                  && 
#line 12179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 5328; /* vec_setv8sf_0 */
              break;

            case E_V16SImode:
              if (pattern1007 (x2, 
E_V16SImode, 
E_SImode) == 0
                  && (
#line 12179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 993 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 5329; /* vec_setv16si_0 */
              break;

            case E_V16SFmode:
              if (pattern1007 (x2, 
E_V16SFmode, 
E_SFmode) == 0
                  && (
#line 12179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 5330; /* vec_setv16sf_0 */
              break;

            case E_V2DFmode:
              if (pattern863 (x2, 
E_V2DFmode, 
E_DFmode) == 0
                  && 
#line 12293 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return 5337; /* vec_setv2df_0 */
              break;

            case E_V8DFmode:
              if (pattern1007 (x2, 
E_V8DFmode, 
E_DFmode) == 0
                  && (
#line 14971 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 7225; /* vec_setv8df_0 */
              break;

            case E_V4DFmode:
              if (pattern1007 (x2, 
E_V4DFmode, 
E_DFmode) == 0
                  && 
#line 14971 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 7226; /* vec_setv4df_0 */
              break;

            case E_V8DImode:
              if (pattern1007 (x2, 
E_V8DImode, 
E_DImode) == 0
                  && (
#line 21759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 710 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 8495; /* vec_setv8di_0 */
              break;

            case E_V4DImode:
              if (pattern1007 (x2, 
E_V4DImode, 
E_DImode) == 0
                  && 
#line 21759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 8496; /* vec_setv4di_0 */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[3] = x3;
      if (const_int_operand (operands[3], E_SImode))
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern886 (x2, 
E_V4SFmode, 
E_SFmode) == 0
                  && 
#line 12146 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode))))
                return 5326; /* *vec_setv4sf_sse4_1 */
              break;

            case E_V16QImode:
              if (pattern886 (x2, 
E_V16QImode, 
E_QImode) == 0
                  && (
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 19874 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8383; /* sse4_1_pinsrb */
              break;

            case E_V8HImode:
              if (pattern886 (x2, 
E_V8HImode, 
E_HImode) == 0
                  && 
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode))))
                return 8384; /* sse2_pinsrw */
              break;

            case E_V8HFmode:
              if (pattern886 (x2, 
E_V8HFmode, 
E_HFmode) == 0
                  && 
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HFmode))))
                return 8385; /* sse2_pinsrph */
              break;

            case E_V8BFmode:
              if (pattern886 (x2, 
E_V8BFmode, 
E_BFmode) == 0
                  && 
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8BFmode))))
                return 8386; /* sse2_pinsrbf */
              break;

            case E_V4SImode:
              if (pattern886 (x2, 
E_V4SImode, 
E_SImode) == 0
                  && (
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 19875 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
                return 8387; /* sse4_1_pinsrd */
              break;

            case E_V2DImode:
              if (pattern886 (x2, 
E_V2DImode, 
E_DImode) == 0
                  && (
#line 19894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 19876 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)))
                return 8388; /* sse4_1_pinsrq */
              break;

            case E_V8DFmode:
              if (pattern887 (x2, 
E_V8DFmode, 
E_V2DFmode) == 0
                  && (
#line 19998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DFmode) == 4 ? 0xF : 0x3))) && 
#line 12406 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
                return 8389; /* *avx512dq_vinsertf64x2_0 */
              break;

            case E_V8DImode:
              if (pattern887 (x2, 
E_V8DImode, 
E_V2DImode) == 0
                  && (
#line 19998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V8DImode) == 4 ? 0xF : 0x3))) && 
#line 12407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
                return 8390; /* *avx512dq_vinserti64x2_0 */
              break;

            case E_V16SFmode:
              if (pattern887 (x2, 
E_V16SFmode, 
E_V4SFmode) == 0
                  && (
#line 19998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SFmode) == 4 ? 0xF : 0x3))) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8391; /* *avx512f_vinsertf32x4_0 */
              break;

            case E_V16SImode:
              if (pattern887 (x2, 
E_V16SImode, 
E_V4SImode) == 0
                  && (
#line 19998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3])
       == (GET_MODE_UNIT_SIZE (V16SImode) == 4 ? 0xF : 0x3))) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 8392; /* *avx512f_vinserti32x4_0 */
              break;

            default:
              break;
            }
        }
      if (XWINT (x3, 0) != 1L
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode
          || GET_MODE (x4) != E_V4SImode)
        return -1;
      operands[2] = x5;
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      operands[1] = x6;
      if (!reg_or_0_operand (operands[1], E_V4SImode)
          || !
#line 21051 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 8459; /* sse2_loadld */

    case REG:
    case SUBREG:
      operands[3] = x3;
      x4 = XEXP (x2, 0);
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern147 (x2, 
E_V2DFmode, 
E_DFmode, 
E_QImode) != 0)
            return -1;
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14899 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 7223; /* vec_dupv2df_mask */
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9292; /* avx512vl_vec_dup_gprv2df_mask */

        case E_V16SFmode:
          if (pattern773 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9238; /* avx512f_broadcastv16sf_mask */

            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9282; /* avx512f_vec_dup_gprv16sf_mask */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28075 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9338; /* avx512dq_broadcastv16sf_mask_1 */

            default:
              return -1;
            }

        case E_V16SImode:
          if (pattern773 (x2, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9240; /* avx512f_broadcastv16si_mask */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9270; /* avx512f_vec_dup_gprv16si_mask */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28075 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9340; /* avx512dq_broadcastv16si_mask_1 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DFmode:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9242; /* avx512f_broadcastv8df_mask */

            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9288; /* avx512f_vec_dup_gprv8df_mask */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28086 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9344; /* avx512dq_broadcastv8df_mask_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (pattern773 (x2, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9244; /* avx512f_broadcastv8di_mask */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9276; /* avx512f_vec_dup_gprv8di_mask */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28086 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9342; /* avx512dq_broadcastv8di_mask_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (pattern147 (x2, 
E_V64QImode, 
E_QImode, 
E_DImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9246; /* avx512bw_vec_dup_gprv64qi_mask */

        case E_V16QImode:
          if (pattern147 (x2, 
E_V16QImode, 
E_QImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9248; /* avx512vl_vec_dup_gprv16qi_mask */

        case E_V32QImode:
          if (pattern147 (x2, 
E_V32QImode, 
E_QImode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9250; /* avx512vl_vec_dup_gprv32qi_mask */

        case E_V32HImode:
          if (pattern147 (x2, 
E_V32HImode, 
E_HImode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9252; /* avx512bw_vec_dup_gprv32hi_mask */

        case E_V16HImode:
          if (pattern145 (x2, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9254; /* avx512vl_vec_dup_gprv16hi_mask */

        case E_V8HImode:
          if (pattern147 (x2, 
E_V8HImode, 
E_HImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9256; /* avx512vl_vec_dup_gprv8hi_mask */

        case E_V32HFmode:
          if (pattern147 (x2, 
E_V32HFmode, 
E_HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9258; /* avx512bw_vec_dup_gprv32hf_mask */

        case E_V16HFmode:
          if (pattern147 (x2, 
E_V16HFmode, 
E_HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9260; /* avx512vl_vec_dup_gprv16hf_mask */

        case E_V8HFmode:
          if (pattern147 (x2, 
E_V8HFmode, 
E_HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9262; /* avx512fp16_vec_dup_gprv8hf_mask */

        case E_V32BFmode:
          if (pattern147 (x2, 
E_V32BFmode, 
E_BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9264; /* avx512bw_vec_dup_gprv32bf_mask */

        case E_V16BFmode:
          if (pattern147 (x2, 
E_V16BFmode, 
E_BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9266; /* avx512vl_vec_dup_gprv16bf_mask */

        case E_V8BFmode:
          if (pattern147 (x2, 
E_V8BFmode, 
E_BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9268; /* avx512vl_vec_dup_gprv8bf_mask */

        case E_V8SImode:
          if (pattern773 (x2, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9272; /* avx512vl_vec_dup_gprv8si_mask */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28062 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9334; /* avx512vl_broadcastv8si_mask_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern147 (x2, 
E_V4SImode, 
E_SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9274; /* avx512vl_vec_dup_gprv4si_mask */

        case E_V4DImode:
          if (pattern773 (x2, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9278; /* avx512vl_vec_dup_gprv4di_mask */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9346; /* avx512dq_broadcastv4di_mask_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (pattern147 (x2, 
E_V2DImode, 
E_DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9280; /* avx512vl_vec_dup_gprv2di_mask */

        case E_V8SFmode:
          if (pattern773 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9284; /* avx512vl_vec_dup_gprv8sf_mask */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28062 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9336; /* avx512vl_broadcastv8sf_mask_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern147 (x2, 
E_V4SFmode, 
E_SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9286; /* avx512vl_vec_dup_gprv4sf_mask */

        case E_V4DFmode:
          if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9290; /* avx512vl_vec_dup_gprv4df_mask */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9348; /* avx512dq_broadcastv4df_mask_1 */

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
recog_161 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x6) != CONST_INT
      || pattern1301 (x4) != 0)
    return -1;
  x7 = XVECEXP (x4, 0, 12);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 13);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x4, 0, 14);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x4, 0, 15);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XEXP (x2, 2);
  if (!register_operand (x11, E_HImode))
    return -1;
  x12 = XVECEXP (x4, 0, 0);
  switch (XWINT (x12, 0))
    {
    case 2L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 18L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 19L
          || pattern1836 (x4) != 0)
        return -1;
      x14 = XVECEXP (x4, 0, 8);
      if (XWINT (x14, 0) != 10L)
        return -1;
      x15 = XVECEXP (x4, 0, 9);
      if (XWINT (x15, 0) != 26L)
        return -1;
      x16 = XVECEXP (x4, 0, 10);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x4, 0, 11);
      if (XWINT (x17, 0) != 27L
          || pattern1868 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1582 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5252; /* avx512f_unpckhps512_mask */

        case E_V16SImode:
          if (pattern1582 (x2, 
E_V16SImode, 
E_V32SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19757 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 8374; /* avx512f_interleave_highv16si_mask */

        default:
          return -1;
        }

    case 0L:
      x13 = XVECEXP (x4, 0, 1);
      switch (XWINT (x13, 0))
        {
        case 16L:
          if (XWINT (x5, 0) != 1L
              || XWINT (x6, 0) != 17L)
            return -1;
          x18 = XEXP (x3, 0);
          x19 = XEXP (x18, 1);
          operands[2] = x19;
          x20 = XEXP (x2, 1);
          operands[3] = x20;
          operands[4] = x11;
          x21 = XVECEXP (x4, 0, 4);
          switch (XWINT (x21, 0))
            {
            case 4L:
              x22 = XVECEXP (x4, 0, 5);
              if (XWINT (x22, 0) != 20L)
                return -1;
              x23 = XVECEXP (x4, 0, 6);
              if (XWINT (x23, 0) != 5L)
                return -1;
              x24 = XVECEXP (x4, 0, 7);
              if (XWINT (x24, 0) != 21L)
                return -1;
              x14 = XVECEXP (x4, 0, 8);
              if (XWINT (x14, 0) != 8L)
                return -1;
              x15 = XVECEXP (x4, 0, 9);
              if (XWINT (x15, 0) != 24L)
                return -1;
              x16 = XVECEXP (x4, 0, 10);
              if (XWINT (x16, 0) != 9L)
                return -1;
              x17 = XVECEXP (x4, 0, 11);
              if (XWINT (x17, 0) != 25L
                  || XWINT (x7, 0) != 12L
                  || XWINT (x8, 0) != 28L
                  || XWINT (x9, 0) != 13L
                  || XWINT (x10, 0) != 29L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1582 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11253 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 5258; /* avx512f_unpcklps512_mask */

                case E_V16SImode:
                  if (pattern1582 (x2, 
E_V16SImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 8380; /* avx512f_interleave_lowv16si_mask */

                default:
                  return -1;
                }

            case 2L:
              x22 = XVECEXP (x4, 0, 5);
              if (XWINT (x22, 0) != 18L)
                return -1;
              x23 = XVECEXP (x4, 0, 6);
              if (XWINT (x23, 0) != 3L)
                return -1;
              x24 = XVECEXP (x4, 0, 7);
              if (XWINT (x24, 0) != 19L)
                return -1;
              x14 = XVECEXP (x4, 0, 8);
              switch (XWINT (x14, 0))
                {
                case 4L:
                  x15 = XVECEXP (x4, 0, 9);
                  if (XWINT (x15, 0) != 20L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 10);
                  if (XWINT (x16, 0) != 5L)
                    return -1;
                  x17 = XVECEXP (x4, 0, 11);
                  if (XWINT (x17, 0) != 21L
                      || XWINT (x7, 0) != 6L
                      || XWINT (x8, 0) != 22L
                      || XWINT (x9, 0) != 7L
                      || XWINT (x10, 0) != 23L
                      || pattern1583 (x2, 
E_V16QImode, 
E_V32QImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19581 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8334; /* vec_interleave_lowv16qi_mask */

                case 8L:
                  x15 = XVECEXP (x4, 0, 9);
                  if (XWINT (x15, 0) != 24L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 10);
                  if (XWINT (x16, 0) != 9L)
                    return -1;
                  x17 = XVECEXP (x4, 0, 11);
                  if (XWINT (x17, 0) != 25L
                      || XWINT (x7, 0) != 10L
                      || XWINT (x8, 0) != 26L
                      || XWINT (x9, 0) != 11L
                      || XWINT (x10, 0) != 27L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16HImode:
                      if (pattern1582 (x2, 
E_V16HImode, 
E_V32HImode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8360; /* avx2_interleave_lowv16hi_mask */

                    case E_V16HFmode:
                      if (pattern1582 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8362; /* avx2_interleave_lowv16hf_mask */

                    case E_V16BFmode:
                      if (pattern1582 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8364; /* avx2_interleave_lowv16bf_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1666 (x4) != 0)
            return -1;
          x14 = XVECEXP (x4, 0, 8);
          if (XWINT (x14, 0) != 8L)
            return -1;
          x15 = XVECEXP (x4, 0, 9);
          if (XWINT (x15, 0) != 8L)
            return -1;
          x16 = XVECEXP (x4, 0, 10);
          if (XWINT (x16, 0) != 10L)
            return -1;
          x17 = XVECEXP (x4, 0, 11);
          if (XWINT (x17, 0) != 10L
              || XWINT (x7, 0) != 12L
              || XWINT (x8, 0) != 12L
              || XWINT (x9, 0) != 14L
              || XWINT (x10, 0) != 14L
              || pattern1806 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5274; /* avx512f_movsldup512_mask */

        default:
          return -1;
        }

    case 1L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 1L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 3L)
        return -1;
      x21 = XVECEXP (x4, 0, 4);
      if (XWINT (x21, 0) != 5L)
        return -1;
      x22 = XVECEXP (x4, 0, 5);
      if (XWINT (x22, 0) != 5L)
        return -1;
      x23 = XVECEXP (x4, 0, 6);
      if (XWINT (x23, 0) != 7L)
        return -1;
      x24 = XVECEXP (x4, 0, 7);
      if (XWINT (x24, 0) != 7L)
        return -1;
      x14 = XVECEXP (x4, 0, 8);
      if (XWINT (x14, 0) != 9L)
        return -1;
      x15 = XVECEXP (x4, 0, 9);
      if (XWINT (x15, 0) != 9L)
        return -1;
      x16 = XVECEXP (x4, 0, 10);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x4, 0, 11);
      if (XWINT (x17, 0) != 11L
          || XWINT (x7, 0) != 13L
          || XWINT (x8, 0) != 13L
          || XWINT (x9, 0) != 15L
          || XWINT (x10, 0) != 15L
          || pattern1806 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5268; /* avx512f_movshdup512_mask */

    case 8L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 24L
          || XWINT (x5, 0) != 9L
          || XWINT (x6, 0) != 25L)
        return -1;
      x21 = XVECEXP (x4, 0, 4);
      if (XWINT (x21, 0) != 10L)
        return -1;
      x22 = XVECEXP (x4, 0, 5);
      if (XWINT (x22, 0) != 26L)
        return -1;
      x23 = XVECEXP (x4, 0, 6);
      if (XWINT (x23, 0) != 11L)
        return -1;
      x24 = XVECEXP (x4, 0, 7);
      if (XWINT (x24, 0) != 27L
          || pattern1851 (x4) != 0
          || XWINT (x7, 0) != 14L
          || XWINT (x8, 0) != 30L
          || XWINT (x9, 0) != 15L
          || XWINT (x10, 0) != 31L
          || pattern772 (x2, 
E_V32QImode, 
E_V16QImode) != 0
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      x18 = XEXP (x3, 0);
      x19 = XEXP (x18, 1);
      operands[2] = x19;
      if (!vector_operand (operands[2], E_V16QImode))
        return -1;
      x20 = XEXP (x2, 1);
      operands[3] = x20;
      if (!nonimm_or_0_operand (operands[3], E_V16QImode))
        return -1;
      operands[4] = x11;
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
        return -1;
      return 8328; /* vec_interleave_highv16qi_mask */

    case 4L:
      x13 = XVECEXP (x4, 0, 1);
      if (XWINT (x13, 0) != 20L
          || XWINT (x5, 0) != 5L
          || XWINT (x6, 0) != 21L
          || pattern1836 (x4) != 0
          || pattern1851 (x4) != 0
          || pattern1868 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1582 (x2, 
E_V16HImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8342; /* avx2_interleave_highv16hi_mask */

        case E_V16HFmode:
          if (pattern1582 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8344; /* avx2_interleave_highv16hf_mask */

        case E_V16BFmode:
          if (pattern1582 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8346; /* avx2_interleave_highv16bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_177 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != CONST_VECTOR
      || XVECLEN (x6, 0) != 32
      || GET_MODE (x6) != E_V32HImode)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x6, 0, 2);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XVECEXP (x6, 0, 3);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XVECEXP (x6, 0, 4);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x12 = XVECEXP (x6, 0, 5);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x6, 0, 6);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x14 = XVECEXP (x6, 0, 7);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x15 = XVECEXP (x6, 0, 8);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x16 = XVECEXP (x6, 0, 9);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x17 = XVECEXP (x6, 0, 10);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x18 = XVECEXP (x6, 0, 11);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x19 = XVECEXP (x6, 0, 12);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x20 = XVECEXP (x6, 0, 13);
  if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x21 = XVECEXP (x6, 0, 14);
  if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x22 = XVECEXP (x6, 0, 15);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x6, 0, 16);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x24 = XVECEXP (x6, 0, 17);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x25 = XVECEXP (x6, 0, 18);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XVECEXP (x6, 0, 19);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x27 = XVECEXP (x6, 0, 20);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x28 = XVECEXP (x6, 0, 21);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x29 = XVECEXP (x6, 0, 22);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x30 = XVECEXP (x6, 0, 23);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x31 = XVECEXP (x6, 0, 24);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x32 = XVECEXP (x6, 0, 25);
  if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x33 = XVECEXP (x6, 0, 26);
  if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x34 = XVECEXP (x6, 0, 27);
  if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x35 = XVECEXP (x6, 0, 28);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x36 = XVECEXP (x6, 0, 29);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x37 = XVECEXP (x6, 0, 30);
  if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x38 = XVECEXP (x6, 0, 31);
  if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x2) != E_V32HImode
      || GET_MODE (x3) != E_V32HImode
      || GET_MODE (x4) != E_V32SImode
      || GET_MODE (x5) != E_V32SImode)
    return -1;
  x39 = XEXP (x5, 0);
  if (GET_MODE (x39) != E_V32SImode)
    return -1;
  x40 = XEXP (x39, 0);
  if (GET_MODE (x40) != E_V32SImode)
    return -1;
  x41 = XEXP (x40, 0);
  if (GET_MODE (x41) != E_V32SImode)
    return -1;
  x42 = XEXP (x40, 1);
  if (GET_MODE (x42) != E_V32SImode)
    return -1;
  x43 = XEXP (x42, 0);
  operands[2] = x43;
  if (!nonimmediate_operand (operands[2], E_V32HImode))
    return -1;
  x44 = XEXP (x2, 1);
  operands[3] = x44;
  if (!nonimm_or_0_operand (operands[3], E_V32HImode))
    return -1;
  x45 = XEXP (x2, 2);
  operands[4] = x45;
  if (!register_operand (operands[4], E_SImode)
      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 22840 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
    return -1;
  return 8617; /* avx512bw_umulhrswv32hi3_mask */
}

 int
recog_186 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[4] = x6;
          x7 = XEXP (x2, 1);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern485 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 2787; /* *mulv32hf3_mask */

            case E_V16HFmode:
              if (pattern485 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 2791; /* *mulv16hf3_mask */

            case E_V8HFmode:
              if (pattern485 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 2795; /* *mulv8hf3_mask */

            case E_V16SFmode:
              if (pattern485 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 2799; /* *mulv16sf3_mask */

            case E_V8SFmode:
              if (pattern485 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 2803; /* *mulv8sf3_mask */

            case E_V4SFmode:
              if (pattern485 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
                return -1;
              return 2807; /* *mulv4sf3_mask */

            case E_V8DFmode:
              if (pattern485 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 2811; /* *mulv8df3_mask */

            case E_V4DFmode:
              if (pattern485 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 2815; /* *mulv4df3_mask */

            case E_V2DFmode:
              if (pattern485 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2819; /* *mulv2df3_mask */

            case E_V32HImode:
              if (pattern127 (x2, 
E_V32HImode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                return -1;
              return 7563; /* *mulv32hi3_mask */

            case E_V16HImode:
              if (pattern127 (x2, 
E_V16HImode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                return -1;
              return 7565; /* *mulv16hi3_mask */

            case E_V8HImode:
              if (pattern127 (x2, 
E_V8HImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                return -1;
              return 7567; /* *mulv8hi3_mask */

            case E_V8DImode:
              if (pattern485 (x2, 
E_V8DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (64 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 7601; /* *avx512dq_mulv8di3_mask */

            case E_V4DImode:
              if (pattern485 (x2, 
E_V4DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (32 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7603; /* *avx512dq_mulv4di3_mask */

            case E_V2DImode:
              if (pattern485 (x2, 
E_V2DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && (16 == 64 || TARGET_AVX512VL)
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 7605; /* *avx512dq_mulv2di3_mask */

            case E_V16SImode:
              if (pattern485 (x2, 
E_V16SImode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && (64 == 64 || TARGET_AVX512VL)) && 
#line 671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 7607; /* *avx512f_mulv16si3_mask */

            case E_V8SImode:
              if (pattern485 (x2, 
E_V8SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && (32 == 64 || TARGET_AVX512VL)) && 
#line 671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                return -1;
              return 7609; /* *avx2_mulv8si3_mask */

            case E_V4SImode:
              if (pattern485 (x2, 
E_V4SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && (16 == 64 || TARGET_AVX512VL))))
                return -1;
              return 7611; /* *sse4_1_mulv4si3_mask */

            case E_V32BFmode:
              if (pattern130 (x2, 
E_V32BFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10614; /* avx10_2_mulbf16_v32bf_mask */

            case E_V16BFmode:
              if (pattern130 (x2, 
E_V16BFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10622; /* avx10_2_mulbf16_v16bf_mask */

            case E_V8BFmode:
              if (pattern130 (x2, 
E_V8BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10630; /* avx10_2_mulbf16_v8bf_mask */

            default:
              return -1;
            }

        case CONST_INT:
          switch (pattern132 (x2))
            {
            case 0:
              if (!(
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 2827; /* avx512fp16_vmmulv8hf3 */

            case 1:
              if (!
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2835; /* sse_vmmulv4sf3 */

            case 2:
              if (!(
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 2843; /* sse2_vmmulv2df3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern312 (x2, 
ZERO_EXTEND))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16481 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7581; /* *vec_widen_umult_even_v16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7583; /* *vec_widen_umult_even_v8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16549 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7585; /* *vec_widen_umult_even_v4si_mask */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern312 (x2, 
SIGN_EXTEND))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7587; /* *vec_widen_smult_even_v16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7589; /* *vec_widen_smult_even_v8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16665 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7591; /* *sse4_1_mulv2siv2di3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_190 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      switch (pattern138 (x2))
        {
        case 0:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7245; /* avx512f_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7281; /* avx512vl_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7248; /* avx512f_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7251; /* avx512f_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7254; /* avx512f_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7278; /* avx512vl_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15220 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7261; /* avx512bw_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7275; /* avx512vl_truncatev4div4si2_mask */

        default:
          return -1;
        }

    case LSHIFTRT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case MULT:
          if (XWINT (x5, 0) != 16L)
            return -1;
          x7 = XEXP (x2, 1);
          operands[3] = x7;
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          x9 = XEXP (x6, 0);
          switch (GET_CODE (x9))
            {
            case SIGN_EXTEND:
              switch (pattern1118 (x2, 
SIGN_EXTEND))
                {
                case 0:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 7569; /* *smulv32hi3_highpart_mask */

                case 1:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 7573; /* *smulv16hi3_highpart_mask */

                case 2:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                    return -1;
                  return 7577; /* *smulv8hi3_highpart_mask */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern1118 (x2, 
ZERO_EXTEND))
                {
                case 0:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 7571; /* *umulv32hi3_highpart_mask */

                case 1:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 7575; /* *umulv16hi3_highpart_mask */

                case 2:
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
                    return -1;
                  return 7579; /* *umulv8hi3_highpart_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          if (XWINT (x5, 0) != 1L)
            return -1;
          x9 = XEXP (x6, 0);
          switch (GET_CODE (x9))
            {
            case PLUS:
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != ZERO_EXTEND)
                return -1;
              x11 = XEXP (x9, 1);
              if (GET_CODE (x11) != ZERO_EXTEND)
                return -1;
              x12 = XEXP (x10, 0);
              operands[1] = x12;
              x13 = XEXP (x11, 0);
              operands[2] = x13;
              x14 = XEXP (x6, 1);
              operands[5] = x14;
              x7 = XEXP (x2, 1);
              operands[3] = x7;
              x8 = XEXP (x2, 2);
              operands[4] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V64QImode:
                  if (pattern1549 (x2, 
E_DImode, 
E_V64QImode, 
E_V64HImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8498; /* *avx512bw_uavgv64qi3_mask */

                case E_V32QImode:
                  if (pattern1549 (x2, 
E_SImode, 
E_V32QImode, 
E_V32HImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8500; /* *avx2_uavgv32qi3_mask */

                case E_V16QImode:
                  if (pattern1549 (x2, 
E_HImode, 
E_V16QImode, 
E_V16HImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8502; /* *sse2_uavgv16qi3_mask */

                case E_V32HImode:
                  if (pattern1549 (x2, 
E_SImode, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8504; /* *avx512bw_uavgv32hi3_mask */

                case E_V16HImode:
                  if (pattern1549 (x2, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8506; /* *avx2_uavgv16hi3_mask */

                case E_V8HImode:
                  if (pattern1549 (x2, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8508; /* *sse2_uavgv8hi3_mask */

                default:
                  return -1;
                }

            case LSHIFTRT:
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != MULT)
                return -1;
              x12 = XEXP (x10, 0);
              if (GET_CODE (x12) != SIGN_EXTEND)
                return -1;
              x15 = XEXP (x10, 1);
              if (GET_CODE (x15) != SIGN_EXTEND)
                return -1;
              x11 = XEXP (x9, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x16 = XEXP (x12, 0);
              operands[1] = x16;
              if (nonimmediate_operand (operands[1], E_V32HImode))
                {
                  res = recog_177 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              x17 = XEXP (x15, 0);
              operands[2] = x17;
              x14 = XEXP (x6, 1);
              operands[3] = x14;
              x7 = XEXP (x2, 1);
              operands[4] = x7;
              x8 = XEXP (x2, 2);
              operands[5] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HImode:
                  if (pattern1642 (x2, 
E_SImode, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8621; /* *avx512bw_pmulhrswv32hi3_mask */

                case E_V16HImode:
                  if (pattern1642 (x2, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
                    return -1;
                  return 8623; /* *avx2_pmulhrswv16hi3_mask */

                case E_V8HImode:
                  if (pattern1642 (x2, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
                    return -1;
                  return 8625; /* *ssse3_pmulhrswv8hi3_mask */

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
recog_202 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern134 (x2))
    {
    case 0:
      switch (pattern891 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4483; /* avx512fp16_vcvtw2ph_v8hi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4504; /* avx512fp16_vcvtdq2ph_v8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4520; /* avx512fp16_vcvtqq2ph_v8di_mask */

        default:
          return -1;
        }

    case 1:
      switch (pattern892 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4488; /* avx512fp16_vcvtw2ph_v16hi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4512; /* avx512fp16_vcvtdq2ph_v16si_mask */

        default:
          return -1;
        }

    case 2:
      if (pattern774 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4496; /* avx512fp16_vcvtw2ph_v32hi_mask */

    case 3:
      if (pattern774 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 4817; /* floatv16siv16sf2_mask */

    case 4:
      if (pattern773 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SImode:
          if (!vector_operand (operands[1], E_V8SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 4821; /* floatv8siv8sf2_mask */

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4975; /* floatv8div8sf2_mask */

        default:
          return -1;
        }

    case 5:
      if (pattern773 (x2, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SImode:
          if (!vector_operand (operands[1], E_V4SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 4824; /* floatv4siv4sf2_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4983; /* floatv4div4sf2_mask */

        default:
          return -1;
        }

    case 6:
      switch (pattern893 (x2, 
E_V8DFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4950; /* floatv8siv8df2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4955; /* floatv8div8df2_mask */

        default:
          return -1;
        }

    case 7:
      switch (pattern894 (x2, 
E_V4DFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL))))
            return -1;
          return 4952; /* floatv4siv4df2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4963; /* floatv4div4df2_mask */

        default:
          return -1;
        }

    case 8:
      if (pattern147 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4970; /* floatv2div2df2_mask */

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9400 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
        return -1;
      return 5004; /* sse2_cvtdq2pd_mask */

    default:
      return -1;
    }
}

 int
recog_212 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4568; /* unspec_avx512fp16_fixuns_truncv8hi2 */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4574; /* unspec_avx512fp16_fixuns_truncv16hi2 */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4582; /* unspec_avx512fp16_fixuns_truncv32hi2 */

    case E_V8SImode:
      switch (pattern642 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4590; /* unspec_avx512fp16_fixuns_truncv8si2 */

        case 1:
          if (!
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5032; /* unspec_fixuns_truncv8dfv8si2 */

        case 2:
          if (!(
#line 9916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5153; /* *unspec_fixuns_truncv8sfv8si2 */

        default:
          return -1;
        }

    case E_V16SImode:
      switch (pattern641 (x2, 
E_V16SImode))
        {
        case 0:
          if (!(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4598; /* unspec_avx512fp16_fixuns_truncv16si2 */

        case 1:
          if (!
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4879; /* unspec_fixuns_truncv16sfv16si2 */

        default:
          return -1;
        }

    case E_V8DImode:
      switch (pattern642 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4606; /* unspec_avx512fp16_fixuns_truncv8di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5065; /* unspec_fixuns_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5125; /* unspec_fixuns_truncv8sfv8di2 */

        default:
          return -1;
        }

    case E_V4SImode:
      switch (pattern643 (x2, 
E_V4SImode))
        {
        case 0:
          if (!
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4656; /* unspec_avx512fp16_fixuns_truncv4si2 */

        case 1:
          if (!
#line 9681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5055; /* unspec_fixuns_truncv4dfv4si2 */

        case 2:
          if (!
#line 9916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1))
            return -1;
          return 5157; /* *unspec_fixuns_truncv4sfv4si2 */

        default:
          return -1;
        }

    case E_V4DImode:
      switch (pattern643 (x2, 
E_V4DImode))
        {
        case 0:
          if (!
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4662; /* unspec_avx512fp16_fixuns_truncv4di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5073; /* unspec_fixuns_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5133; /* unspec_fixuns_truncv4sfv4di2 */

        default:
          return -1;
        }

    case E_V2DImode:
      switch (pattern644 (x2))
        {
        case 0:
          if (!
#line 7956 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4684; /* unspec_avx512fp16_fixuns_truncv2di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5079; /* unspec_fixuns_truncv2dfv2di2 */

        case 2:
          if (!
#line 9766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 5147; /* unspec_avx512dq_fixuns_truncv2sfv2di2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_225 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case SQRT:
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1403 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2953; /* *avx512fp16_vmsqrtv8hf2_round */

        case E_V4SFmode:
          if (pattern1403 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2957; /* *sse_vmsqrtv4sf2_round */

        case E_V2DFmode:
          if (pattern1403 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2961; /* *sse2_vmsqrtv2df2_round */

        default:
          return -1;
        }

    case FLOAT:
      switch (pattern909 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4559; /* avx512fp16_vcvtsi2sh_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4563; /* avx512fp16_vcvtsi2shq_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 4791; /* sse_cvtsi2ss_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4793; /* sse_cvtsi2ssq_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9014 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)))
            return -1;
          return 4910; /* sse2_cvtsi2sdq_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern909 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4561; /* avx512fp16_vcvtusi2sh_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 4565; /* avx512fp16_vcvtusi2shq_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (V4SFmode == V4SFmode))))
            return -1;
          return 4809; /* cvtusi2ss32_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8640 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT)))
            return -1;
          return 4812; /* cvtusi2ss64_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8640 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 4814; /* cvtusi2sd64_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XEXP (x6, 0);
      if (pattern907 (x7, 
1, 
E_HFmode) != 0)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const48_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (pattern1670 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4764; /* avx512fp16_vcvtsh2sd_round */

        case E_V4SFmode:
          if (pattern1670 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4768; /* avx512fp16_vcvtsh2ss_round */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
        return -1;
      x7 = XEXP (x6, 0);
      switch (GET_CODE (x7))
        {
        case VEC_SELECT:
          x11 = XEXP (x7, 1);
          if (GET_CODE (x11) != PARALLEL
              || XVECLEN (x11, 0) != 1)
            return -1;
          x12 = XVECEXP (x11, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern1404 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
            return -1;
          x10 = XEXP (x7, 0);
          operands[1] = x10;
          x8 = XEXP (x3, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_V8HFmode))
            return -1;
          switch (GET_MODE (x7))
            {
            case E_DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4775; /* avx512fp16_vcvtsd2sh_round */

            case E_SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4779; /* avx512fp16_vcvtss2sh_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2DFmode)
              || pattern1404 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V4SFmode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5169; /* sse2_cvtsd2ss_round */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x6, 0) != 2
          || XINT (x6, 1) != 94)
        return -1;
      x13 = XVECEXP (x6, 0, 0);
      operands[2] = x13;
      x14 = XVECEXP (x6, 0, 1);
      operands[3] = x14;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[1] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[4] = x9;
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1585 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14268 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 7188; /* *avx512f_rndscalev8hf_round */

        case E_V4SFmode:
          if (pattern1585 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
            return -1;
          return 7190; /* *avx512f_rndscalev4sf_round */

        case E_V2DFmode:
          if (pattern1585 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14268 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 7192; /* *avx512f_rndscalev2df_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_227 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  switch (XINT (x3, 1))
    {
    case 156:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4423; /* avx512fp16_vcvtph2uw_v32hi_round */

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4431; /* avx512fp16_vcvtph2udq_v16si_round */

            case E_V16SFmode:
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16SImode == V16SFmode
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
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4846; /* *avx512f_fixuns_notruncv16sfv16si_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1219 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4439; /* avx512fp16_vcvtph2uqq_v8di_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8752 "../../src/gcc/config/i386/sse.md"
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
              return 4866; /* *avx512dq_cvtps2uqqv8di_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9734 "../../src/gcc/config/i386/sse.md"
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
              return 5112; /* fixuns_notruncv8dfv8di2_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4447; /* avx512fp16_vcvtph2uw_v16hi_round */

        case E_V8SImode:
          switch (pattern1219 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4455; /* avx512fp16_vcvtph2udq_v8si_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8SImode == V16SFmode
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
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4850; /* *avx512vl_fixuns_notruncv8sfv8si_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DFmode == V16SFmode
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
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 5018; /* fixuns_notruncv8dfv8si2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1220 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V4DImode == V16SFmode
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
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4463; /* avx512fp16_vcvtph2uqq_v4di_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8752 "../../src/gcc/config/i386/sse.md"
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
              return 4870; /* *avx512dq_cvtps2uqqv4di_round */

            case 2:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9734 "../../src/gcc/config/i386/sse.md"
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
              return 5116; /* fixuns_notruncv4dfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DFmode == V16SFmode
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
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5022; /* fixuns_notruncv4dfv4si2_round */

        default:
          return -1;
        }

    case 46:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4427; /* avx512fp16_vcvtph2w_v32hi_round */

        case E_V16SImode:
          switch (pattern1221 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4435; /* avx512fp16_vcvtph2dq_v16si_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8708 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4842; /* avx512f_fix_notruncv16sfv16si_round */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x2) != E_V8DImode
              || GET_MODE (x3) != E_V8DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4443; /* avx512fp16_vcvtph2qq_v8di_round */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8729 "../../src/gcc/config/i386/sse.md"
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
              return 4856; /* *avx512dq_cvtps2qqv8di_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9723 "../../src/gcc/config/i386/sse.md"
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
              return 5102; /* fix_notruncv8dfv8di2_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4451; /* avx512fp16_vcvtph2w_v16hi_round */

        case E_V8SImode:
          switch (pattern1222 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
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
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4459; /* avx512fp16_vcvtph2dq_v8si_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && ((V8SImode == V16SFmode
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
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 4836; /* avx_fix_notruncv8sfv8si_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5006; /* avx512f_cvtpd2dq512_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1220 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V4DImode == V16SFmode
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
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4467; /* avx512fp16_vcvtph2qq_v4di_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8729 "../../src/gcc/config/i386/sse.md"
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
              return 4860; /* *avx512dq_cvtps2qqv4di_round */

            case 2:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9723 "../../src/gcc/config/i386/sse.md"
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
              return 5106; /* fix_notruncv4dfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1019 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5010; /* avx_cvtpd2dq256_round */

        default:
          return -1;
        }

    case 172:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
          return 4571; /* unspec_avx512fp16_fix_truncv16hi2_round */

        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
          return 4579; /* unspec_avx512fp16_fix_truncv32hi2_round */

        case E_V8SImode:
          switch (pattern1222 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4587; /* unspec_avx512fp16_fix_truncv8si2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
  && (!true || TARGET_AVX10_2_256))))
                return -1;
              return 4892; /* unspec_fix_truncv8sfv8si2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5029; /* unspec_fix_truncv8dfv8si2_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1221 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4595; /* unspec_avx512fp16_fix_truncv16si2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4876; /* unspec_fix_truncv16sfv16si2_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1223 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4603; /* unspec_avx512fp16_fix_truncv8di2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
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
              return 5062; /* unspec_fix_truncv8dfv8di2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
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
              return 5122; /* unspec_fix_truncv8sfv8di2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1224 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))))
                return -1;
              return 4659; /* unspec_avx512fp16_fix_truncv4di2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
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
              return 5070; /* unspec_fix_truncv4dfv4di2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
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
              return 5130; /* unspec_fix_truncv4sfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1019 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9661 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5050; /* unspec_fix_truncv4dfv4si2_round */

        default:
          return -1;
        }

    case 173:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
          return 4575; /* unspec_avx512fp16_fixuns_truncv16hi2_round */

        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
          return 4583; /* unspec_avx512fp16_fixuns_truncv32hi2_round */

        case E_V8SImode:
          switch (pattern1223 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4591; /* unspec_avx512fp16_fixuns_truncv8si2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5033; /* unspec_fixuns_truncv8dfv8si2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ((V8SFmode == V16SFmode
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
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return -1;
              return 5154; /* *unspec_fixuns_truncv8sfv8si2_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1221 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4599; /* unspec_avx512fp16_fixuns_truncv16si2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4880; /* unspec_fixuns_truncv16sfv16si2_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1223 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
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
              return 4607; /* unspec_avx512fp16_fixuns_truncv8di2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
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
              return 5066; /* unspec_fixuns_truncv8dfv8di2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
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
              return 5126; /* unspec_fixuns_truncv8sfv8di2_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1224 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))))
                return -1;
              return 4663; /* unspec_avx512fp16_fixuns_truncv4di2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
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
              return 5074; /* unspec_fixuns_truncv4dfv4di2_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
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
              return 5134; /* unspec_fixuns_truncv4sfv4di2_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1019 (x2, 
E_V4DFmode, 
E_V4SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 5056; /* unspec_fixuns_truncv4dfv4si2_round */

        default:
          return -1;
        }

    case 165:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1225 (x2, 
E_V32HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V32HFmode == V16SFmode
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
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 7042; /* avx512bw_getexpv32hf_round */

        case E_V16HFmode:
          if (pattern1225 (x2, 
E_V16HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V16HFmode == V16SFmode
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
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7046; /* avx512vl_getexpv16hf_round */

        case E_V16SFmode:
          if (pattern1225 (x2, 
E_V16SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7052; /* avx512f_getexpv16sf_round */

        case E_V8SFmode:
          if (pattern1225 (x2, 
E_V8SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7056; /* avx512vl_getexpv8sf_round */

        case E_V8DFmode:
          if (pattern1225 (x2, 
E_V8DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DFmode == V16SFmode
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7062; /* avx512f_getexpv8df_round */

        case E_V4DFmode:
          if (pattern1225 (x2, 
E_V4DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DFmode == V16SFmode
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7066; /* avx512vl_getexpv4df_round */

        default:
          return -1;
        }

    case 149:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1019 (x2, 
E_V8HImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256))))
            return -1;
          return 9655; /* vcvtph2ps256_round */

        case E_V16SFmode:
          if (pattern1019 (x2, 
E_V16HImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9659; /* *avx512f_vcvtph2ps512_round */

        default:
          return -1;
        }

    case 265:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10760; /* avx10_2_cvtph2ibsv32hf_round */

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10768; /* avx10_2_cvtph2ibsv16hf_round */

        default:
          return -1;
        }

    case 266:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10764; /* avx10_2_cvtph2iubsv32hf_round */

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10772; /* avx10_2_cvtph2iubsv16hf_round */

        default:
          return -1;
        }

    case 271:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10780; /* avx10_2_cvttph2ibsv32hf_round */

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode))))))
            return -1;
          return 10788; /* avx10_2_cvttph2ibsv16hf_round */

        default:
          return -1;
        }

    case 272:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1019 (x2, 
E_V32HFmode, 
E_V32HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V32HFmode == V16SFmode
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
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10784; /* avx10_2_cvttph2iubsv32hf_round */

        case E_V16HImode:
          if (pattern1019 (x2, 
E_V16HFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16HFmode == V16SFmode
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
										       || V16HFmode == V16HFmode))))))
            return -1;
          return 10792; /* avx10_2_cvttph2iubsv16hf_round */

        default:
          return -1;
        }

    case 267:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1019 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10800; /* avx10_2_cvtps2ibsv16sf_round */

        case E_V8SImode:
          if (pattern1019 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode))))))
            return -1;
          return 10808; /* avx10_2_cvtps2ibsv8sf_round */

        default:
          return -1;
        }

    case 268:
      if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1019 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10804; /* avx10_2_cvtps2iubsv16sf_round */

        case E_V8SImode:
          if (pattern1019 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
								       || V8SFmode == V16HFmode))))))
            return -1;
          return 10812; /* avx10_2_cvtps2iubsv8sf_round */

        default:
          return -1;
        }

    case 273:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1019 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10820; /* avx10_2_cvttps2ibsv16sf_round */

        case E_V8SImode:
          if (pattern1019 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10828; /* avx10_2_cvttps2ibsv8sf_round */

        default:
          return -1;
        }

    case 274:
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1019 (x2, 
E_V16SFmode, 
E_V16SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10824; /* avx10_2_cvttps2iubsv16sf_round */

        case E_V8SImode:
          if (pattern1019 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10832; /* avx10_2_cvttps2iubsv8sf_round */

        default:
          return -1;
        }

    case 275:
      switch (pattern1020 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10840; /* avx10_2_vcvttps2dqsv16sf_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10848; /* avx10_2_vcvttps2dqsv8sf_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10860; /* avx10_2_vcvttpd2dqsv8df_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
          return 10868; /* avx10_2_vcvttpd2dqsv4df_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10880; /* avx10_2_vcvttpd2qqsv8df_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
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
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10900; /* avx10_2_vcvttps2qqsv8di_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
          return 10888; /* avx10_2_vcvttpd2qqsv4df_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))))
            return -1;
          return 10908; /* avx10_2_vcvttps2qqsv4di_round */

        default:
          return -1;
        }

    case 276:
      switch (pattern1020 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V16SFmode == V16SFmode
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
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10844; /* avx10_2_vcvttps2udqsv16sf_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8SFmode == V16SFmode
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
										       || V8SFmode == V16HFmode))))))
            return -1;
          return 10852; /* avx10_2_vcvttps2udqsv8sf_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10864; /* avx10_2_vcvttpd2udqsv8df_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
          return 10872; /* avx10_2_vcvttpd2udqsv4df_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DFmode == V16SFmode
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
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10884; /* avx10_2_vcvttpd2uqqsv8df_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V8DImode == V16SFmode
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
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10904; /* avx10_2_vcvttps2uqqsv8di_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DFmode == V16SFmode
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
          return 10892; /* avx10_2_vcvttpd2uqqsv4df_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && ((V4DImode == V16SFmode
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
										       || V4DImode == V16HFmode))))))
            return -1;
          return 10912; /* avx10_2_vcvttps2uqqsv4di_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_271 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      switch (XINT (x3, 1))
        {
        case 46:
          if (GET_MODE (x3) == E_V4SImode
              && pattern794 (x2, 
E_V4SImode, 
E_V4DFmode, 
E_V8SImode) == 0
              && 
#line 9443 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 5013; /* *avx_cvtpd2dq256_2 */
          if (GET_MODE (x3) != E_V2SImode)
            return -1;
          x5 = XEXP (x2, 1);
          if (GET_CODE (x5) != CONST_VECTOR
              || pattern509 (x5, 
E_V2SImode, 
2) != 0
              || !register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !vector_operand (operands[1], E_V2DFmode)
              || !
#line 9456 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 5014; /* sse2_cvtpd2dq */

        case 156:
          if (pattern668 (x2) != 0
              || !
#line 9526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5025; /* fixuns_notruncv2dfv2si2 */

        case 173:
          if (pattern668 (x2) != 0
              || !
#line 9593 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5044; /* *unspec_fixuns_truncv2dfv2si2 */

        case 253:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10498; /* *vcvtph2bf8v8hf */

        case 254:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10499; /* *vcvtph2bf8sv8hf */

        case 255:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10500; /* *vcvtph2hf8v8hf */

        case 256:
          if (GET_MODE (x3) != E_V8QImode
              || pattern794 (x2, 
E_V8QImode, 
E_V8HFmode, 
E_V16QImode) != 0
              || !
#line 31867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10501; /* *vcvtph2hf8sv8hf */

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x6 = XVECEXP (x3, 0, 1);
      operands[2] = x6;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      switch (XINT (x3, 1))
        {
        case 150:
          if (GET_MODE (x3) != E_V4HImode
              || !register_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_V4SFmode)
              || !const_0_to_255_operand (operands[2], E_SImode)
              || !const0_operand (operands[3], E_V4HImode)
              || !
#line 29158 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL) && 1))
            return -1;
          return 9662; /* *vcvtps2ph */

        case 245:
          if (pattern922 (x2) != 0
              || !
#line 31777 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10474; /* *vcvtbiasph2bf8v8hf */

        case 246:
          if (pattern922 (x2) != 0
              || !
#line 31777 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10475; /* *vcvtbiasph2bf8sv8hf */

        case 247:
          if (pattern922 (x2) != 0
              || !
#line 31777 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10476; /* *vcvtbiasph2hf8v8hf */

        case 248:
          if (pattern922 (x2) != 0
              || !
#line 31777 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10477; /* *vcvtbiasph2hf8sv8hf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_272 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (GET_CODE (x2))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      operands[3] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern799 (
E_V8SFmode) == 0)
            {
              if ((
#line 4329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3271; /* *avx_maskcmpv8sf3_comm */
              if ((
#line 4346 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3275; /* avx_maskcmpv8sf3 */
            }
          break;

        case E_V4SFmode:
          if (pattern799 (
E_V4SFmode) == 0)
            {
              if (
#line 4329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE))
                return 3272; /* *sse_maskcmpv4sf3_comm */
              if (
#line 4346 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return 3276; /* sse_maskcmpv4sf3 */
            }
          break;

        case E_V4DFmode:
          if (pattern799 (
E_V4DFmode) == 0)
            {
              if ((
#line 4329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3273; /* *avx_maskcmpv4df3_comm */
              if ((
#line 4346 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 3277; /* avx_maskcmpv4df3 */
            }
          break;

        case E_V2DFmode:
          if (pattern799 (
E_V2DFmode) == 0)
            {
              if ((
#line 4329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 3274; /* *sse2_maskcmpv2df3_comm */
              if ((
#line 4346 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 3278; /* sse2_maskcmpv2df3 */
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case LT:
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern233 (x2, 
E_V16HImode) != 0
              || !(
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 743 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7626; /* *ashrv16hi3_1 */

        case E_V8HImode:
          if (pattern233 (x2, 
E_V8HImode) != 0
              || !
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7627; /* *ashrv8hi3_1 */

        case E_V8SImode:
          if (pattern233 (x2, 
E_V8SImode) != 0
              || !(
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7628; /* *ashrv8si3_1 */

        case E_V4SImode:
          if (pattern233 (x2, 
E_V4SImode) != 0
              || !
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7629; /* *ashrv4si3_1 */

        default:
          return -1;
        }

    case EQ:
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern5 (x2, 
E_V32QImode) != 0
              || !
#line 17948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7890; /* *avx2_eqv32qi3 */

        case E_V16HImode:
          if (pattern5 (x2, 
E_V16HImode) != 0
              || !
#line 17948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7891; /* *avx2_eqv16hi3 */

        case E_V8SImode:
          if (pattern5 (x2, 
E_V8SImode) != 0
              || !
#line 17948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7892; /* *avx2_eqv8si3 */

        case E_V4DImode:
          if (pattern5 (x2, 
E_V4DImode) != 0
              || !
#line 17948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7893; /* *avx2_eqv4di3 */

        case E_V2DImode:
          if (pattern25 (x2, 
E_V2DImode) != 0
              || !
#line 18231 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7948; /* *sse4_1_eqv2di3 */

        case E_V16QImode:
          if (pattern25 (x2, 
E_V16QImode) != 0
              || !
#line 18248 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7949; /* *sse2_eqv16qi3 */

        case E_V8HImode:
          if (pattern25 (x2, 
E_V8HImode) != 0
              || !
#line 18248 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7950; /* *sse2_eqv8hi3 */

        case E_V4SImode:
          if (pattern25 (x2, 
E_V4SImode) != 0
              || !
#line 18248 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7951; /* *sse2_eqv4si3 */

        default:
          return -1;
        }

    case GT:
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (pattern669 (x2, 
E_V2DImode) != 0
              || !
#line 18264 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 7952; /* sse4_2_gtv2di3 */

        case E_V32QImode:
          if (pattern14 (x2, 
E_V32QImode) != 0
              || !
#line 18281 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7953; /* avx2_gtv32qi3 */

        case E_V16HImode:
          if (pattern14 (x2, 
E_V16HImode) != 0
              || !
#line 18281 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7954; /* avx2_gtv16hi3 */

        case E_V8SImode:
          if (pattern14 (x2, 
E_V8SImode) != 0
              || !
#line 18281 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7955; /* avx2_gtv8si3 */

        case E_V4DImode:
          if (pattern14 (x2, 
E_V4DImode) != 0
              || !
#line 18281 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 7956; /* avx2_gtv4di3 */

        case E_V16QImode:
          if (pattern669 (x2, 
E_V16QImode) != 0
              || !
#line 18313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7957; /* *sse2_gtv16qi3 */

        case E_V8HImode:
          if (pattern669 (x2, 
E_V8HImode) != 0
              || !
#line 18313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7958; /* *sse2_gtv8hi3 */

        case E_V4SImode:
          if (pattern669 (x2, 
E_V4SImode) != 0
              || !
#line 18313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 7959; /* *sse2_gtv4si3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_278 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_277 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[3] = x4;
  x6 = XEXP (x2, 0);
  x7 = XEXP (x6, 1);
  operands[2] = x7;
  operands[4] = x5;
  x8 = XVECEXP (x3, 0, 2);
  operands[5] = x8;
  x9 = XVECEXP (x3, 0, 3);
  operands[6] = x9;
  x10 = XVECEXP (x3, 0, 4);
  operands[7] = x10;
  x11 = XVECEXP (x3, 0, 5);
  operands[8] = x11;
  x12 = XVECEXP (x3, 0, 6);
  operands[9] = x12;
  x13 = XVECEXP (x3, 0, 7);
  operands[10] = x13;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0)
        return -1;
      if (const_0_to_3_operand (operands[3], E_VOIDmode)
          && const_0_to_3_operand (operands[4], E_VOIDmode)
          && const_8_to_11_operand (operands[5], E_VOIDmode)
          && const_8_to_11_operand (operands[6], E_VOIDmode)
          && const_4_to_7_operand (operands[7], E_VOIDmode)
          && const_4_to_7_operand (operands[8], E_VOIDmode)
          && const_12_to_15_operand (operands[9], E_VOIDmode)
          && const_12_to_15_operand (operands[10], E_VOIDmode)
          && 
#line 11490 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && 1
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))))
        return 5275; /* avx_shufps256_1 */
      if (!const_0_to_7_operand (operands[3], E_VOIDmode)
          || pattern1672 () != 0
          || !
#line 20347 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3))
        return -1;
      return 8431; /* avx512vl_shuf_f32x4_1 */

    case E_V8DFmode:
      if (pattern1414 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0)
        return -1;
      if (const_0_to_1_operand (operands[3], E_VOIDmode)
          && const_8_to_9_operand (operands[4], E_VOIDmode)
          && const_2_to_3_operand (operands[5], E_VOIDmode)
          && const_10_to_11_operand (operands[6], E_VOIDmode)
          && const_4_to_5_operand (operands[7], E_VOIDmode)
          && const_12_to_13_operand (operands[8], E_VOIDmode)
          && const_6_to_7_operand (operands[9], E_VOIDmode)
          && const_14_to_15_operand (operands[10], E_VOIDmode)
          && 
#line 14362 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return 7195; /* avx512f_shufpd512_1 */
      if (!const_0_to_7_operand (operands[3], E_VOIDmode)
          || pattern1672 () != 0
          || !(
#line 20249 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8421; /* avx512f_shuf_f64x2_1 */

    case E_V8DImode:
      if (pattern1673 (x2, 
E_V8DImode, 
E_V16DImode) != 0
          || !(
#line 20249 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1
   && (INTVAL (operands[7]) & 1) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && (INTVAL (operands[9]) & 1) == 0
   && INTVAL (operands[9]) == INTVAL (operands[10]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8423; /* avx512f_shuf_i64x2_1 */

    case E_V8SImode:
      if (pattern1673 (x2, 
E_V8SImode, 
E_V16SImode) != 0
          || !
#line 20347 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3))
        return -1;
      return 8429; /* avx512vl_shuf_i32x4_1 */

    default:
      return -1;
    }
}

 int
recog_281 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      x6 = XEXP (x2, 0);
      x7 = XEXP (x6, 1);
      operands[2] = x7;
      switch (XWINT (x4, 0))
        {
        case 1L:
          if (XWINT (x5, 0) == 3L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1485 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
                      && 
#line 13425 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)))
                    return 5410; /* *vec_interleave_highv2df */
                  break;

                case E_V2DImode:
                  if (pattern1486 (x2, 
E_V2DImode, 
E_V4DImode) == 0
                      && 
#line 14508 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                    return 7204; /* vec_interleave_highv2di */
                  break;

                default:
                  break;
                }
            }
          break;

        case 0L:
          if (XWINT (x5, 0) == 2L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1485 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
                      && 
#line 13568 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)))
                    return 5420; /* *vec_interleave_lowv2df */
                  break;

                case E_V2DImode:
                  if (pattern1486 (x2, 
E_V2DImode, 
E_V4DImode) == 0
                      && 
#line 14558 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                    return 7210; /* vec_interleave_lowv2di */
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
    }
  operands[3] = x4;
  if (!const_0_to_1_operand (operands[3], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 0);
  x7 = XEXP (x6, 1);
  operands[2] = x7;
  operands[4] = x5;
  if (!const_2_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2DImode:
      if (pattern1486 (x2, 
E_V2DImode, 
E_V4DImode) != 0
          || !
#line 14576 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7212; /* sse2_shufpd_v2di */

    case E_V2DFmode:
      if (pattern1486 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
          || !
#line 14576 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7213; /* sse2_shufpd_v2df */

    default:
      return -1;
    }
}

 int
recog_282 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  rtx x66, x67;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern672 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 32);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 33);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 34);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 35);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x3, 0, 36);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x3, 0, 37);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x3, 0, 38);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x3, 0, 39);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x3, 0, 40);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x3, 0, 41);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x3, 0, 42);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x3, 0, 43);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x3, 0, 44);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x3, 0, 45);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x3, 0, 46);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x3, 0, 47);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x3, 0, 48);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x3, 0, 49);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x3, 0, 50);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x3, 0, 51);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x3, 0, 52);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x3, 0, 53);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x3, 0, 54);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x3, 0, 55);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x3, 0, 56);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x3, 0, 57);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x3, 0, 58);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x3, 0, 59);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x3, 0, 60);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x3, 0, 61);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  x34 = XVECEXP (x3, 0, 62);
  if (GET_CODE (x34) != CONST_INT)
    return -1;
  x35 = XVECEXP (x3, 0, 63);
  if (GET_CODE (x35) != CONST_INT
      || pattern1618 (x2, 
E_V64QImode, 
E_V128QImode) != 0)
    return -1;
  x36 = XVECEXP (x3, 0, 0);
  switch (XWINT (x36, 0))
    {
    case 8L:
      x37 = XVECEXP (x3, 0, 1);
      if (XWINT (x37, 0) != 72L)
        return -1;
      x38 = XVECEXP (x3, 0, 2);
      if (XWINT (x38, 0) != 9L)
        return -1;
      x39 = XVECEXP (x3, 0, 3);
      if (XWINT (x39, 0) != 73L)
        return -1;
      x40 = XVECEXP (x3, 0, 4);
      if (XWINT (x40, 0) != 10L)
        return -1;
      x41 = XVECEXP (x3, 0, 5);
      if (XWINT (x41, 0) != 74L)
        return -1;
      x42 = XVECEXP (x3, 0, 6);
      if (XWINT (x42, 0) != 11L)
        return -1;
      x43 = XVECEXP (x3, 0, 7);
      if (XWINT (x43, 0) != 75L)
        return -1;
      x44 = XVECEXP (x3, 0, 8);
      if (XWINT (x44, 0) != 12L)
        return -1;
      x45 = XVECEXP (x3, 0, 9);
      if (XWINT (x45, 0) != 76L)
        return -1;
      x46 = XVECEXP (x3, 0, 10);
      if (XWINT (x46, 0) != 13L)
        return -1;
      x47 = XVECEXP (x3, 0, 11);
      if (XWINT (x47, 0) != 77L)
        return -1;
      x48 = XVECEXP (x3, 0, 12);
      if (XWINT (x48, 0) != 14L)
        return -1;
      x49 = XVECEXP (x3, 0, 13);
      if (XWINT (x49, 0) != 78L)
        return -1;
      x50 = XVECEXP (x3, 0, 14);
      if (XWINT (x50, 0) != 15L)
        return -1;
      x51 = XVECEXP (x3, 0, 15);
      if (XWINT (x51, 0) != 79L)
        return -1;
      x52 = XVECEXP (x3, 0, 16);
      if (XWINT (x52, 0) != 24L)
        return -1;
      x53 = XVECEXP (x3, 0, 17);
      if (XWINT (x53, 0) != 88L)
        return -1;
      x54 = XVECEXP (x3, 0, 18);
      if (XWINT (x54, 0) != 25L)
        return -1;
      x55 = XVECEXP (x3, 0, 19);
      if (XWINT (x55, 0) != 89L)
        return -1;
      x56 = XVECEXP (x3, 0, 20);
      if (XWINT (x56, 0) != 26L)
        return -1;
      x57 = XVECEXP (x3, 0, 21);
      if (XWINT (x57, 0) != 90L)
        return -1;
      x58 = XVECEXP (x3, 0, 22);
      if (XWINT (x58, 0) != 27L)
        return -1;
      x59 = XVECEXP (x3, 0, 23);
      if (XWINT (x59, 0) != 91L)
        return -1;
      x60 = XVECEXP (x3, 0, 24);
      if (XWINT (x60, 0) != 28L)
        return -1;
      x61 = XVECEXP (x3, 0, 25);
      if (XWINT (x61, 0) != 92L)
        return -1;
      x62 = XVECEXP (x3, 0, 26);
      if (XWINT (x62, 0) != 29L)
        return -1;
      x63 = XVECEXP (x3, 0, 27);
      if (XWINT (x63, 0) != 93L)
        return -1;
      x64 = XVECEXP (x3, 0, 28);
      if (XWINT (x64, 0) != 30L)
        return -1;
      x65 = XVECEXP (x3, 0, 29);
      if (XWINT (x65, 0) != 94L)
        return -1;
      x66 = XVECEXP (x3, 0, 30);
      if (XWINT (x66, 0) != 31L)
        return -1;
      x67 = XVECEXP (x3, 0, 31);
      if (XWINT (x67, 0) != 95L
          || XWINT (x4, 0) != 40L
          || XWINT (x5, 0) != 104L
          || XWINT (x6, 0) != 41L
          || XWINT (x7, 0) != 105L
          || XWINT (x8, 0) != 42L
          || XWINT (x9, 0) != 106L
          || XWINT (x10, 0) != 43L
          || XWINT (x11, 0) != 107L
          || XWINT (x12, 0) != 44L
          || XWINT (x13, 0) != 108L
          || XWINT (x14, 0) != 45L
          || XWINT (x15, 0) != 109L
          || XWINT (x16, 0) != 46L
          || XWINT (x17, 0) != 110L
          || XWINT (x18, 0) != 47L
          || XWINT (x19, 0) != 111L
          || XWINT (x20, 0) != 56L
          || XWINT (x21, 0) != 120L
          || XWINT (x22, 0) != 57L
          || XWINT (x23, 0) != 121L
          || XWINT (x24, 0) != 58L
          || XWINT (x25, 0) != 122L
          || XWINT (x26, 0) != 59L
          || XWINT (x27, 0) != 123L
          || XWINT (x28, 0) != 60L
          || XWINT (x29, 0) != 124L
          || XWINT (x30, 0) != 61L
          || XWINT (x31, 0) != 125L
          || XWINT (x32, 0) != 62L
          || XWINT (x33, 0) != 126L
          || XWINT (x34, 0) != 63L
          || XWINT (x35, 0) != 127L
          || !
#line 19437 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8323; /* avx512bw_interleave_highv64qi */

    case 0L:
      x37 = XVECEXP (x3, 0, 1);
      if (XWINT (x37, 0) != 64L)
        return -1;
      x38 = XVECEXP (x3, 0, 2);
      if (XWINT (x38, 0) != 1L)
        return -1;
      x39 = XVECEXP (x3, 0, 3);
      if (XWINT (x39, 0) != 65L)
        return -1;
      x40 = XVECEXP (x3, 0, 4);
      if (XWINT (x40, 0) != 2L)
        return -1;
      x41 = XVECEXP (x3, 0, 5);
      if (XWINT (x41, 0) != 66L)
        return -1;
      x42 = XVECEXP (x3, 0, 6);
      if (XWINT (x42, 0) != 3L)
        return -1;
      x43 = XVECEXP (x3, 0, 7);
      if (XWINT (x43, 0) != 67L)
        return -1;
      x44 = XVECEXP (x3, 0, 8);
      if (XWINT (x44, 0) != 4L)
        return -1;
      x45 = XVECEXP (x3, 0, 9);
      if (XWINT (x45, 0) != 68L)
        return -1;
      x46 = XVECEXP (x3, 0, 10);
      if (XWINT (x46, 0) != 5L)
        return -1;
      x47 = XVECEXP (x3, 0, 11);
      if (XWINT (x47, 0) != 69L)
        return -1;
      x48 = XVECEXP (x3, 0, 12);
      if (XWINT (x48, 0) != 6L)
        return -1;
      x49 = XVECEXP (x3, 0, 13);
      if (XWINT (x49, 0) != 70L)
        return -1;
      x50 = XVECEXP (x3, 0, 14);
      if (XWINT (x50, 0) != 7L)
        return -1;
      x51 = XVECEXP (x3, 0, 15);
      if (XWINT (x51, 0) != 71L)
        return -1;
      x52 = XVECEXP (x3, 0, 16);
      if (XWINT (x52, 0) != 16L)
        return -1;
      x53 = XVECEXP (x3, 0, 17);
      if (XWINT (x53, 0) != 80L)
        return -1;
      x54 = XVECEXP (x3, 0, 18);
      if (XWINT (x54, 0) != 17L)
        return -1;
      x55 = XVECEXP (x3, 0, 19);
      if (XWINT (x55, 0) != 81L)
        return -1;
      x56 = XVECEXP (x3, 0, 20);
      if (XWINT (x56, 0) != 18L)
        return -1;
      x57 = XVECEXP (x3, 0, 21);
      if (XWINT (x57, 0) != 82L)
        return -1;
      x58 = XVECEXP (x3, 0, 22);
      if (XWINT (x58, 0) != 19L)
        return -1;
      x59 = XVECEXP (x3, 0, 23);
      if (XWINT (x59, 0) != 83L)
        return -1;
      x60 = XVECEXP (x3, 0, 24);
      if (XWINT (x60, 0) != 20L)
        return -1;
      x61 = XVECEXP (x3, 0, 25);
      if (XWINT (x61, 0) != 84L)
        return -1;
      x62 = XVECEXP (x3, 0, 26);
      if (XWINT (x62, 0) != 21L)
        return -1;
      x63 = XVECEXP (x3, 0, 27);
      if (XWINT (x63, 0) != 85L)
        return -1;
      x64 = XVECEXP (x3, 0, 28);
      if (XWINT (x64, 0) != 22L)
        return -1;
      x65 = XVECEXP (x3, 0, 29);
      if (XWINT (x65, 0) != 86L)
        return -1;
      x66 = XVECEXP (x3, 0, 30);
      if (XWINT (x66, 0) != 23L)
        return -1;
      x67 = XVECEXP (x3, 0, 31);
      if (XWINT (x67, 0) != 87L
          || XWINT (x4, 0) != 32L
          || XWINT (x5, 0) != 96L
          || XWINT (x6, 0) != 33L
          || XWINT (x7, 0) != 97L
          || XWINT (x8, 0) != 34L
          || XWINT (x9, 0) != 98L
          || XWINT (x10, 0) != 35L
          || XWINT (x11, 0) != 99L
          || XWINT (x12, 0) != 36L
          || XWINT (x13, 0) != 100L
          || XWINT (x14, 0) != 37L
          || XWINT (x15, 0) != 101L
          || XWINT (x16, 0) != 38L
          || XWINT (x17, 0) != 102L
          || XWINT (x18, 0) != 39L
          || XWINT (x19, 0) != 103L
          || XWINT (x20, 0) != 48L
          || XWINT (x21, 0) != 112L
          || XWINT (x22, 0) != 49L
          || XWINT (x23, 0) != 113L
          || XWINT (x24, 0) != 50L
          || XWINT (x25, 0) != 114L
          || XWINT (x26, 0) != 51L
          || XWINT (x27, 0) != 115L
          || XWINT (x28, 0) != 52L
          || XWINT (x29, 0) != 116L
          || XWINT (x30, 0) != 53L
          || XWINT (x31, 0) != 117L
          || XWINT (x32, 0) != 54L
          || XWINT (x33, 0) != 118L
          || XWINT (x34, 0) != 55L
          || XWINT (x35, 0) != 119L
          || !
#line 19533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8329; /* avx512bw_interleave_lowv64qi */

    default:
      return -1;
    }
}

 int
recog_301 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5541; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5568; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5595; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5622; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5649; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5676; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5703; /* *avx512f_vpternlogv16si_1 */

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
          return 5730; /* *avx512vl_vpternlogv8si_1 */

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
          return 5757; /* *avx512vl_vpternlogv4si_1 */

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
          return 5784; /* *avx512f_vpternlogv8di_1 */

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
          return 5811; /* *avx512vl_vpternlogv4di_1 */

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
          return 5838; /* *avx512vl_vpternlogv2di_1 */

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
          return 5544; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5571; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5598; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5625; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5652; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5679; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5706; /* *avx512f_vpternlogv16si_1 */

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
          return 5733; /* *avx512vl_vpternlogv8si_1 */

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
          return 5760; /* *avx512vl_vpternlogv4si_1 */

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
          return 5787; /* *avx512f_vpternlogv8di_1 */

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
          return 5814; /* *avx512vl_vpternlogv4di_1 */

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
          return 5841; /* *avx512vl_vpternlogv2di_1 */

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
          return 5547; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5574; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5601; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5628; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5655; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5682; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5709; /* *avx512f_vpternlogv16si_1 */

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
          return 5736; /* *avx512vl_vpternlogv8si_1 */

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
          return 5763; /* *avx512vl_vpternlogv4si_1 */

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
          return 5790; /* *avx512f_vpternlogv8di_1 */

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
          return 5817; /* *avx512vl_vpternlogv4di_1 */

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
          return 5844; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6825; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6834; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6843; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6852; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6861; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6870; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6879; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6888; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6897; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6906; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6915; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6924; /* *avx512vl_vpternlogv2di_3 */

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
          return 6189; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6216; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6243; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6270; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6297; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6324; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6351; /* *avx512f_vpternlogv16si_2 */

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
          return 6378; /* *avx512vl_vpternlogv8si_2 */

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
          return 6405; /* *avx512vl_vpternlogv4si_2 */

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
          return 6432; /* *avx512f_vpternlogv8di_2 */

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
          return 6459; /* *avx512vl_vpternlogv4di_2 */

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
          return 6486; /* *avx512vl_vpternlogv2di_2 */

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
          return 6192; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6219; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6246; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6273; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6300; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6327; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6354; /* *avx512f_vpternlogv16si_2 */

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
          return 6381; /* *avx512vl_vpternlogv8si_2 */

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
          return 6408; /* *avx512vl_vpternlogv4si_2 */

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
          return 6435; /* *avx512f_vpternlogv8di_2 */

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
          return 6462; /* *avx512vl_vpternlogv4di_2 */

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
          return 6489; /* *avx512vl_vpternlogv2di_2 */

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
          return 6195; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6222; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6249; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6276; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6303; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6330; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6357; /* *avx512f_vpternlogv16si_2 */

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
          return 6384; /* *avx512vl_vpternlogv8si_2 */

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
          return 6411; /* *avx512vl_vpternlogv4si_2 */

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
          return 6438; /* *avx512f_vpternlogv8di_2 */

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
          return 6465; /* *avx512vl_vpternlogv4di_2 */

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
          return 6492; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_311 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern536 (x2))
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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5867; /* *avx512bw_vpternlogv32hf_1 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5894; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5921; /* *avx512fp16_vpternlogv8hf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5948; /* *avx512bw_vpternlogv32bf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5975; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6002; /* *avx512vl_vpternlogv8bf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6029; /* *avx512f_vpternlogv16sf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6056; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6083; /* *avx512vl_vpternlogv4sf_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6110; /* *avx512f_vpternlogv8df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6137; /* *avx512vl_vpternlogv4df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6164; /* *avx512vl_vpternlogv2df_1 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5870; /* *avx512bw_vpternlogv32hf_1 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5897; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5924; /* *avx512fp16_vpternlogv8hf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5951; /* *avx512bw_vpternlogv32bf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5978; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6005; /* *avx512vl_vpternlogv8bf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6032; /* *avx512f_vpternlogv16sf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6059; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6086; /* *avx512vl_vpternlogv4sf_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6113; /* *avx512f_vpternlogv8df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6140; /* *avx512vl_vpternlogv4df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6167; /* *avx512vl_vpternlogv2df_1 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5873; /* *avx512bw_vpternlogv32hf_1 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5900; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5927; /* *avx512fp16_vpternlogv8hf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5954; /* *avx512bw_vpternlogv32bf_1 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5981; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6008; /* *avx512vl_vpternlogv8bf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6035; /* *avx512f_vpternlogv16sf_1 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6062; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6089; /* *avx512vl_vpternlogv4sf_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6116; /* *avx512f_vpternlogv8df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6143; /* *avx512vl_vpternlogv4df_1 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6170; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6935; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6944; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6953; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6962; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6971; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6980; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6989; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6998; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 7007; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7016; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7025; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7034; /* *avx512vl_vpternlogv2df_3 */

        default:
          return -1;
        }

    case AND:
      switch (pattern537 (x2))
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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6515; /* *avx512bw_vpternlogv32hf_2 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6542; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6569; /* *avx512fp16_vpternlogv8hf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6596; /* *avx512bw_vpternlogv32bf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6623; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6650; /* *avx512vl_vpternlogv8bf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6677; /* *avx512f_vpternlogv16sf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6704; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6731; /* *avx512vl_vpternlogv4sf_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6758; /* *avx512f_vpternlogv8df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6785; /* *avx512vl_vpternlogv4df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6812; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern537 (x2))
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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6518; /* *avx512bw_vpternlogv32hf_2 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6545; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6572; /* *avx512fp16_vpternlogv8hf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6599; /* *avx512bw_vpternlogv32bf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6626; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6653; /* *avx512vl_vpternlogv8bf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6680; /* *avx512f_vpternlogv16sf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6707; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6734; /* *avx512vl_vpternlogv4sf_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6761; /* *avx512f_vpternlogv8df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6788; /* *avx512vl_vpternlogv4df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6815; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern537 (x2))
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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6521; /* *avx512bw_vpternlogv32hf_2 */

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
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6548; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6575; /* *avx512fp16_vpternlogv8hf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6602; /* *avx512bw_vpternlogv32bf_2 */

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
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6629; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6656; /* *avx512vl_vpternlogv8bf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6683; /* *avx512f_vpternlogv16sf_2 */

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
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6710; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6737; /* *avx512vl_vpternlogv4sf_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6764; /* *avx512f_vpternlogv8df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6791; /* *avx512vl_vpternlogv4df_2 */

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
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 6818; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_326 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!vector_operand (operands[1], E_V8HFmode)
                  || !(
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4714; /* avx512fp16_float_extend_phv8df2 */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1 && 1) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5190; /* avx512f_cvtps2pd512 */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !vector_operand (operands[1], E_V16HFmode)
              || !(
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4718; /* avx512fp16_float_extend_phv16sf2 */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || !vector_operand (operands[1], E_V8HFmode)
              || !(
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4722; /* avx512fp16_float_extend_phv8sf2 */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!memory_operand (operands[1], E_V4HFmode)
                  || !
#line 8070 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4732; /* *avx512fp16_float_extend_phv4df2_load */

            case E_V4SFmode:
              if (!vector_operand (operands[1], E_V4SFmode)
                  || !
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1 && 1))
                return -1;
              return 5194; /* avx_cvtps2pd256 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || !memory_operand (operands[1], E_V4HFmode)
              || !
#line 8070 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4734; /* *avx512fp16_float_extend_phv4sf2_load */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2HFmode:
              if (!memory_operand (operands[1], E_V2HFmode)
                  || !
#line 8109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4738; /* *avx512fp16_float_extend_phv2df2_load */

            case E_V2SFmode:
              if (!memory_operand (operands[1], E_V2SFmode)
                  || !
#line 10416 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                return -1;
              return 5244; /* sse2_cvtps2pd_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 4:
          x7 = XVECEXP (x5, 0, 0);
          if (GET_CODE (x7) != CONST_INT)
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (GET_CODE (x8) != CONST_INT)
            return -1;
          x9 = XVECEXP (x5, 0, 2);
          if (GET_CODE (x9) != CONST_INT)
            return -1;
          x10 = XVECEXP (x5, 0, 3);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          switch (pattern1142 (x5))
            {
            case 0:
              if (XWINT (x9, 0) != 2L
                  || XWINT (x10, 0) != 3L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || GET_MODE (x3) != E_V4DFmode)
                    return -1;
                  switch (GET_MODE (x4))
                    {
                    case E_V4HFmode:
                      if (!register_operand (operands[1], E_V8HFmode)
                          || !
#line 8060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4726; /* avx512fp16_float_extend_phv4df2 */

                    case E_V4SFmode:
                      if (!nonimmediate_operand (operands[1], E_V8SFmode)
                          || !
#line 10247 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                        return -1;
                      return 5198; /* *avx_cvtps2pd256_2 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  if (pattern607 (x3, 
E_V8HFmode, 
E_V4HFmode, 
E_V4SFmode) != 0
                      || !
#line 8060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                    return -1;
                  return 4730; /* avx512fp16_float_extend_phv4sf2 */

                default:
                  return -1;
                }

            case 1:
              if (XWINT (x9, 0) != 4L
                  || XWINT (x10, 0) != 6L)
                return -1;
              switch (pattern1484 (x3))
                {
                case 0:
                  if (!
#line 31663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10432; /* vcvtneeph2ps_v8hf */

                case 1:
                  if (!
#line 31663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10433; /* vcvtneebf162ps_v8bf */

                default:
                  return -1;
                }

            case 2:
              switch (pattern1484 (x3))
                {
                case 0:
                  if (!
#line 31691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10436; /* vcvtneoph2ps_v8hf */

                case 1:
                  if (!
#line 31691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10437; /* vcvtneobf162ps_v8bf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_V2HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !
#line 8099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                return -1;
              return 4736; /* avx512fp16_float_extend_phv2df2 */

            case E_V2SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !
#line 10402 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
                return -1;
              return 5242; /* sse2_cvtps2pd */

            default:
              return -1;
            }

        case 8:
          x7 = XVECEXP (x5, 0, 0);
          if (GET_CODE (x7) != CONST_INT)
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (GET_CODE (x8) != CONST_INT
              || pattern929 (x5) != 0)
            return -1;
          switch (pattern1142 (x5))
            {
            case 0:
              if (pattern1557 (x5) != 0
                  || pattern928 (x3, 
E_V16SFmode, 
E_V8SFmode, 
E_V8DFmode) != 0
                  || !
#line 10262 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 5199; /* vec_unpacks_lo_v16sf */

            case 1:
              x9 = XVECEXP (x5, 0, 2);
              if (XWINT (x9, 0) != 4L)
                return -1;
              x10 = XVECEXP (x5, 0, 3);
              if (XWINT (x10, 0) != 6L)
                return -1;
              x11 = XVECEXP (x5, 0, 4);
              if (XWINT (x11, 0) != 8L)
                return -1;
              x12 = XVECEXP (x5, 0, 5);
              if (XWINT (x12, 0) != 10L)
                return -1;
              x13 = XVECEXP (x5, 0, 6);
              if (XWINT (x13, 0) != 12L)
                return -1;
              x14 = XVECEXP (x5, 0, 7);
              if (XWINT (x14, 0) != 14L)
                return -1;
              switch (pattern1756 (x3))
                {
                case 0:
                  if (!
#line 31678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10434; /* vcvtneeph2ps_v16hf */

                case 1:
                  if (!
#line 31678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10435; /* vcvtneebf162ps_v16bf */

                default:
                  return -1;
                }

            case 2:
              x11 = XVECEXP (x5, 0, 4);
              if (XWINT (x11, 0) != 9L)
                return -1;
              x12 = XVECEXP (x5, 0, 5);
              if (XWINT (x12, 0) != 11L)
                return -1;
              x13 = XVECEXP (x5, 0, 6);
              if (XWINT (x13, 0) != 13L)
                return -1;
              x14 = XVECEXP (x5, 0, 7);
              if (XWINT (x14, 0) != 15L)
                return -1;
              switch (pattern1756 (x3))
                {
                case 0:
                  if (!
#line 31706 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10438; /* vcvtneoph2ps_v16hf */

                case 1:
                  if (!
#line 31706 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                    return -1;
                  return 10439; /* vcvtneobf162ps_v16bf */

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
recog_331 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern514 (x3))
            {
            case 0:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4482; /* avx512fp16_vcvtw2ph_v8hi */

            case 1:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4502; /* avx512fp16_vcvtdq2ph_v8si */

            case 2:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4518; /* avx512fp16_vcvtqq2ph_v8di */

            default:
              return -1;
            }

        case E_V16HFmode:
          switch (pattern515 (x3))
            {
            case 0:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4486; /* avx512fp16_vcvtw2ph_v16hi */

            case 1:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4510; /* avx512fp16_vcvtdq2ph_v16si */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HImode)
              || !(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4494; /* avx512fp16_vcvtw2ph_v32hi */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !vector_operand (operands[1], E_V16SImode)
              || !(
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4815; /* floatv16siv16sf2 */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!vector_operand (operands[1], E_V8SImode)
                  || !(
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 433 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 4819; /* floatv8siv8sf2 */

            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4973; /* floatv8div8sf2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!vector_operand (operands[1], E_V4SImode)
                  || !
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 4823; /* floatv4siv4sf2 */

            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4981; /* floatv4div4sf2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern516 (x3))
            {
            case 0:
              if (!
#line 8880 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 4901; /* sse2_cvtpi2pd */

            case 1:
              if (!(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4969; /* floatv2div2df2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern517 (x3, 
E_V8DFmode))
            {
            case 0:
              if (!(
#line 9174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 4949; /* floatv8siv8df2 */

            case 1:
              if (!(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4953; /* floatv8div8df2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern518 (x3, 
E_V4DFmode))
            {
            case 0:
              if (!
#line 9174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                return -1;
              return 4951; /* floatv4siv4df2 */

            case 1:
              if (!(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4961; /* floatv4div4df2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 8:
          if (pattern670 (x5) != 0
              || pattern928 (x3, 
E_V16SImode, 
E_V8SImode, 
E_V8DFmode) != 0
              || !
#line 9375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5001; /* avx512f_cvtdq2pd512_2 */

        case 4:
          if (pattern671 (x5, 
3, 
2, 
1) != 0
              || pattern928 (x3, 
E_V8SImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !
#line 9388 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5002; /* avx_cvtdq2pd256_2 */

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern928 (x3, 
E_V4SImode, 
E_V2SImode, 
E_V2DFmode) != 0
              || !
#line 9400 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 5003; /* sse2_cvtdq2pd */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_337 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern514 (x3))
            {
            case 0:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4484; /* avx512fp16_vcvtuw2ph_v8hi */

            case 1:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4506; /* avx512fp16_vcvtudq2ph_v8si */

            case 2:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4522; /* avx512fp16_vcvtuqq2ph_v8di */

            default:
              return -1;
            }

        case E_V16HFmode:
          switch (pattern515 (x3))
            {
            case 0:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4490; /* avx512fp16_vcvtuw2ph_v16hi */

            case 1:
              if (!(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4514; /* avx512fp16_vcvtudq2ph_v16si */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HImode)
              || !(
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4498; /* avx512fp16_vcvtuw2ph_v32hi */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode
              || !nonimmediate_operand (operands[1], E_V16SImode)
              || !(
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4825; /* *floatunsv16siv16sf2 */

        case E_V8SFmode:
          switch (pattern517 (x3, 
E_V8SFmode))
            {
            case 0:
              if (!(
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4829; /* *floatunsv8siv8sf2 */

            case 1:
              if (!(
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4977; /* floatunsv8div8sf2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern518 (x3, 
E_V4SFmode))
            {
            case 0:
              if (!(
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4833; /* *floatunsv4siv4sf2 */

            case 1:
              if (!(
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4985; /* floatunsv4div4sf2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern516 (x3))
            {
            case 0:
              if (!
#line 8900 "../../src/gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
                return -1;
              return 4902; /* floatunsv2siv2df2 */

            case 1:
              if (!(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4971; /* floatunsv2div2df2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4957; /* floatunsv8div8df2 */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 9348 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4995; /* floatunsv8siv8df2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4965; /* floatunsv4div4df2 */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 9348 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4997; /* floatunsv4siv4df2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL
          || XVECLEN (x5, 0) != 2)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_V4SImode)
          || !
#line 9360 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return -1;
      return 4999; /* *floatunsv2siv2df2 */

    default:
      return -1;
    }
}

 int
recog_345 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      switch (pattern181 (x3))
        {
        case 0:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && 1 && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2687; /* *subv32hf3 */

        case 1:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && 1 && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2695; /* *subv16hf3 */

        case 2:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && 1 && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2703; /* *subv8hf3 */

        case 3:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2711; /* *subv16sf3 */

        case 4:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2719; /* *subv8sf3 */

        case 5:
          if (!
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2727; /* *subv4sf3 */

        case 6:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2735; /* *subv8df3 */

        case 7:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2743; /* *subv4df3 */

        case 8:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && 1 && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2751; /* *subv2df3 */

        case 9:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && 
#line 587 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7467; /* *subv64qi3 */

        case 10:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 587 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7469; /* *subv32qi3 */

        case 11:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)))
            return -1;
          return 7471; /* *subv16qi3 */

        case 12:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && 
#line 588 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7473; /* *subv32hi3 */

        case 13:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 588 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7475; /* *subv16hi3 */

        case 14:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)))
            return -1;
          return 7477; /* *subv8hi3 */

        case 15:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && 
#line 589 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7479; /* *subv16si3 */

        case 16:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 589 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7481; /* *subv8si3 */

        case 17:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)))
            return -1;
          return 7483; /* *subv4si3 */

        case 18:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && 
#line 590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7485; /* *subv8di3 */

        case 19:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7487; /* *subv4di3 */

        case 20:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)))
            return -1;
          return 7489; /* *subv2di3 */

        case 21:
          if (!(
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10611; /* avx10_2_subbf16_v32bf */

        case 22:
          if (!
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10619; /* avx10_2_subbf16_v16bf */

        case 23:
          if (!
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10627; /* avx10_2_subbf16_v8bf */

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern188 (x3))
        {
        case 0:
          if (!
#line 22580 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8593; /* avx2_phsubwv16hi3 */

        case 1:
          if (!
#line 22603 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8597; /* ssse3_phsubwv8hi3 */

        case 2:
          if (!
#line 22670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8604; /* avx2_phsubdv8si3 */

        case 3:
          if (!
#line 22691 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8606; /* ssse3_phsubdv4si3 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern190 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 26443 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9029; /* xop_phsubbw */

        case 1:
          if (!
#line 26463 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9030; /* xop_phsubwd */

        case 2:
          if (!
#line 26481 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9031; /* xop_phsubdq */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_353 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[1] = x4;
  res = recog_272 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  operands[1] = x3;
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern800 (
E_V16QImode) == 0
              && 
#line 27042 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9065; /* xop_maskcmpv16qi3 */
          break;

        case E_V8HImode:
          if (pattern800 (
E_V8HImode) == 0
              && 
#line 27042 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9066; /* xop_maskcmpv8hi3 */
          break;

        case E_V4SImode:
          if (pattern800 (
E_V4SImode) == 0
              && 
#line 27042 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9067; /* xop_maskcmpv4si3 */
          break;

        case E_V2DImode:
          if (pattern800 (
E_V2DImode) == 0
              && 
#line 27042 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return 9068; /* xop_maskcmpv2di3 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern801 (
E_V16QImode) != 0
              || !
#line 27052 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9069; /* xop_maskcmp_unsv16qi3 */

        case E_V8HImode:
          if (pattern801 (
E_V8HImode) != 0
              || !
#line 27052 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9070; /* xop_maskcmp_unsv8hi3 */

        case E_V4SImode:
          if (pattern801 (
E_V4SImode) != 0
              || !
#line 27052 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9071; /* xop_maskcmp_unsv4si3 */

        case E_V2DImode:
          if (pattern801 (
E_V2DImode) != 0
              || !
#line 27052 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9072; /* xop_maskcmp_unsv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_360 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (pattern229 (x5, 
E_CCmode, 
17) != 0)
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  res = recog_359 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 8L
      || pattern717 (x2) != 0)
    return -1;
  switch (pattern1418 (x2))
    {
    case 0:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 800; /* *andqi_exthi_3 */

    case 1:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 803; /* *andqi_extsi_3 */

    case 2:
      if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 806; /* *andqi_extdi_3 */

    case 3:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 801; /* *iorqi_exthi_3 */

    case 4:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 804; /* *iorqi_extsi_3 */

    case 5:
      if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 807; /* *iorqi_extdi_3 */

    case 6:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 802; /* *xorqi_exthi_3 */

    case 7:
      if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
        return -1;
      return 805; /* *xorqi_extsi_3 */

    case 8:
      if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 808; /* *xorqi_extdi_3 */

    default:
      return -1;
    }
}

 int
recog_365 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XINT (x3, 1))
    {
    case 106:
      if (pattern541 (x1) != 0)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!pop_operand (operands[1], E_TImode))
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3901 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2))
        return -1;
      return 160; /* pop2_di */

    case 14:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern351 (x6) != 0)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
          if (XWINT (x5, 0) != 0L
              || !
#line 20753 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1498; /* *set_got */

        case LABEL_REF:
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!
#line 20775 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1499; /* *set_got_labelled */

        default:
          return -1;
        }

    case 97:
      switch (pattern544 (x1))
        {
        case 0:
          if (!
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1550; /* tzcnt_si */

        case 1:
          if (!(((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)))
            return -1;
          return 1552; /* tzcnt_di */

        case 2:
          if (!(
#line 21718 "../../src/gcc/config/i386/i386.md"
(true) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)))
            return -1;
          return 1563; /* tzcnt_hi */

        case 3:
          if ((
#line 21692 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)))
            return 1554; /* *tzcnt_si_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1558; /* *tzcnt_si_falsedep */

        case 4:
          if ((
#line 21692 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && ((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return 1556; /* *tzcnt_di_falsedep_nf */
          if (pnum_clobbers == NULL
              || !((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1560; /* *tzcnt_di_falsedep */

        default:
          return -1;
        }

    case 96:
      switch (pattern544 (x1))
        {
        case 0:
          if (!
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1551; /* lzcnt_si */

        case 1:
          if (!(((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return -1;
          return 1553; /* lzcnt_di */

        case 2:
          if (!(
#line 21718 "../../src/gcc/config/i386/i386.md"
(true) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return -1;
          return 1565; /* lzcnt_hi */

        case 3:
          if ((
#line 21692 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)))
            return 1555; /* *lzcnt_si_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1559; /* *lzcnt_si_falsedep */

        case 4:
          if ((
#line 21692 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && ((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return 1557; /* *lzcnt_di_falsedep_nf */
          if (pnum_clobbers == NULL
              || !((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1561; /* *lzcnt_di_falsedep */

        default:
          return -1;
        }

    case 27:
      if (GET_MODE (x3) != E_CCmode
          || pattern681 (x1, 
CLOBBER, 
E_CCmode) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      x7 = XEXP (x6, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 1647; /* parityhi2_cmp */

    case 80:
      if (pattern545 (x1, 
81) != 0
          || !
#line 24052 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1719; /* sincosxf3 */

    case 82:
      if (pattern545 (x1, 
83) != 0
          || !
#line 24567 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1724; /* fxtractxf3_i387 */

    case 70:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!scratch_operand (operands[2], E_XFmode)
          || !
#line 25113 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1733; /* lrintxfdi2 */

    case 74:
      if (pattern546 (x1) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1736; /* frndintxf2_roundeven */

    case 75:
      if (pattern546 (x1) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1737; /* frndintxf2_floor */

    case 76:
      if (pattern546 (x1) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1738; /* frndintxf2_ceil */

    case 77:
      if (pattern546 (x1) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      return 1739; /* frndintxf2_trunc */

    case 78:
      switch (pattern548 (x1))
        {
        case 0:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1744; /* *fisthi2_floor_1 */

        case 1:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1746; /* *fistsi2_floor_1 */

        case 2:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1748; /* *fistdi2_floor_1 */

        default:
          return -1;
        }

    case 79:
      switch (pattern548 (x1))
        {
        case 0:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1745; /* *fisthi2_ceil_1 */

        case 1:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1747; /* *fistsi2_ceil_1 */

        case 2:
          if (!
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
            return -1;
          return 1749; /* *fistdi2_ceil_1 */

        default:
          return -1;
        }

    case 18:
      if (pattern549 (x1) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !const0_operand (operands[1], E_SImode)
              || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
            return -1;
          return 1861; /* probe_stack_1_si */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !const0_operand (operands[1], E_DImode)
              || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
            return -1;
          return 1862; /* probe_stack_1_di */

        default:
          return -1;
        }

    case 92:
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != SET)
        return -1;
      if (pnum_clobbers != NULL)
        {
          res = recog_361 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[3] = x5;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern1234 (x3, 
E_SImode))
            {
            case 0:
              if (general_operand (operands[2], E_SImode)
                  && (
#line 27455 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return 1871; /* *stack_protect_set_2_si_si */
              if (address_no_seg_operand (operands[2], E_SImode)
                  && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
                return 1875; /* *stack_protect_set_3_si_si */
              break;

            case 1:
              if (general_operand (operands[2], E_DImode)
                  && (
#line 27474 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return 1873; /* *stack_protect_set_2_si_di */
              if (address_no_seg_operand (operands[2], E_DImode)
                  && ((
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1876; /* *stack_protect_set_3_si_di */
              break;

            default:
              break;
            }
          break;

        case E_DImode:
          switch (pattern1234 (x3, 
E_DImode))
            {
            case 0:
              if (general_operand (operands[2], E_SImode)
                  && (
#line 27455 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return 1872; /* *stack_protect_set_2_di_si */
              if (address_no_seg_operand (operands[2], E_SImode)
                  && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
                return 1877; /* *stack_protect_set_3_di_si */
              break;

            case 1:
              if (general_operand (operands[2], E_DImode)
                  && (
#line 27474 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return 1874; /* *stack_protect_set_2_di_di */
              if (address_no_seg_operand (operands[2], E_DImode)
                  && ((
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1878; /* *stack_protect_set_3_di_di */
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_DImode)
          || GET_MODE (x9) != E_DImode)
        return -1;
      switch (GET_CODE (x9))
        {
        case ZERO_EXTEND:
          switch (pattern1320 (x1))
            {
            case 0:
              if (!(
#line 27568 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              return 1879; /* *stack_protect_set_4z_si_di */

            case 1:
              if (!(
#line 27568 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              return 1880; /* *stack_protect_set_4z_di_di */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern1320 (x1))
            {
            case 0:
              if (!(
#line 27586 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                return -1;
              return 1881; /* *stack_protect_set_4s_si_di */

            case 1:
              if (!(
#line 27586 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                return -1;
              return 1882; /* *stack_protect_set_4s_di_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 118:
      if (GET_MODE (x3) != E_V4SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V4SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!scratch_operand (operands[2], E_V4SImode)
          || !
#line 1877 "../../src/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      return 2558; /* movdi_to_sse */

    case 282:
      if (GET_MODE (x3) != E_BLKmode
          || pattern338 (x1) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      if (!rtx_equal_p (x5, operands[0]))
        return -1;
      return 11016; /* mfence_nosse */

    case 287:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!memory_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!memory_operand (operands[2], E_DImode)
          || !
#line 196 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
        return -1;
      *pnum_clobbers = 1;
      return 11017; /* atomic_loaddi_fpu */

    case 288:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!memory_operand (operands[2], E_DImode)
          || !
#line 295 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
        return -1;
      *pnum_clobbers = 1;
      return 11022; /* atomic_storedi_fpu */

    default:
      return -1;
    }
}

 int
recog_374 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  switch (pattern938 (x1))
    {
    case 0:
      if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 261; /* floatunssisf2_i387_with_xmm */

    case 1:
      if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 262; /* floatunssidf2_i387_with_xmm */

    case 2:
      if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
        return -1;
      *pnum_clobbers = 1;
      return 263; /* floatunssixf2_i387_with_xmm */

    default:
      return -1;
    }
}

 int
recog_376 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = recog_375 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || pattern558 (x4) != 0)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER
          || pattern570 (x1) != 0)
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (pattern1623 (x2))
        {
        case 0:
          if (
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 303; /* *addqi_exthi_1_slp */
          break;

        case 1:
          if (
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 304; /* *addqi_extsi_1_slp */
          break;

        case 2:
          if ((
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 305; /* *addqi_extdi_1_slp */
          break;

        case 3:
          return 327; /* *addqi_exthi_0 */

        case 4:
          return 328; /* *addqi_extsi_0 */

        case 5:
          if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 329; /* *addqi_extdi_0 */
          break;

        default:
          break;
        }
      x8 = XEXP (x3, 1);
      if (GET_CODE (x8) != SUBREG)
        return -1;
      switch (pattern1624 (x2))
        {
        case 0:
          if (!
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 306; /* *addqi_exthi_2_slp */

        case 1:
          if (!
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 307; /* *addqi_extsi_2_slp */

        case 2:
          if (!(
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 308; /* *addqi_extdi_2_slp */

        case 3:
          return 330; /* *addqi_ext2hi_0 */

        case 4:
          return 331; /* *addqi_ext2si_0 */

        case 5:
          if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 332; /* *addqi_ext2di_0 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern940 (x2))
        {
        case 0:
          if (!(
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 268; /* *adddi3_doubleword_zext */

        case 1:
          if (!(
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 269; /* *addti3_doubleword_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pattern338 (x1) != 0)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case ASHIFT:
          switch (pattern1154 (x3))
            {
            case 0:
              if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 270; /* *adddi3_doubleword_concat */

            case 1:
              if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 273; /* *addti3_doubleword_concat */

            case 2:
              if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 276; /* *adddi3_doubleword_concat_zext */

            case 3:
              if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 279; /* *addti3_doubleword_concat_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          operands[4] = x6;
          x9 = XEXP (x6, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x8 = XEXP (x3, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1625 (x3, 
E_QImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 453; /* addqi3_carry */

            case E_HImode:
              if (pattern1625 (x3, 
E_HImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 454; /* addhi3_carry */

            case E_SImode:
              if (pattern1626 (x3, 
E_SImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 455; /* addsi3_carry */

            case E_DImode:
              if (pattern1626 (x3, 
E_DImode) != 0
                  || !(
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 456; /* adddi3_carry */

            default:
              return -1;
            }

        case EQ:
          switch (pattern1157 (x3))
            {
            case 0:
              if (!
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 554; /* *addqi3_eq */

            case 1:
              if (!
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 555; /* *addhi3_eq */

            case 2:
              if (!
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 556; /* *addsi3_eq */

            case 3:
              if (!(
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 557; /* *adddi3_eq */

            default:
              return -1;
            }

        case NE:
          switch (pattern1160 (x3))
            {
            case 0:
              if (!
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 558; /* *addqi3_ne */

            case 1:
              if (!
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 559; /* *addhi3_ne */

            case 2:
              if (!
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 560; /* *addsi3_ne */

            case 3:
              if (!(
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 561; /* *adddi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern355 (x1))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 271; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 274; /* *addti3_doubleword_concat */

        case 2:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 277; /* *adddi3_doubleword_concat_zext */

        case 3:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 280; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern355 (x1))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 272; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 275; /* *addti3_doubleword_concat */

        case 2:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 278; /* *adddi3_doubleword_concat_zext */

        case 3:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 281; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern356 (x1))
        {
        case 0:
          if (pattern1525 (x3, 
E_QImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 457; /* *addqi3_carry_0 */

        case 1:
          if (pattern1525 (x3, 
E_HImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 458; /* *addhi3_carry_0 */

        case 2:
          if (pattern1525 (x3, 
E_SImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 459; /* *addsi3_carry_0 */

        case 3:
          if (pattern1525 (x3, 
E_DImode) != 0
              || !(
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 460; /* *adddi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern356 (x1))
        {
        case 0:
          if (pattern1526 (x3, 
E_QImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 461; /* *addqi3_carry_0r */

        case 1:
          if (pattern1526 (x3, 
E_HImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 462; /* *addhi3_carry_0r */

        case 2:
          if (pattern1526 (x3, 
E_SImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 463; /* *addsi3_carry_0r */

        case 3:
          if (pattern1526 (x3, 
E_DImode) != 0
              || !(
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 464; /* *adddi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern360 (x1))
        {
        case 0:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 562; /* *addqi3_eq_0 */

        case 1:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 563; /* *addhi3_eq_0 */

        case 2:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 564; /* *addsi3_eq_0 */

        case 3:
          if (!(
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 565; /* *adddi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern360 (x1))
        {
        case 0:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 566; /* *addqi3_ne_0 */

        case 1:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 567; /* *addhi3_ne_0 */

        case 2:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 568; /* *addsi3_ne_0 */

        case 3:
          if (!(
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 569; /* *adddi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern944 (x2))
        {
        case 0:
          if (!
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 574; /* *subqi3_ne */

        case 1:
          if (!
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 575; /* *subhi3_ne */

        case 2:
          if (!
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 576; /* *subsi3_ne */

        case 3:
          if (!(
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 577; /* *subdi3_ne */

        case 4:
          if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 578; /* *subqi3_eq_1 */

        case 5:
          if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 579; /* *subhi3_eq_1 */

        case 6:
          if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
            return -1;
          return 580; /* *subsi3_eq_1 */

        case 7:
          if (!(
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 581; /* *subdi3_eq_1 */

        default:
          return -1;
        }

    case LSHIFTRT:
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x3, 1);
      if (GET_CODE (x8) != ASHIFT)
        return -1;
      x11 = XEXP (x8, 0);
      if (GET_CODE (x11) != LTU)
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 17
          || GET_MODE (x12) != E_CCCmode)
        return -1;
      x13 = XEXP (x11, 1);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x8, 1);
      if (GET_CODE (x14) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      switch (XWINT (x14, 0))
        {
        case 31L:
          if (pattern1675 (x3, 
E_SImode) != 0)
            return -1;
          return 1385; /* rcrsi2 */

        case 63L:
          if (pattern1675 (x3, 
E_DImode) != 0
              || !
#line 18754 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1386; /* rcrdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern948 (x2))
        {
        case 0:
          if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          return 1661; /* *add_tp_si */

        case 1:
          if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          return 1662; /* *add_tp_di */

        case 2:
          if (!
#line 23306 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          return 1666; /* *tls_dynamic_gnu2_combine_32 */

        case 3:
          if (!(
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            return -1;
          return 1671; /* *tls_dynamic_gnu2_combine_64_si */

        case 4:
          if (!(
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            return -1;
          return 1672; /* *tls_dynamic_gnu2_combine_64_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_398 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  switch (pattern820 (x5))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern1432 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 809; /* *andndi3_doubleword_bmi */
          if ((
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 811; /* *andndi3_doubleword */
          if (!(
#line 13346 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 814; /* *andndi_1 */

        case E_TImode:
          if (pattern1432 (x3, 
E_TImode) != 0)
            return -1;
          if ((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 810; /* *andnti3_doubleword_bmi */
          if (!(
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 812; /* *andnti3_doubleword */

        case E_SImode:
          if (pattern1432 (x3, 
E_SImode) != 0
              || !
#line 13346 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 813; /* *andnsi_1 */

        case E_QImode:
          if (pattern1433 (x3, 
E_QImode) != 0
              || !
#line 13362 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 815; /* *andnqi_1 */

        case E_HImode:
          if (pattern1433 (x3, 
E_HImode) != 0
              || !
#line 13362 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
            return -1;
          return 816; /* *andnhi_1 */

        case E_V4QImode:
          if (pattern1433 (x3, 
E_V4QImode) != 0)
            return -1;
          return 2271; /* *andnotv4qi3 */

        case E_V2QImode:
          if (pattern1433 (x3, 
E_V2QImode) != 0)
            return -1;
          return 2272; /* *andnotv2qi3 */

        case E_V2HImode:
          if (pattern1433 (x3, 
E_V2HImode) != 0)
            return -1;
          return 2273; /* *andnotv2hi3 */

        default:
          return -1;
        }

    case 1:
      if (pattern1433 (x3, 
E_QImode) != 0
          || !
#line 2139 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return -1;
      return 2584; /* kandnqi */

    case 2:
      if (pattern1433 (x3, 
E_HImode) != 0
          || !
#line 2139 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return -1;
      return 2585; /* kandnhi */

    case 3:
      if (pattern1433 (x3, 
E_SImode) != 0
          || !(
#line 2139 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return -1;
      return 2586; /* kandnsi */

    case 4:
      if (pattern1433 (x3, 
E_DImode) != 0
          || !(
#line 2139 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return -1;
      return 2587; /* kandndi */

    default:
      return -1;
    }
}

 int
recog_401 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case XOR:
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XVECEXP (x1, 0, 1);
      switch (pattern820 (x8))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1330 (x3, 
E_HImode) != 0
                  || !
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 835; /* *notxorhi_1 */

            case E_SImode:
              if (pattern1331 (x3, 
E_SImode) != 0
                  || !
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 836; /* *notxorsi_1 */

            case E_DImode:
              if (pattern1331 (x3, 
E_DImode) != 0
                  || !(
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 837; /* *notxordi_1 */

            case E_QImode:
              if (pattern1330 (x3, 
E_QImode) != 0
                  || !
#line 13807 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 871; /* *notxorqi_1 */

            default:
              return -1;
            }

        case 1:
          if (pattern1332 (x3, 
E_QImode) != 0
              || !
#line 2177 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2588; /* kxnorqi */

        case 2:
          if (pattern1332 (x3, 
E_HImode) != 0
              || !
#line 2177 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2589; /* kxnorhi */

        case 3:
          if (pattern1332 (x3, 
E_SImode) != 0
              || !(
#line 2177 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2590; /* kxnorsi */

        case 4:
          if (pattern1332 (x3, 
E_DImode) != 0
              || !(
#line 2177 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2591; /* kxnordi */

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      if (pattern373 (x1) != 0
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[0]))
        return -1;
      x9 = XEXP (x4, 2);
      if (!rtx_equal_p (x9, operands[1])
          || !
#line 19040 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
        return -1;
      return 1415; /* *btcq_imm */

    case REG:
    case SUBREG:
      operands[1] = x4;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 174)
        return -1;
      x10 = XVECEXP (x8, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (pattern700 (x3))
        {
        case 0:
          if (!
#line 2198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2592; /* knotqi */

        case 1:
          if (!
#line 2198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2593; /* knothi */

        case 2:
          if (!(
#line 2198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2594; /* knotsi */

        case 3:
          if (!(
#line 2198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2595; /* knotdi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_404 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern199 (x1))
        {
        case 0:
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          switch (pattern701 (x1))
            {
            case 0:
              if ((
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 1052; /* *ashldi3_doubleword_mask */
              break;

            case 1:
              if ((
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1053; /* *ashlti3_doubleword_mask */
              break;

            case 2:
              if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return 2601; /* kashiftqi */
              break;

            case 3:
              if (
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return 2603; /* kashifthi */
              break;

            case 4:
              if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 2605; /* kashiftsi */
              break;

            case 5:
              if ((
#line 2267 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 2607; /* kashiftdi */
              break;

            default:
              break;
            }
          x6 = XEXP (x3, 1);
          operands[2] = x6;
          switch (pattern702 (x1))
            {
            case 0:
              operands[0] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (GET_MODE (x3) == E_DImode)
                    {
                      if (register_operand (operands[0], E_DImode)
                          && reg_or_pm1_operand (operands[1], E_DImode)
                          && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                        return 1056; /* ashldi3_doubleword */
                      if (nonimmediate_operand (operands[0], E_DImode)
                          && nonimmediate_operand (operands[1], E_DImode)
                          && (
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return 1091; /* *ashldi3_1 */
                    }
                  break;

                case E_TImode:
                  if (register_operand (operands[0], E_TImode)
                      && GET_MODE (x3) == E_TImode
                      && reg_or_pm1_operand (operands[1], E_TImode)
                      && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 1057; /* ashlti3_doubleword */
                  break;

                case E_SImode:
                  if (nonimmediate_operand (operands[0], E_SImode)
                      && GET_MODE (x3) == E_SImode
                      && nonimmediate_operand (operands[1], E_SImode)
                      && 
#line 15909 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)
   && true))
                    return 1089; /* *ashlsi3_1 */
                  break;

                case E_HImode:
                  if (nonimmediate_operand (operands[0], E_HImode)
                      && GET_MODE (x3) == E_HImode
                      && nonimmediate_operand (operands[1], E_HImode)
                      && 
#line 16095 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return 1105; /* *ashlhi3_1 */
                  break;

                case E_QImode:
                  if (nonimmediate_operand (operands[0], E_QImode)
                      && GET_MODE (x3) == E_QImode
                      && nonimmediate_operand (operands[1], E_QImode)
                      && 
#line 16154 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return 1107; /* *ashlqi3_1 */
                  break;

                case E_V2QImode:
                  if (register_operand (operands[0], E_V2QImode)
                      && GET_MODE (x3) == E_V2QImode
                      && register_operand (operands[1], E_V2QImode)
                      && 
#line 4007 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                    return 2214; /* ashlv2qi3 */
                  break;

                default:
                  break;
                }
              break;

            case 1:
              x7 = XEXP (x5, 0);
              operands[0] = x7;
              switch (pattern374 (x3))
                {
                case 0:
                  if (
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1108; /* *ashlqi3_1_slp */
                  break;

                case 1:
                  if (
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 1109; /* *ashlhi3_1_slp */
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
          if (GET_CODE (x6) != SUBREG
              || maybe_ne (SUBREG_BYTE (x6), 0)
              || GET_MODE (x6) != E_QImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern372 (x8) != 0)
            return -1;
          switch (pattern1435 (x2))
            {
            case 0:
              if (!
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
              return 1244; /* *ashlsi3_mask */

            case 1:
              if (!(
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1247; /* *ashldi3_mask */

            case 2:
              if (!
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              return 1256; /* *ashlsi3_add */

            case 3:
              if (!(
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1259; /* *ashldi3_add */

            case 4:
              if (!
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              return 1268; /* *ashlsi3_sub */

            case 5:
              if (!(
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1271; /* *ashldi3_sub */

            default:
              return -1;
            }

        case 1:
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && (
#line 15264 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1054; /* *ashldi3_doubleword_mask_1 */
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1253; /* *ashldi3_mask_1 */

        case 2:
          if (!(
#line 15264 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1055; /* *ashlti3_doubleword_mask_1 */

        case 3:
          if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          return 1250; /* *ashlsi3_mask_1 */

        case 4:
          if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          return 1262; /* *ashlsi3_add_1 */

        case 5:
          if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1265; /* *ashldi3_add_1 */

        case 6:
          if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          return 1274; /* *ashlsi3_sub_1 */

        case 7:
          if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1277; /* *ashldi3_sub_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern380 (x1))
        {
        case 0:
          if (!(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 1058; /* *ashldi3_doubleword_highpart */

        case 1:
          if (!(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1060; /* *ashlti3_doubleword_highpart */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern380 (x1))
        {
        case 0:
          if (!(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 1059; /* *ashldi3_doubleword_highpart */

        case 1:
          if (!(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1061; /* *ashlti3_doubleword_highpart */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_420 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  x4 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x4))
    {
    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 37)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || !(
#line 20172 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return -1;
          return 1470; /* *sibcall_memory */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || !(
#line 20172 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return -1;
          return 1471; /* *sibcall_memory */

        default:
          return -1;
        }

    case SET:
      x6 = XEXP (x4, 1);
      if (pattern821 (x6) != 0)
        return -1;
      x7 = XEXP (x4, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 7
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XEXP (x6, 1);
      operands[2] = x8;
      if (!immediate_operand (operands[2], E_SImode))
        return -1;
      if (call_insn_operand (operands[0], E_SImode)
          && 
#line 20223 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn)))
        return 1472; /* *call_pop */
      if (!sibcall_insn_operand (operands[0], E_SImode)
          || !
#line 20233 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn)))
        return -1;
      return 1473; /* *sibcall_pop */

    default:
      return -1;
    }
}

 int
recog_425 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  if (pattern224 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 38)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  x5 = XVECEXP (x2, 0, 0);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XEXP (x7, 0);
  switch (GET_CODE (x8))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x8;
      x9 = XEXP (x3, 1);
      if (GET_CODE (x9) != CTZ)
        return -1;
      x10 = XEXP (x6, 0);
      if (GET_MODE (x10) != E_CCCmode
          || GET_MODE (x7) != E_CCCmode)
        return -1;
      x11 = XEXP (x9, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (pattern1682 (x9, 
E_SImode) != 0
              || !
#line 21024 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1510; /* *tzcntsi_1_falsedep */

        case E_DImode:
          if (pattern1682 (x9, 
E_DImode) != 0
              || !(
#line 21024 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1511; /* *tzcntdi_1_falsedep */

        default:
          return -1;
        }

    case AND:
      x9 = XEXP (x3, 1);
      if (GET_CODE (x9) != AND)
        return -1;
      x12 = XEXP (x8, 0);
      switch (GET_CODE (x12))
        {
        case NEG:
          x11 = XEXP (x9, 0);
          if (GET_CODE (x11) != NEG)
            return -1;
          switch (pattern1574 (x1))
            {
            case 0:
              if (!
#line 21833 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              return 1574; /* *bmi_blsi_si_falsedep */

            case 1:
              if (!(
#line 21833 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1575; /* *bmi_blsi_di_falsedep */

            default:
              return -1;
            }

        case PLUS:
          x13 = XEXP (x12, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x11 = XEXP (x9, 0);
          if (GET_CODE (x11) != PLUS)
            return -1;
          x14 = XEXP (x11, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x10 = XEXP (x6, 0);
          if (GET_MODE (x10) != E_CCZmode
              || GET_MODE (x7) != E_CCZmode)
            return -1;
          switch (pattern1574 (x1))
            {
            case 0:
              if (!
#line 21981 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1586; /* *bmi_blsr_si_cmp_falsedep */

            case 1:
              if (!(
#line 21981 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1587; /* *bmi_blsr_di_cmp_falsedep */

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
recog_429 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      return recog_428 (x1, insn, pnum_clobbers);

    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode
          || pattern383 (x1) != 0)
        return -1;
      x4 = XEXP (x3, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      x6 = XVECEXP (x1, 0, 1);
      x7 = XEXP (x6, 1);
      x8 = XEXP (x7, 1);
      operands[2] = x8;
      if (!immediate_operand (operands[2], E_SImode)
          || !
#line 20244 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INDIRECT_BRANCH_REGISTER))
        return -1;
      return 1474; /* *sibcall_pop_memory */

    default:
      return -1;
    }
}

 int
recog_431 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      if (XWINT (x3, 0) != 0L)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != SET)
        return -1;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PLUS)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != SET)
        return -1;
      x7 = XVECEXP (x1, 0, 4);
      if (GET_CODE (x7) != USE)
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      x9 = XEXP (x5, 0);
      switch (GET_CODE (x9))
        {
        case ASHIFT:
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          switch (XWINT (x10, 0))
            {
            case 3L:
              switch (pattern1442 (x1, 
3, 
E_DImode))
                {
                case 0:
                  if (!(
#line 25704 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1769; /* *rep_movdi_rex64 */

                case 1:
                  if (!(
#line 25704 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1770; /* *rep_movdi_rex64 */

                case 2:
                  if (!(
#line 25903 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1783; /* *rep_stosdi_rex64 */

                case 3:
                  if (!(
#line 25903 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1784; /* *rep_stosdi_rex64 */

                default:
                  return -1;
                }

            case 2L:
              switch (pattern1442 (x1, 
2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 25725 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1771; /* *rep_movsi */

                case 1:
                  if (!(
#line 25725 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1772; /* *rep_movsi */

                case 2:
                  if (!(
#line 25922 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1785; /* *rep_stossi */

                case 3:
                  if (!(
#line 25922 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1786; /* *rep_stossi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x9;
          x12 = XEXP (x6, 1);
          switch (GET_CODE (x12))
            {
            case PLUS:
              x13 = XVECEXP (x1, 0, 3);
              if (GET_CODE (x13) != SET)
                return -1;
              x14 = XEXP (x13, 1);
              if (GET_CODE (x14) != MEM
                  || GET_MODE (x14) != E_BLKmode)
                return -1;
              x15 = XEXP (x13, 0);
              if (GET_CODE (x15) != MEM
                  || GET_MODE (x15) != E_BLKmode)
                return -1;
              x16 = XEXP (x2, 0);
              operands[2] = x16;
              x11 = XEXP (x5, 1);
              operands[5] = x11;
              x17 = XEXP (x6, 0);
              operands[1] = x17;
              x18 = XEXP (x12, 0);
              operands[4] = x18;
              x19 = XEXP (x12, 1);
              if (!rtx_equal_p (x19, operands[5]))
                return -1;
              x20 = XEXP (x14, 0);
              if (!rtx_equal_p (x20, operands[4]))
                return -1;
              x21 = XEXP (x15, 0);
              if (!rtx_equal_p (x21, operands[3]))
                return -1;
              x22 = XEXP (x7, 0);
              if (!rtx_equal_p (x22, operands[5]))
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_SImode:
                  if (pattern1826 (x1, 
E_SImode) != 0
                      || !(
#line 25743 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1773; /* *rep_movqi */

                case E_DImode:
                  if (pattern1826 (x1, 
E_DImode) != 0
                      || !(
#line 25743 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1774; /* *rep_movqi */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x12, 0) != 0L)
                return -1;
              x17 = XEXP (x6, 0);
              if (GET_CODE (x17) != MEM
                  || GET_MODE (x17) != E_BLKmode)
                return -1;
              x13 = XVECEXP (x1, 0, 3);
              if (GET_CODE (x13) != USE)
                return -1;
              x16 = XEXP (x2, 0);
              operands[1] = x16;
              x11 = XEXP (x5, 1);
              operands[4] = x11;
              x15 = XEXP (x13, 0);
              operands[2] = x15;
              if (!register_operand (operands[2], E_QImode))
                return -1;
              x23 = XEXP (x17, 0);
              if (!rtx_equal_p (x23, operands[3]))
                return -1;
              x22 = XEXP (x7, 0);
              if (!rtx_equal_p (x22, operands[4]))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SImode:
                  if (pattern1778 (x5, 
E_SImode) != 0
                      || !(
#line 25939 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return -1;
                  return 1787; /* *rep_stosqi */

                case E_DImode:
                  if (pattern1778 (x5, 
E_DImode) != 0
                      || !(
#line 25939 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return -1;
                  return 1788; /* *rep_stosqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      if (pattern230 (x1) != 0)
        return -1;
      x24 = XEXP (x3, 1);
      x25 = XEXP (x24, 0);
      x26 = XEXP (x25, 0);
      operands[4] = x26;
      x27 = XEXP (x24, 1);
      x28 = XEXP (x27, 0);
      operands[5] = x28;
      x4 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x4, 0);
      operands[3] = x8;
      if (!immediate_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x17 = XEXP (x6, 0);
      operands[0] = x17;
      x13 = XVECEXP (x1, 0, 3);
      x15 = XEXP (x13, 0);
      operands[1] = x15;
      x7 = XVECEXP (x1, 0, 4);
      x22 = XEXP (x7, 0);
      operands[2] = x22;
      switch (GET_MODE (operands[6]))
        {
        case E_SImode:
          if (pattern1847 (
E_SImode) != 0
              || !(
#line 26070 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1791; /* *cmpstrnqi_1 */

        case E_DImode:
          if (pattern1847 (
E_DImode) != 0
              || !(
#line 26070 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1792; /* *cmpstrnqi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_3 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTRACT)
    return NULL;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  x6 = XEXP (x3, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x4, 2);
  operands[2] = x9;
  if (!register_operand (operands[2], E_QImode))
    return NULL;
  x10 = XEXP (x2, 1);
  operands[3] = x10;
  x11 = XEXP (x2, 2);
  operands[4] = x11;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      switch (pattern1529 (x2, 
E_HImode))
        {
        case 0:
          if (!
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_830 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_831 (insn, operands);

        default:
          return NULL;
        }

    case E_SImode:
      switch (pattern1529 (x2, 
E_SImode))
        {
        case 0:
          if (!
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_832 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_833 (insn, operands);

        default:
          return NULL;
        }

    case E_DImode:
      switch (pattern1529 (x2, 
E_DImode))
        {
        case 0:
          if (!(
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_834 (insn, operands);

        case 1:
          if (!(
#line 19300 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && TARGET_CMOVE
   && !(MEM_P (operands[3]) && MEM_P (operands[4]))
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_835 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_8 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_24 (insn, operands);

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
          return gen_split_27 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_30 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern603 (x3, 
E_QImode) != 0
                      || !(
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && 
#line 8019 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_161 (insn, operands);

                case E_HImode:
                  if (pattern603 (x3, 
E_HImode) != 0
                      || !(
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))) && 
#line 8019 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_163 (insn, operands);

                case E_SImode:
                  if (pattern603 (x3, 
E_SImode) != 0
                      || !(
#line 8039 "../../src/gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 8042 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_165 (insn, operands);

                case E_DImode:
                  if (GET_MODE (x3) != E_DImode
                      || GET_MODE (x4) != E_DImode)
                    return NULL;
                  if (register_operand (operands[0], E_DImode)
                      && register_no_SP_operand (operands[1], E_DImode)
                      && const_0_to_3_operand (operands[2], E_VOIDmode)
                      && const_int_operand (operands[3], E_VOIDmode)
                      && ((
#line 8039 "../../src/gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8042 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_167 (insn, operands);
                  if (!nonimmediate_operand (operands[0], E_DImode)
                      || !register_operand (operands[1], E_DImode)
                      || !const_int_operand (operands[2], E_QImode)
                      || !const_scalar_int_operand (operands[3], E_DImode)
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
                  return gen_split_468 (insn, operands);

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
                  return gen_split_471 (insn, operands);

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
                  return gen_split_432 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_435 (insn, operands);

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
              return gen_split_444 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_450 (insn, operands);

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
              return gen_split_474 (insn, operands);

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
              return gen_split_480 (insn, operands);

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
              return gen_split_447 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_453 (insn, operands);

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
              return gen_split_477 (insn, operands);

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
              return gen_split_483 (insn, operands);

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
          return gen_split_438 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_441 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_456 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_462 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_459 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_465 (insn, operands);

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
          return gen_split_486 (insn, operands);

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
          return gen_split_489 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_17 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    {
      x6 = XEXP (x4, 1);
      switch (XWINT (x6, 0))
        {
        case -65536L:
          if (register_operand (operands[0], E_SImode)
              && GET_MODE (x4) == E_SImode
              && 
#line 12860 "../../src/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)))
            return gen_split_314 (insn, operands);
          break;

        case -256L:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (any_QIreg_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && 
#line 12870 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_316 (insn, operands);
              break;

            case E_SImode:
              if (any_QIreg_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && 
#line 12870 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_317 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case -65281L:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (QIreg_operand (operands[0], E_HImode)
                  && GET_MODE (x4) == E_HImode
                  && 
#line 12880 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_319 (insn, operands);
              break;

            case E_SImode:
              if (QIreg_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && 
#line 12880 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
                return gen_split_320 (insn, operands);
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
    }
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (GET_MODE (x4) != E_HImode
          || !const_int_operand (operands[2], E_HImode))
        return NULL;
      if (QIreg_operand (operands[0], E_HImode)
          && register_operand (operands[1], E_HImode)
          && 
#line 13261 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
        return gen_split_367 (insn, operands);
      if (!any_QIreg_operand (operands[0], E_HImode)
          || !general_operand (operands[1], E_HImode)
          || !
#line 13290 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_370 (insn, operands);

    case E_SImode:
      if (GET_MODE (x4) != E_SImode
          || !const_int_operand (operands[2], E_SImode))
        return NULL;
      if (QIreg_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_SImode)
          && 
#line 13261 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))))
        return gen_split_368 (insn, operands);
      if (!any_QIreg_operand (operands[0], E_SImode)
          || !general_operand (operands[1], E_SImode)
          || !
#line 13290 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_371 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_24 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0))
    return NULL;
  x4 = XVECEXP (x1, 0, 1);
  if (pattern229 (x4, 
E_CCmode, 
17) != 0)
    return NULL;
  switch (pattern1037 (x2))
    {
    case 0:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1035 (x2))
            {
            case 0:
              if (
#line 7549 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])))
                return gen_split_137 (insn, operands);
              break;

            case 1:
              if (
#line 7549 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])))
                return gen_split_138 (insn, operands);
              break;

            case 2:
              if ((
#line 7549 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !rtx_equal_p (operands[0], operands[1])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_139 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1822 (x2))
        {
        case 0:
          if (!
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
            return NULL;
          return gen_split_140 (insn, operands);

        case 1:
          if (!
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
            return NULL;
          return gen_split_142 (insn, operands);

        case 2:
          if (!(
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (PLUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_144 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) == SUBREG)
        {
          switch (pattern1822 (x2))
            {
            case 0:
              if (
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
                return gen_split_141 (insn, operands);
              break;

            case 1:
              if (
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))))
                return gen_split_143 (insn, operands);
              break;

            case 2:
              if ((
#line 7596 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| (MINUS == PLUS && rtx_equal_p (operands[0], operands[2])))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_145 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[2] = x6;
      if (!general_operand (operands[2], E_QImode))
        return NULL;
      switch (pattern1035 (x2))
        {
        case 0:
          if (!
#line 8375 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_183 (insn, operands);

        case 1:
          if (!
#line 8375 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_184 (insn, operands);

        case 2:
          if (!(
#line 8375 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_185 (insn, operands);

        default:
          return NULL;
        }

    case 2:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1035 (x2))
            {
            case 0:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_331 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_334 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_337 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1822 (x2))
        {
        case 0:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_349 (insn, operands);

        case 1:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_352 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_355 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1035 (x2))
            {
            case 0:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_332 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_335 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_338 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1822 (x2))
        {
        case 0:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_350 (insn, operands);

        case 1:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_353 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_356 (insn, operands);

        default:
          return NULL;
        }

    case 4:
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 1);
      operands[2] = x6;
      if (general_operand (operands[2], E_QImode))
        {
          switch (pattern1035 (x2))
            {
            case 0:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_333 (insn, operands);
              break;

            case 1:
              if (
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                return gen_split_336 (insn, operands);
              break;

            case 2:
              if ((
#line 13094 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_339 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x6) != SUBREG)
        return NULL;
      switch (pattern1822 (x2))
        {
        case 0:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_351 (insn, operands);

        case 1:
          if (!
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))))
            return NULL;
          return gen_split_354 (insn, operands);

        case 2:
          if (!(
#line 13192 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_357 (insn, operands);

        default:
          return NULL;
        }

    case 5:
      if (!
#line 14498 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_494 (insn, operands);

    case 6:
      if (!
#line 14498 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_495 (insn, operands);

    case 7:
      if (!(
#line 14498 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_496 (insn, operands);

    case 8:
      if (!
#line 16527 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_586 (insn, operands);

    case 9:
      if (!
#line 16527 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
        return NULL;
      return gen_split_587 (insn, operands);

    case 10:
      if (!(
#line 16527 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_588 (insn, operands);

    case 11:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (pattern1233 (x3))
        {
        case 0:
          if (((
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16759 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_605 (insn, operands);
          break;

        case 1:
          if (((
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16759 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_607 (insn, operands);
          break;

        default:
          break;
        }
      x5 = XEXP (x3, 0);
      if (GET_MODE (x5) != E_QImode)
        return NULL;
      switch (pattern1036 (x2))
        {
        case 0:
          if (!
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_632 (insn, operands);

        case 1:
          if (!
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_634 (insn, operands);

        case 2:
          if (!(
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_636 (insn, operands);

        default:
          return NULL;
        }

    case 12:
      x7 = XEXP (x2, 0);
      operands[0] = x7;
      switch (pattern1233 (x3))
        {
        case 0:
          if (((
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16759 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_606 (insn, operands);
          break;

        case 1:
          if (((
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16759 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_608 (insn, operands);
          break;

        default:
          break;
        }
      x5 = XEXP (x3, 0);
      if (GET_MODE (x5) != E_QImode)
        return NULL;
      switch (pattern1036 (x2))
        {
        case 0:
          if (!
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_633 (insn, operands);

        case 1:
          if (!
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_635 (insn, operands);

        case 2:
          if (!(
#line 17803 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_637 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_32 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern404 (x1))
    {
    case 0:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_695 (insn, operands);

    case 1:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_697 (insn, operands);

    case 2:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_699 (insn, operands);

    case 3:
      if (!((
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_701 (insn, operands);

    case 4:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_727 (insn, operands);

    case 5:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_729 (insn, operands);

    case 6:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_731 (insn, operands);

    case 7:
      if (!((
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_733 (insn, operands);

    case 8:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_759 (insn, operands);

    case 9:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_761 (insn, operands);

    case 10:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_763 (insn, operands);

    case 11:
      if (!((
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_765 (insn, operands);

    case 12:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      switch (pattern1179 (x4))
        {
        case 0:
          if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_679 (insn, operands);
          break;

        case 1:
          if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_681 (insn, operands);
          break;

        case 2:
          if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_683 (insn, operands);
          break;

        case 3:
          if (((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_685 (insn, operands);
          break;

        case 4:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_711 (insn, operands);
          break;

        case 5:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_713 (insn, operands);
          break;

        case 6:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_715 (insn, operands);
          break;

        case 7:
          if (((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_717 (insn, operands);
          break;

        case 8:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_743 (insn, operands);
          break;

        case 9:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_745 (insn, operands);
          break;

        case 10:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_747 (insn, operands);
          break;

        case 11:
          if (((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_749 (insn, operands);
          break;

        case 12:
          x5 = XEXP (x4, 1);
          operands[2] = x5;
          switch (pattern1338 (x4))
            {
            case 0:
              if (
#line 18551 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)))
                return gen_split_786 (insn, operands);
              break;

            case 1:
              if ((
#line 18551 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_787 (insn, operands);
              break;

            default:
              break;
            }
          if (XWINT (x5, 0) == 8L
              && QIreg_operand (operands[0], E_HImode)
              && GET_MODE (x4) == E_HImode)
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 18723 "../../src/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))))
                return gen_split_795 (insn, operands);
            }
          break;

        default:
          break;
        }
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern1180 (x2))
        {
        case 0:
          if (!(
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_791 (insn, operands);

        case 1:
          if (!(
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_793 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_42 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 3:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 51:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x5 = XVECEXP (x2, 0, 1);
          operands[2] = x5;
          x6 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x6))
            {
            case LT:
              switch (pattern735 (x2))
                {
                case 0:
                  if ((
#line 26786 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && 
#line 26791 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_955 (insn, operands);
                  if (!(
#line 26807 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && 
#line 26812 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_957 (insn, operands);

                case 1:
                  if ((
#line 26786 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[3])
      && rtx_equal_p (operands[2], operands[4]))
  && ix86_pre_reload_split ()) && 
#line 26791 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_956 (insn, operands);
                  if (!(
#line 26807 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
  && (rtx_equal_p (operands[1], operands[4])
      && rtx_equal_p (operands[2], operands[3]))
  && ix86_pre_reload_split ()) && 
#line 26812 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_958 (insn, operands);

                default:
                  return NULL;
                }

            case EQ:
              switch (pattern737 (x2))
                {
                case 0:
                  if (!(
#line 4338 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4340 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1062 (insn, operands);

                case 1:
                  if (!(
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1065 (insn, operands);

                case 2:
                  if (!(
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1066 (insn, operands);

                case 3:
                  if (!(
#line 4414 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4416 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1067 (insn, operands);

                default:
                  return NULL;
                }

            case SUBREG:
              switch (pattern848 (x2))
                {
                case 0:
                  if (!(
#line 4366 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4368 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1063 (insn, operands);

                case 1:
                  if (!(
#line 4366 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 4368 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1064 (insn, operands);

                case 2:
                  if (!(
#line 4442 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 4444 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return NULL;
                  return gen_split_1068 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 59:
          switch (pattern590 (x2))
            {
            case 0:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1476 (insn, operands);

            case 1:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1478 (insn, operands);

            case 2:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1484 (insn, operands);

            case 3:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1480 (insn, operands);

            case 4:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1482 (insn, operands);

            case 5:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 3) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1486 (insn, operands);

            default:
              return NULL;
            }

        case 157:
          switch (pattern590 (x2))
            {
            case 0:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1477 (insn, operands);

            case 1:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1479 (insn, operands);

            case 2:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1485 (insn, operands);

            case 3:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1481 (insn, operands);

            case 4:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1483 (insn, operands);

            case 5:
              if (!((
#line 4788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()
  && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)
  && (INTVAL (operands[4]) & 1) == 0) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4792 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1487 (insn, operands);

            default:
              return NULL;
            }

        case 121:
          if (pattern301 (x2) != 0
              || !
#line 23297 "../../src/gcc/config/i386/sse.md"
((TARGET_SSSE3 && reload_completed
    && SSE_REGNO_P (REGNO (operands[0])))
   || operands[3] == const0_rtx
   || INTVAL (operands[3]) == 64))
            return NULL;
          return gen_split_3472 (insn, operands);

        default:
          return NULL;
        }

    case 2:
      switch (XINT (x2, 1))
        {
        case 57:
          switch (pattern65 (x1))
            {
            case 0:
              if (!(
#line 4792 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4797 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                return NULL;
              return gen_split_1103 (insn, operands);

            case 1:
              if (!(
#line 4831 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && 
#line 4833 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1105 (insn, operands);

            default:
              return NULL;
            }

        case 130:
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != REG
              || REGNO (x3) != 17)
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case AND:
              switch (pattern602 (x1))
                {
                case 0:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3578 (insn, operands);

                case 1:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3579 (insn, operands);

                case 2:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3580 (insn, operands);

                case 3:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3581 (insn, operands);

                case 4:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3582 (insn, operands);

                case 5:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3583 (insn, operands);

                case 6:
                  if (!(
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3584 (insn, operands);

                case 7:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3585 (insn, operands);

                case 8:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3586 (insn, operands);

                case 9:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3587 (insn, operands);

                case 10:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3588 (insn, operands);

                case 11:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3589 (insn, operands);

                case 12:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3590 (insn, operands);

                case 13:
                  if (!((
#line 25386 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ix86_pre_reload_split ()) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 25389 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3591 (insn, operands);

                default:
                  return NULL;
                }

            case REG:
            case SUBREG:
              operands[0] = x4;
              if (GET_MODE (x3) != E_CCCmode
                  || GET_MODE (x2) != E_CCCmode)
                return NULL;
              x5 = XVECEXP (x2, 0, 1);
              operands[1] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_V16QImode:
                  if (!register_operand (operands[0], E_V16QImode)
                      || !register_operand (operands[1], E_V16QImode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3592 (insn, operands);

                case E_V8HImode:
                  if (!register_operand (operands[0], E_V8HImode)
                      || !register_operand (operands[1], E_V8HImode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3593 (insn, operands);

                case E_V4SImode:
                  if (!register_operand (operands[0], E_V4SImode)
                      || !register_operand (operands[1], E_V4SImode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3594 (insn, operands);

                case E_V2DImode:
                  if (!register_operand (operands[0], E_V2DImode)
                      || !register_operand (operands[1], E_V2DImode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3595 (insn, operands);

                case E_V1TImode:
                  if (!register_operand (operands[0], E_V1TImode)
                      || !register_operand (operands[1], E_V1TImode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3596 (insn, operands);

                case E_V4SFmode:
                  if (!register_operand (operands[0], E_V4SFmode)
                      || !register_operand (operands[1], E_V4SFmode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3597 (insn, operands);

                case E_V2DFmode:
                  if (!register_operand (operands[0], E_V2DFmode)
                      || !register_operand (operands[1], E_V2DFmode)
                      || !
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])))
                    return NULL;
                  return gen_split_3598 (insn, operands);

                case E_V32QImode:
                  if (!register_operand (operands[0], E_V32QImode)
                      || !register_operand (operands[1], E_V32QImode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3599 (insn, operands);

                case E_V16HImode:
                  if (!register_operand (operands[0], E_V16HImode)
                      || !register_operand (operands[1], E_V16HImode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3600 (insn, operands);

                case E_V8SImode:
                  if (!register_operand (operands[0], E_V8SImode)
                      || !register_operand (operands[1], E_V8SImode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3601 (insn, operands);

                case E_V4DImode:
                  if (!register_operand (operands[0], E_V4DImode)
                      || !register_operand (operands[1], E_V4DImode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3602 (insn, operands);

                case E_V2TImode:
                  if (!register_operand (operands[0], E_V2TImode)
                      || !register_operand (operands[1], E_V2TImode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3603 (insn, operands);

                case E_V8SFmode:
                  if (!register_operand (operands[0], E_V8SFmode)
                      || !register_operand (operands[1], E_V8SFmode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3604 (insn, operands);

                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || !register_operand (operands[1], E_V4DFmode)
                      || !(
#line 25399 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && rtx_equal_p (operands[0], operands[1])) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return NULL;
                  return gen_split_3605 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case 1:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 49:
          if (GET_MODE (x2) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              operands[1] = x4;
              if (register_operand (operands[1], E_V8QImode)
                  && 
#line 6829 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed
   && SSE_REGNO_P (REGNO (operands[1]))))
                return gen_split_1128 (insn, operands);
              if (GET_CODE (x4) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x4), 0))
                return NULL;
              x7 = XEXP (x4, 0);
              switch (GET_CODE (x7))
                {
                case VEC_MERGE:
                  switch (pattern1092 (x4))
                    {
                    case 0:
                      if (!((
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21999 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3408 (insn, operands);

                    case 1:
                      if (!(
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 21999 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3409 (insn, operands);

                    case 2:
                      if (!((
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21999 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3410 (insn, operands);

                    case 3:
                      if (!((
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 21999 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3411 (insn, operands);

                    default:
                      return NULL;
                    }

                case ASHIFTRT:
                  switch (pattern1093 (x4))
                    {
                    case 0:
                      if (!((
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22062 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3428 (insn, operands);

                    case 1:
                      if (!(
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 22062 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3429 (insn, operands);

                    case 2:
                      if (!((
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22062 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3430 (insn, operands);

                    case 3:
                      if (!((
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22062 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return NULL;
                      return gen_split_3431 (insn, operands);

                    default:
                      return NULL;
                    }

                case NOT:
                  x8 = XEXP (x7, 0);
                  operands[1] = x8;
                  if (!register_operand (operands[1], E_VOIDmode))
                    return NULL;
                  switch (GET_MODE (x4))
                    {
                    case E_V32QImode:
                      if (!(
#line 22199 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 32) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                        return NULL;
                      return gen_split_3444 (insn, operands);

                    case E_V16QImode:
                      if (!
#line 22199 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[1])) == 16))
                        return NULL;
                      return gen_split_3445 (insn, operands);

                    default:
                      return NULL;
                    }

                default:
                  return NULL;
                }

            case LT:
              switch (pattern763 (x4))
                {
                case 0:
                  if (!((
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21975 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3404 (insn, operands);

                case 1:
                  if (!(
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 21975 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3405 (insn, operands);

                case 2:
                  if (!((
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 21975 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3406 (insn, operands);

                case 3:
                  if (!((
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 21975 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_3407 (insn, operands);

                case 4:
                  if (!((
#line 22225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22227 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3446 (insn, operands);

                case 5:
                  if (!(
#line 22225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 22227 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3447 (insn, operands);

                default:
                  return NULL;
                }

            case NOT:
              x7 = XEXP (x4, 0);
              operands[1] = x7;
              switch (GET_MODE (x4))
                {
                case E_V32QImode:
                  if (!register_operand (operands[1], E_V32QImode)
                      || !(
#line 22177 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return NULL;
                  return gen_split_3442 (insn, operands);

                case E_V16QImode:
                  if (!register_operand (operands[1], E_V16QImode)
                      || !
#line 22177 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return NULL;
                  return gen_split_3443 (insn, operands);

                default:
                  return NULL;
                }

            case VEC_MERGE:
              switch (pattern765 (x4))
                {
                case 0:
                  if (!((
#line 22253 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22255 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3448 (insn, operands);

                case 1:
                  if (!(
#line 22253 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 22255 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3449 (insn, operands);

                case 2:
                  if (!(
#line 22381 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22383 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3457 (insn, operands);

                case 3:
                  if (!(
#line 22395 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 22397 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3458 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 172:
          if (GET_MODE (x2) != E_V2SImode
              || !register_operand (operands[0], E_V2SImode))
            return NULL;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 8467 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
            return NULL;
          return gen_split_1520 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_69 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1670 (insn, operands);

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
          return gen_split_1697 (insn, operands);

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
          return gen_split_1724 (insn, operands);

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
          return gen_split_1751 (insn, operands);

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
          return gen_split_1778 (insn, operands);

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
          return gen_split_1805 (insn, operands);

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
          return gen_split_1832 (insn, operands);

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
          return gen_split_1859 (insn, operands);

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
          return gen_split_1886 (insn, operands);

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
          return gen_split_1913 (insn, operands);

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
          return gen_split_1940 (insn, operands);

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
          return gen_split_1967 (insn, operands);

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
          return gen_split_1673 (insn, operands);

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
          return gen_split_1700 (insn, operands);

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
          return gen_split_1727 (insn, operands);

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
          return gen_split_1754 (insn, operands);

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
          return gen_split_1781 (insn, operands);

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
          return gen_split_1808 (insn, operands);

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
          return gen_split_1835 (insn, operands);

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
          return gen_split_1862 (insn, operands);

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
          return gen_split_1889 (insn, operands);

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
          return gen_split_1916 (insn, operands);

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
          return gen_split_1943 (insn, operands);

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
          return gen_split_1970 (insn, operands);

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
          return gen_split_1676 (insn, operands);

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
          return gen_split_1703 (insn, operands);

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
          return gen_split_1730 (insn, operands);

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
          return gen_split_1757 (insn, operands);

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
          return gen_split_1784 (insn, operands);

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
          return gen_split_1811 (insn, operands);

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
          return gen_split_1838 (insn, operands);

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
          return gen_split_1865 (insn, operands);

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
          return gen_split_1892 (insn, operands);

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
          return gen_split_1919 (insn, operands);

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
          return gen_split_1946 (insn, operands);

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
          return gen_split_1973 (insn, operands);

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
          return gen_split_2960 (insn, operands);

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
          return gen_split_2969 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2978 (insn, operands);

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
          return gen_split_2987 (insn, operands);

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
          return gen_split_2996 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3005 (insn, operands);

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
          return gen_split_3014 (insn, operands);

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
          return gen_split_3023 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3032 (insn, operands);

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
          return gen_split_3041 (insn, operands);

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
          return gen_split_3050 (insn, operands);

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3059 (insn, operands);

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
          return gen_split_2318 (insn, operands);

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
          return gen_split_2345 (insn, operands);

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
          return gen_split_2372 (insn, operands);

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
          return gen_split_2399 (insn, operands);

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
          return gen_split_2426 (insn, operands);

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
          return gen_split_2453 (insn, operands);

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
          return gen_split_2480 (insn, operands);

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
          return gen_split_2507 (insn, operands);

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
          return gen_split_2534 (insn, operands);

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
          return gen_split_2561 (insn, operands);

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
          return gen_split_2588 (insn, operands);

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
          return gen_split_2615 (insn, operands);

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
          return gen_split_2321 (insn, operands);

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
          return gen_split_2348 (insn, operands);

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
          return gen_split_2375 (insn, operands);

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
          return gen_split_2402 (insn, operands);

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
          return gen_split_2429 (insn, operands);

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
          return gen_split_2456 (insn, operands);

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
          return gen_split_2483 (insn, operands);

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
          return gen_split_2510 (insn, operands);

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
          return gen_split_2537 (insn, operands);

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
          return gen_split_2564 (insn, operands);

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
          return gen_split_2591 (insn, operands);

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
          return gen_split_2618 (insn, operands);

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
          return gen_split_2324 (insn, operands);

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
          return gen_split_2351 (insn, operands);

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
          return gen_split_2378 (insn, operands);

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
          return gen_split_2405 (insn, operands);

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
          return gen_split_2432 (insn, operands);

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
          return gen_split_2459 (insn, operands);

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
          return gen_split_2486 (insn, operands);

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
          return gen_split_2513 (insn, operands);

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
          return gen_split_2540 (insn, operands);

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
          return gen_split_2567 (insn, operands);

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
          return gen_split_2594 (insn, operands);

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
          return gen_split_2621 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_77 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case VEC_SELECT:
      if (GET_MODE (x3) != E_DFmode)
        return NULL;
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) != PARALLEL
          || XVECLEN (x4, 0) != 1)
        return NULL;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !memory_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !register_operand (operands[1], E_DFmode))
        return NULL;
      x6 = XEXP (x3, 0);
      if (!rtx_equal_p (x6, operands[0])
          || !
#line 14849 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_3176 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x3, 0) != 1
          || XINT (x3, 1) != 147)
        return NULL;
      x7 = XVECEXP (x3, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern1031 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !(
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28826 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3766 (insn, operands);

        case E_V8SFmode:
          if (pattern1031 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !(
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28826 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3767 (insn, operands);

        case E_V4DFmode:
          if (pattern1031 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !(
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 28826 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3768 (insn, operands);

        case E_V16SImode:
          if (pattern1031 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !((
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30170 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3814 (insn, operands);

        case E_V16SFmode:
          if (pattern1031 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !((
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30170 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3815 (insn, operands);

        case E_V8DFmode:
          if (pattern1031 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !((
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30170 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3816 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_80 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case AND:
      res = split_66 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case IOR:
      res = split_73 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case XOR:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          res = split_68 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case IOR:
          res = split_69 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case XOR:
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
                  if (((
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
                    return gen_split_1679 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_1706 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_1733 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_1760 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_1787 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_1814 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_1841 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_1868 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_1895 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_1922 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_1949 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_1976 (insn, operands);
                  break;

                case 12:
                  if (((
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
                    return gen_split_1682 (insn, operands);
                  break;

                case 13:
                  if (((
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
                    return gen_split_1709 (insn, operands);
                  break;

                case 14:
                  if ((
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
                    return gen_split_1736 (insn, operands);
                  break;

                case 15:
                  if (((
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
                    return gen_split_1763 (insn, operands);
                  break;

                case 16:
                  if (((
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
                    return gen_split_1790 (insn, operands);
                  break;

                case 17:
                  if ((
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
                    return gen_split_1817 (insn, operands);
                  break;

                case 18:
                  if (((
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
                    return gen_split_1844 (insn, operands);
                  break;

                case 19:
                  if (((
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
                    return gen_split_1871 (insn, operands);
                  break;

                case 20:
                  if ((
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
                    return gen_split_1898 (insn, operands);
                  break;

                case 21:
                  if (((
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
                    return gen_split_1925 (insn, operands);
                  break;

                case 22:
                  if (((
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
                    return gen_split_1952 (insn, operands);
                  break;

                case 23:
                  if ((
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
                    return gen_split_1979 (insn, operands);
                  break;

                case 24:
                  if (((
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
                    return gen_split_1685 (insn, operands);
                  break;

                case 25:
                  if (((
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
                    return gen_split_1712 (insn, operands);
                  break;

                case 26:
                  if ((
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
                    return gen_split_1739 (insn, operands);
                  break;

                case 27:
                  if (((
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
                    return gen_split_1766 (insn, operands);
                  break;

                case 28:
                  if (((
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
                    return gen_split_1793 (insn, operands);
                  break;

                case 29:
                  if ((
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
                    return gen_split_1820 (insn, operands);
                  break;

                case 30:
                  if (((
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
                    return gen_split_1847 (insn, operands);
                  break;

                case 31:
                  if (((
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
                    return gen_split_1874 (insn, operands);
                  break;

                case 32:
                  if ((
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
                    return gen_split_1901 (insn, operands);
                  break;

                case 33:
                  if (((
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
                    return gen_split_1928 (insn, operands);
                  break;

                case 34:
                  if (((
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
                    return gen_split_1955 (insn, operands);
                  break;

                case 35:
                  if ((
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
                    return gen_split_1982 (insn, operands);
                  break;

                case 36:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2963 (insn, operands);
                  break;

                case 37:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2972 (insn, operands);
                  break;

                case 38:
                  if ((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2981 (insn, operands);
                  break;

                case 39:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2990 (insn, operands);
                  break;

                case 40:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_2999 (insn, operands);
                  break;

                case 41:
                  if ((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3008 (insn, operands);
                  break;

                case 42:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3017 (insn, operands);
                  break;

                case 43:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3026 (insn, operands);
                  break;

                case 44:
                  if ((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3035 (insn, operands);
                  break;

                case 45:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3044 (insn, operands);
                  break;

                case 46:
                  if (((
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3053 (insn, operands);
                  break;

                case 47:
                  if ((
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3062 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case AND:
              switch (pattern534 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2327 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2354 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2381 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2408 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2435 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2462 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2489 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2516 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2543 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2570 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2597 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2624 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case IOR:
              switch (pattern534 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2330 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2357 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2384 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2411 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2438 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2465 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2492 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2519 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2546 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2573 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2600 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2627 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case XOR:
              switch (pattern534 (x2))
                {
                case 0:
                  if (((
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
                    return gen_split_2333 (insn, operands);
                  break;

                case 1:
                  if (((
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
                    return gen_split_2360 (insn, operands);
                  break;

                case 2:
                  if ((
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
                    return gen_split_2387 (insn, operands);
                  break;

                case 3:
                  if (((
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
                    return gen_split_2414 (insn, operands);
                  break;

                case 4:
                  if (((
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
                    return gen_split_2441 (insn, operands);
                  break;

                case 5:
                  if ((
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
                    return gen_split_2468 (insn, operands);
                  break;

                case 6:
                  if (((
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
                    return gen_split_2495 (insn, operands);
                  break;

                case 7:
                  if (((
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
                    return gen_split_2522 (insn, operands);
                  break;

                case 8:
                  if ((
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
                    return gen_split_2549 (insn, operands);
                  break;

                case 9:
                  if (((
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
                    return gen_split_2576 (insn, operands);
                  break;

                case 10:
                  if (((
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
                    return gen_split_2603 (insn, operands);
                  break;

                case 11:
                  if ((
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
                    return gen_split_2630 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
          break;

        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[1] = x3;
          x5 = XEXP (x2, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern935 (x2, 
E_V16SImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3328 (insn, operands);
              break;

            case E_V8DImode:
              if (pattern935 (x2, 
E_V8DImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3329 (insn, operands);
              break;

            case E_V64QImode:
              if (pattern935 (x2, 
E_V64QImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3330 (insn, operands);
              break;

            case E_V32QImode:
              if (pattern935 (x2, 
E_V32QImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3331 (insn, operands);
              break;

            case E_V16QImode:
              if (pattern935 (x2, 
E_V16QImode) == 0
                  && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || QImode == SImode
       || QImode == DImode)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3332 (insn, operands);
              break;

            case E_V32HImode:
              if (pattern935 (x2, 
E_V32HImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3333 (insn, operands);
              break;

            case E_V16HImode:
              if (pattern935 (x2, 
E_V16HImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3334 (insn, operands);
              break;

            case E_V8HImode:
              if (pattern935 (x2, 
E_V8HImode) == 0
                  && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || HImode == SImode
       || HImode == DImode)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3335 (insn, operands);
              break;

            case E_V8SImode:
              if (pattern935 (x2, 
E_V8SImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3336 (insn, operands);
              break;

            case E_V4SImode:
              if (pattern935 (x2, 
E_V4SImode) == 0
                  && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || SImode == SImode
       || SImode == DImode)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3337 (insn, operands);
              break;

            case E_V4DImode:
              if (pattern935 (x2, 
E_V4DImode) == 0
                  && ((
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3338 (insn, operands);
              break;

            case E_V2DImode:
              if (pattern935 (x2, 
E_V2DImode) == 0
                  && (
#line 18371 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)
   && (!false
       || DImode == SImode
       || DImode == DImode)) && 
#line 18382 "../../src/gcc/config/i386/sse.md"
( reload_completed && !REG_P (operands[1]) && !false
   && optimize_insn_for_speed_p ())))
                return gen_split_3339 (insn, operands);
              break;

            default:
              break;
            }
          if (GET_CODE (x3) == VEC_DUPLICATE)
            {
              switch (pattern595 (x2))
                {
                case 0:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return gen_split_3372 (insn, operands);
                  break;

                case 1:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return gen_split_3373 (insn, operands);
                  break;

                case 2:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3374 (insn, operands);
                  break;

                case 3:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3375 (insn, operands);
                  break;

                case 4:
                  if (
#line 18676 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3376 (insn, operands);
                  break;

                case 5:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3377 (insn, operands);
                  break;

                case 6:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3378 (insn, operands);
                  break;

                case 7:
                  if (
#line 18676 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3379 (insn, operands);
                  break;

                case 8:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3380 (insn, operands);
                  break;

                case 9:
                  if (
#line 18676 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3381 (insn, operands);
                  break;

                case 10:
                  if ((
#line 18676 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return gen_split_3382 (insn, operands);
                  break;

                case 11:
                  if (
#line 18676 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
                    return gen_split_3383 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x2;
  switch (pattern193 ())
    {
    case 0:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1647 (insn, operands);
      break;

    case 1:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1648 (insn, operands);
      break;

    case 2:
      if ((
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1649 (insn, operands);
      break;

    case 3:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1650 (insn, operands);
      break;

    case 4:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1651 (insn, operands);
      break;

    case 5:
      if ((
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1652 (insn, operands);
      break;

    case 6:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1653 (insn, operands);
      break;

    case 7:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1654 (insn, operands);
      break;

    case 8:
      if ((
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1655 (insn, operands);
      break;

    case 9:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1656 (insn, operands);
      break;

    case 10:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1657 (insn, operands);
      break;

    case 11:
      if (((
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return gen_split_1658 (insn, operands);
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case AND:
      return split_76 (x1, insn);

    case IOR:
      return split_75 (x1, insn);

    case XOR:
      return split_74 (x1, insn);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_31 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_SImode:
      if (!memory_operand (x2, E_SImode))
        return NULL;
      operands[1] = x2;
      res = peephole2_30 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      operands[0] = x2;
      if (!
#line 27802 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_258 (insn, operands);

    case E_DImode:
      operands[1] = x2;
      if (!memory_operand (operands[1], E_DImode))
        return NULL;
      if (peep2_current_count >= 2)
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (GET_CODE (x3) == SET)
            {
              x4 = XEXP (x3, 1);
              if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  x5 = XEXP (x3, 0);
                  operands[2] = x5;
                  if (memory_operand (operands[2], E_DImode))
                    {
                      if (peep2_current_count >= 3)
                        {
                          x6 = PATTERN (peep2_next_insn (2));
                          if (pattern1259 (x6, 
E_DImode) == 0
                              && (
#line 27027 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            {
                              *pmatch_len_ = 3;
                              res = gen_peephole2_218 (insn, operands);
                              if (res != NULL_RTX)
                                return res;
                            }
                        }
                      if ((
#line 27043 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_220 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
            }
        }
      if (!(
#line 27056 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_222 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_37 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case COMPARE:
      operands[1] = x2;
      if (!compare_operator (operands[1], E_VOIDmode))
        return NULL;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != CONST_INT
          || !flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x4;
          if (memory_operand (operands[2], E_SImode)
              && XWINT (x3, 0) == 0L
              && 
#line 27833 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_262 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!register_operand (operands[2], E_VOIDmode))
            return NULL;
          operands[3] = x3;
          if (!const_int_operand (operands[3], E_VOIDmode)
              || !
#line 28736 "../../src/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_387 (insn, operands);

        case AND:
          if (XWINT (x3, 0) != 0L)
            return NULL;
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (register_operand (operands[2], E_SImode)
                  && immediate_operand (operands[3], E_SImode)
                  && 
#line 27875 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (REGNO (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_266 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case E_QImode:
              if (register_operand (operands[2], E_QImode)
                  && immediate_operand (operands[3], E_QImode)
                  && 
#line 27895 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_267 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0)
              || GET_MODE (x5) != E_QImode)
            return NULL;
          x7 = XEXP (x5, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTRACT:
            case ZERO_EXTRACT:
              operands[4] = x7;
              x8 = XEXP (x7, 1);
              if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return NULL;
              x9 = XEXP (x7, 2);
              if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
                  || GET_MODE (x4) != E_QImode)
                return NULL;
              x10 = XEXP (x7, 0);
              operands[2] = x10;
              if (!int248_register_operand (operands[2], E_VOIDmode))
                return NULL;
              operands[3] = x6;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return NULL;
              switch (GET_MODE (operands[4]))
                {
                case E_HImode:
                  if (!extract_operator (operands[4], E_HImode)
                      || !
#line 27917 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_268 (insn, operands);

                case E_SImode:
                  if (!extract_operator (operands[4], E_SImode)
                      || !
#line 27917 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_269 (insn, operands);

                case E_DImode:
                  if (!extract_operator (operands[4], E_DImode)
                      || !(
#line 27917 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && REGNO (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  *pmatch_len_ = 0;
                  return gen_peephole2_270 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case NOT:
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!nonimmediate_gr_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_gr_operand (operands[1], E_QImode)
              || !
#line 27851 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_263 (insn, operands);

        case E_HImode:
          if (!nonimmediate_gr_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonimmediate_gr_operand (operands[1], E_HImode)
              || !
#line 27851 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_264 (insn, operands);

        case E_SImode:
          if (!nonimmediate_gr_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !nonimmediate_gr_operand (operands[1], E_SImode)
              || !
#line 27851 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_265 (insn, operands);

        default:
          return NULL;
        }

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
      if (GET_CODE (x2) == CONST_INT)
        {
          res = peephole2_36 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count < 2
          || peep2_current_count < 3)
        return NULL;
      operands[1] = x2;
      x11 = PATTERN (peep2_next_insn (1));
      if (pattern599 (x11, 
4) != 0)
        return NULL;
      x12 = XVECEXP (x11, 0, 1);
      if (GET_CODE (x12) != SET)
        return NULL;
      x13 = XEXP (x12, 1);
      if (GET_CODE (x13) != UNSPEC_VOLATILE
          || XVECLEN (x13, 0) != 1)
        return NULL;
      x14 = XVECEXP (x13, 0, 0);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x15 = XVECEXP (x11, 0, 2);
      if (GET_CODE (x15) != SET)
        return NULL;
      x16 = XEXP (x15, 0);
      if (GET_CODE (x16) != REG
          || REGNO (x16) != 17)
        return NULL;
      x17 = XVECEXP (x11, 0, 0);
      x18 = XEXP (x17, 1);
      x19 = XVECEXP (x18, 0, 0);
      operands[2] = x19;
      x20 = XVECEXP (x18, 0, 2);
      operands[3] = x20;
      if (pattern1692 (x11) != 0)
        return NULL;
      x21 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x21) != SET)
        return NULL;
      x22 = XEXP (x21, 1);
      if (GET_CODE (x22) != COMPARE)
        return NULL;
      x23 = XEXP (x21, 0);
      if (GET_CODE (x23) != REG
          || REGNO (x23) != 17)
        return NULL;
      x24 = XEXP (x22, 0);
      operands[5] = x24;
      x25 = XEXP (x22, 1);
      operands[6] = x25;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || XINT (x18, 1) != 109
              || GET_MODE (x18) != E_HImode
              || pattern1861 (x11, 
E_HImode) != 0
              || !
#line 521 "../../src/gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_404 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x18) != E_SImode)
            return NULL;
          if (XINT (x18, 1) == 109
              && general_operand (operands[1], E_SImode)
              && pattern1861 (x11, 
E_SImode) == 0
              && 
#line 521 "../../src/gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_405 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (XINT (x18, 1) != 112
              || pattern1859 (x11, 
E_SImode) != 0)
            return NULL;
          if (
#line 1149 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[5])
   && rtx_equal_p (operands[1], operands[6])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_423 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4)
            return NULL;
          x26 = PATTERN (peep2_next_insn (3));
          switch (pattern1881 (x26))
            {
            case 0:
              if (!
#line 1191 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_425 (insn, operands);

            case 1:
              if (!
#line 1249 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_427 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x18) != E_DImode)
            return NULL;
          if (XINT (x18, 1) == 109
              && general_operand (operands[1], E_DImode)
              && pattern1861 (x11, 
E_DImode) == 0
              && (
#line 521 "../../src/gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_406 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (XINT (x18, 1) != 112
              || pattern1859 (x11, 
E_DImode) != 0)
            return NULL;
          if (
#line 1149 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[5])
   && rtx_equal_p (operands[1], operands[6])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_424 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4)
            return NULL;
          x26 = PATTERN (peep2_next_insn (3));
          switch (pattern1881 (x26))
            {
            case 0:
              if (!
#line 1191 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_426 (insn, operands);

            case 1:
              if (!
#line 1249 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT
   && rtx_equal_p (operands[0], operands[6])
   && rtx_equal_p (operands[1], operands[5])
   && peep2_regno_dead_p (4, FLAGS_REG)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_428 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case PLUS:
      switch (pattern23 (x2))
        {
        case 0:
          x3 = XEXP (x2, 1);
          operands[1] = x3;
          if (x86_64_nonmemory_operand (operands[1], E_SImode))
            {
              x4 = XEXP (x2, 0);
              if (rtx_equal_p (x4, operands[0])
                  && 
#line 28516 "../../src/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_338 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (!x86_64_nonmemory_operand (operands[1], E_SImode)
              || !rtx_equal_p (x3, operands[0])
              || !
#line 28525 "../../src/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_340 (insn, operands);

        case 1:
          x3 = XEXP (x2, 1);
          operands[1] = x3;
          if (x86_64_nonmemory_operand (operands[1], E_DImode))
            {
              x4 = XEXP (x2, 0);
              if (rtx_equal_p (x4, operands[0])
                  && (
#line 28516 "../../src/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_339 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (!x86_64_nonmemory_operand (operands[1], E_DImode)
              || !rtx_equal_p (x3, operands[0])
              || !(
#line 28525 "../../src/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_341 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[0], E_DImode))
        return NULL;
      x4 = XEXP (x2, 0);
      if (GET_MODE (x4) != E_SImode)
        return NULL;
      switch (GET_CODE (x4))
        {
        case PLUS:
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (nonmemory_operand (operands[2], E_SImode)
              && register_operand (operands[1], E_SImode)
              && 
#line 28535 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_342 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!register_operand (operands[2], E_SImode)
              || !nonmemory_operand (operands[1], E_SImode)
              || !
#line 28547 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_343 (insn, operands);

        case MULT:
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!const_int_operand (operands[2], E_SImode)
              || !
#line 28569 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && pow2p_hwi (INTVAL (operands[2]))
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_346 (insn, operands);

        default:
          return NULL;
        }

    case MULT:
      x3 = XEXP (x2, 1);
      operands[1] = x3;
      x4 = XEXP (x2, 0);
      if (!rtx_equal_p (x4, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !const_int_operand (operands[1], E_SImode)
              || !
#line 28558 "../../src/gcc/config/i386/i386.md"
(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_344 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !const_int_operand (operands[1], E_DImode)
              || !(
#line 28558 "../../src/gcc/config/i386/i386.md"
(pow2p_hwi (INTVAL (operands[1]))
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_345 (insn, operands);

        default:
          return NULL;
        }

    case VEC_CONCAT:
      if (peep2_current_count < 2
          || GET_MODE (x2) != E_V2DFmode
          || !sse_reg_operand (operands[0], E_V2DFmode))
        return NULL;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!memory_operand (operands[1], E_DFmode))
        return NULL;
      x3 = XEXP (x2, 1);
      operands[4] = x3;
      if (!const0_operand (operands[4], E_DFmode))
        return NULL;
      x11 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x11) != SET)
        return NULL;
      x27 = XEXP (x11, 1);
      if (GET_CODE (x27) != VEC_CONCAT
          || GET_MODE (x27) != E_V2DFmode)
        return NULL;
      x28 = XEXP (x27, 0);
      if (GET_CODE (x28) != VEC_SELECT
          || GET_MODE (x28) != E_DFmode)
        return NULL;
      x29 = XEXP (x28, 1);
      if (GET_CODE (x29) != PARALLEL
          || XVECLEN (x29, 0) != 1)
        return NULL;
      x30 = XVECEXP (x29, 0, 0);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x31 = XEXP (x11, 0);
      operands[2] = x31;
      if (!sse_reg_operand (operands[2], E_V2DFmode))
        return NULL;
      x32 = XEXP (x27, 1);
      operands[3] = x32;
      if (!memory_operand (operands[3], E_DFmode))
        return NULL;
      x33 = XEXP (x28, 0);
      if (!rtx_equal_p (x33, operands[2])
          || !
#line 1951 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_400 (insn, operands);

    default:
      return NULL;
    }
}
