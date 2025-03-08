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
pattern8 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_mmxmem_operand (operands[1], i1)
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern14 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern17 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern16 (x1); /* [-1, 1] */
}

int
pattern21 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern6 (x3, 
E_DImode); /* [-1, 0] */

    case E_SImode:
      if (pattern6 (x3, 
E_SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern26 (rtx x1)
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
    case E_V32HFmode:
      return pattern25 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern25 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern25 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern25 (x3, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern25 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern25 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern25 (x3, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern25 (x3, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern25 (x3, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    case E_V32QImode:
      if (pattern5 (x3, 
E_V32QImode) != 0)
        return -1;
      return 9;

    case E_V16HImode:
      if (pattern5 (x3, 
E_V16HImode) != 0)
        return -1;
      return 10;

    case E_V8SImode:
      if (pattern5 (x3, 
E_V8SImode) != 0)
        return -1;
      return 11;

    case E_V16SImode:
      if (pattern5 (x3, 
E_V16SImode) != 0)
        return -1;
      return 12;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 13;

    case E_V8DImode:
      if (pattern5 (x3, 
E_V8DImode) != 0)
        return -1;
      return 14;

    case E_V4DImode:
      if (pattern5 (x3, 
E_V4DImode) != 0)
        return -1;
      return 15;

    case E_V2DImode:
      if (pattern5 (x3, 
E_V2DImode) != 0)
        return -1;
      return 16;

    case E_V64QImode:
      if (pattern5 (x3, 
E_V64QImode) != 0)
        return -1;
      return 17;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 18;

    case E_V32HImode:
      if (pattern5 (x3, 
E_V32HImode) != 0)
        return -1;
      return 19;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 20;

    case E_V32BFmode:
      if (pattern14 (x3, 
E_V32BFmode) != 0)
        return -1;
      return 21;

    case E_V16BFmode:
      if (pattern14 (x3, 
E_V16BFmode) != 0)
        return -1;
      return 22;

    case E_V8BFmode:
      if (pattern14 (x3, 
E_V8BFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern52 (rtx x1)
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
  if (!const_int_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!mask_reg_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !mask_reg_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!mask_reg_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !mask_reg_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!mask_reg_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !mask_reg_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !mask_reg_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern67 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!register_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 1;

        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 3;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 5;

        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 6;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!register_operand (operands[1], E_V2DImode)
              || !nonimmediate_operand (operands[2], E_V2DImode))
            return -1;
          return 8;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern101 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4HImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT
      || GET_MODE (x3) != E_V8HImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 4)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != VEC_SELECT
      || GET_MODE (x9) != E_V4HImode)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_CONCAT
      || GET_MODE (x10) != E_V8HImode)
    return -1;
  x11 = XEXP (x9, 1);
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
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || !register_operand (operands[0], E_V4HImode)
      || GET_MODE (x1) != E_V4HImode
      || pattern53 (x1) != 0)
    return -1;
  return 0;
}

int
pattern119 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || pattern41 (x1, 
E_SImode, 
E_DImode) != 0)
    return -1;
  return 0;
}

int
pattern125 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
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
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern124 (x2, 
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern124 (x2, 
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern136 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
        case E_V8HImode:
          return 0;

        case E_V16HImode:
          return 1;

        case E_V32HImode:
          return 2;

        case E_V8SImode:
          return 3;

        case E_V16SImode:
          return 4;

        case E_V8DImode:
          return 5;

        case E_V4SImode:
          return 6;

        case E_V4DImode:
          return 7;

        case E_V2DImode:
          return 8;

        default:
          return -1;
        }

    case VEC_SELECT:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!register_operand (operands[3], E_QImode))
        return -1;
      switch (XVECLEN (x6, 0))
        {
        case 4:
          x8 = XVECEXP (x6, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XVECEXP (x6, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x10 = XVECEXP (x6, 0, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x11 = XVECEXP (x6, 0, 3);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || GET_MODE (x5) != E_V4HFmode
              || !register_operand (operands[1], E_V8HFmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SImode:
              if (pattern135 (x1, 
E_V4SImode) != 0)
                return -1;
              return 9;

            case E_V4DImode:
              if (pattern135 (x1, 
E_V4DImode) != 0)
                return -1;
              return 10;

            default:
              return -1;
            }

        case 2:
          x8 = XVECEXP (x6, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XVECEXP (x6, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x1) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || !nonimm_or_0_operand (operands[2], E_V2DImode))
            return -1;
          switch (GET_MODE (x5))
            {
            case E_V2HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              return 11;

            case E_V2SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode))
                return -1;
              return 12;

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
pattern167 (rtx x1)
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
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      return pattern166 (x3, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SFmode:
      if (pattern166 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V4SFmode:
      if (pattern166 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern178 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_V4HFmode:
          if (!const0_operand (operands[2], E_V4HFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!vector_operand (operands[1], E_V4SImode))
                return -1;
              return 0;

            case E_V4DImode:
              if (!vector_operand (operands[1], E_V4DImode))
                return -1;
              return 1;

            default:
              return -1;
            }

        case E_V2HFmode:
          if (!vector_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V6HFmode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V4SFmode:
      if (pattern177 (x1, 
E_V2SFmode, 
E_V2DImode, 
E_V4SFmode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern192 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != VEC_SELECT)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != PARALLEL)
    return -1;
  x8 = XEXP (x3, 0);
  operands[1] = x8;
  x9 = XEXP (x6, 0);
  operands[2] = x9;
  switch (XVECLEN (x4, 0))
    {
    case 8:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x12 = XVECEXP (x4, 0, 2);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x4, 0, 3);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x4, 0, 4);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x4, 0, 5);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x16 = XVECEXP (x4, 0, 6);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x17 = XVECEXP (x4, 0, 7);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x7, 0) != 8)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x22 = XVECEXP (x7, 0, 4);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x23 = XVECEXP (x7, 0, 5);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x24 = XVECEXP (x7, 0, 6);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x25 = XVECEXP (x7, 0, 7);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || pattern191 (x1, 
E_V16SImode, 
E_V8SImode, 
E_V8DImode) != 0)
        return -1;
      return 0;

    case 4:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x12 = XVECEXP (x4, 0, 2);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x4, 0, 3);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x7, 0) != 4)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || pattern191 (x1, 
E_V8SImode, 
E_V4SImode, 
E_V4DImode) != 0)
        return -1;
      return 1;

    case 2:
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XVECEXP (x4, 0, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || XVECLEN (x7, 0) != 2)
        return -1;
      x18 = XVECEXP (x7, 0, 0);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || GET_MODE (x3) != E_V2SImode
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x5) != E_V2DImode
          || GET_MODE (x6) != E_V2SImode
          || !vector_operand (operands[2], E_V4SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern222 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  return pattern221 (x1); /* [-1, 1] */
}

int
pattern230 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != NE)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != COMPARE
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != MEM
      || GET_MODE (x7) != E_BLKmode)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_CODE (x8) != MEM
      || GET_MODE (x8) != E_BLKmode)
    return -1;
  x9 = XEXP (x3, 2);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCmode)
    return -1;
  x11 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x11) != USE)
    return -1;
  x12 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x13) != CLOBBER)
    return -1;
  x14 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x4, 0);
  operands[6] = x15;
  return 0;
}

int
pattern250 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
      return 0;

    default:
      return -1;
    }
}

int
pattern274 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 46
      || GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2SImode)
      || GET_MODE (x1) != E_V2SImode)
    return -1;
  x6 = XVECEXP (x2, 0, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern283 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern288 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0))
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_CODE (x8) != MINUS
      || GET_MODE (x8) != E_QImode)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_CODE (x10) != AND
      || GET_MODE (x10) != E_QImode)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XEXP (x3, 0);
  if (!nonmemory_operand (x12, E_QImode))
    return -1;
  switch (XWINT (x4, 0))
    {
    case 63L:
      if (XWINT (x9, 0) != 64L
          || XWINT (x11, 0) != 63L
          || pattern287 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 0;

    case 31L:
      if (XWINT (x9, 0) != 32L
          || XWINT (x11, 0) != 31L)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern307 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 1)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x1, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  x10 = XEXP (x1, 1);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern306 (x1, 
E_HFmode, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern306 (x1, 
E_SFmode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern306 (x1, 
E_DFmode, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern322 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern326 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_SELECT)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 1)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_CODE (x7) != VEC_SELECT)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PARALLEL
      || XVECLEN (x8, 0) != 1)
    return -1;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XEXP (x2, 1);
  if (GET_CODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != VEC_SELECT)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != PARALLEL
      || XVECLEN (x12, 0) != 1)
    return -1;
  x13 = XVECEXP (x12, 0, 0);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XEXP (x10, 1);
  if (GET_CODE (x14) != VEC_SELECT)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != PARALLEL
      || XVECLEN (x15, 0) != 1)
    return -1;
  x16 = XVECEXP (x15, 0, 0);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XEXP (x1, 1);
  if (GET_CODE (x17) != VEC_CONCAT)
    return -1;
  x18 = XEXP (x17, 0);
  if (GET_CODE (x18) != i1)
    return -1;
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != VEC_SELECT)
    return -1;
  x20 = XEXP (x19, 1);
  if (GET_CODE (x20) != PARALLEL
      || XVECLEN (x20, 0) != 1)
    return -1;
  x21 = XVECEXP (x20, 0, 0);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XEXP (x18, 1);
  if (GET_CODE (x22) != VEC_SELECT)
    return -1;
  x23 = XEXP (x22, 1);
  if (GET_CODE (x23) != PARALLEL
      || XVECLEN (x23, 0) != 1)
    return -1;
  x24 = XVECEXP (x23, 0, 0);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XEXP (x17, 1);
  if (GET_CODE (x25) != i1)
    return -1;
  x26 = XEXP (x25, 0);
  if (GET_CODE (x26) != VEC_SELECT)
    return -1;
  x27 = XEXP (x26, 1);
  if (GET_CODE (x27) != PARALLEL
      || XVECLEN (x27, 0) != 1)
    return -1;
  x28 = XVECEXP (x27, 0, 0);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x29 = XEXP (x25, 1);
  if (GET_CODE (x29) != VEC_SELECT)
    return -1;
  x30 = XEXP (x29, 1);
  if (GET_CODE (x30) != PARALLEL
      || XVECLEN (x30, 0) != 1)
    return -1;
  x31 = XVECEXP (x30, 0, 0);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x32 = XEXP (x4, 0);
  operands[1] = x32;
  x33 = XEXP (x7, 0);
  if (!rtx_equal_p (x33, operands[1]))
    return -1;
  switch (XWINT (x13, 0))
    {
    case 0L:
      if (XWINT (x16, 0) != 1L
          || XWINT (x21, 0) != 2L
          || XWINT (x24, 0) != 3L
          || !register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_DFmode
          || GET_MODE (x4) != E_DFmode
          || !register_operand (operands[1], E_V4DFmode)
          || GET_MODE (x7) != E_DFmode
          || GET_MODE (x10) != E_DFmode
          || GET_MODE (x11) != E_DFmode)
        return -1;
      x34 = XEXP (x11, 0);
      operands[2] = x34;
      if (!nonimmediate_operand (operands[2], E_V4DFmode)
          || GET_MODE (x14) != E_DFmode
          || GET_MODE (x17) != E_V2DFmode
          || GET_MODE (x18) != E_DFmode
          || GET_MODE (x19) != E_DFmode
          || GET_MODE (x22) != E_DFmode
          || GET_MODE (x25) != E_DFmode
          || GET_MODE (x26) != E_DFmode
          || GET_MODE (x29) != E_DFmode)
        return -1;
      x35 = XEXP (x14, 0);
      if (!rtx_equal_p (x35, operands[2]))
        return -1;
      x36 = XEXP (x19, 0);
      if (!rtx_equal_p (x36, operands[1]))
        return -1;
      x37 = XEXP (x22, 0);
      if (!rtx_equal_p (x37, operands[1]))
        return -1;
      x38 = XEXP (x26, 0);
      if (!rtx_equal_p (x38, operands[2]))
        return -1;
      x39 = XEXP (x29, 0);
      if (!rtx_equal_p (x39, operands[2]))
        return -1;
      return 0;

    case 2L:
      if (XWINT (x16, 0) != 3L
          || XWINT (x21, 0) != 0L
          || XWINT (x24, 0) != 1L
          || !register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || GET_MODE (x2) != E_V2SFmode
          || GET_MODE (x3) != E_SFmode
          || GET_MODE (x4) != E_SFmode
          || !register_operand (operands[1], E_V4SFmode)
          || GET_MODE (x7) != E_SFmode
          || GET_MODE (x10) != E_SFmode
          || GET_MODE (x11) != E_SFmode
          || GET_MODE (x14) != E_SFmode
          || GET_MODE (x17) != E_V2SFmode
          || GET_MODE (x18) != E_SFmode
          || GET_MODE (x19) != E_SFmode)
        return -1;
      x36 = XEXP (x19, 0);
      operands[2] = x36;
      if (!vector_operand (operands[2], E_V4SFmode)
          || GET_MODE (x22) != E_SFmode
          || GET_MODE (x25) != E_SFmode
          || GET_MODE (x26) != E_SFmode
          || GET_MODE (x29) != E_SFmode)
        return -1;
      x34 = XEXP (x11, 0);
      if (!rtx_equal_p (x34, operands[1]))
        return -1;
      x35 = XEXP (x14, 0);
      if (!rtx_equal_p (x35, operands[1]))
        return -1;
      x37 = XEXP (x22, 0);
      if (!rtx_equal_p (x37, operands[2]))
        return -1;
      x38 = XEXP (x26, 0);
      if (!rtx_equal_p (x38, operands[2]))
        return -1;
      x39 = XEXP (x29, 0);
      if (!rtx_equal_p (x39, operands[2]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern371 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  return pattern370 (x3); /* [-1, 2] */
}

int
pattern380 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  return pattern379 (x4); /* [-1, 1] */
}

int
pattern385 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[3] = x7;
  x8 = XEXP (x4, 0);
  operands[4] = x8;
  x9 = XEXP (x5, 0);
  operands[1] = x9;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[2] = x11;
  switch (GET_MODE (operands[3]))
    {
    case E_SFmode:
      return pattern384 (
E_V4SFmode, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern384 (
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern400 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern399 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern399 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern410 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[3], i1))
    return -1;
  operands[0] = x1;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!memory_operand (operands[1], i1))
    return -1;
  x5 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x5, 0);
  operands[2] = x7;
  if (!memory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern416 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case E_V16QImode:
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !const0_operand (operands[3], E_V16QImode))
        return -1;
      return 0;

    case E_V16HImode:
      if (!vector_operand (operands[1], E_V16HImode)
          || !vector_operand (operands[2], E_V16HImode)
          || !const0_operand (operands[3], E_V16HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern428 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  x4 = XEXP (x1, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern427 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern427 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern437 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x1) != E_DImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_63_operand (x6, E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (GET_MODE (x1) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_31_operand (x6, E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern453 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[3] = x5;
  x6 = XVECEXP (x1, 0, 2);
  operands[4] = x6;
  if (!const_0_to_7_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern417 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_SImode:
      res = pattern452 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern460 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V32HImode
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x1) != E_V32HImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_V32HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!nonimm_or_0_operand (operands[3], E_V32HImode))
    return -1;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  return 0;
}

int
pattern472 (rtx x1, machine_mode i1)
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
  if (!const_0_to_255_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x1, 1);
  operands[4] = x6;
  x7 = XEXP (x1, 2);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern471 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern471 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern471 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern482 (rtx x1)
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
        case E_V16SImode:
          return pattern478 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern478 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SImode:
          if (pattern478 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 2;

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
        case E_V16SImode:
          if (pattern480 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SImode:
          if (pattern480 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SImode:
          if (pattern480 (x1, 
E_V4SImode, 
E_QImode) != 0)
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
pattern498 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V2HFmode
      || !vector_operand (operands[1], i1)
      || !const0_operand (operands[3], E_V2HFmode)
      || !const0_operand (operands[4], E_V6HFmode))
    return -1;
  return 0;
}

int
pattern500 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x1, 1);
  operands[4] = x5;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case VEC_SELECT:
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      x9 = XEXP (x2, 2);
      operands[3] = x9;
      switch (XVECLEN (x7, 0))
        {
        case 4:
          x10 = XVECEXP (x7, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x7, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x12 = XVECEXP (x7, 0, 2);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x13 = XVECEXP (x7, 0, 3);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V4HFmode
              || GET_MODE (x3) != E_V4HFmode
              || GET_MODE (x6) != E_V4HFmode
              || !nonimm_or_0_operand (operands[2], E_V8HFmode))
            return -1;
          return pattern495 (); /* [-1, 1] */

        case 2:
          res = pattern497 (x1, 
E_V2DImode);
          if (res >= 0)
            return res + 2; /* [2, 3] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[3] = x6;
      x9 = XEXP (x2, 2);
      operands[2] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode)
            return -1;
          switch (GET_MODE (x2))
            {
            case E_V4HFmode:
              if (GET_MODE (x3) != E_V4HFmode
                  || !const0_operand (operands[3], E_V4HFmode))
                return -1;
              res = pattern495 ();
              if (res >= 0)
                return res + 4; /* [4, 5] */
              return -1;

            case E_V2HFmode:
              if (pattern498 (x3, 
E_V2DImode) != 0)
                return -1;
              return 6;

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern499 (x1, 
E_V2DImode) != 0)
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
pattern526 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 151)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XEXP (x1, 1);
  switch (XVECLEN (x6, 0))
    {
    case 16:
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XVECEXP (x6, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x10 = XVECEXP (x6, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x11 = XVECEXP (x6, 0, 4);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x12 = XVECEXP (x6, 0, 5);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x13 = XVECEXP (x6, 0, 6);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x6, 0, 7);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x15 = XVECEXP (x6, 0, 8);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x16 = XVECEXP (x6, 0, 9);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x17 = XVECEXP (x6, 0, 10);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x18 = XVECEXP (x6, 0, 11);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x19 = XVECEXP (x6, 0, 12);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x20 = XVECEXP (x6, 0, 13);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x21 = XVECEXP (x6, 0, 14);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x22 = XVECEXP (x6, 0, 15);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern525 (x1, 
E_V32HImode, 
E_V32HFmode, 
E_V16HFmode) != 0)
        return -1;
      return 0;

    case 8:
      x7 = XVECEXP (x6, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x6, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XVECEXP (x6, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x10 = XVECEXP (x6, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x11 = XVECEXP (x6, 0, 4);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x12 = XVECEXP (x6, 0, 5);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x13 = XVECEXP (x6, 0, 6);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x14 = XVECEXP (x6, 0, 7);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern525 (x1, 
E_V16HImode, 
E_V16HFmode, 
E_V8HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern551 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2SFmode)
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
  if (!register_operand (operands[0], E_V2SFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2SFmode))
    return -1;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  if (!nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern563 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_hilo_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern566 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_or_x86_64_const_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern572 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x8 = XVECEXP (x1, 0, 2);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  if (!scratch_operand (operands[3], E_DImode))
    return -1;
  return pattern386 (x4); /* [-1, 2] */
}

int
pattern580 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x2), 0))
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          return pattern578 (x1); /* [-1, 3] */

        case PLUS:
          res = pattern578 (x1);
          if (res >= 0)
            return res + 4; /* [4, 7] */
          return -1;

        case MINUS:
          x4 = XEXP (x3, 0);
          operands[3] = x4;
          if (!const_int_operand (operands[3], E_VOIDmode))
            return -1;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          res = pattern577 (x1);
          if (res >= 0)
            return res + 8; /* [8, 11] */
          return -1;

        default:
          return -1;
        }

    case AND:
      res = pattern579 (x1);
      if (res >= 0)
        return res + 12; /* [12, 15] */
      return -1;

    case PLUS:
      res = pattern579 (x1);
      if (res >= 0)
        return res + 16; /* [16, 19] */
      return -1;

    case MINUS:
      x3 = XEXP (x2, 0);
      operands[3] = x3;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      res = pattern577 (x1);
      if (res >= 0)
        return res + 20; /* [20, 23] */
      return -1;

    default:
      return -1;
    }
}

int
pattern597 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[5] = x2;
  if (!memory_operand (operands[5], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], i1))
    return -1;
  x7 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XEXP (x7, 0);
  operands[2] = x9;
  if (!memory_operand (operands[2], i1))
    return -1;
  x10 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x10) != SET)
    return -1;
  x11 = XEXP (x10, 1);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x12 = XEXP (x10, 0);
  operands[3] = x12;
  if (!memory_operand (operands[3], i1))
    return -1;
  x13 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x13) != SET)
    return -1;
  x14 = XEXP (x13, 1);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x15 = XEXP (x13, 0);
  operands[4] = x15;
  if (!memory_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern614 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern621 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || pattern420 (x1, 
E_DImode) != 0)
    return -1;
  return 0;
}

int
pattern628 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          return pattern626 (x1, 
E_V16SFmode, 
E_HImode); /* [-1, 0] */

        case E_V8SFmode:
          if (pattern626 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SFmode:
          if (pattern626 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V8DFmode:
          if (pattern626 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V4DFmode:
          if (pattern626 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V2DFmode:
          if (pattern626 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x4, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern627 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern627 (x1, 
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
pattern643 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern650 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const48_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      return pattern649 (x1); /* [-1, 5] */

    case CONST_INT:
      res = pattern647 (x1);
      if (res >= 0)
        return res + 6; /* [6, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern657 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  x3 = XVECEXP (x1, 0, 2);
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  x5 = XEXP (x3, 1);
  operands[4] = x5;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          return pattern654 (x1, 
E_V8SFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern654 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V4DFmode:
          if (pattern654 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 2;

        case E_V2DFmode:
          if (pattern654 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern655 (x1, 
E_V8SImode, 
E_V8SFmode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern655 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
            return -1;
          return 5;

        case E_V4DFmode:
          if (pattern655 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
            return -1;
          return 6;

        case E_V2DFmode:
          if (pattern655 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
            return -1;
          return 7;

        case E_V32QImode:
          if (pattern656 (x1, 
E_V32QImode) != 0)
            return -1;
          return 8;

        case E_V16QImode:
          if (pattern656 (x1, 
E_V16QImode) != 0)
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
pattern678 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_V2DImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  if (!memory_operand (operands[1], E_DImode))
    return -1;
  x7 = XEXP (x2, 1);
  switch (XVECLEN (x7, 0))
    {
    case 8:
      x8 = XVECEXP (x7, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x7, 0, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x10 = XVECEXP (x7, 0, 2);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x11 = XVECEXP (x7, 0, 3);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x12 = XVECEXP (x7, 0, 4);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x13 = XVECEXP (x7, 0, 5);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x14 = XVECEXP (x7, 0, 6);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x15 = XVECEXP (x7, 0, 7);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x2) != E_V8QImode
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return pattern538 (x1); /* [-1, 2] */

    case 4:
      res = pattern676 (x1, 
E_V8HImode, 
E_V4HImode);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case 2:
      if (pattern677 (x1, 
E_V2SImode, 
E_V4SImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern701 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x4), 0)
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != AND)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      return pattern699 (x3); /* [-1, 1] */

    case CONST_INT:
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != UNSPEC
          || XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 174)
        return -1;
      x8 = XVECEXP (x6, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      res = pattern700 (x3);
      if (res >= 0)
        return res + 2; /* [2, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern714 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const_scalar_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern723 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XINT (x3, 1) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != i2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_V16QImode)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != UNSPEC
      || XVECLEN (x7, 0) != i2
      || XINT (x7, 1) != i1
      || pattern722 (x6, 
E_CCmode, 
17) != 0)
    return -1;
  return 0;
}

int
pattern731 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!register_operand (operands[3], i1))
    return -1;
  x4 = XEXP (x2, 0);
  operands[4] = x4;
  if (!register_operand (operands[4], i1))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!x86_64_nonmemory_operand (operands[2], i1))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  return pattern729 (x6, 
i1); /* [-1, 0] */
}

int
pattern740 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !nonimmediate_operand (operands[2], E_V16QImode))
        return -1;
      return 0;

    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode))
        return -1;
      return 1;

    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern752 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern751 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern751 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern759 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern768 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XVECEXP (x4, 0, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 1);
  operands[3] = x7;
  x8 = XEXP (x3, 2);
  operands[4] = x8;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x9 = XEXP (x1, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern767 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern767 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern767 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern781 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern787 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !memory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern797 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern800 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_int_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern808 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!movq_parallel (operands[3], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[4] = x6;
  if (!const_int_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      return pattern804 (x1, 
E_V64QImode, 
E_V128QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern804 (x1, 
E_V32QImode, 
E_V64QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern804 (x1, 
E_V16QImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern804 (x1, 
E_V32HImode, 
E_V64HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern804 (x1, 
E_V16HImode, 
E_V32HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern804 (x1, 
E_V8HImode, 
E_V16HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern824 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_HImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!memory_operand (operands[3], E_HImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_DImode)
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      if (GET_MODE (x7) != E_SImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern837 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern844 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !general_operand (operands[1], E_DImode))
        return -1;
      return 0;

    case E_TImode:
      if (!nonimmediate_operand (operands[0], E_TImode)
          || !general_operand (operands[1], E_TImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern850 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_int_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern853 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i2)
      || !register_mmxmem_operand (operands[2], i2))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern860 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_15_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern863 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern872 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern879 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
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
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern878 (x1, 
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern878 (x1, 
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern891 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8HFmode
      || !nonimm_or_0_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_QImode))
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
pattern903 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (XVECLEN (x4, 0))
    {
    case 8:
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XVECEXP (x4, 0, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x9 = XVECEXP (x4, 0, 4);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x10 = XVECEXP (x4, 0, 5);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x11 = XVECEXP (x4, 0, 6);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x12 = XVECEXP (x4, 0, 7);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x3) != E_V8QImode
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          return pattern135 (x1, 
E_V8HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern135 (x1, 
E_V8SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern135 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case 4:
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XVECEXP (x4, 0, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          res = pattern902 (x1, 
E_V4SImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case E_V4DImode:
          res = pattern902 (x1, 
E_V4DImode);
          if (res >= 0)
            return res + 5; /* [5, 6] */
          return -1;

        default:
          return -1;
        }

    case 2:
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || !nonimm_or_0_operand (operands[2], E_V2DImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V2QImode:
          if (!register_operand (operands[1], E_V16QImode))
            return -1;
          return 7;

        case E_V2HImode:
          if (!register_operand (operands[1], E_V8HImode))
            return -1;
          return 8;

        case E_V2SImode:
          if (!register_operand (operands[1], E_V4SImode))
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
pattern943 (rtx x1)
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
    case E_QImode:
      return pattern941 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern941 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern942 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern942 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern956 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !float_vector_all_ones_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern962 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != IF_THEN_ELSE
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (!ix86_comparison_operator (x3, E_VOIDmode))
    return -1;
  operands[4] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 2);
  if (!rtx_equal_p (x7, operands[2]))
    return -1;
  x8 = XEXP (x1, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern969 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern972 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16SImode:
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!register_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[2], E_V16HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V16SFmode:
      if (!register_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[2], E_V16SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 2;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !nonimmediate_operand (operands[2], E_V16QImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 3;

    case E_V16HImode:
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern981 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SImode)
          || !const0_operand (operands[2], E_V8SImode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SImode)
          || !const0_operand (operands[2], E_V4SImode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DImode)
          || !const0_operand (operands[2], E_V4DImode))
        return -1;
      return 2;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DImode)
          || !const0_operand (operands[2], E_V2DImode))
        return -1;
      return 3;

    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !const0_operand (operands[2], E_V32QImode))
        return -1;
      return 4;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const0_operand (operands[2], E_V16QImode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern993 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SImode
      || !nonimm_or_0_operand (operands[2], E_V8SImode)
      || !register_operand (operands[3], E_QImode))
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
pattern1004 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      x4 = XEXP (x2, 2);
      operands[4] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return pattern1003 (x1, 
E_V8HFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern1003 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V2DFmode:
          if (pattern1003 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x5 = XEXP (x2, 0);
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      x8 = XEXP (x5, 1);
      operands[1] = x8;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      x9 = XEXP (x1, 1);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 3;

        case E_V4SFmode:
          return 4;

        case E_V2DFmode:
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1029 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1037 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      return pattern1034 (x1); /* [-1, 0] */

    case MINUS:
      if (pattern1034 (x1) != 0)
        return -1;
      return 1;

    case AND:
      if (pattern1034 (x1) != 0)
        return -1;
      return 2;

    case IOR:
      if (pattern1034 (x1) != 0)
        return -1;
      return 3;

    case XOR:
      if (pattern1034 (x1) != 0)
        return -1;
      return 4;

    case NEG:
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
          operands[2] = x5;
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
          switch (GET_MODE (x8))
            {
            case E_HImode:
              if (GET_MODE (x2) != E_HImode
                  || !extract_operator (operands[2], E_HImode))
                return -1;
              return 5;

            case E_SImode:
              if (GET_MODE (x2) != E_SImode
                  || !extract_operator (operands[2], E_SImode))
                return -1;
              return 6;

            case E_DImode:
              if (GET_MODE (x2) != E_DImode
                  || !extract_operator (operands[2], E_DImode))
                return -1;
              return 7;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      res = pattern1036 (x1);
      if (res >= 0)
        return res + 8; /* [8, 10] */
      return -1;

    case LSHIFTRT:
      return 11;

    case ASHIFTRT:
      return 12;

    default:
      return -1;
    }
}

int
pattern1063 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != ZERO_EXTRACT)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x2, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x5 = XEXP (x2, 0);
  operands[2] = x5;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[3] = x6;
  switch (GET_MODE (x2))
    {
    case E_HImode:
      if (!const_int_operand (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!const_int_operand (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1076 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
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
pattern1089 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1095 (rtx x1, machine_mode i1)
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
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1098 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2DImode
      || !nonimm_or_0_operand (operands[2], E_V2DImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      return 0;

    case E_V2DFmode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1103 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1110 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1117 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  if (GET_MODE (x5) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i3
      || !vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1129 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[4] = x3;
      x4 = XVECEXP (x1, 0, 1);
      operands[5] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return 0;

        case E_V16HFmode:
          return 1;

        case E_V16SFmode:
          return 2;

        case E_V8SFmode:
          return 3;

        case E_V8DFmode:
          return 4;

        case E_V4DFmode:
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      operands[4] = x4;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 6;

        case E_V4SFmode:
          return 7;

        case E_V2DFmode:
          return 8;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1144 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 2);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1152 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  return pattern1151 (x1); /* [-1, 5] */
}

int
pattern1161 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1168 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return pattern1167 (x1); /* [-1, 3] */

    case PLUS:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern1167 (x1);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    case MINUS:
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern203 (x1);
      if (res >= 0)
        return res + 8; /* [8, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1185 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !const0_operand (operands[2], i2)
      || !vector_all_ones_operand (operands[3], i2)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1192 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != PLUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (!ix86_carry_flag_operator (x5, i1))
    return -1;
  operands[4] = x5;
  x6 = XEXP (x5, 1);
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
  x9 = XEXP (x5, 0);
  operands[3] = x9;
  if (!flags_reg_operand (operands[3], E_VOIDmode))
    return -1;
  x10 = XEXP (x3, 1);
  operands[2] = x10;
  if (!memory_operand (operands[2], i1))
    return -1;
  x11 = XEXP (x4, 1);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  return pattern1191 (x12, 
i1); /* [-1, 1] */
}

int
pattern1203 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1211 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1218 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1217 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1217 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16SFmode:
      if (pattern1217 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 2;

    case E_V8SFmode:
      if (pattern1217 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 3;

    case E_V8DFmode:
      if (pattern1217 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 4;

    case E_V4DFmode:
      if (pattern1217 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern1230 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1235 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_CCGOCmode)
    return -1;
  return pattern362 (x1, 
E_CCGOCmode); /* [-1, 3] */
}

int
pattern1240 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x1) != E_DImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_63_operand (x6, E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (GET_MODE (x1) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (!const_0_to_31_operand (x6, E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1247 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !register_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern1254 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V4QImode:
      if (GET_MODE (x1) != E_V4QImode)
        return -1;
      return 0;

    case E_V2QImode:
      if (GET_MODE (x1) != E_V2QImode)
        return -1;
      return 1;

    case E_V2HImode:
      if (GET_MODE (x1) != E_V2HImode)
        return -1;
      return 2;

    case E_QImode:
      if (pattern1253 (x1, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_HImode:
      if (pattern1253 (x1, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_SImode:
      if (pattern1253 (x1, 
E_SImode) != 0)
        return -1;
      return 5;

    case E_DImode:
      if (pattern1253 (x1, 
E_DImode) != 0)
        return -1;
      return 6;

    default:
      return -1;
    }
}

int
pattern1266 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode)
          || !extract_operator (operands[4], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode)
          || !extract_operator (operands[4], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode)
          || !extract_operator (operands[4], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1276 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1285 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1295 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1301 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  return 0;
}

int
pattern1313 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  return 0;
}

int
pattern1324 (rtx x1, machine_mode i1)
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
pattern1330 (rtx x1, machine_mode i1)
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
pattern1337 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != LABEL_REF)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != PC)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x7, 2);
  switch (GET_CODE (x9))
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
      if (GET_MODE (x9) != E_QImode)
        return -1;
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x11 = XEXP (x9, 1);
      operands[3] = x11;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x12 = XEXP (x3, 0);
      operands[4] = x12;
      switch (GET_MODE (x7))
        {
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

    default:
      return -1;
    }
}

int
pattern1364 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[4]))
    {
    case E_QImode:
      if (!register_operand (operands[4], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[4], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[4], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1369 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1379 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 2);
  return pattern1378 (x3, 
i2, 
i1); /* [-1, 0] */
}

int
pattern1390 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2
      || !bcst_vector_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1378 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1398 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_V8HFmode)
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 223
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x2, 2);
  if (XWINT (x6, 0) != 3L
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || GET_MODE (x3) != E_V8HFmode
      || !register_operand (operands[1], E_V8HFmode)
      || !register_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_V8HFmode))
    return -1;
  x7 = XVECEXP (x5, 0, 0);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x8, E_SImode))
    return -1;
  x9 = XEXP (x2, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x3, 1);
  switch (GET_CODE (x10))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x10;
      if (!const0_operand (operands[4], E_V8HFmode))
        return -1;
      operands[5] = x7;
      operands[6] = x8;
      return 0;

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      operands[4] = x7;
      operands[5] = x8;
      return 1;

    default:
      return -1;
    }
}

int
pattern1422 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  operands[2] = x1;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1432 (rtx x1, machine_mode i1)
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
pattern1438 (rtx x1)
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
    case E_QImode:
      return pattern1437 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1437 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1437 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1437 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1450 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_QImode
      || !const_0_to_31_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1458 (rtx x1, machine_mode i1)
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
pattern1466 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], E_VOIDmode)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1475 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1480 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern1486 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1494 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  x6 = XEXP (x3, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  x7 = XVECEXP (x1, 0, 0);
  x8 = XEXP (x7, 1);
  x9 = XEXP (x8, 0);
  switch (GET_MODE (x9))
    {
    case E_SImode:
      return pattern1493 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1493 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1507 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !mask_reg_operand (operands[1], i1)
      || !mask_reg_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1514 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1522 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1)
      || pattern1521 () != 0)
    return -1;
  return 0;
}

int
pattern1530 (rtx x1, rtx_code i1)
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
  operands[0] = x5;
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
  operands[1] = x10;
  x11 = XEXP (x3, 0);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  x12 = XEXP (x3, 1);
  if (!rtx_equal_p (x12, operands[3]))
    return -1;
  return 0;
}

int
pattern1541 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1547 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1556 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[4], E_V4HFmode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!vector_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1562 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[3], i2))
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_MODE (x6) != i2)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !x86_64_immediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1574 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x4, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 0);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XEXP (x9, 1);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_SImode:
      return pattern1573 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1573 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1588 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XVECEXP (x3, 0, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1598 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1606 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V4SImode:
      if (!register_operand (operands[2], E_V4SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1616 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1625 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !ix86_carry_flag_operator (operands[4], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1632 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[3]))
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  return pattern1571 (x6, pnum_clobbers); /* [-1, 2] */
}

int
pattern1642 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  if (GET_MODE (x6) != i3)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i3
      || !vector_operand (operands[1], i2))
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i3
      || !vector_operand (operands[2], i2)
      || !const1_operand (operands[3], i2)
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1657 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[4], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V4SImode:
      if (!register_operand (operands[3], E_V4SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1665 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vs_operator (operands[7], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1676 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MINUS)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case LTU:
    case UNLT:
      operands[5] = x3;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern1686 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_HImode:
      if (!register_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1696 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[3]))
    return -1;
  x8 = XEXP (x1, 1);
  if (!rtx_equal_p (x8, operands[3]))
    return -1;
  return 0;
}

int
pattern1706 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vsib_mem_operator (operands[6], i1))
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
pattern1711 (rtx x1, machine_mode i1)
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
      return pattern1710 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1710 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1724 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[6], E_QImode)
      || !vsib_mem_operator (operands[5], i1)
      || !scratch_operand (operands[1], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1723 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1723 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1735 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1742 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1741 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1741 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1753 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x2, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x1, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern1764 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1773 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1772 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1772 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1786 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode)
          || !register_operand (operands[4], E_V8SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode)
          || !register_operand (operands[4], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1793 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[7], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1800 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 17);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 18);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 19);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 20);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 21);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1810 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[3]))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[3]))
    return -1;
  return 0;
}

int
pattern1819 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_V8SFmode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1827 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], E_V2DImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  switch (XWINT (x5, 0))
    {
    case 0L:
      x6 = XVECEXP (x4, 0, 1);
      if (XWINT (x6, 0) != 2L)
        return -1;
      x7 = XEXP (x1, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      x10 = XVECEXP (x9, 0, 0);
      if (XWINT (x10, 0) != 0L)
        return -1;
      x11 = XVECEXP (x9, 0, 1);
      if (XWINT (x11, 0) != 2L)
        return -1;
      return 0;

    case 1L:
      x6 = XVECEXP (x4, 0, 1);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XEXP (x1, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      x10 = XVECEXP (x9, 0, 0);
      if (XWINT (x10, 0) != 1L)
        return -1;
      x11 = XVECEXP (x9, 0, 1);
      if (XWINT (x11, 0) != 3L)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1837 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1848 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  operands[5] = x5;
  if (!const_0_to_1_operand (operands[5], E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 1);
  x8 = XVECEXP (x7, 0, 0);
  operands[6] = x8;
  if (!const_0_to_1_operand (operands[6], E_SImode))
    return -1;
  x9 = XEXP (x1, 0);
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XEXP (x6, 0);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  return 0;
}

int
pattern1858 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !const_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1861 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (XINT (x3, 1) != 109
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !memory_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_MODE (x7) != E_CCZmode)
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != E_CCZmode)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_MODE (x10) != E_CCZmode
      || !register_operand (operands[5], i1)
      || !general_operand (operands[6], i1))
    return -1;
  return 0;
}

int
pattern1870 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1879 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 28);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x3 = XVECEXP (x1, 0, 29);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x4 = XVECEXP (x1, 0, 30);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x5 = XVECEXP (x1, 0, 31);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1886 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i3)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

 int
recog_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (nonimmediate_operand (operands[0], E_QImode))
        {
          if (const0_operand (operands[1], E_QImode))
            {
              if ((
#line 1563 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return 5; /* *cmpqi_ccz_1 */
              if (
#line 1577 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 9; /* *cmpqi_ccno_1 */
            }
          if (general_operand (operands[1], E_QImode)
              && 
#line 1589 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 13; /* *cmpqi_1 */
        }
      break;

    case E_HImode:
      if (nonimmediate_operand (operands[0], E_HImode))
        {
          if (const0_operand (operands[1], E_HImode))
            {
              if (
#line 1563 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)))
                return 6; /* *cmphi_ccz_1 */
              if (
#line 1577 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 10; /* *cmphi_ccno_1 */
            }
          if (general_operand (operands[1], E_HImode)
              && 
#line 1589 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 14; /* *cmphi_1 */
        }
      break;

    case E_SImode:
      if (nonimmediate_operand (operands[0], E_SImode))
        {
          if (const0_operand (operands[1], E_SImode))
            {
              if ((
#line 1563 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return 7; /* *cmpsi_ccz_1 */
              if (
#line 1577 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return 11; /* *cmpsi_ccno_1 */
            }
          if (x86_64_general_operand (operands[1], E_SImode)
              && 
#line 1589 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
            return 15; /* *cmpsi_1 */
        }
      break;

    case E_DImode:
      if (nonimmediate_operand (operands[0], E_DImode))
        {
          if (const0_operand (operands[1], E_DImode))
            {
              if ((
#line 1563 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && ix86_match_ccmode (insn, CCZmode)) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return 8; /* *cmpdi_ccz_1 */
              if ((
#line 1577 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 12; /* *cmpdi_ccno_1 */
            }
          if (x86_64_general_operand (operands[1], E_DImode)
              && (
#line 1589 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 16; /* *cmpdi_1 */
        }
      break;

    default:
      break;
    }
  x4 = XEXP (x1, 0);
  switch (GET_MODE (x4))
    {
    case E_CCZmode:
      if (GET_MODE (x2) == E_CCZmode)
        {
          switch (pattern844 ())
            {
            case 0:
              if ((
#line 1682 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return 33; /* *cmpdi_doubleword */
              break;

            case 1:
              if ((
#line 1682 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 34; /* *cmpti_doubleword */
              break;

            default:
              break;
            }
        }
      break;

    case E_CCFPmode:
      if (GET_MODE (x2) == E_CCFPmode)
        {
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (register_operand (operands[0], E_XFmode)
                  && register_operand (operands[1], E_XFmode)
                  && 
#line 2029 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
                return 48; /* *cmpixf_i387 */
              break;

            case E_SFmode:
              if (register_operand (operands[0], E_SFmode)
                  && register_ssemem_operand (operands[1], E_SFmode)
                  && 
#line 2069 "../../src/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return 56; /* *cmpisf */
              break;

            case E_DFmode:
              if (register_operand (operands[0], E_DFmode)
                  && register_ssemem_operand (operands[1], E_DFmode)
                  && 
#line 2069 "../../src/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_80387 && TARGET_CMOVE)))
                return 58; /* *cmpidf */
              break;

            case E_HFmode:
              if (register_operand (operands[0], E_HFmode)
                  && nonimmediate_operand (operands[1], E_HFmode)
                  && 
#line 2106 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return 60; /* *cmpihf */
              break;

            case E_BFmode:
              if (register_operand (operands[0], E_BFmode)
                  && nonimmediate_operand (operands[1], E_BFmode)
                  && 
#line 2117 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
                return 62; /* *cmpibf */
              break;

            default:
              break;
            }
        }
      break;

    default:
      break;
    }
  if (!nonimmediate_operand (operands[0], E_QImode)
      || pattern600 (x3) != 0)
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x5, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XEXP (x5, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!extract_operator (operands[2], E_HImode)
          || !
#line 1614 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
        return -1;
      return 21; /* *cmpqi_exthi_1 */

    case E_SImode:
      if (!extract_operator (operands[2], E_SImode)
          || !
#line 1614 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)))
        return -1;
      return 22; /* *cmpqi_extsi_1 */

    case E_DImode:
      if (!extract_operator (operands[2], E_DImode)
          || !(
#line 1614 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 23; /* *cmpqi_extdi_1 */

    default:
      return -1;
    }
}

 int
recog_17 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode))
        return -1;
      if (general_operand (operands[1], E_QImode)
          && 
#line 3441 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return 111; /* *movstrictqi_1 */
      if (pnum_clobbers == NULL
          || !const0_operand (operands[1], E_QImode)
          || !
#line 3450 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 113; /* *movstrictqi_xor */

    case E_HImode:
      if (!register_operand (operands[0], E_HImode))
        return -1;
      if (general_operand (operands[1], E_HImode)
          && 
#line 3441 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return 112; /* *movstricthi_1 */
      if (pnum_clobbers == NULL
          || !const0_operand (operands[1], E_HImode)
          || !
#line 3450 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 114; /* *movstricthi_xor */

    default:
      return -1;
    }
}

 int
recog_18 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x2, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[1] = x6;
  switch (GET_MODE (x2))
    {
    case E_HImode:
      if (!general_operand (operands[1], E_HImode))
        return -1;
      return 128; /* insvhi_1 */

    case E_SImode:
      if (!general_operand (operands[1], E_SImode))
        return -1;
      return 129; /* insvsi_1 */

    case E_DImode:
      if (!general_operand (operands[1], E_DImode)
          || !
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 130; /* insvdi_1 */

    default:
      return -1;
    }
}

 int
recog_19 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      res = recog_16 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x2) == MEM)
        {
          x3 = XEXP (x2, 0);
          operands[0] = x3;
          if (x86_64_movabs_operand (operands[0], E_DImode))
            {
              x4 = XEXP (x1, 1);
              operands[1] = x4;
              switch (GET_MODE (x2))
                {
                case E_QImode:
                  if (nonmemory_operand (operands[1], E_QImode)
                      && 
#line 3295 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 99; /* *movabsqi_1 */
                  break;

                case E_HImode:
                  if (nonmemory_operand (operands[1], E_HImode)
                      && 
#line 3295 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 100; /* *movabshi_1 */
                  break;

                case E_SImode:
                  if (nonmemory_operand (operands[1], E_SImode)
                      && 
#line 3295 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 101; /* *movabssi_1 */
                  break;

                case E_DImode:
                  if (nonmemory_operand (operands[1], E_DImode)
                      && 
#line 3295 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0)))
                    return 102; /* *movabsdi_1 */
                  break;

                default:
                  break;
                }
            }
        }
      break;

    case STRICT_LOW_PART:
      res = recog_17 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTRACT:
      res = recog_18 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case PC:
      x4 = XEXP (x1, 1);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (indirect_branch_operand (operands[0], E_SImode)
              && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
            return 1460; /* *indirect_jump */
          break;

        case E_DImode:
          if (indirect_branch_operand (operands[0], E_DImode)
              && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
            return 1461; /* *indirect_jump */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case MEM:
      operands[0] = x2;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!x86_64_movabs_operand (operands[1], E_DImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !
#line 3319 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 103; /* *movabsqi_2 */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !
#line 3319 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 104; /* *movabshi_2 */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !
#line 3319 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 105; /* *movabssi_2 */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !
#line 3319 "../../src/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1)))
            return -1;
          return 106; /* *movabsdi_2 */

        default:
          return -1;
        }

    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x4), 0))
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[2] = x5;
          x6 = XEXP (x5, 1);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x7 = XEXP (x5, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x4) != E_QImode)
            return -1;
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_CODE (x2))
            {
            case STRICT_LOW_PART:
              x3 = XEXP (x2, 0);
              operands[0] = x3;
              if (!register_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1353 ())
                {
                case 0:
                  if (!
#line 3464 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 115; /* *movstrictqi_exthi_1 */

                case 1:
                  if (!
#line 3464 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 116; /* *movstrictqi_extsi_1 */

                case 2:
                  if (!(
#line 3464 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 117; /* *movstrictqi_extdi_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[0] = x2;
              if (!nonimmediate_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1353 ())
                {
                case 0:
                  return 125; /* *extzvqi */

                case 1:
                  return 126; /* *extzvqi */

                case 2:
                  if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 127; /* *extzvqi */

                default:
                  return -1;
                }

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
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x5;
          if (!general_operand (operands[1], E_QImode)
              || pattern419 (x2) != 0)
            return -1;
          switch (GET_MODE (x2))
            {
            case E_HImode:
              if (GET_MODE (x4) != E_HImode)
                return -1;
              return 131; /* *insvqi_1 */

            case E_SImode:
              if (GET_MODE (x4) != E_SImode)
                return -1;
              return 132; /* *insvqi_1 */

            case E_DImode:
              if (GET_MODE (x4) != E_DImode
                  || !
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 133; /* *insvqi_1 */

            default:
              return -1;
            }

        case PLUS:
          if (pattern250 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern252 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 333; /* *addqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 334; /* *addqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 335; /* *addqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1730 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 336; /* *addqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 338; /* *addqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 340; /* *addqi_extdi_2 */

            default:
              return -1;
            }

        case MINUS:
          if (pattern250 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          if (GET_CODE (x6) == SUBREG)
            {
              switch (pattern1730 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 337; /* *subqi_exthi_2 */

                case 1:
                  *pnum_clobbers = 1;
                  return 339; /* *subqi_extsi_2 */

                case 2:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 341; /* *subqi_extdi_2 */
                    }
                  break;

                default:
                  break;
                }
            }
          operands[2] = x6;
          if (!general_operand (operands[2], E_QImode))
            return -1;
          switch (pattern252 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 422; /* *subqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 423; /* *subqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 424; /* *subqi_extdi_1 */

            default:
              return -1;
            }

        case AND:
          if (pattern250 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern252 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 773; /* *andqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 776; /* *andqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 779; /* *andqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1730 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 791; /* *andqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 794; /* *andqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 797; /* *andqi_extdi_2 */

            default:
              return -1;
            }

        case IOR:
          if (pattern250 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern252 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 774; /* *iorqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 777; /* *iorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 780; /* *iorqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1730 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 792; /* *iorqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 795; /* *iorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 798; /* *iorqi_extdi_2 */

            default:
              return -1;
            }

        case XOR:
          if (pattern250 (x1, pnum_clobbers) != 0)
            return -1;
          x6 = XEXP (x5, 1);
          operands[2] = x6;
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern252 (x1))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 775; /* *xorqi_exthi_1 */

                case 1:
                  *pnum_clobbers = 1;
                  return 778; /* *xorqi_extsi_1 */

                case 2:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 781; /* *xorqi_extdi_1 */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x6) != SUBREG)
            return -1;
          switch (pattern1730 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 793; /* *xorqi_exthi_2 */

            case 1:
              *pnum_clobbers = 1;
              return 796; /* *xorqi_extsi_2 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 799; /* *xorqi_extdi_2 */

            default:
              return -1;
            }

        case NEG:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern251 (x1))
            {
            case 0:
              *pnum_clobbers = 1;
              return 988; /* *negqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 989; /* *negqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 990; /* *negqi_extdi_1 */

            default:
              return -1;
            }

        case NOT:
          switch (pattern251 (x1))
            {
            case 0:
              return 1049; /* *one_cmplqi_exthi_1 */

            case 1:
              return 1050; /* *one_cmplqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1051; /* *one_cmplqi_extdi_1 */

            default:
              return -1;
            }

        case ASHIFT:
          switch (pattern253 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1119; /* *ashlqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1120; /* *ashlqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1121; /* *ashlqi_extdi_1 */

            default:
              return -1;
            }

        case LSHIFTRT:
          switch (pattern253 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1238; /* *lshrqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1240; /* *lshrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1242; /* *lshrqi_extdi_1 */

            default:
              return -1;
            }

        case ASHIFTRT:
          switch (pattern253 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 1239; /* *ashrqi_exthi_1 */

            case 1:
              *pnum_clobbers = 1;
              return 1241; /* *ashrqi_extsi_1 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1243; /* *ashrqi_extdi_1 */

            default:
              return -1;
            }

        case SS_TRUNCATE:
          if (pattern254 (x1) != 0
              || !
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7302; /* *avx512vl_ss_truncatev2div2qi2_store_2 */

        case TRUNCATE:
          if (pattern254 (x1) != 0
              || !
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7303; /* *avx512vl_truncatev2div2qi2_store_2 */

        case US_TRUNCATE:
          if (pattern254 (x1) != 0
              || !
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7304; /* *avx512vl_us_truncatev2div2qi2_store_2 */

        default:
          return -1;
        }

    case REG:
      if (REGNO (x4) != 17
          || pattern56 (x1, 
E_CCCmode) != 0
          || !
#line 9883 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
        return -1;
      return 529; /* *setccc */

    case CONST_INT:
      if (pnum_clobbers == NULL
          || GET_CODE (x2) != ZERO_EXTRACT)
        return -1;
      x9 = XEXP (x2, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x10 = XEXP (x2, 2);
      operands[1] = x10;
      switch (XWINT (x4, 0))
        {
        case 0L:
          switch (GET_CODE (operands[1]))
            {
            case REG:
            case SUBREG:
              if (!register_operand (operands[1], E_QImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (!nonimmediate_operand (operands[0], E_QImode)
                      || !
#line 18963 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1411; /* *btrqi_2 */

                case E_HImode:
                  if (!nonimmediate_operand (operands[0], E_HImode)
                      || !
#line 18963 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1412; /* *btrhi_2 */

                default:
                  return -1;
                }

            case CONST_INT:
              if (!const_0_to_63_operand (operands[1], E_QImode)
                  || GET_MODE (x2) != E_DImode
                  || !nonimmediate_operand (operands[0], E_DImode)
                  || !
#line 19027 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
                return -1;
              *pnum_clobbers = 1;
              return 1414; /* *btrq_imm */

            default:
              return -1;
            }

        case 1L:
          if (GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[0], E_DImode)
              || !const_0_to_63_operand (operands[1], E_QImode)
              || !
#line 19014 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
            return -1;
          *pnum_clobbers = 1;
          return 1413; /* *btsq_imm */

        default:
          return -1;
        }

    case LABEL_REF:
      if (GET_CODE (x2) != PC)
        return -1;
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      return 1459; /* jump */

    default:
      return -1;
    }
}

 int
recog_33 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
        case E_SFmode:
          switch (pattern424 (x3, 
E_SFmode))
            {
            case 0:
              if (!
#line 6062 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 239; /* floathisf2 */

            case 1:
              if (!
#line 6092 "../../src/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                return -1;
              return 244; /* *floatsisf2 */

            case 2:
              if ((
#line 6092 "../../src/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 245; /* *floatdisf2 */
              if (!
#line 6145 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)))
                return -1;
              return 252; /* *floatdisf2_i387 */

            default:
              return -1;
            }

        case E_DFmode:
          switch (pattern424 (x3, 
E_DFmode))
            {
            case 0:
              if (!
#line 6062 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 240; /* floathidf2 */

            case 1:
              if (!
#line 6092 "../../src/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 246; /* *floatsidf2 */

            case 2:
              if ((
#line 6092 "../../src/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 247; /* *floatdidf2 */
              if (!
#line 6145 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)))
                return -1;
              return 253; /* *floatdidf2_i387 */

            default:
              return -1;
            }

        case E_XFmode:
          switch (pattern424 (x3, 
E_XFmode))
            {
            case 0:
              if (!
#line 6062 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)))
                return -1;
              return 241; /* floathixf2 */

            case 1:
              if (!
#line 6074 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 242; /* floatsixf2 */

            case 2:
              if (!
#line 6074 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 243; /* floatdixf2 */

            default:
              return -1;
            }

        case E_HFmode:
          switch (pattern263 (x3, 
E_HFmode))
            {
            case 0:
              if (!
#line 6136 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return -1;
              return 248; /* floatsihf2 */

            case 1:
              if (!(
#line 6136 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 250; /* floatdihf2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != TRUNCATE
          || GET_MODE (x5) != E_V2HImode
          || !register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!nonimmediate_operand (operands[1], E_V2SImode)
          || !
#line 1624 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
        return -1;
      return 2083; /* mmx_pi2fw */

    default:
      return -1;
    }
}

 int
recog_40 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x4 = XEXP (x1, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (pnum_clobbers == NULL
                  || !nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !(
#line 14237 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 953; /* *negti2_doubleword */

            case E_QImode:
              if (!nonimmediate_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !nonimmediate_operand (operands[1], E_QImode))
                return -1;
              if (
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 954; /* *negqi_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 955; /* *negqi_1 */

            case E_HImode:
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode))
                return -1;
              if (
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 956; /* *neghi_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 957; /* *neghi_1 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1011; /* *negsf2_i387_1 */
                }
              if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1025; /* *negsf2_i387 */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_DFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1013; /* *negdf2_i387_1 */
                }
              if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1027; /* *negdf2_i387 */

            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || GET_MODE (x2) != E_XFmode
                  || !register_operand (operands[1], E_XFmode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
                {
                  *pnum_clobbers = 1;
                  return 1015; /* *negxf2_i387_1 */
                }
              if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return -1;
              return 1029; /* *negxf2_i387 */

            case E_V2QImode:
              if (pattern613 (x2, pnum_clobbers, 
E_V2QImode) != 0
                  || !
#line 3134 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
                return -1;
              *pnum_clobbers = 1;
              return 2123; /* negv2qi2 */

            default:
              return -1;
            }

        case STRICT_LOW_PART:
          switch (pattern264 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 14395 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 973; /* *negqi_1_slp */

            case 1:
              if (!
#line 14395 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 974; /* *neghi_1_slp */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ABS:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern614 (x2, 
E_TImode) != 0
              || !(
#line 14644 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 998; /* *nabsti2_doubleword */

        case E_QImode:
          if (pattern614 (x2, 
E_QImode) != 0
              || !
#line 14715 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1003; /* *nabsqi2_1 */

        case E_HImode:
          if (pattern614 (x2, 
E_HImode) != 0
              || !
#line 14715 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1004; /* *nabshi2_1 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x3;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern966 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1799; /* *x86_movqicc_0_m1_neg */

        case 1:
          *pnum_clobbers = 1;
          return 1800; /* *x86_movhicc_0_m1_neg */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_46 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == EQ)
    {
      res = recog_45 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  if (pnum_clobbers == NULL)
    return -1;
  operands[1] = x2;
  if (!bt_comparison_operator (operands[1], E_QImode))
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
      || !nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode)
          || !(
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
        return -1;
      *pnum_clobbers = 1;
      return 2626; /* *kortest_cmpqi_setcc */

    case E_HImode:
      if (!register_operand (operands[2], E_HImode)
          || !
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 2627; /* *kortest_cmphi_setcc */

    case E_SImode:
      if (!register_operand (operands[2], E_SImode)
          || !
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 2628; /* *kortest_cmpsi_setcc */

    case E_DImode:
      if (!register_operand (operands[2], E_DImode)
          || !(
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 2629; /* *kortest_cmpdi_setcc */

    default:
      return -1;
    }
}

 int
recog_48 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      res = recog_47 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  operands[3] = x3;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (pattern744 (
E_SFmode) != 0
          || !
#line 19676 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)))
        return -1;
      return 1455; /* setcc_sf_sse */

    case E_DFmode:
      if (pattern744 (
E_DFmode) != 0
          || !
#line 19676 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)))
        return -1;
      return 1456; /* setcc_df_sse */

    default:
      return -1;
    }
}

 int
recog_53 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern70 (x2))
        {
        case 0:
          if (!
#line 3704 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == -1
   && CONST_WIDE_INT_ELT (operands[3], 1) == 0))
            return -1;
          return 143; /* *insvti_highpart_1 */

        case 1:
          if (!
#line 3726 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
            return -1;
          return 146; /* *insvti_lowpart_1 */

        case 2:
          if (!
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
            return -1;
          return 149; /* *insvdi_lowpart_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      res = recog_52 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || pattern77 (x2) != 0)
        return -1;
      x5 = XEXP (x3, 0);
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      switch (pattern1265 (x1))
        {
        case 0:
          if (
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 303; /* *addqi_exthi_1_slp */
            }
          break;

        case 1:
          if (
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 304; /* *addqi_extsi_1_slp */
            }
          break;

        case 2:
          if ((
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 305; /* *addqi_extdi_1_slp */
            }
          break;

        case 3:
          *pnum_clobbers = 1;
          return 327; /* *addqi_exthi_0 */

        case 4:
          *pnum_clobbers = 1;
          return 328; /* *addqi_extsi_0 */

        case 5:
          if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 329; /* *addqi_extdi_0 */
            }
          break;

        default:
          break;
        }
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != SUBREG)
        return -1;
      switch (pattern1268 (x1))
        {
        case 0:
          if (!
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 306; /* *addqi_exthi_2_slp */

        case 1:
          if (!
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 307; /* *addqi_extsi_2_slp */

        case 2:
          if (!(
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 308; /* *addqi_extdi_2_slp */

        case 3:
          *pnum_clobbers = 1;
          return 330; /* *addqi_ext2hi_0 */

        case 4:
          *pnum_clobbers = 1;
          return 331; /* *addqi_ext2si_0 */

        case 5:
          if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 332; /* *addqi_ext2di_0 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern277 (x2, pnum_clobbers, 
E_TImode, 
E_DImode))
        {
        case 0:
          if (!(
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 269; /* *addti3_doubleword_zext */

        case 1:
          if (!(
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 901; /* *concatditi3_2 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 922; /* *concatditi3_4 */

        case 3:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 925; /* *concatditi3_4 */

        case 4:
          if (!(
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
(TARGET_64BIT)))
            return -1;
          return 949; /* *concatditi3_7 */

        default:
          return -1;
        }

    case PLUS:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case ASHIFT:
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case ZERO_EXTEND:
              if (pnum_clobbers == NULL
                  || GET_MODE (x6) != E_TImode)
                return -1;
              x8 = XEXP (x3, 1);
              if (GET_CODE (x8) != ZERO_EXTEND
                  || GET_MODE (x8) != E_TImode
                  || pattern1002 (x2, 
E_TImode) != 0)
                return -1;
              switch (pattern84 (x2, 
E_TImode, 
E_DImode))
                {
                case 0:
                  if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 273; /* *addti3_doubleword_concat */

                case 1:
                  if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 279; /* *addti3_doubleword_concat_zext */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              switch (pattern576 (x2))
                {
                case 0:
                  if (!
#line 7990 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 370; /* *leaqi_general_3b */

                case 1:
                  if (!
#line 7990 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 371; /* *leahi_general_3b */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          switch (pattern426 (x2))
            {
            case 0:
              if (!
#line 7898 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 362; /* *leaqi_general_1 */

            case 1:
              if (!
#line 7898 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 363; /* *leahi_general_1 */

            default:
              return -1;
            }

        case MULT:
          switch (pattern429 (x2))
            {
            case 0:
              if (!
#line 7964 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 368; /* *leaqi_general_3 */

            case 1:
              if (!
#line 7964 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 369; /* *leahi_general_3 */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          if (pnum_clobbers == NULL)
            return -1;
          operands[4] = x5;
          x9 = XEXP (x5, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XEXP (x5, 0);
          operands[3] = x6;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x8 = XEXP (x3, 1);
          operands[1] = x8;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1357 (x2, 
E_QImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 453; /* addqi3_carry */

            case E_HImode:
              if (pattern1357 (x2, 
E_HImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 454; /* addhi3_carry */

            default:
              return -1;
            }

        case EQ:
          switch (pattern430 (x2, pnum_clobbers))
            {
            case 0:
              if (pattern1269 (x2, 
E_QImode) != 0
                  || !
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 554; /* *addqi3_eq */

            case 1:
              if (pattern1269 (x2, 
E_HImode) != 0
                  || !
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 555; /* *addhi3_eq */

            default:
              return -1;
            }

        case NE:
          switch (pattern430 (x2, pnum_clobbers))
            {
            case 0:
              if (pattern1270 (x2, 
E_QImode) != 0
                  || !
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 558; /* *addqi3_ne */

            case 1:
              if (pattern1270 (x2, 
E_HImode) != 0
                  || !
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 559; /* *addhi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern86 (x1, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 274; /* *addti3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 280; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern86 (x1, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 275; /* *addti3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 281; /* *addti3_doubleword_concat_zext */

        default:
          return -1;
        }

    case MULT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          switch (pattern397 (x2))
            {
            case 0:
              if (!
#line 7920 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 364; /* *leaqi_general_2 */

            case 1:
              if (!
#line 7920 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 365; /* *leahi_general_2 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          if (pattern305 (x5, 
2, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          if (pattern1271 (x8, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 1);
          if (XVECLEN (x11, 0) != 2)
            return -1;
          x12 = XVECEXP (x11, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x11, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x7 = XEXP (x2, 1);
          if (GET_CODE (x7) != MULT
              || GET_MODE (x7) != E_V2SImode)
            return -1;
          x14 = XEXP (x7, 0);
          if (pattern1200 (x14, 
E_V2HImode, 
VEC_SELECT, 
E_V2SImode, 
SIGN_EXTEND) != 0)
            return -1;
          x15 = XEXP (x14, 0);
          x16 = XEXP (x15, 1);
          if (GET_CODE (x16) != PARALLEL
              || XVECLEN (x16, 0) != 2)
            return -1;
          x17 = XVECEXP (x16, 0, 0);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x18 = XVECEXP (x16, 0, 1);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x19 = XEXP (x7, 1);
          if (pattern1843 (x19, 
E_V2HImode, 
E_V2SImode) != 0)
            return -1;
          x20 = XEXP (x19, 0);
          x21 = XEXP (x20, 1);
          if (XVECLEN (x21, 0) != 2)
            return -1;
          x22 = XVECEXP (x21, 0, 0);
          if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x23 = XVECEXP (x21, 0, 1);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[0], E_V2SImode)
              || GET_MODE (x2) != E_V2SImode
              || GET_MODE (x3) != E_V2SImode)
            return -1;
          x6 = XEXP (x5, 0);
          x24 = XEXP (x6, 0);
          operands[1] = x24;
          if (!register_mmxmem_operand (operands[1], E_V4HImode))
            return -1;
          x25 = XEXP (x10, 0);
          operands[2] = x25;
          if (!register_mmxmem_operand (operands[2], E_V4HImode))
            return -1;
          x26 = XEXP (x15, 0);
          if (!rtx_equal_p (x26, operands[1]))
            return -1;
          x27 = XEXP (x20, 0);
          if (!rtx_equal_p (x27, operands[2])
              || !
#line 3565 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
            return -1;
          return 2165; /* *mmx_pmaddwd */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x7 = XEXP (x2, 1);
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
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1074 (x2, 
E_QImode) != 0
                      || !
#line 7941 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 366; /* *leaqi_general_2b */

                case E_HImode:
                  if (pattern1074 (x2, 
E_HImode) != 0
                      || !
#line 7941 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  return 367; /* *leahi_general_2b */

                case E_TImode:
                  if (pattern604 (x2, 
E_TImode) != 0
                      || !(
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
(TARGET_64BIT)))
                    return -1;
                  return 931; /* *concatditi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern605 (x2, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 895; /* *concatditi3_1 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern422 (x2))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 910; /* *concatditi3_3 */

            case 1:
              if (!(
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
(TARGET_64BIT)))
                return -1;
              return 940; /* *concatditi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern422 (x2))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 913; /* *concatditi3_3 */

            case 1:
              if (!(
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
(TARGET_64BIT)))
                return -1;
              return 943; /* *concatditi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern87 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1077 (x2, 
E_QImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 457; /* *addqi3_carry_0 */

        case 1:
          if (pattern1077 (x2, 
E_HImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 458; /* *addhi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern87 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1078 (x2, 
E_QImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 461; /* *addqi3_carry_0r */

        case 1:
          if (pattern1078 (x2, 
E_HImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 462; /* *addhi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern89 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 562; /* *addqi3_eq_0 */

        case 1:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 563; /* *addhi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern89 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 566; /* *addqi3_ne_0 */

        case 1:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 567; /* *addhi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x7 = XEXP (x2, 1);
      operands[2] = x7;
      x8 = XEXP (x3, 1);
      switch (GET_CODE (x8))
        {
        case NE:
          switch (pattern852 (x2))
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 575; /* *subhi3_ne */

            default:
              return -1;
            }

        case EQ:
          switch (pattern852 (x2))
            {
            case 0:
              if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 578; /* *subqi3_eq_1 */

            case 1:
              if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 579; /* *subhi3_eq_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern90 (x1))
        {
        case 0:
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          x8 = XEXP (x3, 1);
          if (XVECLEN (x8, 0) != 1)
            return -1;
          x7 = XEXP (x2, 1);
          x19 = XEXP (x7, 1);
          if (XVECLEN (x19, 0) != 1)
            return -1;
          x28 = XVECEXP (x8, 0, 0);
          operands[2] = x28;
          if (!const_0_to_1_operand (operands[2], E_SImode))
            return -1;
          x29 = XVECEXP (x19, 0, 0);
          operands[3] = x29;
          if (!const_0_to_1_operand (operands[3], E_SImode))
            return -1;
          x14 = XEXP (x7, 0);
          if (!rtx_equal_p (x14, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || GET_MODE (x3) != E_SFmode
                  || !nonimmediate_operand (operands[1], E_V2SFmode)
                  || GET_MODE (x7) != E_SFmode
                  || !
#line 1012 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()))
                return -1;
              return 2065; /* *mmx_haddv2sf3_low */

            case E_DFmode:
              if (pattern1511 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 3749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD
   && INTVAL (operands[2]) != INTVAL (operands[3])))
                return -1;
              return 3189; /* *sse3_haddv2df3_low */

            default:
              return -1;
            }

        case 1:
          switch (pattern854 (x2))
            {
            case 0:
              if (!
#line 22628 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8599; /* ssse3_phaddwv4hi3 */

            case 1:
              if (!
#line 22715 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8607; /* ssse3_phadddv2si3 */

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
recog_84 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
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
      operands[1] = x4;
      res = recog_83 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != CONST_INT)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CLZ)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      switch (XWINT (x4, 0))
        {
        case 63L:
          if (pattern871 (x3, 
E_DImode) != 0
              || !
#line 21235 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1525; /* bsr_rex64_1 */

        case 31L:
          if (pattern871 (x3, 
E_SImode) != 0
              || !
#line 21276 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1528; /* bsr_1 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern289 (x3))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1274 (x3, 
E_SImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 489; /* subsi3_carry */

            case E_DImode:
              if (pattern1274 (x3, 
E_DImode) != 0
                  || !(
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 490; /* subdi3_carry */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1206 (x3, 
E_SImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 572; /* *subsi3_eq */

            case E_DImode:
              if (pattern1206 (x3, 
E_DImode) != 0
                  || !(
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 573; /* *subdi3_eq */

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
recog_85 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  operands[3] = x3;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 1);
  switch (XWINT (x5, 0))
    {
    case 0L:
      x6 = XEXP (x2, 1);
      if (GET_CODE (x6) != PLUS)
        return -1;
      x7 = XEXP (x6, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[2] = x8;
      x9 = XEXP (x6, 0);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1514 (x2, 
E_SImode) != 0
              || !
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE))
            return -1;
          *pnum_clobbers = 1;
          return 450; /* *dec_cmovsi */

        case E_DImode:
          if (pattern1514 (x2, 
E_DImode) != 0
              || !(
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 451; /* *dec_cmovdi */

        default:
          return -1;
        }

    case -1L:
      x8 = XEXP (x4, 0);
      operands[4] = x8;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern1365 (x2, 
E_SImode))
            {
            case 0:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              *pnum_clobbers = 1;
              return 2639; /* *kortest_cmpqi_movsicc */

            case 1:
              if (!
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              *pnum_clobbers = 1;
              return 2642; /* *kortest_cmphi_movsicc */

            case 2:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              *pnum_clobbers = 1;
              return 2645; /* *kortest_cmpsi_movsicc */

            case 3:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 2648; /* *kortest_cmpdi_movsicc */

            default:
              return -1;
            }

        case E_DImode:
          switch (pattern1365 (x2, 
E_DImode))
            {
            case 0:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2640; /* *kortest_cmpqi_movdicc */

            case 1:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 2643; /* *kortest_cmphi_movdicc */

            case 2:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2646; /* *kortest_cmpsi_movdicc */

            case 3:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && ((((
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              *pnum_clobbers = 1;
              return 2649; /* *kortest_cmpdi_movdicc */

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
recog_89 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != LSHIFTRT)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MULT)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x4, 0);
  switch (GET_CODE (x7))
    {
    case SIGN_EXTEND:
      switch (pattern760 (x2, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 11174 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 633; /* *smuldi3_highpart_1 */

        case 1:
          if (!
#line 11223 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 637; /* *smulsi3_highpart_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern760 (x2, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 11174 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 634; /* *umuldi3_highpart_1 */

        case 1:
          if (!
#line 11223 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 638; /* *umulsi3_highpart_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_91 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = recog_90 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0)
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (GET_CODE (x6))
        {
        case CTZ:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21118 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1518; /* *ctzsi2_zext */

        case CLZ:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21557 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1540; /* *clzsi2_lzcnt_zext */

        case POPCOUNT:
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22382 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1632; /* *popcountsi2_zext */

        default:
          return -1;
        }

    case NOT:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern739 (x3, 
E_DImode) != 0)
                return -1;
              if ((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 809; /* *andndi3_doubleword_bmi */
                }
              if ((
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 811; /* *andndi3_doubleword */
                }
              if (!(
#line 13346 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 814; /* *andndi_1 */

            case E_SImode:
              if (pattern739 (x3, 
E_SImode) != 0
                  || !
#line 13346 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
                return -1;
              *pnum_clobbers = 1;
              return 813; /* *andnsi_1 */

            default:
              return -1;
            }

        case LSHIFTRT:
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          x8 = XEXP (x6, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1088 (x3, 
E_SImode) != 0
                  || !
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1438; /* *btsi_setncsi */

            case E_DImode:
              if (pattern1088 (x3, 
E_DImode) != 0
                  || !(
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1439; /* *btdi_setncdi */

            default:
              return -1;
            }

        case ASHIFT:
          x7 = XEXP (x6, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          switch (pattern620 (x3))
            {
            case 0:
              if (!
#line 22084 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              *pnum_clobbers = 1;
              return 1596; /* *bmi2_bzhi_si3_3 */

            case 1:
              if (!(
#line 22084 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1597; /* *bmi2_bzhi_di3_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ROTATE:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
        return -1;
      switch (pattern285 (x3))
        {
        case 0:
          x9 = XEXP (x4, 1);
          operands[2] = x9;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern752 (x3))
                {
                case 0:
                  if (
#line 18873 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    {
                      *pnum_clobbers = 1;
                      return 1403; /* *btrsi */
                    }
                  break;

                case 1:
                  if ((
#line 18873 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 1404; /* *btrdi */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x9) != SUBREG)
            return -1;
          switch (pattern761 (x3))
            {
            case 0:
              if (!
#line 18892 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 1405; /* *btrsi_mask */

            case 1:
              if (!(
#line 18892 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1406; /* *btrdi_mask */

            default:
              return -1;
            }

        case 1:
          if (!
#line 18920 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1407; /* *btrsi_mask_1 */

        case 2:
          if (!(
#line 18920 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1408; /* *btrdi_mask_1 */

        default:
          return -1;
        }

    case NEG:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x5 = XEXP (x3, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern755 (x3, 
E_SImode) != 0
              || !
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1570; /* *bmi_blsi_si */

        case E_DImode:
          if (pattern755 (x3, 
E_DImode) != 0
              || !(
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1571; /* *bmi_blsi_di */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x9 = XEXP (x4, 1);
      if (GET_CODE (x9) != CONST_INT)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x6;
          switch (XWINT (x9, 0))
            {
            case -1L:
              switch (pattern757 (x3))
                {
                case 0:
                  if (!
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1582; /* *bmi_blsr_si */

                case 1:
                  if (!(
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1583; /* *bmi_blsr_di */

                case 2:
                  if (!
#line 22277 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1622; /* *tbm_tzmsk_si */

                case 3:
                  if (!(
#line 22277 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1623; /* *tbm_tzmsk_di */

                default:
                  return -1;
                }

            case 1L:
              switch (pattern757 (x3))
                {
                case 0:
                  if (!
#line 22168 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1606; /* *tbm_blcfill_si */

                case 1:
                  if (!(
#line 22168 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1607; /* *tbm_blcfill_di */

                case 2:
                  if (!
#line 22196 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1610; /* *tbm_blcic_si */

                case 3:
                  if (!(
#line 22196 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1611; /* *tbm_blcic_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ASHIFT:
          x7 = XEXP (x6, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x9, 0) != -1L)
            return -1;
          switch (pattern620 (x3))
            {
            case 0:
              if (!
#line 22070 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              *pnum_clobbers = 1;
              return 1594; /* *bmi2_bzhi_si3_2 */

            case 1:
              if (!(
#line 22070 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1595; /* *bmi2_bzhi_di3_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != PLUS
          || pattern436 (x6) != 0)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x7 = XEXP (x6, 0);
      x10 = XEXP (x7, 1);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 22116 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      *pnum_clobbers = 1;
      return 1599; /* *bmi2_bzhi_zero_extendsidi_5 */

    case UNSPEC:
      switch (XVECLEN (x4, 0))
        {
        case 3:
          x11 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x11) != CONST_INT)
            return -1;
          x12 = XVECEXP (x4, 0, 0);
          operands[1] = x12;
          x13 = XVECEXP (x4, 0, 1);
          operands[2] = x13;
          switch (XINT (x4, 1))
            {
            case 59:
              operands[3] = x11;
              x5 = XEXP (x3, 1);
              operands[4] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1069 (x3, 
E_SImode) == 0)
                    {
                      switch (GET_MODE (operands[1]))
                        {
                        case E_V32HFmode:
                          if (register_operand (operands[1], E_V32HFmode)
                              && nonimmediate_operand (operands[2], E_V32HFmode)
                              && const_0_to_31_operand (operands[3], E_SImode)
                              && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                            return 3303; /* avx512bw_cmpv32hf3_mask */
                          break;

                        case E_V32QImode:
                          if (register_operand (operands[1], E_V32QImode)
                              && nonimmediate_operand (operands[2], E_V32QImode)
                              && const_0_to_7_operand (operands[3], E_SImode)
                              && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                            return 3441; /* avx512vl_cmpv32qi3_mask */
                          break;

                        case E_V32HImode:
                          if (register_operand (operands[1], E_V32HImode)
                              && nonimmediate_operand (operands[2], E_V32HImode)
                              && const_0_to_7_operand (operands[3], E_SImode)
                              && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                            return 3443; /* avx512bw_cmpv32hi3_mask */
                          break;

                        case E_V32BFmode:
                          if (register_operand (operands[1], E_V32BFmode)
                              && nonimmediate_operand (operands[2], E_V32BFmode)
                              && const_0_to_31_operand (operands[3], E_VOIDmode)
                              && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32459 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                            return 10730; /* avx10_2_cmpbf16_v32bf_mask */
                          break;

                        default:
                          break;
                        }
                    }
                  break;

                case E_DImode:
                  if (pattern989 (x3) == 0
                      && register_operand (operands[4], E_DImode)
                      && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4486 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return 3437; /* avx512bw_cmpv64qi3_mask */
                  break;

                default:
                  break;
                }
              if (XWINT (x11, 0) != 0L)
                return -1;
              switch (pattern987 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3497; /* *avx512bw_eqv64qi3_mask_1 */

                case 1:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3505; /* *avx512vl_eqv32qi3_mask_1 */

                case 2:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3509; /* *avx512bw_eqv32hi3_mask_1 */

                default:
                  return -1;
                }

            case 157:
              if (XWINT (x11, 0) == 0L)
                {
                  switch (pattern987 (x3))
                    {
                    case 0:
                      if ((
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3499; /* *avx512bw_eqv64qi3_mask_1 */
                      break;

                    case 1:
                      if ((
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return 3507; /* *avx512vl_eqv32qi3_mask_1 */
                      break;

                    case 2:
                      if ((
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return 3511; /* *avx512bw_eqv32hi3_mask_1 */
                      break;

                    default:
                      break;
                    }
                }
              operands[3] = x11;
              if (!const_0_to_7_operand (operands[3], E_SImode))
                return -1;
              x5 = XEXP (x3, 1);
              operands[4] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern1089 (x3, 
E_V64QImode, 
E_DImode) != 0
                      || !register_operand (operands[4], E_DImode)
                      || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3521; /* avx512bw_ucmpv64qi3_mask */

                case E_SImode:
                  if (pattern1069 (x3, 
E_SImode) != 0)
                    return -1;
                  switch (pattern869 ())
                    {
                    case 0:
                      if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                        return -1;
                      return 3525; /* avx512vl_ucmpv32qi3_mask */

                    case 1:
                      if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                        return -1;
                      return 3527; /* avx512bw_ucmpv32hi3_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          x12 = XVECEXP (x4, 0, 0);
          operands[1] = x12;
          x13 = XVECEXP (x4, 0, 1);
          operands[2] = x13;
          x5 = XEXP (x3, 1);
          operands[3] = x5;
          switch (XINT (x4, 1))
            {
            case 158:
              switch (pattern873 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8114; /* avx512bw_testmv64qi3_mask */

                case 1:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8116; /* avx512vl_testmv32qi3_mask */

                case 2:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8120; /* avx512bw_testmv32hi3_mask */

                default:
                  return -1;
                }

            case 159:
              switch (pattern873 (x3))
                {
                case 0:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8138; /* avx512bw_testnmv64qi3_mask */

                case 1:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8140; /* avx512vl_testnmv32qi3_mask */

                case 2:
                  if (!(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8144; /* avx512bw_testnmv32hi3_mask */

                default:
                  return -1;
                }

            case 193:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !vector_operand (operands[1], E_V32HFmode)
                  || !const_0_to_255_operand (operands[2], E_VOIDmode)
                  || !register_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 9992; /* avx512dq_fpclassv32hf_mask */

            case 214:
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern872 (x3, 
E_DImode, 
E_V64QImode) != 0
                      || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 10328; /* avx512vl_vpshufbitqmbv64qi_mask */

                case E_SImode:
                  if (pattern872 (x3, 
E_SImode, 
E_V32QImode) != 0
                      || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 10332; /* avx512vl_vpshufbitqmbv32qi_mask */

                default:
                  return -1;
                }

            case 262:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !nonimmediate_operand (operands[1], E_V32BFmode)
                  || !const_0_to_255_operand (operands[2], E_VOIDmode)
                  || !register_operand (operands[3], E_SImode)
                  || !(
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10724; /* avx10_2_fpclassbf16_v32bf_mask */

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
recog_125 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HImode:
      if (pattern632 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4569; /* unspec_avx512fp16_fixuns_truncv8hi2_mask */

    case E_V16HImode:
      if (pattern632 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4576; /* unspec_avx512fp16_fixuns_truncv16hi2_mask */

    case E_V32HImode:
      if (pattern632 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4584; /* unspec_avx512fp16_fixuns_truncv32hi2_mask */

    case E_V8SImode:
      switch (pattern995 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4592; /* unspec_avx512fp16_fixuns_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5034; /* unspec_fixuns_truncv8dfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 5155; /* unspec_fixuns_truncv8sfv8si2_mask */

        default:
          return -1;
        }

    case E_V16SImode:
      switch (pattern994 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4600; /* unspec_avx512fp16_fixuns_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4881; /* unspec_fixuns_truncv16sfv16si2_mask */

        default:
          return -1;
        }

    case E_V8DImode:
      switch (pattern995 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4608; /* unspec_avx512fp16_fixuns_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5067; /* unspec_fixuns_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5127; /* unspec_fixuns_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case E_V4SImode:
      switch (pattern996 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4657; /* unspec_avx512fp16_fixuns_truncv4si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5057; /* unspec_fixuns_truncv4dfv4si2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && 1)))
            return -1;
          return 5158; /* unspec_fixuns_truncv4sfv4si2_mask */

        default:
          return -1;
        }

    case E_V4DImode:
      switch (pattern996 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4664; /* unspec_avx512fp16_fixuns_truncv4di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5075; /* unspec_fixuns_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5135; /* unspec_fixuns_truncv4sfv4di2_mask */

        default:
          return -1;
        }

    case E_V2DImode:
      switch (pattern997 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7956 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4685; /* unspec_avx512fp16_fixuns_truncv2di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5080; /* unspec_fixuns_truncv2dfv2di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
            return -1;
          return 5148; /* unspec_avx512dq_fixuns_truncv2sfv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_135 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern481 (x2))
    {
    case 0:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10258; /* vpshldv_v32hi_mask */

    case 1:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10259; /* vpshldv_v16si_mask */

    case 2:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10260; /* vpshldv_v8di_mask */

    case 3:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10261; /* vpshldv_v16hi_mask */

    case 4:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10262; /* vpshldv_v8si_mask */

    case 5:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10263; /* vpshldv_v4di_mask */

    case 6:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10264; /* vpshldv_v8hi_mask */

    case 7:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10265; /* vpshldv_v4si_mask */

    case 8:
      if (!(
#line 30503 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10266; /* vpshldv_v2di_mask */

    case 9:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10267; /* vpshldv_v32hi_maskz_1 */

    case 10:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10268; /* vpshldv_v16si_maskz_1 */

    case 11:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10269; /* vpshldv_v8di_maskz_1 */

    case 12:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10270; /* vpshldv_v16hi_maskz_1 */

    case 13:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10271; /* vpshldv_v8si_maskz_1 */

    case 14:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10272; /* vpshldv_v4di_maskz_1 */

    case 15:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10273; /* vpshldv_v8hi_maskz_1 */

    case 16:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10274; /* vpshldv_v4si_maskz_1 */

    case 17:
      if (!(
#line 30533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10275; /* vpshldv_v2di_maskz_1 */

    default:
      return -1;
    }
}

 int
recog_140 (rtx x1 ATTRIBUTE_UNUSED,
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
  x7 = XEXP (x2, 1);
  operands[4] = x7;
  x8 = XEXP (x2, 2);
  operands[5] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern476 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7084; /* avx512f_alignv16si_mask */

    case E_V8SImode:
      if (pattern476 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7086; /* avx512vl_alignv8si_mask */

    case E_V4SImode:
      if (pattern476 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7088; /* avx512vl_alignv4si_mask */

    case E_V8DImode:
      if (pattern476 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7090; /* avx512f_alignv8di_mask */

    case E_V4DImode:
      if (pattern476 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7092; /* avx512vl_alignv4di_mask */

    case E_V2DImode:
      if (pattern476 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7094; /* avx512vl_alignv2di_mask */

    default:
      return -1;
    }
}

 int
recog_146 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 2);
  if (!register_operand (x5, E_QImode))
    return -1;
  x6 = XEXP (x4, 0);
  x7 = XEXP (x6, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x7;
      x8 = XEXP (x6, 1);
      operands[2] = x8;
      x9 = XEXP (x6, 2);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x9;
          switch (pattern1212 (x2))
            {
            case 0:
              if (pattern1458 (x2, 
E_V8HFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 4248; /* avx512f_vmfmadd_v8hf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4254; /* avx512f_vmfmadd_v8hf_mask3 */

            case 1:
              if (pattern1458 (x2, 
E_V4SFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 6671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 4250; /* avx512f_vmfmadd_v4sf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4256; /* avx512f_vmfmadd_v4sf_mask3 */

            case 2:
              if (pattern1458 (x2, 
E_V2DFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 4252; /* avx512f_vmfmadd_v2df_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4258; /* avx512f_vmfmadd_v2df_mask3 */

            case 3:
              if (pattern1542 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4260; /* avx512f_vmfmadd_v8hf_maskz_1 */

            case 4:
              if (pattern1542 (x2, 
E_V4SFmode) != 0
                  || !
#line 6723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4262; /* avx512f_vmfmadd_v4sf_maskz_1 */

            case 5:
              if (pattern1542 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4264; /* avx512f_vmfmadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case NEG:
          x12 = XEXP (x9, 0);
          operands[3] = x12;
          switch (pattern1212 (x2))
            {
            case 0:
              if (pattern1459 (x2, 
E_V8HFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 4266; /* *avx512f_vmfmsub_v8hf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4272; /* avx512f_vmfmsub_v8hf_mask3 */

            case 1:
              if (pattern1459 (x2, 
E_V4SFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && 
#line 6744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 4268; /* *avx512f_vmfmsub_v4sf_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4274; /* avx512f_vmfmsub_v4sf_mask3 */

            case 2:
              if (pattern1459 (x2, 
E_V2DFmode) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              if (rtx_equal_p (x10, operands[1]))
                {
                  x11 = XEXP (x2, 1);
                  if (rtx_equal_p (x11, operands[1])
                      && (
#line 6744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 4270; /* *avx512f_vmfmsub_v2df_mask */
                }
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4276; /* avx512f_vmfmsub_v2df_mask3 */

            case 3:
              if (pattern1543 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4278; /* *avx512f_vmfmsub_v8hf_maskz_1 */

            case 4:
              if (pattern1543 (x2, 
E_V4SFmode) != 0
                  || !
#line 6784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4280; /* *avx512f_vmfmsub_v4sf_maskz_1 */

            case 5:
              if (pattern1543 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4282; /* *avx512f_vmfmsub_v2df_maskz_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 2);
      switch (GET_CODE (x9))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x9;
          switch (pattern1004 (x2))
            {
            case 0:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V8HFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 6805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return 4284; /* avx512f_vmfnmadd_v8hf_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6826 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4290; /* avx512f_vmfnmadd_v8hf_mask3 */

            case 1:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V4SFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && 
#line 6805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                        return 4286; /* avx512f_vmfnmadd_v4sf_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !
#line 6826 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4292; /* avx512f_vmfnmadd_v4sf_mask3 */

            case 2:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              x13 = XEXP (x7, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[3], E_V2DFmode))
                {
                  x10 = XEXP (x4, 1);
                  if (rtx_equal_p (x10, operands[1]))
                    {
                      x11 = XEXP (x2, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 6805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return 4288; /* avx512f_vmfnmadd_v2df_mask */
                    }
                }
              operands[1] = x8;
              operands[2] = x13;
              if (!nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x10 = XEXP (x4, 1);
              if (!rtx_equal_p (x10, operands[3]))
                return -1;
              x11 = XEXP (x2, 1);
              if (!rtx_equal_p (x11, operands[3])
                  || !(
#line 6826 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4294; /* avx512f_vmfnmadd_v2df_mask3 */

            case 3:
              if (pattern1544 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4296; /* avx512f_vmfnmadd_v8hf_maskz_1 */

            case 4:
              if (pattern1544 (x2, 
E_V4SFmode) != 0
                  || !
#line 6859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4298; /* avx512f_vmfnmadd_v4sf_maskz_1 */

            case 5:
              if (pattern1544 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4300; /* avx512f_vmfnmadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case NEG:
          x12 = XEXP (x9, 0);
          operands[3] = x12;
          switch (pattern1004 (x2))
            {
            case 0:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1695 (x2, 
E_V8HFmode) == 0
                  && (
#line 6881 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return 4302; /* *avx512f_vmfnmsub_v8hf_mask */
              operands[1] = x8;
              if (pattern1696 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6903 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4308; /* *avx512f_vmfnmsub_v8hf_mask3 */

            case 1:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1695 (x2, 
E_V4SFmode) == 0
                  && 
#line 6881 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return 4304; /* *avx512f_vmfnmsub_v4sf_mask */
              operands[1] = x8;
              if (pattern1696 (x2, 
E_V4SFmode) != 0
                  || !
#line 6903 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4310; /* *avx512f_vmfnmsub_v4sf_mask3 */

            case 2:
              x8 = XEXP (x6, 1);
              operands[2] = x8;
              if (pattern1695 (x2, 
E_V2DFmode) == 0
                  && (
#line 6881 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return 4306; /* *avx512f_vmfnmsub_v2df_mask */
              operands[1] = x8;
              if (pattern1696 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6903 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4312; /* *avx512f_vmfnmsub_v2df_mask3 */

            case 3:
              if (pattern1545 (x2, 
E_V8HFmode) != 0
                  || !(
#line 6923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4314; /* *avx512f_vmfnmsub_v8hf_maskz_1 */

            case 4:
              if (pattern1545 (x2, 
E_V4SFmode) != 0
                  || !
#line 6923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 4316; /* *avx512f_vmfnmsub_v4sf_maskz_1 */

            case 5:
              if (pattern1545 (x2, 
E_V2DFmode) != 0
                  || !(
#line 6923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4318; /* *avx512f_vmfnmsub_v2df_maskz_1 */

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
recog_158 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern637 (x2))
    {
    case 0:
      if (pattern1379 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3876; /* fma_fmsub_v32hf_maskz_1 */

    case 1:
      if (pattern1379 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3880; /* fma_fmsub_v16hf_maskz_1 */

    case 2:
      if (pattern1379 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3884; /* fma_fmsub_v8hf_maskz_1 */

    case 3:
      if (pattern1379 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3888; /* fma_fmsub_v16sf_maskz_1 */

    case 4:
      if (pattern1379 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3892; /* fma_fmsub_v8sf_maskz_1 */

    case 5:
      if (pattern1379 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3896; /* fma_fmsub_v4sf_maskz_1 */

    case 6:
      if (pattern1379 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3899; /* fma_fmsub_v8df_maskz_1 */

    case 7:
      if (pattern1379 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3903; /* fma_fmsub_v4df_maskz_1 */

    case 8:
      if (pattern1379 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3907; /* fma_fmsub_v2df_maskz_1 */

    case 9:
      if (pattern1381 (x2, 
E_SImode, 
E_V32BFmode) != 0
          || !(
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10658; /* avx10_2_fmsubbf16_v32bf_maskz_1 */

    case 10:
      if (pattern1381 (x2, 
E_HImode, 
E_V16BFmode) != 0
          || !
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10660; /* avx10_2_fmsubbf16_v16bf_maskz_1 */

    case 11:
      if (pattern1381 (x2, 
E_QImode, 
E_V8BFmode) != 0
          || !
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10662; /* avx10_2_fmsubbf16_v8bf_maskz_1 */

    case 12:
      if (pattern1383 (x2, 
E_V4SFmode) != 0
          || !
#line 6971 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4))
        return -1;
      return 4322; /* *fma4i_vmfmsub_v4sf */

    case 13:
      if (pattern1383 (x2, 
E_V2DFmode) != 0
          || !(
#line 6971 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4323; /* *fma4i_vmfmsub_v2df */

    case 14:
      if (pattern1294 (x2, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HFmode)
          && vector_operand (operands[3], E_V32HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return 3908; /* avx512bw_fmsub_v32hf_mask */
        }
      if (!vector_operand (operands[1], E_V32HFmode)
          || !nonimmediate_operand (operands[3], E_V32HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3923; /* avx512bw_fmsub_v32hf_mask3 */

    case 15:
      if (pattern1294 (x2, 
E_V16HFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HFmode)
          && vector_operand (operands[3], E_V16HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3910; /* avx512vl_fmsub_v16hf_mask */
        }
      if (!vector_operand (operands[1], E_V16HFmode)
          || !nonimmediate_operand (operands[3], E_V16HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3925; /* avx512vl_fmsub_v16hf_mask3 */

    case 16:
      if (pattern1294 (x2, 
E_V8HFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HFmode)
          && vector_operand (operands[3], E_V8HFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 3912; /* avx512fp16_fmsub_v8hf_mask */
        }
      if (!vector_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[3], E_V8HFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3927; /* avx512fp16_fmsub_v8hf_mask3 */

    case 17:
      if (pattern1294 (x2, 
E_V16SFmode, 
E_HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SFmode)
          && vector_operand (operands[3], E_V16SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3913; /* avx512f_fmsub_v16sf_mask */
        }
      if (!vector_operand (operands[1], E_V16SFmode)
          || !nonimmediate_operand (operands[3], E_V16SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3928; /* avx512f_fmsub_v16sf_mask3 */

    case 18:
      if (pattern1294 (x2, 
E_V8SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && vector_operand (operands[3], E_V8SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3915; /* avx512vl_fmsub_v8sf_mask */
        }
      if (!vector_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[3], E_V8SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3930; /* avx512vl_fmsub_v8sf_mask3 */

    case 19:
      if (pattern1294 (x2, 
E_V4SFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode)
          && vector_operand (operands[3], E_V4SFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3917; /* avx512vl_fmsub_v4sf_mask */
        }
      if (!vector_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[3], E_V4SFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3932; /* avx512vl_fmsub_v4sf_mask3 */

    case 20:
      if (pattern1294 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DFmode)
          && vector_operand (operands[3], E_V8DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 3918; /* avx512f_fmsub_v8df_mask */
        }
      if (!vector_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[3], E_V8DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3933; /* avx512f_fmsub_v8df_mask3 */

    case 21:
      if (pattern1294 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && vector_operand (operands[3], E_V4DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3920; /* avx512vl_fmsub_v4df_mask */
        }
      if (!vector_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[3], E_V4DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3935; /* avx512vl_fmsub_v4df_mask3 */

    case 22:
      if (pattern1294 (x2, 
E_V2DFmode, 
E_QImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && vector_operand (operands[3], E_V2DFmode))
        {
          x3 = XEXP (x2, 1);
          if (rtx_equal_p (x3, operands[1])
              && (
#line 6088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 3922; /* avx512vl_fmsub_v2df_mask */
        }
      if (!vector_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[3], E_V2DFmode))
        return -1;
      x3 = XEXP (x2, 1);
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 6106 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3937; /* avx512vl_fmsub_v2df_mask3 */

    case 23:
      if (pattern1296 (x2, 
E_SImode, 
E_V32BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && (
#line 32295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return 10663; /* avx10_2_fmsubbf16_v32bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !(
#line 32313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10666; /* avx10_2_fmsubbf16_v32bf_mask3 */

    case 24:
      if (pattern1296 (x2, 
E_HImode, 
E_V16BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && 
#line 32295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10664; /* avx10_2_fmsubbf16_v16bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !
#line 32313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10667; /* avx10_2_fmsubbf16_v16bf_mask3 */

    case 25:
      if (pattern1296 (x2, 
E_QImode, 
E_V8BFmode) != 0)
        return -1;
      x3 = XEXP (x2, 1);
      if (rtx_equal_p (x3, operands[1])
          && 
#line 32295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return 10665; /* avx10_2_fmsubbf16_v8bf_mask */
      if (!rtx_equal_p (x3, operands[3])
          || !
#line 32313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10668; /* avx10_2_fmsubbf16_v8bf_mask3 */

    case 26:
      if (pattern1384 (x2, 
E_V8HFmode) != 0
          || !(
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 4230; /* *fmai_fmsub_v8hf */

    case 27:
      if (pattern1384 (x2, 
E_V4SFmode) != 0
          || !
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
        return -1;
      return 4232; /* *fmai_fmsub_v4sf */

    case 28:
      if (pattern1384 (x2, 
E_V2DFmode) != 0
          || !(
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 4234; /* *fmai_fmsub_v2df */

    default:
      return -1;
    }
}

 int
recog_162 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (pattern929 (x4) != 0)
    return -1;
  x5 = XEXP (x2, 2);
  if (!register_operand (x5, E_QImode))
    return -1;
  x6 = XVECEXP (x4, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 2L:
      x7 = XVECEXP (x4, 0, 1);
      if (XWINT (x7, 0) != 10L)
        return -1;
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 3L)
        return -1;
      x9 = XVECEXP (x4, 0, 3);
      if (XWINT (x9, 0) != 11L
          || pattern1731 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1582 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11182 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5254; /* avx_unpckhps256_mask */

        case E_V8SImode:
          if (pattern1582 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19737 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return -1;
          return 8372; /* avx2_interleave_highv8si_mask */

        default:
          return -1;
        }

    case 0L:
      x7 = XVECEXP (x4, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 8L:
          x8 = XVECEXP (x4, 0, 2);
          switch (XWINT (x8, 0))
            {
            case 1L:
              x9 = XVECEXP (x4, 0, 3);
              if (XWINT (x9, 0) != 9L)
                return -1;
              x10 = XEXP (x3, 0);
              x11 = XEXP (x10, 1);
              operands[2] = x11;
              x12 = XEXP (x2, 1);
              operands[3] = x12;
              operands[4] = x5;
              x13 = XVECEXP (x4, 0, 4);
              switch (XWINT (x13, 0))
                {
                case 4L:
                  x14 = XVECEXP (x4, 0, 5);
                  if (XWINT (x14, 0) != 12L)
                    return -1;
                  x15 = XVECEXP (x4, 0, 6);
                  if (XWINT (x15, 0) != 5L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 7);
                  if (XWINT (x16, 0) != 13L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SFmode:
                      if (pattern1582 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11270 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                        return -1;
                      return 5260; /* avx_unpcklps256_mask */

                    case E_V8SImode:
                      if (pattern1582 (x2, 
E_V8SImode, 
E_V16SImode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19792 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                        return -1;
                      return 8378; /* avx2_interleave_lowv8si_mask */

                    default:
                      return -1;
                    }

                case 2L:
                  x14 = XVECEXP (x4, 0, 5);
                  if (XWINT (x14, 0) != 10L)
                    return -1;
                  x15 = XVECEXP (x4, 0, 6);
                  if (XWINT (x15, 0) != 3L)
                    return -1;
                  x16 = XVECEXP (x4, 0, 7);
                  if (XWINT (x16, 0) != 11L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8HImode:
                      if (pattern1583 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8366; /* vec_interleave_lowv8hi_mask */

                    case E_V8HFmode:
                      if (pattern1583 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8368; /* vec_interleave_lowv8hf_mask */

                    case E_V8BFmode:
                      if (pattern1583 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                        return -1;
                      return 8370; /* vec_interleave_lowv8bf_mask */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case 2L:
              x9 = XVECEXP (x4, 0, 3);
              if (XWINT (x9, 0) != 10L)
                return -1;
              x13 = XVECEXP (x4, 0, 4);
              if (XWINT (x13, 0) != 4L)
                return -1;
              x14 = XVECEXP (x4, 0, 5);
              if (XWINT (x14, 0) != 12L)
                return -1;
              x15 = XVECEXP (x4, 0, 6);
              if (XWINT (x15, 0) != 6L)
                return -1;
              x16 = XVECEXP (x4, 0, 7);
              if (XWINT (x16, 0) != 14L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8DFmode:
                  if (pattern1638 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0)
                    return -1;
                  x12 = XEXP (x2, 1);
                  operands[2] = x12;
                  if (nonimmediate_operand (operands[1], E_V8DFmode))
                    {
                      operands[3] = x5;
                      x10 = XEXP (x3, 0);
                      x11 = XEXP (x10, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13451 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                        return 5412; /* avx512f_movddup512_mask */
                    }
                  operands[3] = x12;
                  if (!register_operand (operands[1], E_V8DFmode))
                    return -1;
                  x10 = XEXP (x3, 0);
                  x11 = XEXP (x10, 1);
                  operands[2] = x11;
                  if (!nonimmediate_operand (operands[2], E_V8DFmode))
                    return -1;
                  operands[4] = x5;
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 5414; /* avx512f_unpcklpd512_mask */

                case E_V8DImode:
                  if (pattern1639 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return -1;
                  return 7209; /* avx512f_interleave_lowv8di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1666 (x4) != 0
              || pattern1806 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5270; /* avx_movsldup256_mask */

        default:
          return -1;
        }

    case 1L:
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 3L)
        return -1;
      x13 = XVECEXP (x4, 0, 4);
      if (XWINT (x13, 0) != 5L)
        return -1;
      x15 = XVECEXP (x4, 0, 6);
      if (XWINT (x15, 0) != 7L)
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          x9 = XVECEXP (x4, 0, 3);
          if (XWINT (x9, 0) != 3L)
            return -1;
          x14 = XVECEXP (x4, 0, 5);
          if (XWINT (x14, 0) != 5L)
            return -1;
          x16 = XVECEXP (x4, 0, 7);
          if (XWINT (x16, 0) != 7L
              || pattern1806 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11356 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 5264; /* avx_movshdup256_mask */

        case 9L:
          x9 = XVECEXP (x4, 0, 3);
          if (XWINT (x9, 0) != 11L)
            return -1;
          x14 = XVECEXP (x4, 0, 5);
          if (XWINT (x14, 0) != 13L)
            return -1;
          x16 = XVECEXP (x4, 0, 7);
          if (XWINT (x16, 0) != 15L)
            return -1;
          x10 = XEXP (x3, 0);
          x11 = XEXP (x10, 1);
          operands[2] = x11;
          x12 = XEXP (x2, 1);
          operands[3] = x12;
          operands[4] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1582 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 5406; /* avx512f_unpckhpd512_mask */

            case E_V8DImode:
              if (pattern1582 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7203; /* avx512f_interleave_highv8di_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x7 = XVECEXP (x4, 0, 1);
      if (XWINT (x7, 0) != 12L)
        return -1;
      x8 = XVECEXP (x4, 0, 2);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x9 = XVECEXP (x4, 0, 3);
      if (XWINT (x9, 0) != 13L
          || pattern1731 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1583 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8348; /* vec_interleave_highv8hi_mask */

        case E_V8HFmode:
          if (pattern1583 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8350; /* vec_interleave_highv8hf_mask */

        case E_V8BFmode:
          if (pattern1583 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8352; /* vec_interleave_highv8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_180 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x58, x59, x60, x61;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          return recog_166 (x1, insn, pnum_clobbers);

        case SS_TRUNCATE:
          x7 = XEXP (x5, 1);
          if (GET_CODE (x7) != SS_TRUNCATE)
            return -1;
          x8 = XEXP (x6, 0);
          operands[1] = x8;
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          x10 = XEXP (x2, 1);
          operands[3] = x10;
          x11 = XEXP (x2, 2);
          operands[4] = x11;
          switch (XVECLEN (x4, 0))
            {
            case 32:
              if (pattern671 (x4, 
3, 
2, 
1) != 0
                  || pattern1301 (x4) != 0
                  || pattern1784 (x4, 
23, 
22, 
21, 
20) != 0)
                return -1;
              x12 = XVECEXP (x4, 0, 20);
              if (GET_CODE (x12) != CONST_INT)
                return -1;
              x13 = XVECEXP (x4, 0, 21);
              if (GET_CODE (x13) != CONST_INT)
                return -1;
              x14 = XVECEXP (x4, 0, 22);
              if (GET_CODE (x14) != CONST_INT)
                return -1;
              x15 = XVECEXP (x4, 0, 23);
              if (GET_CODE (x15) != CONST_INT)
                return -1;
              x16 = XVECEXP (x4, 0, 24);
              if (GET_CODE (x16) != CONST_INT)
                return -1;
              x17 = XVECEXP (x4, 0, 25);
              if (GET_CODE (x17) != CONST_INT)
                return -1;
              x18 = XVECEXP (x4, 0, 26);
              if (GET_CODE (x18) != CONST_INT)
                return -1;
              x19 = XVECEXP (x4, 0, 27);
              if (GET_CODE (x19) != CONST_INT
                  || pattern1879 (x4, 
31, 
30, 
29, 
28) != 0
                  || !register_operand (operands[4], E_SImode))
                return -1;
              x20 = XVECEXP (x4, 0, 4);
              switch (XWINT (x20, 0))
                {
                case 4L:
                  x21 = XVECEXP (x4, 0, 5);
                  if (XWINT (x21, 0) != 5L)
                    return -1;
                  x22 = XVECEXP (x4, 0, 6);
                  if (XWINT (x22, 0) != 6L)
                    return -1;
                  x23 = XVECEXP (x4, 0, 7);
                  if (XWINT (x23, 0) != 7L)
                    return -1;
                  x24 = XVECEXP (x4, 0, 8);
                  if (XWINT (x24, 0) != 16L)
                    return -1;
                  x25 = XVECEXP (x4, 0, 9);
                  if (XWINT (x25, 0) != 17L)
                    return -1;
                  x26 = XVECEXP (x4, 0, 10);
                  if (XWINT (x26, 0) != 18L)
                    return -1;
                  x27 = XVECEXP (x4, 0, 11);
                  if (XWINT (x27, 0) != 19L
                      || XWINT (x12, 0) != 12L
                      || XWINT (x13, 0) != 13L
                      || XWINT (x14, 0) != 14L
                      || XWINT (x15, 0) != 15L
                      || XWINT (x16, 0) != 24L
                      || XWINT (x17, 0) != 25L
                      || XWINT (x18, 0) != 26L
                      || XWINT (x19, 0) != 27L
                      || pattern1887 (x2, 
E_V32QImode, 
E_V16HImode, 
E_V16QImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8308; /* avx2_packsswb_mask */

                case 16L:
                  x21 = XVECEXP (x4, 0, 5);
                  if (XWINT (x21, 0) != 17L)
                    return -1;
                  x22 = XVECEXP (x4, 0, 6);
                  if (XWINT (x22, 0) != 18L)
                    return -1;
                  x23 = XVECEXP (x4, 0, 7);
                  if (XWINT (x23, 0) != 19L)
                    return -1;
                  x24 = XVECEXP (x4, 0, 8);
                  if (XWINT (x24, 0) != 4L)
                    return -1;
                  x25 = XVECEXP (x4, 0, 9);
                  if (XWINT (x25, 0) != 5L)
                    return -1;
                  x26 = XVECEXP (x4, 0, 10);
                  if (XWINT (x26, 0) != 6L)
                    return -1;
                  x27 = XVECEXP (x4, 0, 11);
                  if (XWINT (x27, 0) != 7L
                      || XWINT (x12, 0) != 24L
                      || XWINT (x13, 0) != 25L
                      || XWINT (x14, 0) != 26L
                      || XWINT (x15, 0) != 27L
                      || XWINT (x16, 0) != 12L
                      || XWINT (x17, 0) != 13L
                      || XWINT (x18, 0) != 14L
                      || XWINT (x19, 0) != 15L
                      || pattern1887 (x2, 
E_V32HImode, 
E_V16SImode, 
E_V16HImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8316; /* avx512bw_packssdw_mask */

                default:
                  return -1;
                }

            case 64:
              if (pattern670 (x4) != 0
                  || pattern1303 (x4, 
35, 
34, 
33, 
32) != 0
                  || pattern1784 (x4, 
39, 
38, 
37, 
36) != 0)
                return -1;
              x12 = XVECEXP (x4, 0, 20);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
                return -1;
              x13 = XVECEXP (x4, 0, 21);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
                return -1;
              x14 = XVECEXP (x4, 0, 22);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x15 = XVECEXP (x4, 0, 23);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
                return -1;
              x16 = XVECEXP (x4, 0, 24);
              if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 40])
                return -1;
              x17 = XVECEXP (x4, 0, 25);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 41])
                return -1;
              x18 = XVECEXP (x4, 0, 26);
              if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 42])
                return -1;
              x19 = XVECEXP (x4, 0, 27);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 43]
                  || pattern1879 (x4, 
47, 
46, 
45, 
44) != 0)
                return -1;
              x28 = XVECEXP (x4, 0, 32);
              if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x29 = XVECEXP (x4, 0, 33);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x30 = XVECEXP (x4, 0, 34);
              if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x31 = XVECEXP (x4, 0, 35);
              if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x32 = XVECEXP (x4, 0, 36);
              if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x33 = XVECEXP (x4, 0, 37);
              if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x34 = XVECEXP (x4, 0, 38);
              if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x35 = XVECEXP (x4, 0, 39);
              if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x36 = XVECEXP (x4, 0, 40);
              if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 48])
                return -1;
              x37 = XVECEXP (x4, 0, 41);
              if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 49])
                return -1;
              x38 = XVECEXP (x4, 0, 42);
              if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 50])
                return -1;
              x39 = XVECEXP (x4, 0, 43);
              if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 51])
                return -1;
              x40 = XVECEXP (x4, 0, 44);
              if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 52])
                return -1;
              x41 = XVECEXP (x4, 0, 45);
              if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 53])
                return -1;
              x42 = XVECEXP (x4, 0, 46);
              if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 54])
                return -1;
              x43 = XVECEXP (x4, 0, 47);
              if (x43 != const_int_rtx[MAX_SAVED_CONST_INT + 55])
                return -1;
              x44 = XVECEXP (x4, 0, 48);
              if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x45 = XVECEXP (x4, 0, 49);
              if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x46 = XVECEXP (x4, 0, 50);
              if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x47 = XVECEXP (x4, 0, 51);
              if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x48 = XVECEXP (x4, 0, 52);
              if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x49 = XVECEXP (x4, 0, 53);
              if (x49 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x50 = XVECEXP (x4, 0, 54);
              if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
                return -1;
              x51 = XVECEXP (x4, 0, 55);
              if (x51 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return -1;
              x52 = XVECEXP (x4, 0, 56);
              if (x52 != const_int_rtx[MAX_SAVED_CONST_INT + 56])
                return -1;
              x53 = XVECEXP (x4, 0, 57);
              if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 57])
                return -1;
              x54 = XVECEXP (x4, 0, 58);
              if (x54 != const_int_rtx[MAX_SAVED_CONST_INT + 58])
                return -1;
              x55 = XVECEXP (x4, 0, 59);
              if (x55 != const_int_rtx[MAX_SAVED_CONST_INT + 59])
                return -1;
              x56 = XVECEXP (x4, 0, 60);
              if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 60])
                return -1;
              x57 = XVECEXP (x4, 0, 61);
              if (x57 != const_int_rtx[MAX_SAVED_CONST_INT + 61])
                return -1;
              x58 = XVECEXP (x4, 0, 62);
              if (x58 != const_int_rtx[MAX_SAVED_CONST_INT + 62])
                return -1;
              x59 = XVECEXP (x4, 0, 63);
              if (x59 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
                  || pattern1828 (x2, 
E_DImode, 
E_V64QImode, 
E_V32HImode, 
E_V32QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8310; /* avx512bw_packsswb_mask */

            case 16:
              if (pattern791 (x4, 
10, 
9, 
8) != 0
                  || pattern1482 (x4, 
7, 
6, 
5, 
4, 
11) != 0
                  || pattern1828 (x2, 
E_HImode, 
E_V16HImode, 
E_V8SImode, 
E_V8HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19345 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL && TARGET_AVX512BW)))
                return -1;
              return 8314; /* avx2_packssdw_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      switch (XVECLEN (x4, 0))
        {
        case 2:
          res = recog_167 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_169 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 8:
          res = recog_173 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 16:
          res = recog_176 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x4, 0) >= 1)
        {
          operands[2] = x4;
          x60 = XVECEXP (x4, 0, 0);
          operands[3] = x60;
          if (const_int_operand (operands[3], E_VOIDmode))
            {
              x10 = XEXP (x2, 1);
              operands[4] = x10;
              x11 = XEXP (x2, 2);
              operands[5] = x11;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1394 (x2, 
E_V16SFmode, 
E_HImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return 9162; /* *avx512f_vpermilpv16sf_mask */
                  break;

                case E_V8SFmode:
                  if (pattern1394 (x2, 
E_V8SFmode, 
E_QImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                    return 9164; /* *avx_vpermilpv8sf_mask */
                  break;

                case E_V4SFmode:
                  if (pattern1394 (x2, 
E_V4SFmode, 
E_QImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4SFmode))))
                    return 9166; /* *avx_vpermilpv4sf_mask */
                  break;

                case E_V8DFmode:
                  if (pattern1394 (x2, 
E_V8DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                    return 9168; /* *avx512f_vpermilpv8df_mask */
                  break;

                case E_V4DFmode:
                  if (pattern1394 (x2, 
E_V4DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                    return 9170; /* *avx_vpermilpv4df_mask */
                  break;

                case E_V2DFmode:
                  if (pattern1394 (x2, 
E_V2DFmode, 
E_QImode) == 0
                      && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return 9172; /* *avx_vpermilpv2df_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x11 = XEXP (x2, 2);
      if (!register_operand (x11, E_QImode))
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 4:
          if (pattern901 (x2, 
E_V4DFmode) != 0)
            return -1;
          x10 = XEXP (x2, 1);
          operands[6] = x10;
          if (!nonimm_or_0_operand (operands[6], E_V4DFmode))
            return -1;
          operands[7] = x11;
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
            return -1;
          return 9176; /* avx2_permv4df_1_mask */

        case 8:
          if (pattern901 (x2, 
E_V8DFmode) != 0)
            return -1;
          x20 = XVECEXP (x4, 0, 4);
          operands[6] = x20;
          if (!const_4_to_7_operand (operands[6], E_VOIDmode))
            return -1;
          x21 = XVECEXP (x4, 0, 5);
          operands[7] = x21;
          if (!const_4_to_7_operand (operands[7], E_VOIDmode))
            return -1;
          x22 = XVECEXP (x4, 0, 6);
          operands[8] = x22;
          if (!const_4_to_7_operand (operands[8], E_VOIDmode))
            return -1;
          x23 = XVECEXP (x4, 0, 7);
          operands[9] = x23;
          if (!const_4_to_7_operand (operands[9], E_VOIDmode))
            return -1;
          x10 = XEXP (x2, 1);
          operands[10] = x10;
          if (!nonimm_or_0_operand (operands[10], E_V8DFmode))
            return -1;
          operands[11] = x11;
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL)
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9178; /* avx512f_permv8df_1_mask */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x5, 0) != 1
          || XINT (x5, 1) != 149
          || GET_MODE (x5) != E_V8SFmode
          || XVECLEN (x4, 0) != 4
          || pattern671 (x4, 
3, 
2, 
1) != 0
          || !register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      x61 = XVECEXP (x5, 0, 0);
      operands[1] = x61;
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      x10 = XEXP (x2, 1);
      operands[2] = x10;
      if (!nonimm_or_0_operand (operands[2], E_V4SFmode))
        return -1;
      x11 = XEXP (x2, 2);
      operands[3] = x11;
      if (!register_operand (operands[3], E_QImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29089 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
        return -1;
      return 9651; /* vcvtph2ps_mask */

    default:
      return -1;
    }
}

 int
recog_193 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern149 (x2))
    {
    case 0:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24130 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512BW && TARGET_AVX512VL)))
        return -1;
      return 8760; /* avx2_zero_extendv16qiv16hi2_mask */

    case 1:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8768; /* avx512bw_zero_extendv32qiv32hi2_mask */

    case 2:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)))
        return -1;
      return 8780; /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */

    case 3:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24379 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8792; /* avx512f_zero_extendv16qiv16si2_mask */

    case 4:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8820; /* avx512f_zero_extendv16hiv16si2_mask */

    case 5:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8800; /* *avx2_zero_extendv8qiv8si2_mask_1 */

    case 6:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8828; /* avx2_zero_extendv8hiv8si2_mask */

    case 7:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24472 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8812; /* *sse4_1_zero_extendv4qiv4si2_mask_1 */

    case 8:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24645 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8840; /* *sse4_1_zero_extendv4hiv4si2_mask_1 */

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8856; /* *avx512f_zero_extendv8qiv8di2_mask_1 */

    case 10:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8887; /* avx512f_zero_extendv8hiv8di2_mask */

    case 11:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25084 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8915; /* avx512f_zero_extendv8siv8di2_mask */

    case 12:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24834 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8868; /* *avx2_zero_extendv4qiv4di2_mask_1 */

    case 13:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24977 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8895; /* *avx2_zero_extendv4hiv4di2_mask_1 */

    case 14:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25135 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
        return -1;
      return 8921; /* avx2_zero_extendv4siv4di2_mask */

    case 15:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24896 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8880; /* *sse4_1_zero_extendv2qiv2di2_mask_1 */

    case 16:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25035 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8907; /* *sse4_1_zero_extendv2hiv2di2_mask_1 */

    case 17:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25201 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
        return -1;
      return 8931; /* *sse4_1_zero_extendv2siv2di2_mask_1 */

    case 18:
      x3 = XEXP (x2, 0);
      x4 = XEXP (x3, 0);
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern903 (x2))
        {
        case 0:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24242 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL)))
            return 8776; /* sse4_1_zero_extendv8qiv8hi2_mask */
          break;

        case 1:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8796; /* avx2_zero_extendv8qiv8si2_mask */
          break;

        case 2:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return 8852; /* avx512f_zero_extendv8qiv8di2_mask */
          break;

        case 3:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24460 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8808; /* sse4_1_zero_extendv4qiv4si2_mask */
          break;

        case 4:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8836; /* sse4_1_zero_extendv4hiv4si2_mask */
          break;

        case 5:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24823 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8864; /* avx2_zero_extendv4qiv4di2_mask */
          break;

        case 6:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24966 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
            return 8891; /* avx2_zero_extendv4hiv4di2_mask */
          break;

        case 7:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24884 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8876; /* sse4_1_zero_extendv2qiv2di2_mask */
          break;

        case 8:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25023 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8903; /* sse4_1_zero_extendv2hiv2di2_mask */
          break;

        case 9:
          if ((
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25189 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL)))
            return 8927; /* sse4_1_zero_extendv2siv2di2_mask */
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return -1;
      switch (pattern906 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8784; /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8804; /* *avx2_zero_extendv8qiv8si2_mask_2 */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ())))
            return -1;
          return 8860; /* *avx512f_zero_extendv8qiv8di2_mask_2 */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8844; /* *sse4_1_zero_extendv4hiv4si2_mask_2 */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8899; /* *avx2_zero_extendv4hiv4di2_mask_2 */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8935; /* *sse4_1_zero_extendv2siv2di2_mask_2 */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8816; /* *sse4_1_zero_extendv4qiv4si2_mask_2 */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8872; /* *avx2_zero_extendv4qiv4di2_mask_2 */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ())))
            return -1;
          return 8911; /* *sse4_1_zero_extendv2hiv2di2_mask_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_203 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
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
          return 2831; /* avx512fp16_vmdivv8hf3 */

        case 1:
          if (!
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2839; /* sse_vmdivv4sf3 */

        case 2:
          if (!(
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2847; /* sse2_vmdivv2df3 */

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
          if (pattern1010 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2853; /* avx512fp16_divv32hf3_mask */

        case E_V16HFmode:
          if (pattern1010 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2857; /* avx512fp16_divv16hf3_mask */

        case E_V8HFmode:
          if (pattern1010 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2860; /* avx512fp16_divv8hf3_mask */

        case E_V16SFmode:
          if (pattern1010 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2863; /* avx512f_divv16sf3_mask */

        case E_V8SFmode:
          if (pattern1010 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2867; /* avx_divv8sf3_mask */

        case E_V4SFmode:
          if (pattern1010 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2870; /* sse_divv4sf3_mask */

        case E_V8DFmode:
          if (pattern1010 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2873; /* avx512f_divv8df3_mask */

        case E_V4DFmode:
          if (pattern1010 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2877; /* avx_divv4df3_mask */

        case E_V2DFmode:
          if (pattern1010 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2880; /* sse2_divv2df3_mask */

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
          return 10616; /* avx10_2_divbf16_v32bf_mask */

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
          return 10624; /* avx10_2_divbf16_v16bf_mask */

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
          return 10632; /* avx10_2_divbf16_v8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_213 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 3134 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2964; /* avx_rsqrtv8sf2 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 3134 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2965; /* sse_rsqrtv4sf2 */

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x2) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2966; /* avx512fp16_rsqrtv32hf2 */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x2) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2968; /* avx512fp16_rsqrtv16hf2 */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2970; /* avx512fp16_rsqrtv8hf2 */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10681; /* avx10_2_rsqrtbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x2) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10683; /* avx10_2_rsqrtbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x2) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10685; /* avx10_2_rsqrtbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_219 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 2);
  operands[3] = x7;
  x8 = XVECEXP (x2, 0, 1);
  operands[4] = x8;
  switch (XINT (x4, 1))
    {
    case 156:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4425; /* avx512fp16_vcvtph2uw_v32hi_mask_round */

        case E_V16SImode:
          if (pattern1310 (x2, 
E_HImode, 
E_V16SImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4433; /* avx512fp16_vcvtph2udq_v16si_mask_round */

            case E_V16SFmode:
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4848; /* avx512f_fixuns_notruncv16sfv16si_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1473 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4441; /* avx512fp16_vcvtph2uqq_v8di_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4868; /* avx512dq_cvtps2uqqv8di_mask_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5114; /* fixuns_notruncv8dfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4449; /* avx512fp16_vcvtph2uw_v16hi_mask_round */

        case E_V8SImode:
          switch (pattern1473 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4457; /* avx512fp16_vcvtph2udq_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4852; /* avx512vl_fixuns_notruncv8sfv8si_mask_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5020; /* fixuns_notruncv8dfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1474 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4465; /* avx512fp16_vcvtph2uqq_v4di_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4872; /* avx512dq_cvtps2uqqv4di_mask_round */

            case 2:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5118; /* fixuns_notruncv4dfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1475 (x2, 
E_V4SImode) != 0
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !nonimm_or_0_operand (operands[2], E_V4SImode)
              || !register_operand (operands[3], E_QImode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 5024; /* fixuns_notruncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 46:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4429; /* avx512fp16_vcvtph2w_v32hi_mask_round */

        case E_V16SImode:
          switch (pattern1476 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4437; /* avx512fp16_vcvtph2dq_v16si_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8708 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4844; /* avx512f_fix_notruncv16sfv16si_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8DImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4445; /* avx512fp16_vcvtph2qq_v8di_mask_round */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4858; /* avx512dq_cvtps2qqv8di_mask_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5104; /* fix_notruncv8dfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4453; /* avx512fp16_vcvtph2w_v16hi_mask_round */

        case E_V8SImode:
          switch (pattern1477 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4461; /* avx512fp16_vcvtph2dq_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SImode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 4838; /* avx_fix_notruncv8sfv8si_mask_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5008; /* avx512f_cvtpd2dq512_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1474 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4469; /* avx512fp16_vcvtph2qq_v4di_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4862; /* avx512dq_cvtps2qqv4di_mask_round */

            case 2:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5108; /* fix_notruncv4dfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5012; /* avx_cvtpd2dq256_mask_round */

        default:
          return -1;
        }

    case 172:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4573; /* unspec_avx512fp16_fix_truncv16hi2_mask_round */

        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4581; /* unspec_avx512fp16_fix_truncv32hi2_mask_round */

        case E_V8SImode:
          switch (pattern1477 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4589; /* unspec_avx512fp16_fix_truncv8si2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
  && (!true || TARGET_AVX10_2_256)))))
                return -1;
              return 4894; /* unspec_fix_truncv8sfv8si2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5031; /* unspec_fix_truncv8dfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1476 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4597; /* unspec_avx512fp16_fix_truncv16si2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4878; /* unspec_fix_truncv16sfv16si2_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1478 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4605; /* unspec_avx512fp16_fix_truncv8di2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5064; /* unspec_fix_truncv8dfv8di2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5124; /* unspec_fix_truncv8sfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1479 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode)))))))
                return -1;
              return 4661; /* unspec_avx512fp16_fix_truncv4di2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5072; /* unspec_fix_truncv4dfv4di2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5132; /* unspec_fix_truncv4sfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9661 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5052; /* unspec_fix_truncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 173:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4577; /* unspec_avx512fp16_fixuns_truncv16hi2_mask_round */

        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4585; /* unspec_avx512fp16_fixuns_truncv32hi2_mask_round */

        case E_V8SImode:
          switch (pattern1478 (x2, 
E_V8SImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4593; /* unspec_avx512fp16_fixuns_truncv8si2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5035; /* unspec_fixuns_truncv8dfv8si2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX)))))
                return -1;
              return 5156; /* unspec_fixuns_truncv8sfv8si2_mask_round */

            default:
              return -1;
            }

        case E_V16SImode:
          switch (pattern1476 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4601; /* unspec_avx512fp16_fixuns_truncv16si2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 4882; /* unspec_fixuns_truncv16sfv16si2_mask_round */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1478 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4609; /* unspec_avx512fp16_fixuns_truncv8di2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5068; /* unspec_fixuns_truncv8dfv8di2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 5128; /* unspec_fixuns_truncv8sfv8di2_mask_round */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1479 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode)))))))
                return -1;
              return 4665; /* unspec_avx512fp16_fixuns_truncv4di2_mask_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5076; /* unspec_fixuns_truncv4dfv4di2_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 5136; /* unspec_fixuns_truncv4sfv4di2_mask_round */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F
  && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5058; /* unspec_fixuns_truncv4dfv4si2_mask_round */

        default:
          return -1;
        }

    case 165:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1480 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 7044; /* avx512bw_getexpv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1480 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 7048; /* avx512vl_getexpv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1480 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 7054; /* avx512f_getexpv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1480 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 7058; /* avx512vl_getexpv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1480 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 7064; /* avx512f_getexpv8df_mask_round */

        case E_V4DFmode:
          if (pattern1480 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 7068; /* avx512vl_getexpv4df_mask_round */

        default:
          return -1;
        }

    case 149:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 9657; /* vcvtph2ps256_mask_round */

        case E_V16SFmode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9661; /* avx512f_vcvtph2ps512_mask_round */

        default:
          return -1;
        }

    case 265:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10762; /* avx10_2_cvtph2ibsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10770; /* avx10_2_cvtph2ibsv16hf_mask_round */

        default:
          return -1;
        }

    case 266:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10766; /* avx10_2_cvtph2iubsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10774; /* avx10_2_cvtph2iubsv16hf_mask_round */

        default:
          return -1;
        }

    case 271:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10782; /* avx10_2_cvttph2ibsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10790; /* avx10_2_cvttph2ibsv16hf_mask_round */

        default:
          return -1;
        }

    case 272:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1304 (x2, 
E_SImode, 
E_V32HImode, 
E_V32HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10786; /* avx10_2_cvttph2iubsv32hf_mask_round */

        case E_V16HImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16HImode, 
E_V16HFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V16HFmode == V16HFmode)))))))
            return -1;
          return 10794; /* avx10_2_cvttph2iubsv16hf_mask_round */

        default:
          return -1;
        }

    case 267:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10802; /* avx10_2_cvtps2ibsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
								       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10810; /* avx10_2_cvtps2ibsv8sf_mask_round */

        default:
          return -1;
        }

    case 268:
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10806; /* avx10_2_cvtps2iubsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
								       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10814; /* avx10_2_cvtps2iubsv8sf_mask_round */

        default:
          return -1;
        }

    case 273:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10822; /* avx10_2_cvttps2ibsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10830; /* avx10_2_cvttps2ibsv8sf_mask_round */

        default:
          return -1;
        }

    case 274:
      if (!const48_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1304 (x2, 
E_HImode, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10826; /* avx10_2_cvttps2iubsv16sf_mask_round */

        case E_V8SImode:
          if (pattern1304 (x2, 
E_QImode, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10834; /* avx10_2_cvttps2iubsv8sf_mask_round */

        default:
          return -1;
        }

    case 275:
      switch (pattern1305 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10842; /* avx10_2_vcvttps2dqsv16sf_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10850; /* avx10_2_vcvttps2dqsv8sf_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10862; /* avx10_2_vcvttpd2dqsv8df_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10870; /* avx10_2_vcvttpd2dqsv4df_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10882; /* avx10_2_vcvttpd2qqsv8df_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10902; /* avx10_2_vcvttps2qqsv8di_mask_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10890; /* avx10_2_vcvttpd2qqsv4df_mask_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode)))))))
            return -1;
          return 10910; /* avx10_2_vcvttps2qqsv4di_mask_round */

        default:
          return -1;
        }

    case 276:
      switch (pattern1305 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10846; /* avx10_2_vcvttps2udqsv16sf_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V8SFmode == V16HFmode)))))))
            return -1;
          return 10854; /* avx10_2_vcvttps2udqsv8sf_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10866; /* avx10_2_vcvttpd2udqsv8df_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10874; /* avx10_2_vcvttpd2udqsv4df_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10886; /* avx10_2_vcvttpd2uqqsv8df_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512)))))
            return -1;
          return 10906; /* avx10_2_vcvttps2uqqsv8di_mask_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 10894; /* avx10_2_vcvttpd2uqqsv4df_mask_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DImode == V16HFmode)))))))
            return -1;
          return 10914; /* avx10_2_vcvttps2uqqsv4di_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_269 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  if (!register_operand (x4, E_QImode))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case FLOAT:
      switch (pattern500 (x2))
        {
        case 0:
          if (!
#line 7720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4530; /* avx512fp16_vcvtdq2ph_v4si_mask_1 */

        case 1:
          if (!
#line 7720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4532; /* avx512fp16_vcvtqq2ph_v4di_mask_1 */

        case 2:
          if (!
#line 7796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4542; /* *avx512fp16_vcvtqq2ph_v2di_mask */

        case 3:
          if (!
#line 9323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4991; /* *floatv2div2sf2_mask */

        case 4:
          if (!
#line 7735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4536; /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */

        case 5:
          if (!
#line 7735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4538; /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */

        case 6:
          if (!
#line 7811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4544; /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */

        case 7:
          if (!
#line 9338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4993; /* *floatv2div2sf2_mask_1 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern500 (x2))
        {
        case 0:
          if (!
#line 7720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4531; /* avx512fp16_vcvtudq2ph_v4si_mask_1 */

        case 1:
          if (!
#line 7720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4534; /* avx512fp16_vcvtuqq2ph_v4di_mask_1 */

        case 2:
          if (!
#line 7796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4543; /* *avx512fp16_vcvtuqq2ph_v2di_mask */

        case 3:
          if (!
#line 9323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4992; /* *floatunsv2div2sf2_mask */

        case 4:
          if (!
#line 7735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4537; /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */

        case 5:
          if (!
#line 7735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4539; /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */

        case 6:
          if (!
#line 7811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4545; /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */

        case 7:
          if (!
#line 9338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4994; /* *floatunsv2div2sf2_mask_1 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x2, 1);
      operands[4] = x7;
      x8 = XEXP (x3, 1);
      switch (GET_CODE (x8))
        {
        case VEC_SELECT:
          x9 = XEXP (x8, 1);
          if (GET_CODE (x9) != PARALLEL)
            return -1;
          x10 = XEXP (x8, 0);
          operands[2] = x10;
          operands[3] = x4;
          switch (XVECLEN (x9, 0))
            {
            case 4:
              if (pattern1215 (x9, 
3, 
2, 
1, 
0) != 0)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (!register_operand (operands[0], E_V8HFmode)
                      || GET_MODE (x2) != E_V8HFmode
                      || GET_MODE (x3) != E_V4HFmode
                      || GET_MODE (x5) != E_V4HFmode
                      || GET_MODE (x8) != E_V4HFmode
                      || !nonimm_or_0_operand (operands[2], E_V8HFmode))
                    return -1;
                  switch (pattern1556 ())
                    {
                    case 0:
                      if (!
#line 8204 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4754; /* avx512fp16_vcvtpd2ph_v4df_mask_1 */

                    case 1:
                      if (!
#line 8204 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
                        return -1;
                      return 4756; /* avx512fp16_vcvtps2ph_v4sf_mask_1 */

                    default:
                      return -1;
                    }

                case E_V8BFmode:
                  if (pattern496 (x2, 
E_V4BFmode, 
E_V8BFmode, 
E_V4SFmode) != 0
                      || !
#line 31104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16 && TARGET_AVX512VL))
                    return -1;
                  return 10348; /* avx512f_cvtneps2bf16_v4sf_mask_1 */

                default:
                  return -1;
                }

            case 2:
              switch (pattern497 (x2, 
E_V2DFmode))
                {
                case 0:
                  if (!
#line 8280 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4760; /* *avx512fp16_vcvtpd2ph_v2df_mask */

                case 1:
                  if (!
#line 10191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5188; /* *sse2_cvtpd2ps_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[3] = x8;
          operands[2] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode)
                return -1;
              switch (GET_MODE (x3))
                {
                case E_V4HFmode:
                  if (GET_MODE (x5) != E_V4HFmode
                      || !const0_operand (operands[3], E_V4HFmode))
                    return -1;
                  switch (pattern1556 ())
                    {
                    case 0:
                      if (!
#line 8219 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4757; /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */

                    case 1:
                      if (!
#line 8219 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4758; /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */

                    default:
                      return -1;
                    }

                case E_V2HFmode:
                  if (pattern498 (x5, 
E_V2DFmode) != 0
                      || !
#line 8295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4761; /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (pattern499 (x2, 
E_V2DFmode) != 0
                  || !
#line 10206 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 5189; /* *sse2_cvtpd2ps_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      switch (XVECLEN (x5, 0))
        {
        case 1:
          x11 = XVECEXP (x5, 0, 0);
          operands[1] = x11;
          switch (XINT (x5, 1))
            {
            case 46:
              switch (pattern920 (x2))
                {
                case 0:
                  if (!
#line 9483 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5015; /* sse2_cvtpd2dq_mask */

                case 1:
                  if (!
#line 9498 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5016; /* *sse2_cvtpd2dq_mask_1 */

                default:
                  return -1;
                }

            case 156:
              switch (pattern920 (x2))
                {
                case 0:
                  if (!
#line 9544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5026; /* fixuns_notruncv2dfv2si2_mask */

                case 1:
                  if (!
#line 9560 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5027; /* *fixuns_notruncv2dfv2si2_mask_1 */

                default:
                  return -1;
                }

            case 173:
              if (GET_MODE (x5) != E_V2SImode)
                return -1;
              x8 = XEXP (x3, 1);
              if (pattern667 (x8, 
2, 
E_V2SImode) != 0)
                return -1;
              x9 = XEXP (x8, 1);
              x12 = XVECEXP (x9, 0, 0);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x13 = XVECEXP (x9, 0, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x7 = XEXP (x2, 1);
              if (GET_CODE (x7) != CONST_VECTOR
                  || XVECLEN (x7, 0) != 2
                  || GET_MODE (x7) != E_V2SImode)
                return -1;
              x14 = XVECEXP (x7, 0, 0);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x15 = XVECEXP (x7, 0, 1);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !register_operand (operands[0], E_V4SImode)
                  || GET_MODE (x2) != E_V4SImode
                  || GET_MODE (x3) != E_V2SImode
                  || !nonimmediate_operand (operands[1], E_V2DFmode))
                return -1;
              x10 = XEXP (x8, 0);
              operands[2] = x10;
              if (!nonimm_or_0_operand (operands[2], E_V4SImode))
                return -1;
              operands[3] = x4;
              if (!
#line 9621 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 5046; /* unspec_fixuns_truncv2dfv2si2_mask */

            case 253:
              if (pattern921 (x2) != 0
                  || !
#line 31905 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10502; /* *vcvtph2bf8v8hf_mask */

            case 254:
              if (pattern921 (x2) != 0
                  || !
#line 31905 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10503; /* *vcvtph2bf8sv8hf_mask */

            case 255:
              if (pattern921 (x2) != 0
                  || !
#line 31905 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10504; /* *vcvtph2hf8v8hf_mask */

            case 256:
              if (pattern921 (x2) != 0
                  || !
#line 31905 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10505; /* *vcvtph2hf8sv8hf_mask */

            default:
              return -1;
            }

        case 2:
          x8 = XEXP (x3, 1);
          if (pattern667 (x8, 
8, 
E_V8QImode) != 0)
            return -1;
          x9 = XEXP (x8, 1);
          x12 = XVECEXP (x9, 0, 0);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XVECEXP (x9, 0, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x16 = XVECEXP (x9, 0, 2);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 2]
              || pattern1413 (x9, 
7, 
6, 
5, 
4, 
3) != 0
              || !register_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x5) != E_V8QImode)
            return -1;
          x11 = XVECEXP (x5, 0, 0);
          operands[1] = x11;
          if (!register_operand (operands[1], E_V16QImode))
            return -1;
          x17 = XVECEXP (x5, 0, 1);
          operands[2] = x17;
          if (!nonimmediate_operand (operands[2], E_V8HFmode))
            return -1;
          x10 = XEXP (x8, 0);
          operands[3] = x10;
          if (!nonimm_or_0_operand (operands[3], E_V16QImode))
            return -1;
          operands[4] = x4;
          x7 = XEXP (x2, 1);
          operands[5] = x7;
          if (!const0_operand (operands[5], E_V8QImode))
            return -1;
          switch (XINT (x5, 1))
            {
            case 245:
              if (!
#line 31817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10478; /* *vcvtbiasph2bf8v8hf_mask */

            case 246:
              if (!
#line 31817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10479; /* *vcvtbiasph2bf8sv8hf_mask */

            case 247:
              if (!
#line 31817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10480; /* *vcvtbiasph2hf8v8hf_mask */

            case 248:
              if (!
#line 31817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10481; /* *vcvtbiasph2hf8sv8hf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern502 (x2))
        {
        case 0:
          if (!
#line 9637 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5047; /* fixuns_truncv2dfv2si2_mask */

        case 1:
          if (!
#line 9651 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5048; /* *fixuns_truncv2dfv2si2_mask_1 */

        default:
          return -1;
        }

    case FIX:
      switch (pattern502 (x2))
        {
        case 0:
          if (!
#line 9988 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5166; /* sse2_cvttpd2dq_mask */

        case 1:
          if (!
#line 10002 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5167; /* *sse2_cvttpd2dq_mask_1 */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern508 (x2))
        {
        case 0:
          if (!
#line 15449 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7305; /* avx512vl_ss_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15891 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7420; /* avx512vl_ss_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16039 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7439; /* avx512vl_ss_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7326; /* avx512vl_ss_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7329; /* avx512vl_ss_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7396; /* avx512vl_ss_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7399; /* avx512vl_ss_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7356; /* avx512vl_ss_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7359; /* avx512vl_ss_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7457; /* avx512f_ss_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7308; /* *avx512vl_ss_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15908 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7423; /* *avx512vl_ss_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16054 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7442; /* *avx512vl_ss_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7332; /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7335; /* *avx512vl_ss_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7402; /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7405; /* *avx512vl_ss_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7362; /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7365; /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7460; /* *avx512f_ss_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern508 (x2))
        {
        case 0:
          if (!
#line 15449 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7306; /* avx512vl_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15891 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7421; /* avx512vl_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16039 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7440; /* avx512vl_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7327; /* avx512vl_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7330; /* avx512vl_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7397; /* avx512vl_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7400; /* avx512vl_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7357; /* avx512vl_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7360; /* avx512vl_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7458; /* avx512f_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7309; /* *avx512vl_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15908 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7424; /* *avx512vl_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16054 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7443; /* *avx512vl_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7333; /* *avx512vl_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7336; /* *avx512vl_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7403; /* *avx512vl_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7406; /* *avx512vl_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7363; /* *avx512vl_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7366; /* *avx512vl_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7461; /* *avx512f_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern508 (x2))
        {
        case 0:
          if (!
#line 15449 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7307; /* avx512vl_us_truncatev2div2qi2_mask */

        case 1:
          if (!
#line 15891 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7422; /* avx512vl_us_truncatev2div2hi2_mask */

        case 2:
          if (!
#line 16039 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7441; /* avx512vl_us_truncatev2div2si2_mask */

        case 3:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7328; /* avx512vl_us_truncatev4siv4qi2_mask */

        case 4:
          if (!
#line 15544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7331; /* avx512vl_us_truncatev4div4qi2_mask */

        case 5:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7398; /* avx512vl_us_truncatev4siv4hi2_mask */

        case 6:
          if (!
#line 15800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7401; /* avx512vl_us_truncatev4div4hi2_mask */

        case 7:
          if (!(
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7358; /* avx512vl_us_truncatev8hiv8qi2_mask */

        case 8:
          if (!
#line 15642 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7361; /* avx512vl_us_truncatev8siv8qi2_mask */

        case 9:
          if (!
#line 16158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7459; /* avx512f_us_truncatev8div16qi2_mask */

        case 10:
          if (!
#line 15470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7310; /* *avx512vl_us_truncatev2div2qi2_mask_1 */

        case 11:
          if (!
#line 15908 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7425; /* *avx512vl_us_truncatev2div2hi2_mask_1 */

        case 12:
          if (!
#line 16054 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7444; /* *avx512vl_us_truncatev2div2si2_mask_1 */

        case 13:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7334; /* *avx512vl_us_truncatev4siv4qi2_mask_1 */

        case 14:
          if (!
#line 15565 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7337; /* *avx512vl_us_truncatev4div4qi2_mask_1 */

        case 15:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7404; /* *avx512vl_us_truncatev4siv4hi2_mask_1 */

        case 16:
          if (!
#line 15817 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7407; /* *avx512vl_us_truncatev4div4hi2_mask_1 */

        case 17:
          if (!(
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7364; /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */

        case 18:
          if (!
#line 15663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7367; /* *avx512vl_us_truncatev8siv8qi2_mask_1 */

        case 19:
          if (!
#line 16179 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7462; /* *avx512f_us_truncatev8div16qi2_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_284 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x2, 1);
      switch (XVECLEN (x5, 0))
        {
        case 4:
          res = recog_276 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 8:
          res = recog_278 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 16:
          res = recog_280 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 2:
          res = recog_281 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 64:
          res = recog_282 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 32:
          res = recog_283 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (XVECLEN (x5, 0) < 1)
        return -1;
      operands[3] = x5;
      x6 = XVECEXP (x5, 0, 0);
      operands[4] = x6;
      if (!const_int_operand (operands[4], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !
#line 28336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode)))
            return -1;
          return 9454; /* *avx_vperm2f128v8si_nozero */

        case E_V8SFmode:
          if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 28336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode)))
            return -1;
          return 9455; /* *avx_vperm2f128v8sf_nozero */

        case E_V4DFmode:
          if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !
#line 28336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode)))
            return -1;
          return 9456; /* *avx_vperm2f128v4df_nozero */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern806 (x2))
        {
        case 0:
          if (!
#line 24145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8761; /* *avx2_zero_extendv16qiv16hi2_1 */

        case 1:
          if (!
#line 24198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 8769; /* *avx512bw_zero_extendv32qiv32hi2_1 */

        case 2:
          if (!
#line 24294 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8785; /* *sse4_1_zero_extendv8qiv8hi2_3 */

        case 3:
          if (!
#line 24542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 8821; /* avx512f_zero_extendv16hiv16si2_1 */

        case 4:
          if (!
#line 24596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8829; /* avx2_zero_extendv8hiv8si2_1 */

        case 5:
          if (!
#line 24701 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8845; /* *sse4_1_zero_extendv4hiv4si2_3 */

        case 6:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25098 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8916; /* *avx512f_zero_extendv8siv8di2_1 */
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9632; /* *vec_concatv16si_0_1 */

        case 7:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25150 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 8922; /* *avx2_zero_extendv4siv4di2_1 */
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9633; /* *vec_concatv8si_0_1 */

        case 8:
          if (vector_operand (operands[1], E_V4SImode)
              && pmovzx_parallel (operands[3], E_VOIDmode)
              && 
#line 25235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8936; /* *sse4_1_zero_extendv2siv2di2_3 */
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !movq_parallel (operands[3], E_VOIDmode)
              || !
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9634; /* *vec_concatv4si_0_1 */

        case 9:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9635; /* *vec_concatv8di_0_1 */

        case 10:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9636; /* *vec_concatv4di_0_1 */

        case 11:
          if (!
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9637; /* *vec_concatv2di_0_1 */

        case 12:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9638; /* *vec_concatv32hf_0_1 */

        case 13:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9639; /* *vec_concatv16hf_0_1 */

        case 14:
          if (!
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9640; /* *vec_concatv8hf_0_1 */

        case 15:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9641; /* *vec_concatv32bf_0_1 */

        case 16:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9642; /* *vec_concatv16bf_0_1 */

        case 17:
          if (!
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9643; /* *vec_concatv8bf_0_1 */

        case 18:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9644; /* *vec_concatv16sf_0_1 */

        case 19:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9645; /* *vec_concatv8sf_0_1 */

        case 20:
          if (!
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 9646; /* *vec_concatv4sf_0_1 */

        case 21:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9647; /* *vec_concatv8df_0_1 */

        case 22:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9648; /* *vec_concatv4df_0_1 */

        case 23:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9649; /* *vec_concatv2df_0_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_300 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16BFmode:
      if (GET_MODE (x2) != E_V16BFmode)
        return -1;
      if (register_operand (operands[0], E_V16BFmode)
          && vector_operand (operands[1], E_V16BFmode)
          && vector_operand (operands[2], E_V16BFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3713; /* *andv16bf3 */
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16BFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3768; /* *bit_and_float_vector_all_ones */

    case E_V8BFmode:
      if (GET_MODE (x2) != E_V8BFmode)
        return -1;
      if (register_operand (operands[0], E_V8BFmode)
          && vector_operand (operands[1], E_V8BFmode)
          && vector_operand (operands[2], E_V8BFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3716; /* *andv8bf3 */
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8BFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3769; /* *bit_and_float_vector_all_ones */

    case E_V16HFmode:
      if (GET_MODE (x2) != E_V16HFmode)
        return -1;
      if (register_operand (operands[0], E_V16HFmode)
          && vector_operand (operands[1], E_V16HFmode)
          && vector_operand (operands[2], E_V16HFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3719; /* *andv16hf3 */
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || !nonimmediate_operand (operands[1], E_V16HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16HFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3771; /* *bit_and_float_vector_all_ones */

    case E_V8HFmode:
      if (GET_MODE (x2) != E_V8HFmode)
        return -1;
      if (register_operand (operands[0], E_V8HFmode)
          && vector_operand (operands[1], E_V8HFmode)
          && vector_operand (operands[2], E_V8HFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3722; /* *andv8hf3 */
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8HFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3772; /* *bit_and_float_vector_all_ones */

    case E_V8SFmode:
      if (GET_MODE (x2) != E_V8SFmode)
        return -1;
      if (register_operand (operands[0], E_V8SFmode)
          && vector_operand (operands[1], E_V8SFmode)
          && vector_operand (operands[2], E_V8SFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 428 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3725; /* *andv8sf3 */
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8SFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3774; /* *bit_and_float_vector_all_ones */

    case E_V4SFmode:
      if (GET_MODE (x2) != E_V4SFmode)
        return -1;
      if (register_operand (operands[0], E_V4SFmode)
          && vector_operand (operands[1], E_V4SFmode)
          && vector_operand (operands[2], E_V4SFmode)
          && 
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 3731; /* *andv4sf3 */
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || !nonimmediate_operand (operands[1], E_V4SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V4SFmode)
          || !
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()))
        return -1;
      return 3775; /* *bit_and_float_vector_all_ones */

    case E_V4DFmode:
      if (GET_MODE (x2) != E_V4DFmode)
        return -1;
      if (register_operand (operands[0], E_V4DFmode)
          && vector_operand (operands[1], E_V4DFmode)
          && vector_operand (operands[2], E_V4DFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 3737; /* *andv4df3 */
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V4DFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3777; /* *bit_and_float_vector_all_ones */

    case E_V2DFmode:
      if (GET_MODE (x2) != E_V2DFmode)
        return -1;
      if (register_operand (operands[0], E_V2DFmode)
          && vector_operand (operands[1], E_V2DFmode)
          && vector_operand (operands[2], E_V2DFmode)
          && (
#line 5362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 3743; /* *andv2df3 */
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V2DFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3778; /* *bit_and_float_vector_all_ones */

    case E_V32BFmode:
      if (GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      if (register_operand (operands[0], E_V32BFmode)
          && nonimmediate_operand (operands[2], E_V32BFmode)
          && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 491 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3749; /* *andv32bf3 */
      if (!nonimmediate_operand (operands[0], E_V32BFmode)
          || !float_vector_all_ones_operand (operands[2], E_V32BFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3767; /* *bit_and_float_vector_all_ones */

    case E_V32HFmode:
      if (GET_MODE (x2) != E_V32HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      if (register_operand (operands[0], E_V32HFmode)
          && nonimmediate_operand (operands[2], E_V32HFmode)
          && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 16 != 16)) && 
#line 492 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3752; /* *andv32hf3 */
      if (!nonimmediate_operand (operands[0], E_V32HFmode)
          || !float_vector_all_ones_operand (operands[2], E_V32HFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3770; /* *bit_and_float_vector_all_ones */

    case E_V16SFmode:
      if (GET_MODE (x2) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      if (register_operand (operands[0], E_V16SFmode)
          && nonimmediate_operand (operands[2], E_V16SFmode)
          && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 32 != 16)) && 
#line 493 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3755; /* *andv16sf3 */
      if (!nonimmediate_operand (operands[0], E_V16SFmode)
          || !float_vector_all_ones_operand (operands[2], E_V16SFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3773; /* *bit_and_float_vector_all_ones */

    case E_V8DFmode:
      if (GET_MODE (x2) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      if (register_operand (operands[0], E_V8DFmode)
          && nonimmediate_operand (operands[2], E_V8DFmode)
          && (
#line 5432 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (!false || 64 != 16)) && 
#line 494 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 3761; /* *andv8df3 */
      if (!nonimmediate_operand (operands[0], E_V8DFmode)
          || !float_vector_all_ones_operand (operands[2], E_V8DFmode)
          || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 3776; /* *bit_and_float_vector_all_ones */

    case E_V16SImode:
      if (pattern180 (x2, 
E_V16SImode) != 0
          || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8008; /* *andv16si3 */

    case E_V8SImode:
      if (pattern180 (x2, 
E_V8SImode) != 0
          || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8014; /* *andv8si3 */

    case E_V4SImode:
      if (pattern180 (x2, 
E_V4SImode) != 0
          || !
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4SImode, operands)))
        return -1;
      return 8020; /* *andv4si3 */

    case E_V8DImode:
      if (pattern180 (x2, 
E_V8DImode) != 0
          || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8026; /* *andv8di3 */

    case E_V4DImode:
      if (pattern180 (x2, 
E_V4DImode) != 0
          || !(
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8032; /* *andv4di3 */

    case E_V2DImode:
      if (pattern180 (x2, 
E_V2DImode) != 0
          || !
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && ix86_binary_operator_ok (AND, V2DImode, operands)))
        return -1;
      return 8038; /* *andv2di3 */

    case E_V64QImode:
      if (pattern25 (x2, 
E_V64QImode) != 0
          || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8044; /* *andv64qi3 */

    case E_V32QImode:
      if (pattern25 (x2, 
E_V32QImode) != 0
          || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8047; /* *andv32qi3 */

    case E_V16QImode:
      if (pattern25 (x2, 
E_V16QImode) != 0
          || !
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 8050; /* *andv16qi3 */

    case E_V32HImode:
      if (pattern25 (x2, 
E_V32HImode) != 0
          || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 8053; /* *andv32hi3 */

    case E_V16HImode:
      if (pattern25 (x2, 
E_V16HImode) != 0
          || !(
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8056; /* *andv16hi3 */

    case E_V8HImode:
      if (pattern25 (x2, 
E_V8HImode) != 0
          || !
#line 18846 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 8059; /* *andv8hi3 */

    case E_V1TImode:
      if (pattern669 (x2, 
E_V1TImode) != 0
          || !
#line 18943 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 8062; /* andv1ti3 */

    default:
      return -1;
    }
}

 int
recog_309 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5865; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5892; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5919; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5946; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5973; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6000; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6027; /* *avx512f_vpternlogv16sf_1 */

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
          return 6054; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6081; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6108; /* *avx512f_vpternlogv8df_1 */

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
          return 6135; /* *avx512vl_vpternlogv4df_1 */

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
          return 6162; /* *avx512vl_vpternlogv2df_1 */

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
          return 5868; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5895; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5922; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5949; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5976; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6003; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6030; /* *avx512f_vpternlogv16sf_1 */

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
          return 6057; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6084; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6111; /* *avx512f_vpternlogv8df_1 */

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
          return 6138; /* *avx512vl_vpternlogv4df_1 */

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
          return 6165; /* *avx512vl_vpternlogv2df_1 */

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
          return 5871; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5898; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5925; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5952; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5979; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6006; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6033; /* *avx512f_vpternlogv16sf_1 */

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
          return 6060; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6087; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6114; /* *avx512f_vpternlogv8df_1 */

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
          return 6141; /* *avx512vl_vpternlogv4df_1 */

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
          return 6168; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6933; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6942; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6951; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6960; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6969; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6978; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6987; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6996; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 7005; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7014; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7023; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7032; /* *avx512vl_vpternlogv2df_3 */

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
          return 6513; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6540; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6567; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6594; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6621; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6648; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6675; /* *avx512f_vpternlogv16sf_2 */

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
          return 6702; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6729; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6756; /* *avx512f_vpternlogv8df_2 */

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
          return 6783; /* *avx512vl_vpternlogv4df_2 */

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
          return 6810; /* *avx512vl_vpternlogv2df_2 */

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
          return 6516; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6543; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6570; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6597; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6624; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6651; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6678; /* *avx512f_vpternlogv16sf_2 */

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
          return 6705; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6732; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6759; /* *avx512f_vpternlogv8df_2 */

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
          return 6786; /* *avx512vl_vpternlogv4df_2 */

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
          return 6813; /* *avx512vl_vpternlogv2df_2 */

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
          return 6519; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6546; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6573; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6600; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6627; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6654; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6681; /* *avx512f_vpternlogv16sf_2 */

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
          return 6708; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6735; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6762; /* *avx512f_vpternlogv8df_2 */

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
          return 6789; /* *avx512vl_vpternlogv4df_2 */

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
          return 6816; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_318 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case VEC_SELECT:
      return recog_270 (x1, insn, pnum_clobbers);

    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case PLUS:
          switch (pattern326 (x3, 
PLUS))
            {
            case 0:
              if (!
#line 3666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3185; /* avx_haddv4df3 */

            case 1:
              if (!
#line 3842 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3193; /* sse3_haddv4sf3 */

            default:
              return -1;
            }

        case MINUS:
          switch (pattern326 (x3, 
MINUS))
            {
            case 0:
              if (!
#line 3666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3186; /* avx_hsubv4df3 */

            case 1:
              if (!
#line 3842 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3194; /* sse3_hsubv4sf3 */

            default:
              return -1;
            }

        case VEC_CONCAT:
          if (GET_MODE (x5) != E_V2SFmode)
            return -1;
          x6 = XEXP (x4, 1);
          if (GET_CODE (x6) != VEC_CONCAT
              || GET_MODE (x6) != E_V2SFmode)
            return -1;
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != VEC_CONCAT
              || GET_MODE (x7) != E_V4SFmode
              || pattern1030 (x7, 
E_V2SFmode, 
VEC_CONCAT) != 0
              || !register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || GET_MODE (x4) != E_V4SFmode
              || pattern1554 (x3, 
E_SFmode) != 0)
            return -1;
          x8 = XEXP (x5, 0);
          switch (GET_CODE (x8))
            {
            case PLUS:
              if (pattern1815 (x3, 
PLUS) != 0
                  || !
#line 3814 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3191; /* avx_haddv8sf3 */

            case MINUS:
              if (pattern1815 (x3, 
MINUS) != 0
                  || !
#line 3814 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 3192; /* avx_hsubv8sf3 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (pattern408 (x3) != 0)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1483 (x3, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0
                  || !(
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10106; /* avx512f_si512_si */

            case E_V16SFmode:
              if (pattern1483 (x3, 
E_V8SFmode, 
E_V4SFmode, 
E_V16SFmode) != 0
                  || !(
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10107; /* avx512f_ps512_ps */

            case E_V8DFmode:
              if (pattern1483 (x3, 
E_V4DFmode, 
E_V2DFmode, 
E_V8DFmode) != 0
                  || !(
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10108; /* avx512f_pd512_pd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pattern95 (x3, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 1);
      x9 = XEXP (x7, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!vector_operand (operands[2], E_V2DFmode)
          || pattern1848 (x3) != 0
          || !
#line 3705 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])))
        return -1;
      return 3187; /* *sse3_haddv2df3 */

    case MINUS:
      if (pattern96 (x4, 
E_DFmode) != 0)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != MINUS
          || GET_MODE (x7) != E_DFmode
          || pattern1555 (x7, 
E_DFmode) != 0
          || !register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      x5 = XEXP (x4, 0);
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x9 = XEXP (x7, 0);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!vector_operand (operands[2], E_V2DFmode))
        return -1;
      x6 = XEXP (x4, 1);
      x11 = XEXP (x6, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return -1;
      x12 = XEXP (x7, 1);
      x13 = XEXP (x12, 0);
      if (!rtx_equal_p (x13, operands[2])
          || !
#line 3730 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3))
        return -1;
      return 3188; /* sse3_hsubv2df3 */

    case FLOAT:
      switch (pattern178 (x3))
        {
        case 0:
          if (!
#line 7678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4526; /* *avx512fp16_vcvtdq2ph_v4si */

        case 1:
          if (!
#line 7678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4528; /* *avx512fp16_vcvtqq2ph_v4di */

        case 2:
          if (!
#line 7767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4540; /* *avx512fp16_vcvtqq2ph_v2di */

        case 3:
          if (!
#line 9217 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4989; /* *avx512dq_floatv2div2sf2 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      switch (pattern178 (x3))
        {
        case 0:
          if (!
#line 7678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4527; /* *avx512fp16_vcvtudq2ph_v4si */

        case 1:
          if (!
#line 7678 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4529; /* *avx512fp16_vcvtuqq2ph_v4di */

        case 2:
          if (!
#line 7767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4541; /* *avx512fp16_vcvtuqq2ph_v2di */

        case 3:
          if (!
#line 9217 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 4990; /* *avx512dq_floatunsv2div2sf2 */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_269 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[2] = x7;
          x5 = XEXP (x4, 0);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x3) != E_V8HFmode)
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V4HFmode:
                  if (!const0_operand (operands[2], E_V4HFmode))
                    return -1;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_V4DFmode:
                      if (!vector_operand (operands[1], E_V4DFmode)
                          || !
#line 8158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4752; /* *avx512fp16_vcvtpd2ph_v4df */

                    case E_V4SFmode:
                      if (!vector_operand (operands[1], E_V4SFmode)
                          || !
#line 8158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                        return -1;
                      return 4753; /* *avx512fp16_vcvtps2ph_v4sf */

                    default:
                      return -1;
                    }

                case E_V2HFmode:
                  if (!vector_operand (operands[1], E_V2DFmode)
                      || !const0_operand (operands[2], E_V6HFmode)
                      || !
#line 8250 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
                    return -1;
                  return 4759; /* *avx512fp16_vcvtpd2ph_v2df */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x3) != E_V4SFmode
                  || GET_MODE (x4) != E_V2SFmode
                  || !vector_operand (operands[1], E_V2DFmode)
                  || !const0_operand (operands[2], E_V2SFmode)
                  || !
#line 10146 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5186; /* *sse2_cvtpd2ps */

            case E_V8BFmode:
              if (pattern177 (x3, 
E_V4BFmode, 
E_V4SFmode, 
E_V8BFmode) != 0
                  || !
#line 31061 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT || (TARGET_AVX512BF16 && TARGET_AVX512VL)))
                return -1;
              return 10347; /* *vcvtneps2bf16_v4sf */

            default:
              return -1;
            }

        case FLOAT_TRUNCATE:
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          x9 = XEXP (x7, 0);
          operands[1] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32BFmode:
              if (pattern792 (x3, 
E_V16SFmode, 
E_V16BFmode, 
E_V32BFmode) != 0
                  || !(
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10341; /* avx512f_cvtne2ps2bf16_v32bf */

            case E_V16BFmode:
              if (pattern792 (x3, 
E_V8SFmode, 
E_V8BFmode, 
E_V16BFmode) != 0
                  || !(
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10343; /* avx512f_cvtne2ps2bf16_v16bf */

            case E_V8BFmode:
              if (pattern792 (x3, 
E_V4SFmode, 
E_V4BFmode, 
E_V8BFmode) != 0
                  || !(
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10345; /* avx512f_cvtne2ps2bf16_v8bf */

            case E_V32HFmode:
              if (pattern793 (x3, 
E_V16SFmode, 
E_V16HFmode, 
E_V32HFmode) != 0
                  || !(
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10440; /* avx10_2_cvt2ps2phx_v32hf */

            case E_V16HFmode:
              if (pattern793 (x3, 
E_V8SFmode, 
E_V8HFmode, 
E_V16HFmode) != 0
                  || !
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10444; /* avx10_2_cvt2ps2phx_v16hf */

            case E_V8HFmode:
              if (pattern793 (x3, 
E_V4SFmode, 
E_V4HFmode, 
E_V8HFmode) != 0
                  || !
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10448; /* avx10_2_cvt2ps2phx_v8hf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      return recog_271 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST_VECTOR
          || XVECLEN (x7, 0) != 2
          || GET_MODE (x7) != E_V2SImode
          || pattern275 (x3, 
E_V2DFmode, 
E_V4SImode, 
0) != 0
          || !
#line 9604 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return -1;
      return 5045; /* *fixuns_truncv2dfv2si2 */

    case FIX:
      if (GET_MODE (x4) != E_V2SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST_VECTOR
          || pattern509 (x7, 
E_V2SImode, 
2) != 0
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_V2DFmode)
          || !
#line 9964 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 5165; /* sse2_cvttpd2dq */

    case REG:
    case SUBREG:
    case MEM:
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case VEC_SELECT:
          res = recog_267 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          res = recog_268 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case UNSPEC:
          if (XVECLEN (x7, 0) == 1
              && XINT (x7, 1) == 147)
            {
              x14 = XVECEXP (x7, 0, 0);
              if (x14 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  operands[1] = x4;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SImode:
                      if (pattern1031 (x3, 
E_V4SImode, 
E_V8SImode) == 0
                          && 
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9553; /* avx_si256_si */
                      break;

                    case E_V8SFmode:
                      if (pattern1031 (x3, 
E_V4SFmode, 
E_V8SFmode) == 0
                          && 
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9554; /* avx_ps256_ps */
                      break;

                    case E_V4DFmode:
                      if (pattern1031 (x3, 
E_V2DFmode, 
E_V4DFmode) == 0
                          && 
#line 28824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                        return 9555; /* avx_pd256_pd */
                      break;

                    case E_V16SImode:
                      if (pattern1031 (x3, 
E_V8SImode, 
E_V16SImode) == 0
                          && (
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10109; /* avx512f_si512_256si */
                      break;

                    case E_V16SFmode:
                      if (pattern1031 (x3, 
E_V8SFmode, 
E_V16SFmode) == 0
                          && (
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10110; /* avx512f_ps512_256ps */
                      break;

                    case E_V8DFmode:
                      if (pattern1031 (x3, 
E_V4DFmode, 
E_V8DFmode) == 0
                          && (
#line 30168 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return 10111; /* avx512f_pd512_256pd */
                      break;

                    default:
                      break;
                    }
                }
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      if (GET_CODE (x4) == SUBREG
          && pattern596 (x3) == 0)
        {
          x5 = XEXP (x4, 0);
          x15 = XVECEXP (x5, 0, 0);
          operands[1] = x15;
          if (memory_operand (operands[1], E_V16QImode))
            {
              x9 = XEXP (x7, 0);
              x16 = XVECEXP (x9, 0, 0);
              if (rtx_equal_p (x16, operands[1])
                  && 
#line 27921 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_pre_reload_split ()))
                return 9300; /* avx2_lddqu_inserti_to_bcasti */
            }
        }
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2DImode))
        return -1;
      if (rtx_equal_p (x7, operands[1])
          && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return 9318; /* avx_vbroadcastf128_v4di */
      operands[2] = x7;
      if (!nonimm_or_0_operand (operands[2], E_V2DImode)
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9615; /* avx_vec_concatv4di */

    case ZERO_EXTEND:
      switch (pattern179 (x3))
        {
        case 0:
          if (!
#line 12110 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5322; /* *vec_setv2di_0_zero_extendhi_1 */

        case 1:
          if (!
#line 12224 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 5334; /* *vec_setv2di_0_zero_extendsi_1 */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[2] = x7;
          switch (pattern511 (x3))
            {
            case 0:
              if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7283; /* avx512vl_ss_truncatev4div4qi2 */
              break;

            case 1:
              if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7292; /* avx512vl_ss_truncatev4siv4qi2 */
              break;

            case 2:
              if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7286; /* avx512vl_ss_truncatev2div2qi2 */
              break;

            case 3:
              if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7289; /* avx512vl_ss_truncatev8siv8qi2 */
              break;

            case 4:
              if ((
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return 7295; /* avx512vl_ss_truncatev8hiv8qi2 */
              break;

            case 5:
              if ((
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15697 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return 7374; /* avx512vl_ss_truncatev4div4hi2 */
              break;

            case 6:
              if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7380; /* avx512vl_ss_truncatev4siv4hi2 */
              break;

            case 7:
              if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7377; /* avx512vl_ss_truncatev2div2hi2 */
              break;

            case 8:
              if (
#line 15976 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return 7429; /* avx512vl_ss_truncatev2div2si2 */
              break;

            default:
              break;
            }
          if (GET_CODE (x7) != CONST_VECTOR
              || pattern509 (x7, 
E_V8QImode, 
8) != 0)
            return -1;
          x17 = XVECEXP (x7, 0, 2);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x18 = XVECEXP (x7, 0, 3);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x19 = XVECEXP (x7, 0, 4);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XVECEXP (x7, 0, 5);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x21 = XVECEXP (x7, 0, 6);
          if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x22 = XVECEXP (x7, 0, 7);
          if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern607 (x3, 
E_V8DImode, 
E_V8QImode, 
E_V16QImode) != 0
              || !
#line 16112 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7448; /* avx512f_ss_truncatev8div16qi2 */

        case SS_TRUNCATE:
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16QImode:
              if (pattern798 (x3, 
E_V8HImode, 
E_V8QImode, 
E_V16QImode) != 0
                  || !
#line 19225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 8305; /* sse2_packsswb */

            case E_V8HImode:
              if (pattern798 (x3, 
E_V4SImode, 
E_V4HImode, 
E_V8HImode) != 0
                  || !
#line 19319 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                return -1;
              return 8311; /* sse2_packssdw */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern511 (x3))
        {
        case 0:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7284; /* avx512vl_truncatev4div4qi2 */
          break;

        case 1:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7293; /* avx512vl_truncatev4siv4qi2 */
          break;

        case 2:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7287; /* avx512vl_truncatev2div2qi2 */
          break;

        case 3:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7290; /* avx512vl_truncatev8siv8qi2 */
          break;

        case 4:
          if ((
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7296; /* avx512vl_truncatev8hiv8qi2 */
          break;

        case 5:
          if ((
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15697 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 7375; /* avx512vl_truncatev4div4hi2 */
          break;

        case 6:
          if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7381; /* avx512vl_truncatev4siv4hi2 */
          break;

        case 7:
          if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7378; /* avx512vl_truncatev2div2hi2 */
          break;

        case 8:
          if (
#line 15976 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7430; /* avx512vl_truncatev2div2si2 */
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_V8DImode)
          || pattern512 (x3) != 0
          || !
#line 16112 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 7449; /* avx512f_truncatev8div16qi2 */

    case US_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      switch (pattern511 (x3))
        {
        case 0:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7285; /* avx512vl_us_truncatev4div4qi2 */
          break;

        case 1:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7294; /* avx512vl_us_truncatev4siv4qi2 */
          break;

        case 2:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7288; /* avx512vl_us_truncatev2div2qi2 */
          break;

        case 3:
          if (
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7291; /* avx512vl_us_truncatev8siv8qi2 */
          break;

        case 4:
          if ((
#line 15380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7297; /* avx512vl_us_truncatev8hiv8qi2 */
          break;

        case 5:
          if ((
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15697 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 7376; /* avx512vl_us_truncatev4div4hi2 */
          break;

        case 6:
          if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7382; /* avx512vl_us_truncatev4siv4hi2 */
          break;

        case 7:
          if (
#line 15735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7379; /* avx512vl_us_truncatev2div2hi2 */
          break;

        case 8:
          if (
#line 15976 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7431; /* avx512vl_us_truncatev2div2si2 */
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_V8DImode)
          || pattern512 (x3) != 0
          || !
#line 16112 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 7450; /* avx512f_us_truncatev8div16qi2 */

    default:
      return -1;
    }
}

 int
recog_323 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x66, x67, x68, x69, x70, x71, x72, x73;
  rtx x74, x75, x76;
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
      switch (pattern51 (x3))
        {
        case 0:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7514; /* *avx512bw_ssaddv64qi3 */

        case 1:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7522; /* *avx2_ssaddv32qi3 */

        case 2:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)))
            return -1;
          return 7530; /* *sse2_ssaddv16qi3 */

        case 3:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7538; /* *avx512bw_ssaddv32hi3 */

        case 4:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7546; /* *avx2_ssaddv16hi3 */

        case 5:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)))
            return -1;
          return 7554; /* *sse2_ssaddv8hi3 */

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern194 (x3))
        {
        case 0:
          if (!
#line 22580 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8592; /* avx2_phaddswv16hi3 */

        case 1:
          if (!
#line 22603 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8596; /* ssse3_phaddswv8hi3 */

        default:
          return -1;
        }

    case MULT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case ZERO_EXTEND:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_SELECT)
            return -1;
          x7 = XEXP (x6, 1);
          if (GET_CODE (x7) != PARALLEL)
            return -1;
          x8 = XEXP (x4, 1);
          if (GET_CODE (x8) != SIGN_EXTEND)
            return -1;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != VEC_SELECT)
            return -1;
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL)
            return -1;
          x11 = XEXP (x3, 1);
          if (GET_CODE (x11) != MULT)
            return -1;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != ZERO_EXTEND)
            return -1;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != VEC_SELECT)
            return -1;
          x14 = XEXP (x13, 1);
          if (GET_CODE (x14) != PARALLEL)
            return -1;
          x15 = XEXP (x11, 1);
          if (GET_CODE (x15) != SIGN_EXTEND)
            return -1;
          x16 = XEXP (x15, 0);
          if (GET_CODE (x16) != VEC_SELECT)
            return -1;
          x17 = XEXP (x16, 1);
          if (GET_CODE (x17) != PARALLEL)
            return -1;
          x18 = XEXP (x6, 0);
          operands[1] = x18;
          x19 = XEXP (x9, 0);
          operands[2] = x19;
          x20 = XEXP (x13, 0);
          if (!rtx_equal_p (x20, operands[1]))
            return -1;
          x21 = XEXP (x16, 0);
          if (!rtx_equal_p (x21, operands[2]))
            return -1;
          switch (XVECLEN (x7, 0))
            {
            case 16:
              if (pattern1076 (x7, 
6, 
4, 
2, 
0) != 0)
                return -1;
              x22 = XVECEXP (x7, 0, 4);
              if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return -1;
              x23 = XVECEXP (x7, 0, 5);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
                return -1;
              x24 = XVECEXP (x7, 0, 6);
              if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
                return -1;
              x25 = XVECEXP (x7, 0, 7);
              if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
                return -1;
              x26 = XVECEXP (x7, 0, 8);
              if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x27 = XVECEXP (x7, 0, 9);
              if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x28 = XVECEXP (x7, 0, 10);
              if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x29 = XVECEXP (x7, 0, 11);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x30 = XVECEXP (x7, 0, 12);
              if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x31 = XVECEXP (x7, 0, 13);
              if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x32 = XVECEXP (x7, 0, 14);
              if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x33 = XVECEXP (x7, 0, 15);
              if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 30]
                  || pattern1313 (x10, 
16) != 0)
                return -1;
              x34 = XVECEXP (x10, 0, 8);
              if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
                return -1;
              x35 = XVECEXP (x10, 0, 9);
              if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
                return -1;
              x36 = XVECEXP (x10, 0, 10);
              if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
                return -1;
              x37 = XVECEXP (x10, 0, 11);
              if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
                return -1;
              x38 = XVECEXP (x10, 0, 12);
              if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
                return -1;
              x39 = XVECEXP (x10, 0, 13);
              if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
                return -1;
              x40 = XVECEXP (x10, 0, 14);
              if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
                return -1;
              x41 = XVECEXP (x10, 0, 15);
              if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 30]
                  || pattern1863 (x14, 
16) != 0)
                return -1;
              x42 = XVECEXP (x14, 0, 8);
              if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x43 = XVECEXP (x14, 0, 9);
              if (x43 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x44 = XVECEXP (x14, 0, 10);
              if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x45 = XVECEXP (x14, 0, 11);
              if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x46 = XVECEXP (x14, 0, 12);
              if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x47 = XVECEXP (x14, 0, 13);
              if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x48 = XVECEXP (x14, 0, 14);
              if (x48 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x49 = XVECEXP (x14, 0, 15);
              if (x49 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
                  || pattern1880 (x17, 
16) != 0)
                return -1;
              x50 = XVECEXP (x17, 0, 8);
              if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
                return -1;
              x51 = XVECEXP (x17, 0, 9);
              if (x51 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
                return -1;
              x52 = XVECEXP (x17, 0, 10);
              if (x52 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
                return -1;
              x53 = XVECEXP (x17, 0, 11);
              if (x53 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
                return -1;
              x54 = XVECEXP (x17, 0, 12);
              if (x54 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
                return -1;
              x55 = XVECEXP (x17, 0, 13);
              if (x55 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
                return -1;
              x56 = XVECEXP (x17, 0, 14);
              if (x56 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
                return -1;
              x57 = XVECEXP (x17, 0, 15);
              if (x57 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
                  || pattern1886 (x3, 
E_V32QImode, 
E_V16QImode, 
E_V16HImode) != 0
                  || GET_MODE (x8) != E_V16HImode
                  || GET_MODE (x9) != E_V16QImode
                  || !nonimmediate_operand (operands[2], E_V32QImode)
                  || pattern331 (x11, 
E_V16QImode, 
E_V16HImode) != 0
                  || !
#line 22790 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8609; /* avx2_pmaddubsw256 */

            case 8:
              if (pattern1314 (x4) != 0
                  || pattern1863 (x14, 
8) != 0
                  || pattern1880 (x17, 
8) != 0
                  || pattern1886 (x3, 
E_V16QImode, 
E_V8QImode, 
E_V8HImode) != 0
                  || GET_MODE (x8) != E_V8HImode
                  || GET_MODE (x9) != E_V8QImode
                  || !vector_operand (operands[2], E_V16QImode)
                  || pattern331 (x11, 
E_V8QImode, 
E_V8HImode) != 0
                  || !
#line 22877 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
                return -1;
              return 8618; /* ssse3_pmaddubsw128 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (pattern329 (x3))
            {
            case 0:
              if (!
#line 26118 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8990; /* xop_pmacssww */

            case 1:
              if (!
#line 26118 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8992; /* xop_pmacssdd */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          if (pattern327 (x4) != 0)
            return -1;
          x11 = XEXP (x3, 1);
          operands[3] = x11;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 1);
          switch (XVECLEN (x7, 0))
            {
            case 2:
              if (pattern1315 (x3) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              if (GET_MODE (x8) != E_V2DImode)
                return -1;
              x9 = XEXP (x8, 0);
              if (GET_MODE (x9) != E_V2SImode
                  || !nonimmediate_operand (operands[2], E_V4SImode))
                return -1;
              switch (pattern1827 (x4))
                {
                case 0:
                  if (!
#line 26137 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8994; /* xop_pmacssdql */

                case 1:
                  if (!
#line 26156 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8996; /* xop_pmacssdqh */

                default:
                  return -1;
                }

            case 4:
              if (pattern1076 (x7, 
7, 
5, 
3, 
1) != 0)
                return -1;
              x8 = XEXP (x4, 1);
              x9 = XEXP (x8, 0);
              x10 = XEXP (x9, 1);
              if (pattern1619 (x10, 
7, 
5, 
3, 
1) != 0
                  || !register_operand (operands[0], E_V4SImode)
                  || GET_MODE (x3) != E_V4SImode
                  || GET_MODE (x4) != E_V4SImode
                  || GET_MODE (x5) != E_V4SImode
                  || GET_MODE (x6) != E_V4HImode
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || GET_MODE (x8) != E_V4SImode
                  || GET_MODE (x9) != E_V4HImode
                  || !nonimmediate_operand (operands[2], E_V8HImode)
                  || !register_operand (operands[3], E_V4SImode)
                  || !
#line 26178 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8998; /* xop_pmacsswd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (GET_MODE (x4) != E_V4SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != MULT
          || pattern330 (x5) != 0)
        return -1;
      x58 = XEXP (x5, 1);
      if (GET_MODE (x58) != E_V4SImode)
        return -1;
      x59 = XEXP (x58, 0);
      if (GET_CODE (x59) != VEC_SELECT
          || GET_MODE (x59) != E_V4HImode)
        return -1;
      x60 = XEXP (x59, 1);
      if (GET_CODE (x60) != PARALLEL
          || XVECLEN (x60, 0) != 4)
        return -1;
      x61 = XVECEXP (x60, 0, 0);
      if (x61 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x62 = XVECEXP (x60, 0, 1);
      if (x62 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x63 = XVECEXP (x60, 0, 2);
      if (x63 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x64 = XVECEXP (x60, 0, 3);
      if (x64 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x8 = XEXP (x4, 1);
      if (GET_CODE (x8) != MULT
          || GET_MODE (x8) != E_V4SImode)
        return -1;
      x9 = XEXP (x8, 0);
      if (GET_CODE (x9) != SIGN_EXTEND
          || GET_MODE (x9) != E_V4SImode)
        return -1;
      x19 = XEXP (x9, 0);
      if (GET_CODE (x19) != VEC_SELECT
          || GET_MODE (x19) != E_V4HImode)
        return -1;
      x65 = XEXP (x19, 1);
      if (GET_CODE (x65) != PARALLEL
          || XVECLEN (x65, 0) != 4)
        return -1;
      x66 = XVECEXP (x65, 0, 0);
      if (x66 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x67 = XVECEXP (x65, 0, 1);
      if (x67 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x68 = XVECEXP (x65, 0, 2);
      if (x68 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x69 = XVECEXP (x65, 0, 3);
      if (x69 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x70 = XEXP (x8, 1);
      if (GET_CODE (x70) != SIGN_EXTEND
          || GET_MODE (x70) != E_V4SImode)
        return -1;
      x71 = XEXP (x70, 0);
      if (GET_CODE (x71) != VEC_SELECT
          || GET_MODE (x71) != E_V4HImode)
        return -1;
      x72 = XEXP (x71, 1);
      if (GET_CODE (x72) != PARALLEL
          || XVECLEN (x72, 0) != 4)
        return -1;
      x73 = XVECEXP (x72, 0, 0);
      if (x73 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x74 = XVECEXP (x72, 0, 1);
      if (x74 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x75 = XVECEXP (x72, 0, 2);
      if (x75 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x76 = XVECEXP (x72, 0, 3);
      if (x76 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || !register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || pattern1883 (x3) != 0
          || !
#line 26211 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9000; /* xop_pmadcsswd */

    default:
      return -1;
    }
}

 int
recog_327 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7612; /* *ashrv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17121 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 743 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7622; /* ashrv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9570; /* avx512vl_ashrvv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7614; /* *ashrv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17121 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7623; /* ashrv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9568; /* avx512vl_ashrvv8hi */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7616; /* *ashrv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17121 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7624; /* ashrv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9558; /* avx2_ashrvv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7618; /* *ashrv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17121 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7625; /* ashrv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9556; /* avx2_ashrvv4si */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7620; /* *ashrv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 26992 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()))
        return 9056; /* *ashrv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9562; /* avx2_ashrvv2di */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7630; /* *ashrv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9572; /* avx512bw_ashrvv32hi */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7632; /* *ashrv4di3 */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9564; /* avx2_ashrvv4di */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x3) != E_V16SImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7634; /* *ashrv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9560; /* avx512f_ashrvv16si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7636; /* *ashrv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 682 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9566; /* avx512f_ashrvv8di */

    case E_V1TImode:
      if (pattern30 (x3) != 0
          || !
#line 17525 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7701; /* *ashrv1ti3_internal */

    default:
      return -1;
    }
}

 int
recog_332 (rtx x1 ATTRIBUTE_UNUSED,
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
    case VEC_DUPLICATE:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern180 (x3, 
E_V32HFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && 1 && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2785; /* *mulv32hf3 */

        case E_V16HFmode:
          if (pattern180 (x3, 
E_V16HFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && 1 && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2789; /* *mulv16hf3 */

        case E_V8HFmode:
          if (pattern180 (x3, 
E_V8HFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && 1 && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2793; /* *mulv8hf3 */

        case E_V16SFmode:
          if (pattern180 (x3, 
E_V16SFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2797; /* *mulv16sf3 */

        case E_V8SFmode:
          if (pattern180 (x3, 
E_V8SFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2801; /* *mulv8sf3 */

        case E_V4SFmode:
          if (pattern180 (x3, 
E_V4SFmode) != 0
              || !
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2805; /* *mulv4sf3 */

        case E_V8DFmode:
          if (pattern180 (x3, 
E_V8DFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2809; /* *mulv8df3 */

        case E_V4DFmode:
          if (pattern180 (x3, 
E_V4DFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2813; /* *mulv4df3 */

        case E_V2DFmode:
          if (pattern180 (x3, 
E_V2DFmode) != 0
              || !(
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && 1 && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2817; /* *mulv2df3 */

        case E_V32HImode:
          if (pattern25 (x3, 
E_V32HImode) != 0
              || !(
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7562; /* *mulv32hi3 */

        case E_V16HImode:
          if (pattern25 (x3, 
E_V16HImode) != 0
              || !(
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7564; /* *mulv16hi3 */

        case E_V8HImode:
          if (pattern25 (x3, 
E_V8HImode) != 0
              || !
#line 16398 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
            return -1;
          return 7566; /* *mulv8hi3 */

        case E_V8DImode:
          if (pattern180 (x3, 
E_V8DImode) != 0
              || !(
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V8DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7600; /* *avx512dq_mulv8di3 */

        case E_V4DImode:
          if (pattern180 (x3, 
E_V4DImode) != 0
              || !(
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V4DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7602; /* *avx512dq_mulv4di3 */

        case E_V2DImode:
          if (pattern180 (x3, 
E_V2DImode) != 0
              || !(
#line 16852 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1
  && ix86_binary_operator_ok (MULT, V2DImode, operands)) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7604; /* *avx512dq_mulv2di3 */

        case E_V16SImode:
          if (pattern180 (x3, 
E_V16SImode) != 0
              || !(
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V16SImode, operands)
  && 1) && 
#line 671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7606; /* *avx512f_mulv16si3 */

        case E_V8SImode:
          if (pattern180 (x3, 
E_V8SImode) != 0
              || !(
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)
  && 1) && 
#line 671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7608; /* *avx2_mulv8si3 */

        case E_V4SImode:
          if (pattern180 (x3, 
E_V4SImode) != 0
              || !
#line 16911 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)
  && 1))
            return -1;
          return 7610; /* *sse4_1_mulv4si3 */

        case E_V32BFmode:
          if (pattern14 (x3, 
E_V32BFmode) != 0
              || !(
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10613; /* avx10_2_mulbf16_v32bf */

        case E_V16BFmode:
          if (pattern14 (x3, 
E_V16BFmode) != 0
              || !
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10621; /* avx10_2_mulbf16_v16bf */

        case E_V8BFmode:
          if (pattern14 (x3, 
E_V8BFmode) != 0
              || !
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10629; /* avx10_2_mulbf16_v8bf */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern192 (x3, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 16481 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7580; /* *vec_widen_umult_even_v16si */

        case 1:
          if (!
#line 16517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7582; /* *vec_widen_umult_even_v8si */

        case 2:
          if (!
#line 16549 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7584; /* *vec_widen_umult_even_v4si */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern192 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 16597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7586; /* *vec_widen_smult_even_v16si */

        case 1:
          if (!
#line 16633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7588; /* *vec_widen_smult_even_v8si */

        case 2:
          if (!
#line 16665 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7590; /* *sse4_1_mulv2siv2di3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_340 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (pattern28 (x1))
    {
    case 0:
      if (!register_operand (operands[0], E_V8HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4612; /* avx512fp16_fixuns_truncv8hi2 */

    case 1:
      if (!register_operand (operands[0], E_V16HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4618; /* avx512fp16_fixuns_truncv16hi2 */

    case 2:
      if (!register_operand (operands[0], E_V32HImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4626; /* avx512fp16_fixuns_truncv32hi2 */

    case 3:
      x2 = XEXP (x1, 1);
      switch (pattern520 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4634; /* avx512fp16_fixuns_truncv8si2 */

        case 1:
          if (!
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5040; /* fixuns_truncv8dfv8si2 */

        case 2:
          if (!(
#line 9926 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5159; /* *fixuns_truncv8sfv8si2 */

        default:
          return -1;
        }

    case 4:
      x2 = XEXP (x1, 1);
      switch (pattern519 (x2))
        {
        case 0:
          if (!(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4642; /* avx512fp16_fixuns_truncv16si2 */

        case 1:
          if (!
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4887; /* fixuns_truncv16sfv16si2 */

        default:
          return -1;
        }

    case 5:
      x2 = XEXP (x1, 1);
      switch (pattern520 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4650; /* avx512fp16_fixuns_truncv8di2 */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5085; /* fixuns_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5139; /* fixuns_truncv8sfv8di2 */

        default:
          return -1;
        }

    case 6:
      if (!register_operand (operands[0], E_V4SImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4HFmode:
          if (!memory_operand (operands[1], E_V4HFmode)
              || !
#line 7928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4676; /* *avx512fp16_fixuns_truncv4si2_load */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 9691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F))
            return -1;
          return 5059; /* fixuns_truncv4dfv4si2 */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 9926 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 5161; /* *fixuns_truncv4sfv4si2 */

        default:
          return -1;
        }

    case 7:
      x2 = XEXP (x1, 1);
      switch (pattern521 (x2))
        {
        case 0:
          if (!
#line 7928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4680; /* *avx512fp16_fixuns_truncv4di2_load */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5093; /* fixuns_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5143; /* fixuns_truncv4sfv4di2 */

        default:
          return -1;
        }

    case 8:
      x2 = XEXP (x1, 1);
      switch (pattern522 (x2))
        {
        case 0:
          if (!
#line 7978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
            return -1;
          return 4692; /* *avx512fp16_fixuns_truncv2di2_load */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5099; /* fixuns_truncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4668; /* avx512fp16_fixuns_truncv4si2 */

    case 10:
      if (!
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4672; /* avx512fp16_fixuns_truncv4di2 */

    case 11:
      if (!
#line 7968 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4688; /* avx512fp16_fixuns_truncv2di2 */

    case 12:
      if (!
#line 9778 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 5151; /* avx512dq_fixuns_truncv2sfv2di2 */

    default:
      return -1;
    }
}

 int
recog_346 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern33 (x1))
    {
    case 0:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7765; /* *avx2_uminv32qi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7844; /* *avx512bw_uminv32qi3 */

    case 1:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7769; /* *avx2_uminv16hi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7860; /* *avx512bw_uminv16hi3 */

    case 2:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7773; /* *avx2_uminv8si3 */
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7788; /* *avx512f_uminv8si3 */

    case 3:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7780; /* *avx512f_uminv16si3 */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7796; /* *avx512f_uminv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7886; /* *sse4_1_uminv4si3 */

    case 5:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7804; /* *avx512f_uminv8di3 */

    case 6:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7812; /* *avx512f_uminv4di3 */

    case 7:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7820; /* *avx512f_uminv2di3 */

    case 8:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7828; /* *avx512bw_uminv64qi3 */

    case 9:
      if (nonimmediate_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7836; /* *avx512bw_uminv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17927 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7889; /* *uminv16qi3 */

    case 10:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7852; /* *avx512bw_uminv32hi3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7868; /* *avx512bw_uminv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7882; /* *sse4_1_uminv8hi3 */

    default:
      return -1;
    }
}

 int
recog_351 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern32 (x1))
    {
    case 0:
      if (!
#line 17595 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return -1;
      return 7703; /* *rotrv1ti3_internal */

    case 1:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7740; /* avx512f_rorv16si */

    case 2:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7744; /* avx512vl_rorv8si */

    case 3:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7748; /* avx512vl_rorv4si */
      if (!const_0_to_31_operand (operands[2], E_SImode)
          || !
#line 26624 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9042; /* xop_rotrv4si3 */

    case 4:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7752; /* avx512f_rorv8di */

    case 5:
      if (!(
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7756; /* avx512vl_rorv4di */

    case 6:
      if (const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7760; /* avx512vl_rorv2di */
      if (!const_0_to_63_operand (operands[2], E_SImode)
          || !
#line 26624 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9043; /* xop_rotrv2di3 */

    case 7:
      if (!
#line 26624 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9040; /* xop_rotrv16qi3 */

    case 8:
      if (!
#line 26624 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
        return -1;
      return 9041; /* xop_rotrv8hi3 */

    case 9:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7716; /* avx512f_rorvv16si */

    case 10:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7720; /* avx512vl_rorvv8si */

    case 11:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7724; /* avx512vl_rorvv4si */

    case 12:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7728; /* avx512f_rorvv8di */

    case 13:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7732; /* avx512vl_rorvv4di */

    case 14:
      if (!(
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7736; /* avx512vl_rorvv2di */

    default:
      return -1;
    }
}

 int
recog_362 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != E_CCCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x5))
    {
    case SET:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != NEG)
        return -1;
      x7 = XEXP (x5, 0);
      operands[0] = x7;
      x8 = XEXP (x6, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !nonimmediate_operand (operands[0], E_QImode)
              || GET_MODE (x6) != E_QImode)
            return -1;
          return 980; /* *negqi_ccc_1 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !nonimmediate_operand (operands[0], E_HImode)
              || GET_MODE (x6) != E_HImode)
            return -1;
          return 981; /* *neghi_ccc_1 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !nonimmediate_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode)
            return -1;
          return 982; /* *negsi_ccc_1 */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 983; /* *negdi_ccc_1 */

        default:
          return -1;
        }

    case CLOBBER:
      x7 = XEXP (x5, 0);
      operands[0] = x7;
      switch (GET_MODE (operands[1]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !scratch_operand (operands[0], E_QImode))
            return -1;
          return 984; /* *negqi_ccc_2 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !scratch_operand (operands[0], E_HImode))
            return -1;
          return 985; /* *neghi_ccc_2 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !scratch_operand (operands[0], E_SImode))
            return -1;
          return 986; /* *negsi_ccc_2 */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 987; /* *negdi_ccc_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_366 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      return recog_365 (x1, insn, pnum_clobbers);

    case 2:
      return recog_364 (x1, insn, pnum_clobbers);

    case 3:
      return recog_363 (x1, insn, pnum_clobbers);

    case 4:
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (XINT (x3, 1))
        {
        case 22:
          if (pattern814 (x3) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x7 = XVECEXP (x3, 0, 0);
          operands[1] = x7;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode))
            return -1;
          x8 = XVECEXP (x3, 0, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x9 = XVECEXP (x3, 0, 2);
          operands[3] = x9;
          if (!register_operand (operands[3], E_SImode)
              || !
#line 23288 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          return 1665; /* *tls_dynamic_gnu2_call_32 */

        case 23:
          if (pnum_clobbers == NULL)
            return -1;
          x7 = XVECEXP (x3, 0, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_BLKmode)
            return -1;
          switch (pattern1149 (x1))
            {
            case 0:
              if (!(
#line 26115 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1793; /* *strlenqi_1 */

            case 1:
              if (!(
#line 26115 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1794; /* *strlenqi_1 */

            default:
              return -1;
            }

        case 153:
          x8 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x8) != MEM)
            return -1;
          x10 = XEXP (x8, 0);
          if (GET_CODE (x10) != UNSPEC
              || XVECLEN (x10, 0) != 3
              || XINT (x10, 1) != 154)
            return -1;
          x9 = XVECEXP (x3, 0, 2);
          if (GET_CODE (x9) != MEM
              || GET_MODE (x9) != E_BLKmode)
            return -1;
          x11 = XEXP (x9, 0);
          if (GET_CODE (x11) != SCRATCH)
            return -1;
          x12 = XVECEXP (x10, 0, 2);
          if (!const1248_operand (x12, E_SImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          x7 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[2] = x7;
              operands[7] = x8;
              x13 = XVECEXP (x10, 0, 0);
              operands[3] = x13;
              x14 = XVECEXP (x10, 0, 1);
              operands[4] = x14;
              operands[6] = x12;
              x15 = XVECEXP (x3, 0, 3);
              operands[5] = x15;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  switch (pattern1790 (x3, 
E_V2DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9675; /* *avx2_gathersiv2di */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9707; /* *avx2_gatherdiv2di */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9683; /* *avx2_gathersiv2di */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9715; /* *avx2_gatherdiv2di */

                    default:
                      return -1;
                    }

                case E_V2DFmode:
                  switch (pattern1790 (x3, 
E_V2DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9676; /* *avx2_gathersiv2df */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9708; /* *avx2_gatherdiv2df */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9684; /* *avx2_gathersiv2df */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9716; /* *avx2_gatherdiv2df */

                    default:
                      return -1;
                    }

                case E_V4DImode:
                  switch (pattern1792 (x3, 
E_V4DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9677; /* *avx2_gathersiv4di */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9709; /* *avx2_gatherdiv4di */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9685; /* *avx2_gathersiv4di */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9717; /* *avx2_gatherdiv4di */

                    default:
                      return -1;
                    }

                case E_V4DFmode:
                  switch (pattern1792 (x3, 
E_V4DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9678; /* *avx2_gathersiv4df */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9710; /* *avx2_gatherdiv4df */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9686; /* *avx2_gathersiv4df */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9718; /* *avx2_gatherdiv4df */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  switch (pattern1790 (x3, 
E_V4SImode, 
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9679; /* *avx2_gathersiv4si */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9711; /* *avx2_gatherdiv4si */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9687; /* *avx2_gathersiv4si */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9719; /* *avx2_gatherdiv4si */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1790 (x3, 
E_V4SFmode, 
E_SFmode))
                    {
                    case 0:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9680; /* *avx2_gathersiv4sf */

                    case 1:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9712; /* *avx2_gatherdiv4sf */

                    case 2:
                      if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9688; /* *avx2_gathersiv4sf */

                    case 3:
                      if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9720; /* *avx2_gatherdiv4sf */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  if (pattern1793 (x3, 
E_V8SImode, 
E_SImode) != 0)
                    return -1;
                  switch (GET_MODE (operands[2]))
                    {
                    case E_V8SImode:
                      if (!register_operand (operands[2], E_V8SImode)
                          || !register_operand (operands[4], E_V8SImode))
                        return -1;
                      switch (pattern1838 (x10, 
E_V8SImode))
                        {
                        case 0:
                          if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9681; /* *avx2_gathersiv8si */

                        case 1:
                          if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9689; /* *avx2_gathersiv8si */

                        default:
                          return -1;
                        }

                    case E_V4SImode:
                      switch (pattern1839 (x10, 
E_V4SImode, 
E_V4DImode))
                        {
                        case 0:
                          if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9713; /* *avx2_gatherdiv8si */

                        case 1:
                          if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9721; /* *avx2_gatherdiv8si */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  if (pattern1793 (x3, 
E_V8SFmode, 
E_SFmode) != 0)
                    return -1;
                  switch (GET_MODE (operands[2]))
                    {
                    case E_V8SFmode:
                      switch (pattern1839 (x10, 
E_V8SFmode, 
E_V8SImode))
                        {
                        case 0:
                          if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9682; /* *avx2_gathersiv8sf */

                        case 1:
                          if (!(
#line 29305 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9690; /* *avx2_gathersiv8sf */

                        default:
                          return -1;
                        }

                    case E_V4SFmode:
                      switch (pattern1839 (x10, 
E_V4SFmode, 
E_V4DImode))
                        {
                        case 0:
                          if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9714; /* *avx2_gatherdiv8sf */

                        case 1:
                          if (!(
#line 29368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9722; /* *avx2_gatherdiv8sf */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case PC:
              operands[6] = x8;
              x13 = XVECEXP (x10, 0, 0);
              operands[2] = x13;
              x14 = XVECEXP (x10, 0, 1);
              operands[3] = x14;
              operands[5] = x12;
              x15 = XVECEXP (x3, 0, 3);
              operands[4] = x15;
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  switch (pattern1773 (x3, 
E_V2DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9691; /* *avx2_gathersiv2di_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9723; /* *avx2_gatherdiv2di_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9699; /* *avx2_gathersiv2di_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9731; /* *avx2_gatherdiv2di_2 */

                    default:
                      return -1;
                    }

                case E_V2DFmode:
                  switch (pattern1773 (x3, 
E_V2DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9692; /* *avx2_gathersiv2df_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9724; /* *avx2_gatherdiv2df_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9700; /* *avx2_gathersiv2df_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9732; /* *avx2_gatherdiv2df_2 */

                    default:
                      return -1;
                    }

                case E_V4DImode:
                  switch (pattern1775 (x3, 
E_V4DImode, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9693; /* *avx2_gathersiv4di_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9725; /* *avx2_gatherdiv4di_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9701; /* *avx2_gathersiv4di_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9733; /* *avx2_gatherdiv4di_2 */

                    default:
                      return -1;
                    }

                case E_V4DFmode:
                  switch (pattern1775 (x3, 
E_V4DFmode, 
E_DFmode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9694; /* *avx2_gathersiv4df_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9726; /* *avx2_gatherdiv4df_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9702; /* *avx2_gathersiv4df_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9734; /* *avx2_gatherdiv4df_2 */

                    default:
                      return -1;
                    }

                case E_V4SImode:
                  switch (pattern1773 (x3, 
E_V4SImode, 
E_SImode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9695; /* *avx2_gathersiv4si_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9727; /* *avx2_gatherdiv4si_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9703; /* *avx2_gathersiv4si_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9735; /* *avx2_gatherdiv4si_2 */

                    default:
                      return -1;
                    }

                case E_V4SFmode:
                  switch (pattern1773 (x3, 
E_V4SFmode, 
E_SFmode))
                    {
                    case 0:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9696; /* *avx2_gathersiv4sf_2 */

                    case 1:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                        return -1;
                      return 9728; /* *avx2_gatherdiv4sf_2 */

                    case 2:
                      if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9704; /* *avx2_gathersiv4sf_2 */

                    case 3:
                      if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                        return -1;
                      return 9736; /* *avx2_gatherdiv4sf_2 */

                    default:
                      return -1;
                    }

                case E_V8SImode:
                  switch (pattern1776 (x3, 
E_V8SImode, 
E_SImode))
                    {
                    case 0:
                      switch (pattern1833 (
E_SImode))
                        {
                        case 0:
                          if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9697; /* *avx2_gathersiv8si_2 */

                        case 1:
                          if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9729; /* *avx2_gatherdiv8si_2 */

                        default:
                          return -1;
                        }

                    case 1:
                      switch (pattern1833 (
E_DImode))
                        {
                        case 0:
                          if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9705; /* *avx2_gathersiv8si_2 */

                        case 1:
                          if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9737; /* *avx2_gatherdiv8si_2 */

                        default:
                          return -1;
                        }

                    default:
                      return -1;
                    }

                case E_V8SFmode:
                  switch (pattern1776 (x3, 
E_V8SFmode, 
E_SFmode))
                    {
                    case 0:
                      switch (pattern1834 (
E_SImode))
                        {
                        case 0:
                          if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9698; /* *avx2_gathersiv8sf_2 */

                        case 1:
                          if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                            return -1;
                          return 9730; /* *avx2_gatherdiv8sf_2 */

                        default:
                          return -1;
                        }

                    case 1:
                      switch (pattern1834 (
E_DImode))
                        {
                        case 0:
                          if (!(
#line 29326 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9706; /* *avx2_gathersiv8sf_2 */

                        case 1:
                          if (!(
#line 29389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                            return -1;
                          return 9738; /* *avx2_gatherdiv8sf_2 */

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

        default:
          return -1;
        }

    case 5:
      if (XINT (x3, 1) != 131
          || pattern552 (x1, 
131, 
5) != 0)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x9 = XVECEXP (x3, 0, 2);
      operands[3] = x9;
      if (!nonimmediate_operand (operands[3], E_V16QImode))
        return -1;
      x15 = XVECEXP (x3, 0, 3);
      operands[4] = x15;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x16 = XVECEXP (x3, 0, 4);
      operands[5] = x16;
      if (!const_0_to_255_operand (operands[5], E_SImode))
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      x17 = XEXP (x4, 1);
      x18 = XVECEXP (x17, 0, 0);
      if (!rtx_equal_p (x18, operands[1]))
        return -1;
      x19 = XVECEXP (x17, 0, 1);
      if (!rtx_equal_p (x19, operands[2]))
        return -1;
      x20 = XVECEXP (x17, 0, 2);
      if (!rtx_equal_p (x20, operands[3]))
        return -1;
      x21 = XVECEXP (x17, 0, 3);
      if (!rtx_equal_p (x21, operands[4]))
        return -1;
      x22 = XVECEXP (x17, 0, 4);
      if (!rtx_equal_p (x22, operands[5]))
        return -1;
      switch (pattern1771 (x3))
        {
        case 0:
          if (!
#line 25908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8982; /* sse4_2_pcmpestri */

        case 1:
          if (!
#line 25936 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
            return -1;
          return 8983; /* sse4_2_pcmpestrm */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_387 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      return recog_383 (x1, insn, pnum_clobbers);

    case NEG:
      return recog_386 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      res = recog_379 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case CTZ:
          x10 = XEXP (x9, 0);
          if (!rtx_equal_p (x10, operands[1]))
            return -1;
          switch (GET_MODE (x5))
            {
            case E_CCCmode:
              if (GET_MODE (x3) != E_CCCmode)
                return -1;
              switch (pattern1492 (x9))
                {
                case 0:
                  if (!
#line 20994 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  return 1508; /* *tzcntsi_1 */

                case 1:
                  if (!(
#line 20994 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1509; /* *tzcntdi_1 */

                default:
                  return -1;
                }

            case E_CCZmode:
              if (GET_MODE (x3) != E_CCZmode)
                return -1;
              switch (pattern1492 (x9))
                {
                case 0:
                  return 1512; /* *bsfsi_1 */

                case 1:
                  if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1513; /* *bsfdi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case MINUS:
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != CONST_INT)
            return -1;
          x11 = XEXP (x9, 1);
          if (GET_CODE (x11) != CLZ
              || GET_MODE (x5) != E_CCZmode
              || GET_MODE (x3) != E_CCZmode)
            return -1;
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[1]))
            return -1;
          switch (XWINT (x10, 0))
            {
            case 63L:
              if (pattern1628 (x9, 
E_DImode) != 0
                  || !
#line 21223 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1524; /* bsr_rex64 */

            case 31L:
              if (pattern1628 (x9, 
E_SImode) != 0)
                return -1;
              return 1527; /* bsr */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pattern224 (x1) != 0)
        return -1;
      x13 = XEXP (x4, 0);
      switch (GET_CODE (x13))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x13;
          x14 = XEXP (x4, 1);
          operands[2] = x14;
          x7 = XVECEXP (x1, 0, 1);
          x8 = XEXP (x7, 0);
          operands[0] = x8;
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case MINUS:
              switch (pattern1425 (x1))
                {
                case 0:
                  if (!
#line 8276 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 411; /* *subqi_2 */

                case 1:
                  if (!
#line 8276 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 412; /* *subhi_2 */

                case 2:
                  if (!
#line 8276 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 413; /* *subsi_2 */

                case 3:
                  if (!(
#line 8276 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 414; /* *subdi_2 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1426 (x1, 
MINUS) != 0
                  || !
#line 8297 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 415; /* *subsi_2_zext */

            default:
              return -1;
            }

        case UNSPEC_VOLATILE:
          if (XVECLEN (x13, 0) != 2
              || XINT (x13, 1) != 110)
            return -1;
          switch (pattern1235 (x1, 
MINUS))
            {
            case 0:
              return 11086; /* atomic_sub_fetch_cmp_0qi_1 */

            case 1:
              return 11087; /* atomic_sub_fetch_cmp_0hi_1 */

            case 2:
              return 11088; /* atomic_sub_fetch_cmp_0si_1 */

            case 3:
              if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 11089; /* atomic_sub_fetch_cmp_0di_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      return recog_384 (x1, insn, pnum_clobbers);

    case AND:
      return recog_385 (x1, insn, pnum_clobbers);

    case IOR:
      switch (pattern364 (x1, 
IOR))
        {
        case 0:
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern949 (x1, 
IOR))
                {
                case 0:
                  if (
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 783; /* *iorqi_exthi_1_cc */
                  break;

                case 1:
                  if (
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 786; /* *iorqi_extsi_1_cc */
                  break;

                case 2:
                  if ((
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 789; /* *iorqi_extdi_1_cc */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x2, 0);
          if (GET_CODE (x5) != REG)
            return -1;
          switch (pattern951 (x1))
            {
            case 0:
              x7 = XVECEXP (x1, 0, 1);
              x9 = XEXP (x7, 1);
              switch (GET_CODE (x9))
                {
                case IOR:
                  switch (pattern1428 (x1))
                    {
                    case 0:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 872; /* *iorqi_2 */

                    case 1:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 874; /* *iorhi_2 */

                    case 2:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 876; /* *iorsi_2 */

                    case 3:
                      if (!(
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      return 878; /* *iordi_2 */

                    case 4:
                      if (!
#line 13919 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 882; /* *iorsi_2_zext_imm */

                    default:
                      return -1;
                    }

                case ZERO_EXTEND:
                  if (pattern1426 (x1, 
IOR) != 0
                      || !
#line 13901 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 880; /* *iorsi_2_zext */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 884; /* *iorqi_3 */

            case 2:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 886; /* *iorhi_3 */

            case 3:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 888; /* *iorsi_3 */

            case 4:
              if (!(
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 890; /* *iordi_3 */

            default:
              return -1;
            }

        case 1:
          return 11091; /* atomic_or_fetch_cmp_0qi_1 */

        case 2:
          return 11094; /* atomic_or_fetch_cmp_0hi_1 */

        case 3:
          return 11097; /* atomic_or_fetch_cmp_0si_1 */

        case 4:
          if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11100; /* atomic_or_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern364 (x1, 
XOR))
        {
        case 0:
          if (general_operand (operands[2], E_QImode))
            {
              switch (pattern949 (x1, 
XOR))
                {
                case 0:
                  if (
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 784; /* *xorqi_exthi_1_cc */
                  break;

                case 1:
                  if (
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                    return 787; /* *xorqi_extsi_1_cc */
                  break;

                case 2:
                  if ((
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 790; /* *xorqi_extdi_1_cc */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x2, 0);
          if (GET_CODE (x5) != REG)
            return -1;
          switch (pattern951 (x1))
            {
            case 0:
              x7 = XVECEXP (x1, 0, 1);
              x9 = XEXP (x7, 1);
              switch (GET_CODE (x9))
                {
                case XOR:
                  switch (pattern1428 (x1))
                    {
                    case 0:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 873; /* *xorqi_2 */

                    case 1:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 875; /* *xorhi_2 */

                    case 2:
                      if (!
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 877; /* *xorsi_2 */

                    case 3:
                      if (!(
#line 13881 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      return 879; /* *xordi_2 */

                    case 4:
                      if (!
#line 13919 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                        return -1;
                      return 883; /* *xorsi_2_zext_imm */

                    default:
                      return -1;
                    }

                case ZERO_EXTEND:
                  if (pattern1426 (x1, 
XOR) != 0
                      || !
#line 13901 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 881; /* *xorsi_2_zext */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 885; /* *xorqi_3 */

            case 2:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 887; /* *xorhi_3 */

            case 3:
              if (!
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 889; /* *xorsi_3 */

            case 4:
              if (!(
#line 13935 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 891; /* *xordi_3 */

            default:
              return -1;
            }

        case 1:
          return 11092; /* atomic_xor_fetch_cmp_0qi_1 */

        case 2:
          return 11095; /* atomic_xor_fetch_cmp_0hi_1 */

        case 3:
          return 11098; /* atomic_xor_fetch_cmp_0si_1 */

        case 4:
          if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11101; /* atomic_xor_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    case NOT:
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x13 = XEXP (x4, 0);
      operands[1] = x13;
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case NOT:
          switch (pattern1238 (x1))
            {
            case 0:
              if (!
#line 15078 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1044; /* *one_cmplqi2_2 */

            case 1:
              if (!
#line 15078 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1045; /* *one_cmplhi2_2 */

            case 2:
              if (!
#line 15078 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1046; /* *one_cmplsi2_2 */

            case 3:
              if (!(
#line 15078 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1047; /* *one_cmpldi2_2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1239 (x1, 
NOT) != 0
              || !
#line 15105 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1048; /* *one_cmplsi2_2_zext */

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case ASHIFT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 16341 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1110; /* *ashlqi3_cmp */

                case 1:
                  if (!
#line 16341 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1111; /* *ashlhi3_cmp */

                case 2:
                  if (!
#line 16341 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1112; /* *ashlsi3_cmp */

                case 3:
                  if (!(
#line 16341 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1113; /* *ashldi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
ASHIFT) != 0
                  || !
#line 16395 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1114; /* *ashlsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 16448 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1115; /* *ashlqi3_cconly */

        case 2:
          if (!
#line 16448 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1116; /* *ashlhi3_cconly */

        case 3:
          if (!
#line 16448 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1117; /* *ashlsi3_cconly */

        case 4:
          if (!(
#line 16448 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1118; /* *ashldi3_cconly */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case LSHIFTRT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1220; /* *lshrqi3_cmp */

                case 1:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1222; /* *lshrhi3_cmp */

                case 2:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1224; /* *lshrsi3_cmp */

                case 3:
                  if (!(
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1226; /* *lshrdi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
LSHIFTRT) != 0
                  || !
#line 17714 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1228; /* *lshrsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1230; /* *lshrqi3_cconly */

        case 2:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1232; /* *lshrhi3_cconly */

        case 3:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1234; /* *lshrsi3_cconly */

        case 4:
          if (!(
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1236; /* *lshrdi3_cconly */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern365 (x1))
        {
        case 0:
          x7 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x7, 1);
          switch (GET_CODE (x9))
            {
            case ASHIFTRT:
              switch (pattern1322 (x1))
                {
                case 0:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1221; /* *ashrqi3_cmp */

                case 1:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1223; /* *ashrhi3_cmp */

                case 2:
                  if (!
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 1225; /* *ashrsi3_cmp */

                case 3:
                  if (!(
#line 17679 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1227; /* *ashrdi3_cmp */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (pattern1323 (x1, 
ASHIFTRT) != 0
                  || !
#line 17714 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1229; /* *ashrsi3_cmp_zext */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1231; /* *ashrqi3_cconly */

        case 2:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1233; /* *ashrhi3_cconly */

        case 3:
          if (!
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 1235; /* *ashrsi3_cconly */

        case 4:
          if (!(
#line 17750 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1237; /* *ashrdi3_cconly */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 98
          || pattern683 (x1) != 0)
        return -1;
      x15 = XVECEXP (x4, 0, 0);
      operands[1] = x15;
      x16 = XVECEXP (x4, 0, 1);
      operands[2] = x16;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 21748 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1568; /* *bmi_bextr_si_ccz */

        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !register_operand (operands[2], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !(
#line 21748 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1569; /* *bmi_bextr_di_ccz */

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      x13 = XEXP (x4, 0);
      if (GET_CODE (x13) != NE
          || GET_MODE (x13) != E_QImode)
        return -1;
      x17 = XEXP (x13, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x4, 1);
      if (GET_CODE (x14) != ZERO_EXTRACT)
        return -1;
      x18 = XEXP (x14, 1);
      if (GET_CODE (x18) != UMIN
          || GET_MODE (x18) != E_QImode)
        return -1;
      x19 = XEXP (x14, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XEXP (x4, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern683 (x1) != 0)
        return -1;
      x21 = XEXP (x13, 0);
      operands[2] = x21;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x22 = XEXP (x14, 0);
      operands[1] = x22;
      x23 = XEXP (x18, 1);
      operands[3] = x23;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x24 = XEXP (x18, 0);
      if (!rtx_equal_p (x24, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (GET_MODE (x14) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 22055 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          return 1592; /* *bmi2_bzhi_si3_1_ccz */

        case E_DImode:
          if (GET_MODE (x14) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !(
#line 22055 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1593; /* *bmi2_bzhi_di3_1_ccz */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 110)
        return -1;
      x6 = XEXP (x3, 1);
      if (GET_CODE (x6) != CONST_INT)
        return -1;
      operands[2] = x6;
      res = recog_382 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (XWINT (x6, 0) != 0L)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17
          || GET_MODE (x5) != E_CCCmode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != ZERO_EXTRACT)
        return -1;
      x25 = XEXP (x8, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x15 = XVECEXP (x4, 0, 0);
      operands[0] = x15;
      x16 = XVECEXP (x4, 0, 1);
      operands[2] = x16;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      x26 = XEXP (x8, 2);
      operands[1] = x26;
      x27 = XEXP (x8, 0);
      if (!rtx_equal_p (x27, operands[0]))
        return -1;
      x9 = XEXP (x7, 1);
      switch (GET_CODE (x9))
        {
        case CONST_INT:
          switch (XWINT (x9, 0))
            {
            case 1L:
              switch (pattern1759 (x1))
                {
                case 0:
                  return 11073; /* atomic_bit_test_and_sethi_1 */

                case 1:
                  return 11074; /* atomic_bit_test_and_setsi_1 */

                case 2:
                  if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11075; /* atomic_bit_test_and_setdi_1 */

                default:
                  return -1;
                }

            case 0L:
              switch (pattern1759 (x1))
                {
                case 0:
                  return 11079; /* atomic_bit_test_and_resethi_1 */

                case 1:
                  return 11080; /* atomic_bit_test_and_resetsi_1 */

                case 2:
                  if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11081; /* atomic_bit_test_and_resetdi_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case NOT:
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != ZERO_EXTRACT)
            return -1;
          x28 = XEXP (x10, 1);
          if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x29 = XEXP (x10, 0);
          if (!rtx_equal_p (x29, operands[0]))
            return -1;
          x30 = XEXP (x10, 2);
          if (!rtx_equal_p (x30, operands[1]))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_HImode:
              if (pattern1824 (x7, 
E_HImode) != 0)
                return -1;
              return 11076; /* atomic_bit_test_and_complementhi_1 */

            case E_SImode:
              if (pattern1824 (x7, 
E_SImode) != 0)
                return -1;
              return 11077; /* atomic_bit_test_and_complementsi_1 */

            case E_DImode:
              if (pattern1824 (x7, 
E_DImode) != 0
                  || !
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 11078; /* atomic_bit_test_and_complementdi_1 */

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
recog_428 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      return recog_422 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x7 = XVECEXP (x1, 0, 1);
          if (pattern229 (x7, 
E_CCmode, 
17) != 0)
            return -1;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1439 (x3, 
E_SImode, 
E_DImode) != 0
                  || !
#line 4985 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              return 185; /* extendsidi2_1 */

            case E_TImode:
              if (pattern1439 (x3, 
E_DImode, 
E_TImode) != 0
                  || !
#line 4993 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 186; /* extendditi2 */

            default:
              return -1;
            }

        case CTZ:
          if (GET_MODE (x6) != E_SImode)
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != UNSPEC
              || XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 38)
            return -1;
          x8 = XEXP (x4, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17
              || GET_MODE (x8) != E_CCmode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          x9 = XEXP (x6, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x10 = XVECEXP (x7, 0, 0);
          operands[2] = x10;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 21201 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1522; /* *ctzsidi2_sext_falsedep */

        default:
          return -1;
        }

    case FIX:
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != USE)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != USE)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      switch (pattern824 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 6021 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))))
            return -1;
          *pnum_clobbers = 1;
          return 235; /* fix_truncdi_i387 */

        case 1:
          if (!
#line 6034 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
            return -1;
          return 236; /* fix_trunchi_i387 */

        case 2:
          if (!
#line 6034 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
            return -1;
          return 237; /* fix_truncsi_i387 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      switch (pattern572 (x1))
        {
        case 0:
          if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 261; /* floatunssisf2_i387_with_xmm */

        case 1:
          if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 262; /* floatunssidf2_i387_with_xmm */

        case 2:
          if (!
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          return 263; /* floatunssixf2_i387_with_xmm */

        default:
          return -1;
        }

    case EQ:
      return recog_427 (x1, insn, pnum_clobbers);

    case SMUL_HIGHPART:
      switch (pattern216 (x1))
        {
        case 0:
          if (!
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 627; /* smulsi3_highpart */

        case 1:
          if (!
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 629; /* smuldi3_highpart */

        default:
          return -1;
        }

    case UMUL_HIGHPART:
      switch (pattern216 (x1))
        {
        case 0:
          if (!
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 628; /* umulsi3_highpart */

        case 1:
          if (!
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 630; /* umuldi3_highpart */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      return recog_423 (x1, insn, pnum_clobbers);

    case TRUNCATE:
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != LSHIFTRT)
        return -1;
      x9 = XEXP (x6, 0);
      if (GET_CODE (x9) != MULT)
        return -1;
      x11 = XEXP (x6, 1);
      if (GET_CODE (x11) != CONST_INT)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER
          || pattern828 (x1) != 0)
        return -1;
      x12 = XEXP (x7, 0);
      operands[3] = x12;
      x13 = XEXP (x9, 0);
      switch (GET_CODE (x13))
        {
        case SIGN_EXTEND:
          switch (pattern1500 (x3, 
SIGN_EXTEND))
            {
            case 0:
              if (!
#line 11174 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 633; /* *smuldi3_highpart_1 */

            case 1:
              if (!
#line 11223 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 637; /* *smulsi3_highpart_1 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern1500 (x3, 
ZERO_EXTEND))
            {
            case 0:
              if (!
#line 11174 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 634; /* *umuldi3_highpart_1 */

            case 1:
              if (!
#line 11223 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 638; /* *umulsi3_highpart_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case DIV:
      switch (pattern217 (x1))
        {
        case 0:
          switch (pattern1336 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 639; /* divmodsi4_1 */

            case 1:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 640; /* divmoddi4_1 */

            case 2:
              if (!
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              return 647; /* *divmodhi4 */

            case 3:
              return 648; /* *divmodsi4 */

            case 4:
              if (!
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 649; /* *divmoddi4 */

            case 5:
              if ((
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return 661; /* *divmodhi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              *pnum_clobbers = 1;
              return 667; /* *divmodhi4_noext */

            case 6:
              if (
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF))
                return 663; /* *divmodsi4_noext_nf */
              if (pnum_clobbers == NULL)
                return -1;
              *pnum_clobbers = 1;
              return 669; /* *divmodsi4_noext */

            case 7:
              if ((
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 665; /* *divmoddi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 671; /* *divmoddi4_noext */

            default:
              return -1;
            }

        case 1:
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x4 = XVECEXP (x1, 0, 2);
          if (pattern953 (x4, 
E_CCmode, 
17) != 0
              || pattern1495 (x1) != 0
              || !
#line 11907 "../../src/gcc/config/i386/i386.md"
(!optimize_function_for_size_p (cfun)))
            return -1;
          return 677; /* *divmodsi4_const */

        default:
          return -1;
        }

    case UDIV:
      switch (pattern218 (x1))
        {
        case 0:
          switch (pattern1336 (x1, pnum_clobbers))
            {
            case 0:
              *pnum_clobbers = 1;
              return 641; /* udivmodsi4_1 */

            case 1:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 642; /* udivmoddi4_1 */

            case 2:
              if (!
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              return 650; /* *udivmodhi4 */

            case 3:
              return 651; /* *udivmodsi4 */

            case 4:
              if (!
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 652; /* *udivmoddi4 */

            case 5:
              if ((
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return 662; /* *udivmodhi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
                return -1;
              *pnum_clobbers = 1;
              return 668; /* *udivmodhi4_noext */

            case 6:
              if (
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF))
                return 664; /* *udivmodsi4_noext_nf */
              if (pnum_clobbers == NULL)
                return -1;
              *pnum_clobbers = 1;
              return 670; /* *udivmodsi4_noext */

            case 7:
              if ((
#line 11851 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 666; /* *udivmoddi4_noext_nf */
              if (pnum_clobbers == NULL
                  || !
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 672; /* *udivmoddi4_noext */

            default:
              return -1;
            }

        case 1:
          x4 = XVECEXP (x1, 0, 2);
          if (pattern953 (x4, 
E_CCmode, 
17) != 0)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1496 (x1, 
E_SImode) != 0
                  || !
#line 11660 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
                return -1;
              return 653; /* *udivmodsi4_pow2 */

            case E_DImode:
              if (pattern1496 (x1, 
E_DImode) != 0
                  || !(
#line 11660 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 654; /* *udivmoddi4_pow2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ABS:
      switch (pattern220 (x1))
        {
        case 0:
          if (!
#line 14834 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1016; /* *abshf2_1 */

        case 1:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1018; /* *abssf2_1 */

        case 2:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1020; /* *absdf2_1 */

        default:
          return -1;
        }

    case NEG:
      switch (pattern220 (x1))
        {
        case 0:
          if (!
#line 14834 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1017; /* *neghf2_1 */

        case 1:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1019; /* *negsf2_1 */

        case 2:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1021; /* *negdf2_1 */

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern222 (x1))
        {
        case 0:
          if (!
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1332; /* ix86_rotldi3_doubleword */

        case 1:
          if (!
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1333; /* ix86_rotlti3_doubleword */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern222 (x1))
        {
        case 0:
          if (!
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1334; /* ix86_rotrdi3_doubleword */

        case 1:
          if (!
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1335; /* ix86_rotrti3_doubleword */

        default:
          return -1;
        }

    case CALL:
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != MEM
          || GET_MODE (x6) != E_QImode
          || pattern383 (x1) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      if (!memory_operand (operands[1], E_SImode))
        return -1;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      x7 = XVECEXP (x1, 0, 1);
      x15 = XEXP (x7, 1);
      x16 = XEXP (x15, 1);
      operands[3] = x16;
      if (!immediate_operand (operands[3], E_SImode)
          || !
#line 20456 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INDIRECT_BRANCH_REGISTER))
        return -1;
      return 1485; /* *sibcall_value_pop_memory */

    case PLUS:
      x4 = XVECEXP (x1, 0, 2);
      if (pattern223 (x4) != 0)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) == REG
          && REGNO (x6) == 6)
        {
          x14 = XEXP (x3, 1);
          if (GET_CODE (x14) == CONST_INT)
            {
              x5 = XEXP (x2, 0);
              if (GET_CODE (x5) == REG
                  && REGNO (x5) == 7)
                {
                  x7 = XVECEXP (x1, 0, 1);
                  if (pattern712 (x7, 
6, 
MEM) == 0)
                    {
                      switch (XWINT (x14, 0))
                        {
                        case 4L:
                          if (pattern1681 (x1, 
E_SImode) == 0
                              && 
#line 20862 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                            return 1504; /* *leave */
                          break;

                        case 8L:
                          if (pattern1681 (x1, 
E_DImode) == 0
                              && 
#line 20870 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                            return 1505; /* *leave_rex64 */
                          break;

                        default:
                          break;
                        }
                    }
                }
            }
        }
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x12 = XEXP (x7, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 17
          || GET_MODE (x12) != E_CCmode)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      operands[1] = x6;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1504 (x3, 
E_SImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1855; /* pro_epilogue_adjust_stack_add_si */

        case E_DImode:
          if (pattern1504 (x3, 
E_DImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1856; /* pro_epilogue_adjust_stack_add_di */

        default:
          return -1;
        }

    case FFS:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != CLOBBER
          || pattern711 (x1) != 0
          || !
#line 20965 "../../src/gcc/config/i386/i386.md"
(!TARGET_CMOVE))
        return -1;
      return 1507; /* ffssi2_no_cmove */

    case COMPARE:
      return recog_425 (x1, insn, pnum_clobbers);

    case CTZ:
      switch (pattern227 (x1))
        {
        case 0:
          return 1516; /* *ctzsi2_falsedep */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1517; /* *ctzdi2_falsedep */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != SUBREG
          || maybe_ne (SUBREG_BYTE (x6), 0)
          || GET_MODE (x6) != E_DImode)
        return -1;
      x14 = XEXP (x3, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 38
          || pattern828 (x1) != 0
          || !register_operand (operands[0], E_DImode))
        return -1;
      x9 = XEXP (x6, 0);
      if (GET_MODE (x9) != E_SImode)
        return -1;
      x10 = XVECEXP (x7, 0, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_DImode))
        return -1;
      switch (GET_CODE (x9))
        {
        case CTZ:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21148 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
            return -1;
          return 1519; /* *ctzsi2_zext_falsedep */

        case CLZ:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21585 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              return 1541; /* *clzsi2_lzcnt_zext_falsedep */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 21585 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1542; /* *clzsi2_lzcnt_zext_falsedep */

            default:
              return -1;
            }

        case POPCOUNT:
          x13 = XEXP (x9, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22416 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          return 1633; /* *popcountsi2_zext_falsedep */

        default:
          return -1;
        }

    case CLZ:
      switch (pattern227 (x1))
        {
        case 0:
          if (!
#line 21542 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1538; /* *clzsi2_lzcnt_falsedep */

        case 1:
          if (!(
#line 21542 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1539; /* *clzdi2_lzcnt_falsedep */

        default:
          return -1;
        }

    case XOR:
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != PLUS)
        return -1;
      x11 = XEXP (x6, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (pattern229 (x7, 
E_CCmode, 
17) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 38)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x17 = XVECEXP (x4, 0, 0);
      operands[2] = x17;
      x14 = XEXP (x3, 1);
      if (!rtx_equal_p (x14, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1633 (x3, 
E_SImode) != 0
              || !
#line 21892 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1580; /* *bmi_blsmsk_si_falsedep */

        case E_DImode:
          if (pattern1633 (x3, 
E_DImode) != 0
              || !(
#line 21892 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1581; /* *bmi_blsmsk_di_falsedep */

        default:
          return -1;
        }

    case POPCOUNT:
      switch (pattern227 (x1))
        {
        case 0:
          if (!
#line 22361 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT))
            return -1;
          return 1630; /* *popcountsi2_falsedep */

        case 1:
          if (!(
#line 22361 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1631; /* *popcountdi2_falsedep */

        default:
          return -1;
        }

    case MEM:
      return recog_426 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
      operands[2] = x3;
      if (pattern228 (x1) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (pattern382 (x4, 
36) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      x18 = XEXP (x5, 0);
      operands[1] = x18;
      x7 = XVECEXP (x1, 0, 1);
      x12 = XEXP (x7, 0);
      operands[0] = x12;
      x15 = XEXP (x7, 1);
      x19 = XEXP (x15, 0);
      if (!rtx_equal_p (x19, operands[1]))
        return -1;
      x16 = XEXP (x15, 1);
      switch (XWINT (x16, 0))
        {
        case 8L:
          switch (pattern1575 (x1, 
E_DImode))
            {
            case 0:
              if (!(
#line 25825 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1775; /* *strsetdi_rex_1 */

            case 1:
              if (!(
#line 25825 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1776; /* *strsetdi_rex_1 */

            default:
              return -1;
            }

        case 4L:
          switch (pattern1575 (x1, 
E_SImode))
            {
            case 0:
              if (!(
#line 25840 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1777; /* *strsetsi_1 */

            case 1:
              if (!(
#line 25840 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1778; /* *strsetsi_1 */

            default:
              return -1;
            }

        case 2L:
          switch (pattern1575 (x1, 
E_HImode))
            {
            case 0:
              if (!(
#line 25854 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1779; /* *strsethi_1 */

            case 1:
              if (!(
#line 25854 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1780; /* *strsethi_1 */

            default:
              return -1;
            }

        case 1L:
          switch (pattern1575 (x1, 
E_QImode))
            {
            case 0:
              if (!(
#line 25868 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1781; /* *strsetqi_1 */

            case 1:
              if (!(
#line 25868 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1782; /* *strsetqi_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x7 = XVECEXP (x1, 0, 1);
      if (pattern229 (x7, 
E_CCmode, 
17) != 0)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (pattern223 (x4) != 0)
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x14 = XEXP (x3, 1);
      operands[2] = x14;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern567 (x3, 
E_SImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))
            return -1;
          return 1857; /* pro_epilogue_adjust_stack_sub_si */

        case E_DImode:
          if (pattern567 (x3, 
E_DImode) != 0
              || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))
            return -1;
          return 1858; /* pro_epilogue_adjust_stack_sub_di */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      return recog_424 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 rtx_insn *
split_13 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case COMPARE:
      return split_5 (x1, insn);

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
      operands[1] = x2;
      res = split_1 (x1, insn);
      if (res != NULL_RTX)
        return res;
      switch (GET_CODE (x2))
        {
        case REG:
          if (REGNO (x2) != 17
              || pattern56 (x1, 
E_CCCmode) != 0
              || !(
#line 9883 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9885 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_195 (insn, operands);

        case SUBREG:
          if (maybe_ne (SUBREG_BYTE (x2), 0))
            return NULL;
          x3 = XEXP (x2, 0);
          switch (GET_CODE (x3))
            {
            case NOT:
              switch (pattern251 (x1))
                {
                case 0:
                  if (!
#line 15143 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_549 (insn, operands);

                case 1:
                  if (!
#line 15143 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_550 (insn, operands);

                case 2:
                  if (!(
#line 15143 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && !(rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_551 (insn, operands);

                default:
                  return NULL;
                }

            case LSHIFTRT:
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              switch (pattern292 (x2))
                {
                case 0:
                  if (!((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16738 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_601 (insn, operands);

                case 1:
                  if (!((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16738 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_603 (insn, operands);

                default:
                  return NULL;
                }

            case ASHIFTRT:
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              switch (pattern292 (x2))
                {
                case 0:
                  if (!((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16738 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_602 (insn, operands);

                case 1:
                  if (!((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16738 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_604 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case PLUS:
      return split_6 (x1, insn);

    case IOR:
      return split_7 (x1, insn);

    case XOR:
      return split_8 (x1, insn);

    case FLOAT_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_CODE (operands[1]))
        {
        case SUBREG:
        case MEM:
          if (memory_operand (operands[1], E_VOIDmode)
              && any_fp_register_operand (operands[0], E_VOIDmode)
              && 
#line 4614 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])))
            return gen_split_49 (insn, operands);
          break;

        case REG:
          res = split_2 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      if (!nonimmediate_operand (operands[1], E_SFmode)
          || !sse_reg_operand (operands[0], E_DFmode)
          || GET_MODE (x2) != E_DFmode)
        return NULL;
      if (
#line 5339 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return gen_split_70 (insn, operands);
      if (!
#line 5402 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return NULL;
      return gen_split_71 (insn, operands);

    case ZERO_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 4660 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 4662 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_53 (insn, operands);

            case E_DImode:
              if (GET_MODE (x2) != E_DImode)
                return NULL;
              if (memory_operand (operands[0], E_DImode)
                  && memory_operand (operands[1], E_SImode)
                  && 
#line 4784 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return gen_split_54 (insn, operands);
              if (general_reg_operand (operands[0], E_DImode)
                  && general_reg_operand (operands[1], E_SImode)
                  && 
#line 4791 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && REGNO (operands[0]) == REGNO (operands[1])))
                return gen_split_55 (insn, operands);
              if (!nonimmediate_gr_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 4799 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return NULL;
              return gen_split_56 (insn, operands);

            default:
              return NULL;
            }

        case UNSPEC:
          if (XVECLEN (x3, 0) != 1
              || XINT (x3, 1) != 19
              || GET_MODE (x3) != E_SImode)
            return NULL;
          x5 = XVECEXP (x3, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !(
#line 23193 "../../src/gcc/config/i386/i386.md"
(TARGET_X32) && 
#line 23195 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_919 (insn, operands);

        default:
          return NULL;
        }

    case FLOAT_TRUNCATE:
      if (GET_MODE (x2) != E_SFmode)
        return NULL;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!sse_reg_operand (operands[0], E_SFmode))
        return NULL;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return NULL;
      if (
#line 5578 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return gen_split_72 (insn, operands);
      if (!
#line 5632 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_FP_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!REG_P (operands[1])
       || (!TARGET_AVX && REGNO (operands[0]) != REGNO (operands[1])))
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
        return NULL;
      return gen_split_73 (insn, operands);

    case FLOAT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (GET_MODE (x2) != E_SFmode)
            return NULL;
          if (sse_reg_operand (operands[0], E_SFmode)
              && nonimmediate_operand (operands[1], E_SImode))
            {
              if (
#line 6159 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_79 (insn, operands);
              if (
#line 6244 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_87 (insn, operands);
            }
          if (register_operand (operands[0], E_SFmode)
              && register_operand (operands[1], E_DImode)
              && 
#line 6188 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return gen_split_81 (insn, operands);
          if (!sse_reg_operand (operands[0], E_SFmode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 6244 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_88 (insn, operands);

        case E_DFmode:
          if (GET_MODE (x2) != E_DFmode)
            return NULL;
          if (sse_reg_operand (operands[0], E_DFmode)
              && nonimmediate_operand (operands[1], E_SImode))
            {
              if (
#line 6159 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2
   && TARGET_USE_VECTOR_CONVERTS
   && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (MEM_P (operands[1]) || TARGET_INTER_UNIT_MOVES_TO_VEC)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_80 (insn, operands);
              if (
#line 6244 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)))
                return gen_split_89 (insn, operands);
            }
          if (register_operand (operands[0], E_DFmode)
              && register_operand (operands[1], E_DImode)
              && 
#line 6188 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return gen_split_82 (insn, operands);
          if (!sse_reg_operand (operands[0], E_DFmode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 6244 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX
   && TARGET_SSE_PARTIAL_REG_CONVERTS_DEPENDENCY
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && (!EXT_REX_SSE_REG_P (operands[0])
       || TARGET_AVX512VL)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_90 (insn, operands);

        case E_XFmode:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x2) != E_XFmode
              || !register_operand (operands[1], E_DImode)
              || !
#line 6188 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)
   && can_create_pseudo_p ()))
            return NULL;
          return gen_split_83 (insn, operands);

        default:
          return NULL;
        }

    case MULT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x6 = XEXP (x2, 1);
      operands[1] = x6;
      x3 = XEXP (x2, 0);
      if (!rtx_equal_p (x3, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !const1248_operand (operands[1], E_SImode)
              || !
#line 6428 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed))
            return NULL;
          return gen_split_96 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !const1248_operand (operands[1], E_DImode)
              || !(
#line 6428 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_97 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      switch (XVECLEN (x2, 0))
        {
        case 2:
          switch (XINT (x2, 1))
            {
            case 40:
              if (GET_MODE (x2) != E_CCCmode)
                return NULL;
              x7 = XVECEXP (x2, 0, 0);
              if (GET_CODE (x7) != LTU
                  || pattern716 (x7) != 0
                  || pattern248 (x1) != 0)
                return NULL;
              x8 = XEXP (x7, 0);
              switch (GET_MODE (x8))
                {
                case E_CCmode:
                  if (!(
#line 9904 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9906 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_198 (insn, operands);

                case E_CCCmode:
                  if (!(
#line 9904 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9906 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_199 (insn, operands);

                default:
                  return NULL;
                }

            case 45:
              if (pattern296 (x2) != 0)
                return NULL;
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              x9 = XVECEXP (x2, 0, 1);
              operands[2] = x9;
              if (!register_operand (operands[2], E_SImode)
                  || !(
#line 19556 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 19558 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_856 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          switch (XINT (x2, 1))
            {
            case 97:
              switch (pattern300 (x2))
                {
                case 0:
                  if (!((
#line 21646 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 21648 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_890 (insn, operands);

                case 1:
                  if (!((
#line 21646 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))) && 
#line 21648 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_892 (insn, operands);

                default:
                  return NULL;
                }

            case 96:
              switch (pattern300 (x2))
                {
                case 0:
                  if (!((
#line 21646 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 21648 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_891 (insn, operands);

                case 1:
                  if (!((
#line 21646 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && (((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))) && 
#line 21648 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_893 (insn, operands);

                default:
                  return NULL;
                }

            case 19:
              x7 = XVECEXP (x2, 0, 0);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              switch (pattern23 (x2))
                {
                case 0:
                  if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
                    return NULL;
                  return gen_split_917 (insn, operands);

                case 1:
                  if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
                    return NULL;
                  return gen_split_918 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          switch (pattern403 (x2))
            {
            case 0:
              return gen_split_400 (insn, operands);

            case 1:
              return gen_split_403 (insn, operands);

            case 2:
              return gen_split_409 (insn, operands);

            case 3:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_406 (insn, operands);

            case 4:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_412 (insn, operands);

            case 5:
              if (!
#line 13868 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_415 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          switch (pattern403 (x2))
            {
            case 0:
              return gen_split_401 (insn, operands);

            case 1:
              return gen_split_404 (insn, operands);

            case 2:
              return gen_split_410 (insn, operands);

            case 3:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_407 (insn, operands);

            case 4:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_413 (insn, operands);

            case 5:
              if (!
#line 13868 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_416 (insn, operands);

            default:
              return NULL;
            }

        case XOR:
          switch (pattern403 (x2))
            {
            case 0:
              return gen_split_402 (insn, operands);

            case 1:
              return gen_split_405 (insn, operands);

            case 2:
              return gen_split_411 (insn, operands);

            case 3:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_408 (insn, operands);

            case 4:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_414 (insn, operands);

            case 5:
              if (!
#line 13868 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              return gen_split_417 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case NOT:
      switch (pattern40 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !((
#line 14976 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14978 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_540 (insn, operands);

            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !((
#line 14976 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14978 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_541 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (!(
#line 15059 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 15063 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_542 (insn, operands);

        case 2:
          if (!(
#line 15059 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 15063 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_543 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case REG:
        case SUBREG:
          if (!register_operand (operands[2], E_QImode))
            return NULL;
          switch (pattern126 (x2))
            {
            case 0:
              if (!
#line 15978 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return NULL;
              return gen_split_570 (insn, operands);

            case 1:
              if (!(
#line 15978 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_571 (insn, operands);

            default:
              return NULL;
            }

        case CONST_INT:
          if (!const_0_to_3_operand (operands[2], E_VOIDmode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (!general_reg_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !index_reg_operand (operands[1], E_QImode)
                  || !
#line 16300 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_581 (insn, operands);

            case E_HImode:
              if (!general_reg_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !index_reg_operand (operands[1], E_HImode)
                  || !
#line 16300 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_582 (insn, operands);

            case E_SImode:
              if (!general_reg_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !index_reg_operand (operands[1], E_SImode)
                  || !
#line 16300 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD))
                return NULL;
              return gen_split_583 (insn, operands);

            case E_DImode:
              if (!general_reg_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !index_reg_operand (operands[1], E_DImode)
                  || !(
#line 16300 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])
   && !TARGET_APX_NDD) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_584 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LSHIFTRT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (pattern231 (x2))
        {
        case 0:
          if (!
#line 17425 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
            return NULL;
          return gen_split_618 (insn, operands);

        case 1:
          if (!(
#line 17425 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_620 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFTRT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern231 (x2))
            {
            case 0:
              if (!
#line 17425 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return NULL;
              return gen_split_619 (insn, operands);

            case 1:
              if (!(
#line 17425 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_621 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          if (pattern290 (x2, 
E_V2DImode) != 0)
            return NULL;
          if ((
#line 18006 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STV && TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32) && 
#line 18010 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_676 (insn, operands);
          if (!(
#line 18023 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVX512VL
   && INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 32
   && ix86_pre_reload_split ()) && 
#line 18028 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_677 (insn, operands);

        default:
          return NULL;
        }

    case ROTATE:
      return split_9 (x1, insn);

    case ROTATERT:
      return split_11 (x1, insn);

    case IF_THEN_ELSE:
      return split_12 (x1, insn);

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      switch (GET_CODE (x2))
        {
        case GEU:
        case LTU:
          res = split_4 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case GTU:
        case LEU:
          operands[1] = x2;
          if (shr_comparison_operator (operands[1], E_QImode))
            {
              x4 = XEXP (x1, 0);
              operands[0] = x4;
              if (nonimmediate_operand (operands[0], E_QImode))
                {
                  x3 = XEXP (x2, 0);
                  operands[2] = x3;
                  if (register_operand (operands[2], E_DImode))
                    {
                      x6 = XEXP (x2, 1);
                      operands[3] = x6;
                      if (const_int_operand (operands[3], E_VOIDmode)
                          && 
#line 19443 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3]) + 1), 32, 63)))
                        return gen_split_850 (insn, operands);
                    }
                }
            }
          break;

        case NE:
          switch (pattern232 (x1))
            {
            case 0:
              return gen_split_857 (insn, operands);

            case 1:
              return gen_split_858 (insn, operands);

            default:
              break;
            }
          break;

        case EQ:
          switch (pattern232 (x1))
            {
            case 0:
              return gen_split_859 (insn, operands);

            case 1:
              return gen_split_860 (insn, operands);

            default:
              break;
            }
          break;

        default:
          break;
        }
      operands[1] = x2;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17)
        return NULL;
      x6 = XEXP (x2, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || !ix86_comparison_operator (operands[1], E_DImode)
              || !(
#line 19481 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 19483 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_851 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !ix86_comparison_operator (operands[1], E_HImode)
              || !(
#line 19514 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 19517 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_854 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || !ix86_comparison_operator (operands[1], E_SImode)
              || !(
#line 19514 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 19517 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_855 (insn, operands);

        default:
          return NULL;
        }

    case MINUS:
      return split_10 (x1, insn);

    case CLZ:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (pattern126 (x2))
        {
        case 0:
          if (!(
#line 21485 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 21487 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_884 (insn, operands);

        case 1:
          if (!((
#line 21485 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21487 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_885 (insn, operands);

        default:
          return NULL;
        }

    case POPCOUNT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (pattern126 (x2))
        {
        case 0:
          if (!(
#line 22286 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 22294 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_908 (insn, operands);

        case 1:
          if (!((
#line 22286 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 22294 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_909 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_44 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
    case REG:
      operands[1] = x4;
      if (general_reg_operand (operands[1], E_VOIDmode)
          && general_reg_operand (operands[0], E_VOIDmode)
          && 
#line 27745 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
        return gen_split_987 (insn, operands);
      if (general_reg_operand (operands[1], E_V4QImode)
          && general_reg_operand (operands[0], E_V4QImode)
          && GET_MODE (x3) == E_V4QImode
          && 
#line 4557 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1069 (insn, operands);
      if (general_reg_operand (operands[1], E_V2QImode)
          && general_reg_operand (operands[0], E_V2QImode)
          && GET_MODE (x3) == E_V2QImode
          && 
#line 4557 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1070 (insn, operands);
      if (general_reg_operand (operands[1], E_V2HImode)
          && general_reg_operand (operands[0], E_V2HImode)
          && GET_MODE (x3) == E_V2HImode
          && 
#line 4557 "../../src/gcc/config/i386/mmx.md"
(reload_completed))
        return gen_split_1071 (insn, operands);
      if (sse_reg_operand (operands[1], E_V4QImode)
          && sse_reg_operand (operands[0], E_V4QImode)
          && GET_MODE (x3) == E_V4QImode
          && 
#line 4569 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1072 (insn, operands);
      if (sse_reg_operand (operands[1], E_V2QImode)
          && sse_reg_operand (operands[0], E_V2QImode)
          && GET_MODE (x3) == E_V2QImode
          && 
#line 4569 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1073 (insn, operands);
      if (sse_reg_operand (operands[1], E_V2HImode)
          && sse_reg_operand (operands[0], E_V2HImode)
          && GET_MODE (x3) == E_V2HImode
          && 
#line 4569 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
        return gen_split_1074 (insn, operands);
      if (mask_reg_operand (operands[1], E_QImode)
          && mask_reg_operand (operands[0], E_QImode)
          && GET_MODE (x3) == E_QImode
          && 
#line 2218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
        return gen_split_1211 (insn, operands);
      if (mask_reg_operand (operands[1], E_HImode)
          && mask_reg_operand (operands[0], E_HImode)
          && GET_MODE (x3) == E_HImode
          && 
#line 2218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
        return gen_split_1212 (insn, operands);
      if (mask_reg_operand (operands[1], E_SImode)
          && mask_reg_operand (operands[0], E_SImode)
          && GET_MODE (x3) == E_SImode
          && (
#line 2218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return gen_split_1213 (insn, operands);
      if (!mask_reg_operand (operands[1], E_DImode)
          || !mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !(
#line 2218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return NULL;
      return gen_split_1214 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x4, 0) != 3)
        return NULL;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x7 = XVECEXP (x4, 0, 2);
      operands[3] = x7;
      switch (XINT (x4, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern972 (x3))
                {
                case 0:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1389 (insn, operands);

                case 1:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1396 (insn, operands);

                case 2:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1398 (insn, operands);

                case 3:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1424 (insn, operands);

                case 4:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1430 (insn, operands);

                default:
                  return NULL;
                }

            case E_QImode:
              switch (pattern973 (x3))
                {
                case 0:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1390 (insn, operands);

                case 1:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1391 (insn, operands);

                case 2:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1392 (insn, operands);

                case 3:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1393 (insn, operands);

                case 4:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1394 (insn, operands);

                case 5:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1397 (insn, operands);

                case 6:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1399 (insn, operands);

                case 7:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1400 (insn, operands);

                case 8:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1401 (insn, operands);

                case 9:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1402 (insn, operands);

                case 10:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1403 (insn, operands);

                case 11:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1432 (insn, operands);

                default:
                  return NULL;
                }

            case E_SImode:
              switch (pattern988 (x3))
                {
                case 0:
                  if (!((
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4470 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1395 (insn, operands);

                case 1:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1426 (insn, operands);

                case 2:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1428 (insn, operands);

                default:
                  return NULL;
                }

            case E_DImode:
              if (pattern989 (x3) != 0
                  || !((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1422 (insn, operands);

            default:
              return NULL;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1089 (x3, 
E_V64QImode, 
E_DImode) != 0
                  || !((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1423 (insn, operands);

            case E_HImode:
              switch (pattern1072 (x3))
                {
                case 0:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1425 (insn, operands);

                case 1:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1431 (insn, operands);

                case 2:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1470 (insn, operands);

                default:
                  return NULL;
                }

            case E_SImode:
              switch (pattern1090 (x3))
                {
                case 0:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1427 (insn, operands);

                case 1:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1429 (insn, operands);

                default:
                  return NULL;
                }

            case E_QImode:
              switch (pattern1073 (x3))
                {
                case 0:
                  if (!((
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4565 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1433 (insn, operands);

                case 1:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1471 (insn, operands);

                case 2:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1472 (insn, operands);

                case 3:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1473 (insn, operands);

                case 4:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1474 (insn, operands);

                case 5:
                  if (!((
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4763 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_1475 (insn, operands);

                default:
                  return NULL;
                }

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

 rtx_insn *
split_59 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x4, operands[1]))
        return NULL;
      x5 = XEXP (x2, 1);
      if (XVECLEN (x5, 0) != 2)
        return NULL;
      x6 = XVECEXP (x5, 0, 0);
      if (GET_CODE (x6) != CONST_INT
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V4DFmode)
        return NULL;
      if (XWINT (x6, 0) == 0L)
        {
          x7 = XVECEXP (x5, 0, 1);
          if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 2]
              && memory_operand (operands[0], E_V2DFmode)
              && register_operand (operands[1], E_V2DFmode)
              && 
#line 13592 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed))
            return gen_split_1585 (insn, operands);
        }
      if (!register_operand (operands[0], E_V2DFmode)
          || !memory_operand (operands[1], E_V2DFmode))
        return NULL;
      operands[2] = x6;
      if (!const_0_to_1_operand (operands[2], E_SImode))
        return NULL;
      x7 = XVECEXP (x5, 0, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_SImode)
          || !
#line 13610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])))
        return NULL;
      return gen_split_1586 (insn, operands);

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern806 (x2))
        {
        case 0:
          if (!(
#line 24145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24147 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3509 (insn, operands);

        case 1:
          if (!(
#line 24198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 24200 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3513 (insn, operands);

        case 2:
          if (!(
#line 24294 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24296 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3521 (insn, operands);

        case 3:
          if (!(
#line 24542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 24544 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3533 (insn, operands);

        case 4:
          if (!(
#line 24596 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24598 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3537 (insn, operands);

        case 5:
          if (!(
#line 24701 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24703 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3545 (insn, operands);

        case 6:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25098 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 25100 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3568 (insn, operands);
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3775 (insn, operands);

        case 7:
          if (pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25150 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 25152 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3570 (insn, operands);
          if (!movq_parallel (operands[3], E_VOIDmode)
              || !((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3776 (insn, operands);

        case 8:
          if (vector_operand (operands[1], E_V4SImode)
              && pmovzx_parallel (operands[3], E_VOIDmode)
              && (
#line 25235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 25237 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return gen_split_3576 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !movq_parallel (operands[3], E_VOIDmode)
              || !(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3777 (insn, operands);

        case 9:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3778 (insn, operands);

        case 10:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3779 (insn, operands);

        case 11:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3780 (insn, operands);

        case 12:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3781 (insn, operands);

        case 13:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3782 (insn, operands);

        case 14:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3783 (insn, operands);

        case 15:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3784 (insn, operands);

        case 16:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3785 (insn, operands);

        case 17:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3786 (insn, operands);

        case 18:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3787 (insn, operands);

        case 19:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3788 (insn, operands);

        case 20:
          if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3789 (insn, operands);

        case 21:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3790 (insn, operands);

        case 22:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3791 (insn, operands);

        case 23:
          if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3792 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_65 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1668 (insn, operands);

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
          return gen_split_1695 (insn, operands);

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
          return gen_split_1722 (insn, operands);

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
          return gen_split_1749 (insn, operands);

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
          return gen_split_1776 (insn, operands);

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
          return gen_split_1803 (insn, operands);

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
          return gen_split_1830 (insn, operands);

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
          return gen_split_1857 (insn, operands);

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
          return gen_split_1884 (insn, operands);

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
          return gen_split_1911 (insn, operands);

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
          return gen_split_1938 (insn, operands);

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
          return gen_split_1965 (insn, operands);

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
          return gen_split_1671 (insn, operands);

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
          return gen_split_1698 (insn, operands);

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
          return gen_split_1725 (insn, operands);

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
          return gen_split_1752 (insn, operands);

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
          return gen_split_1779 (insn, operands);

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
          return gen_split_1806 (insn, operands);

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
          return gen_split_1833 (insn, operands);

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
          return gen_split_1860 (insn, operands);

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
          return gen_split_1887 (insn, operands);

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
          return gen_split_1914 (insn, operands);

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
          return gen_split_1941 (insn, operands);

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
          return gen_split_1968 (insn, operands);

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
          return gen_split_1674 (insn, operands);

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
          return gen_split_1701 (insn, operands);

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
          return gen_split_1728 (insn, operands);

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
          return gen_split_1755 (insn, operands);

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
          return gen_split_1782 (insn, operands);

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
          return gen_split_1809 (insn, operands);

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
          return gen_split_1836 (insn, operands);

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
          return gen_split_1863 (insn, operands);

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
          return gen_split_1890 (insn, operands);

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
          return gen_split_1917 (insn, operands);

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
          return gen_split_1944 (insn, operands);

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
          return gen_split_1971 (insn, operands);

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
          return gen_split_2958 (insn, operands);

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
          return gen_split_2967 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2976 (insn, operands);

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
          return gen_split_2985 (insn, operands);

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
          return gen_split_2994 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3003 (insn, operands);

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
          return gen_split_3012 (insn, operands);

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
          return gen_split_3021 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3030 (insn, operands);

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
          return gen_split_3039 (insn, operands);

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
          return gen_split_3048 (insn, operands);

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3057 (insn, operands);

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
          return gen_split_2316 (insn, operands);

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
          return gen_split_2343 (insn, operands);

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
          return gen_split_2370 (insn, operands);

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
          return gen_split_2397 (insn, operands);

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
          return gen_split_2424 (insn, operands);

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
          return gen_split_2451 (insn, operands);

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
          return gen_split_2478 (insn, operands);

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
          return gen_split_2505 (insn, operands);

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
          return gen_split_2532 (insn, operands);

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
          return gen_split_2559 (insn, operands);

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
          return gen_split_2586 (insn, operands);

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
          return gen_split_2613 (insn, operands);

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
          return gen_split_2319 (insn, operands);

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
          return gen_split_2346 (insn, operands);

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
          return gen_split_2373 (insn, operands);

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
          return gen_split_2400 (insn, operands);

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
          return gen_split_2427 (insn, operands);

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
          return gen_split_2454 (insn, operands);

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
          return gen_split_2481 (insn, operands);

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
          return gen_split_2508 (insn, operands);

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
          return gen_split_2535 (insn, operands);

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
          return gen_split_2562 (insn, operands);

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
          return gen_split_2589 (insn, operands);

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
          return gen_split_2616 (insn, operands);

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
          return gen_split_2322 (insn, operands);

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
          return gen_split_2349 (insn, operands);

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
          return gen_split_2376 (insn, operands);

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
          return gen_split_2403 (insn, operands);

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
          return gen_split_2430 (insn, operands);

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
          return gen_split_2457 (insn, operands);

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
          return gen_split_2484 (insn, operands);

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
          return gen_split_2511 (insn, operands);

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
          return gen_split_2538 (insn, operands);

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
          return gen_split_2565 (insn, operands);

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
          return gen_split_2592 (insn, operands);

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
          return gen_split_2619 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_75 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
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
              return gen_split_1984 (insn, operands);

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
              return gen_split_2011 (insn, operands);

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
              return gen_split_2038 (insn, operands);

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
              return gen_split_2065 (insn, operands);

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
              return gen_split_2092 (insn, operands);

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
              return gen_split_2119 (insn, operands);

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
              return gen_split_2146 (insn, operands);

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
              return gen_split_2173 (insn, operands);

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
              return gen_split_2200 (insn, operands);

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
              return gen_split_2227 (insn, operands);

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
              return gen_split_2254 (insn, operands);

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
              return gen_split_2281 (insn, operands);

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
              return gen_split_1987 (insn, operands);

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
              return gen_split_2014 (insn, operands);

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
              return gen_split_2041 (insn, operands);

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
              return gen_split_2068 (insn, operands);

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
              return gen_split_2095 (insn, operands);

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
              return gen_split_2122 (insn, operands);

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
              return gen_split_2149 (insn, operands);

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
              return gen_split_2176 (insn, operands);

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
              return gen_split_2203 (insn, operands);

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
              return gen_split_2230 (insn, operands);

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
              return gen_split_2257 (insn, operands);

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
              return gen_split_2284 (insn, operands);

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
              return gen_split_1990 (insn, operands);

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
              return gen_split_2017 (insn, operands);

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
              return gen_split_2044 (insn, operands);

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
              return gen_split_2071 (insn, operands);

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
              return gen_split_2098 (insn, operands);

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
              return gen_split_2125 (insn, operands);

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
              return gen_split_2152 (insn, operands);

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
              return gen_split_2179 (insn, operands);

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
              return gen_split_2206 (insn, operands);

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
              return gen_split_2233 (insn, operands);

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
              return gen_split_2260 (insn, operands);

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
              return gen_split_2287 (insn, operands);

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
              return gen_split_3064 (insn, operands);

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
              return gen_split_3073 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3082 (insn, operands);

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
              return gen_split_3091 (insn, operands);

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
              return gen_split_3100 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3109 (insn, operands);

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
              return gen_split_3118 (insn, operands);

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
              return gen_split_3127 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3136 (insn, operands);

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
              return gen_split_3145 (insn, operands);

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
              return gen_split_3154 (insn, operands);

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
              return gen_split_3163 (insn, operands);

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
              return gen_split_2632 (insn, operands);

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
              return gen_split_2659 (insn, operands);

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
              return gen_split_2686 (insn, operands);

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
              return gen_split_2713 (insn, operands);

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
              return gen_split_2740 (insn, operands);

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
              return gen_split_2767 (insn, operands);

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
              return gen_split_2794 (insn, operands);

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
              return gen_split_2821 (insn, operands);

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
              return gen_split_2848 (insn, operands);

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
              return gen_split_2875 (insn, operands);

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
              return gen_split_2902 (insn, operands);

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
              return gen_split_2929 (insn, operands);

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
              return gen_split_2635 (insn, operands);

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
              return gen_split_2662 (insn, operands);

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
              return gen_split_2689 (insn, operands);

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
              return gen_split_2716 (insn, operands);

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
              return gen_split_2743 (insn, operands);

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
              return gen_split_2770 (insn, operands);

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
              return gen_split_2797 (insn, operands);

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
              return gen_split_2824 (insn, operands);

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
              return gen_split_2851 (insn, operands);

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
              return gen_split_2878 (insn, operands);

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
              return gen_split_2905 (insn, operands);

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
              return gen_split_2932 (insn, operands);

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
              return gen_split_2638 (insn, operands);

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
              return gen_split_2665 (insn, operands);

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
              return gen_split_2692 (insn, operands);

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
              return gen_split_2719 (insn, operands);

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
              return gen_split_2746 (insn, operands);

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
              return gen_split_2773 (insn, operands);

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
              return gen_split_2800 (insn, operands);

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
              return gen_split_2827 (insn, operands);

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
              return gen_split_2854 (insn, operands);

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
              return gen_split_2881 (insn, operands);

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
              return gen_split_2908 (insn, operands);

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
              return gen_split_2935 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

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
              return gen_split_1993 (insn, operands);

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
              return gen_split_2020 (insn, operands);

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
              return gen_split_2047 (insn, operands);

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
              return gen_split_2074 (insn, operands);

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
              return gen_split_2101 (insn, operands);

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
              return gen_split_2128 (insn, operands);

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
              return gen_split_2155 (insn, operands);

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
              return gen_split_2182 (insn, operands);

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
              return gen_split_2209 (insn, operands);

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
              return gen_split_2236 (insn, operands);

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
              return gen_split_2263 (insn, operands);

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
              return gen_split_2290 (insn, operands);

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
              return gen_split_1996 (insn, operands);

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
              return gen_split_2023 (insn, operands);

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
              return gen_split_2050 (insn, operands);

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
              return gen_split_2077 (insn, operands);

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
              return gen_split_2104 (insn, operands);

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
              return gen_split_2131 (insn, operands);

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
              return gen_split_2158 (insn, operands);

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
              return gen_split_2185 (insn, operands);

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
              return gen_split_2212 (insn, operands);

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
              return gen_split_2239 (insn, operands);

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
              return gen_split_2266 (insn, operands);

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
              return gen_split_2293 (insn, operands);

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
              return gen_split_1999 (insn, operands);

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
              return gen_split_2026 (insn, operands);

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
              return gen_split_2053 (insn, operands);

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
              return gen_split_2080 (insn, operands);

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
              return gen_split_2107 (insn, operands);

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
              return gen_split_2134 (insn, operands);

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
              return gen_split_2161 (insn, operands);

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
              return gen_split_2188 (insn, operands);

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
              return gen_split_2215 (insn, operands);

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
              return gen_split_2242 (insn, operands);

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
              return gen_split_2269 (insn, operands);

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
              return gen_split_2296 (insn, operands);

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
              return gen_split_3067 (insn, operands);

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
              return gen_split_3076 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3085 (insn, operands);

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
              return gen_split_3094 (insn, operands);

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
              return gen_split_3103 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3112 (insn, operands);

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
              return gen_split_3121 (insn, operands);

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
              return gen_split_3130 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3139 (insn, operands);

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
              return gen_split_3148 (insn, operands);

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
              return gen_split_3157 (insn, operands);

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
              return gen_split_3166 (insn, operands);

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
              return gen_split_2641 (insn, operands);

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
              return gen_split_2668 (insn, operands);

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
              return gen_split_2695 (insn, operands);

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
              return gen_split_2722 (insn, operands);

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
              return gen_split_2749 (insn, operands);

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
              return gen_split_2776 (insn, operands);

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
              return gen_split_2803 (insn, operands);

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
              return gen_split_2830 (insn, operands);

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
              return gen_split_2857 (insn, operands);

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
              return gen_split_2884 (insn, operands);

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
              return gen_split_2911 (insn, operands);

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
              return gen_split_2938 (insn, operands);

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
              return gen_split_2644 (insn, operands);

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
              return gen_split_2671 (insn, operands);

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
              return gen_split_2698 (insn, operands);

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
              return gen_split_2725 (insn, operands);

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
              return gen_split_2752 (insn, operands);

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
              return gen_split_2779 (insn, operands);

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
              return gen_split_2806 (insn, operands);

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
              return gen_split_2833 (insn, operands);

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
              return gen_split_2860 (insn, operands);

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
              return gen_split_2887 (insn, operands);

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
              return gen_split_2914 (insn, operands);

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
              return gen_split_2941 (insn, operands);

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
              return gen_split_2647 (insn, operands);

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
              return gen_split_2674 (insn, operands);

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
              return gen_split_2701 (insn, operands);

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
              return gen_split_2728 (insn, operands);

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
              return gen_split_2755 (insn, operands);

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
              return gen_split_2782 (insn, operands);

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
              return gen_split_2809 (insn, operands);

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
              return gen_split_2836 (insn, operands);

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
              return gen_split_2863 (insn, operands);

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
              return gen_split_2890 (insn, operands);

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
              return gen_split_2917 (insn, operands);

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
              return gen_split_2944 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_71 (x1, insn);

    default:
      return NULL;
    }
}
