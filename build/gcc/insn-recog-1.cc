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
pattern0 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_TImode)
      || GET_MODE (x2) != E_TImode
      || !register_operand (operands[1], E_TImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern18 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern17 (x1); /* [-1, 1] */
}

int
pattern22 (rtx x1, machine_mode i1)
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
pattern32 (rtx x1)
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
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:
      switch (GET_MODE (operands[0]))
        {
        case E_V1TImode:
          return pattern30 (x3); /* [-1, 0] */

        case E_V16SImode:
          if (pattern31 (x3, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8SImode:
          if (pattern31 (x3, 
E_V8SImode) != 0)
            return -1;
          return 2;

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V4SImode))
            return -1;
          return 3;

        case E_V8DImode:
          if (pattern31 (x3, 
E_V8DImode) != 0)
            return -1;
          return 4;

        case E_V4DImode:
          if (pattern31 (x3, 
E_V4DImode) != 0)
            return -1;
          return 5;

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_V2DImode))
            return -1;
          return 6;

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x3) != E_V16QImode
              || !nonimmediate_operand (operands[1], E_V16QImode)
              || !const_0_to_7_operand (operands[2], E_SImode))
            return -1;
          return 7;

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !nonimmediate_operand (operands[1], E_V8HImode)
              || !const_0_to_15_operand (operands[2], E_SImode))
            return -1;
          return 8;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern14 (x3, 
E_V16SImode) != 0)
            return -1;
          return 9;

        case E_V8SImode:
          if (pattern14 (x3, 
E_V8SImode) != 0)
            return -1;
          return 10;

        case E_V4SImode:
          if (pattern14 (x3, 
E_V4SImode) != 0)
            return -1;
          return 11;

        case E_V8DImode:
          if (pattern14 (x3, 
E_V8DImode) != 0)
            return -1;
          return 12;

        case E_V4DImode:
          if (pattern14 (x3, 
E_V4DImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern14 (x3, 
E_V2DImode) != 0)
            return -1;
          return 14;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern55 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  if (!register_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern58 (rtx x1)
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
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 0;

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode)
          || GET_MODE (x3) != E_HFmode
          || !nonimmediate_operand (operands[1], E_HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern68 (rtx x1)
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
  return pattern67 (x3); /* [-1, 8] */
}

int
pattern72 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XEXP (x1, 1);
      return pattern71 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern71 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern81 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern89 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x3, 0);
  operands[2] = x6;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x7 = XEXP (x2, 1);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern88 (x2, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern88 (x2, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern98 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
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
pattern106 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern112 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      return 0;

    case ASHIFT:
      if (GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[0], E_DImode))
        return -1;
      res = pattern37 (x4, 
E_DImode, 
E_SImode);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern123 (rtx x1)
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
      return pattern122 (x3, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern122 (x3, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern128 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern140 (rtx x1)
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
    case E_V16HImode:
      return pattern129 (x1, 
E_HImode, 
E_V16HImode); /* [-1, 0] */

    case E_V8HImode:
      if (pattern129 (x1, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern129 (x1, 
E_QImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    case E_V4SImode:
      if (pattern129 (x1, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern129 (x1, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern129 (x1, 
E_QImode, 
E_V2DImode) != 0)
        return -1;
      return 5;

    case E_V32HImode:
      if (pattern129 (x1, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      return 6;

    case E_V16SImode:
      if (pattern129 (x1, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      return 7;

    case E_V8DImode:
      if (pattern129 (x1, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern150 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern153 (rtx x1)
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
    case E_V32HFmode:
      return pattern152 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern152 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern152 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern158 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
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
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern165 (rtx x1)
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
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x3) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 0;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x3) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x3) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern179 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
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
pattern190 (rtx x1, rtx_code i1)
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
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x22 = XVECEXP (x7, 0, 4);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x23 = XVECEXP (x7, 0, 5);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x24 = XVECEXP (x7, 0, 6);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x25 = XVECEXP (x7, 0, 7);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern189 (x1, 
E_V8QImode, 
E_V8HImode, 
E_V16QImode) != 0)
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x20 = XVECEXP (x7, 0, 2);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x21 = XVECEXP (x7, 0, 3);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern189 (x1, 
E_V4HImode, 
E_V4SImode, 
E_V8HImode) != 0)
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
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x19 = XVECEXP (x7, 0, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern189 (x1, 
E_V2SImode, 
E_V2DImode, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern216 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  x7 = XEXP (x5, 1);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x7, 1);
  operands[2] = x9;
  x10 = XEXP (x2, 0);
  operands[3] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern215 (x7, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern215 (x7, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern226 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern225 (x5, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern225 (x5, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern238 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  switch (GET_CODE (operands[2]))
    {
    case CONST_VECTOR:
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return pattern237 (x1, 
E_V32HImode); /* [-1, 0] */

        case E_V16SImode:
          if (pattern237 (x1, 
E_V16SImode) != 0)
            return -1;
          return 1;

        case E_V8DImode:
          if (pattern237 (x1, 
E_V8DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
      if (!const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          || !register_operand (operands[0], E_V1TImode)
          || GET_MODE (x1) != E_V1TImode
          || !register_operand (operands[1], E_V1TImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern255 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (XWINT (x3, 0) != 8L)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != ZERO_EXTRACT)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x6 = XEXP (x4, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x7 = XEXP (x4, 0);
  operands[0] = x7;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_HImode:
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern269 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern278 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          return 0;

        case E_HImode:
          return 1;

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
          return 2;

        case E_HImode:
          return 3;

        case E_SImode:
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern291 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern297 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern61 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern61 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern303 (rtx x1, machine_mode i1)
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
pattern308 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != E_SImode
      || !nonimmediate_operand (operands[1], E_HImode)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern315 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (XVECLEN (x2, 0) != 3)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      x4 = XEXP (x1, 1);
      operands[2] = x4;
      x5 = XVECEXP (x2, 0, 0);
      operands[3] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[4] = x6;
      switch (XINT (x2, 1))
        {
        case 59:
          return 0;

        case 157:
          x7 = XVECEXP (x2, 0, 2);
          operands[5] = x7;
          if (!const_0_to_7_operand (operands[5], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16QImode:
              if (pattern313 (x1, 
E_V16QImode, 
E_HImode) != 0)
                return -1;
              return 1;

            case E_V8HImode:
              if (pattern313 (x1, 
E_V8HImode, 
E_QImode) != 0)
                return -1;
              return 2;

            case E_V4SImode:
              if (pattern313 (x1, 
E_V4SImode, 
E_QImode) != 0)
                return -1;
              return 3;

            case E_V2DImode:
              if (pattern313 (x1, 
E_V2DImode, 
E_QImode) != 0)
                return -1;
              return 4;

            case E_V32QImode:
              if (pattern313 (x1, 
E_V32QImode, 
E_SImode) != 0)
                return -1;
              return 5;

            case E_V16HImode:
              if (pattern313 (x1, 
E_V16HImode, 
E_HImode) != 0)
                return -1;
              return 6;

            case E_V8SImode:
              if (pattern313 (x1, 
E_V8SImode, 
E_QImode) != 0)
                return -1;
              return 7;

            case E_V4DImode:
              if (pattern313 (x1, 
E_V4DImode, 
E_QImode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      x8 = XEXP (x2, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 3
          || XINT (x8, 1) != 59)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      x4 = XEXP (x1, 1);
      operands[2] = x4;
      x9 = XVECEXP (x8, 0, 0);
      operands[3] = x9;
      x10 = XVECEXP (x8, 0, 1);
      operands[4] = x10;
      x11 = XVECEXP (x8, 0, 2);
      operands[5] = x11;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x1) != E_V8SImode
              || !vector_all_ones_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V8SFmode:
              if (!register_operand (operands[3], E_V8SFmode)
                  || !nonimmediate_operand (operands[4], E_V8SFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 9;

            case E_V8SImode:
              if (!nonimmediate_operand (operands[3], E_V8SImode)
                  || !nonimmediate_operand (operands[4], E_V8SImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 10;

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x1) != E_V4SImode
              || !vector_all_ones_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[3], E_V4SFmode)
                  || !nonimmediate_operand (operands[4], E_V4SFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 11;

            case E_V4SImode:
              if (!nonimmediate_operand (operands[3], E_V4SImode)
                  || !nonimmediate_operand (operands[4], E_V4SImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 12;

            default:
              return -1;
            }

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x1) != E_V4DImode
              || !vector_all_ones_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V4DFmode:
              if (!register_operand (operands[3], E_V4DFmode)
                  || !nonimmediate_operand (operands[4], E_V4DFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 13;

            case E_V4DImode:
              if (!nonimmediate_operand (operands[3], E_V4DImode)
                  || !nonimmediate_operand (operands[4], E_V4DImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 14;

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x1) != E_V2DImode
              || !vector_all_ones_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x8) != E_QImode)
            return -1;
          switch (GET_MODE (operands[3]))
            {
            case E_V2DFmode:
              if (!register_operand (operands[3], E_V2DFmode)
                  || !nonimmediate_operand (operands[4], E_V2DFmode)
                  || !const_0_to_31_operand (operands[5], E_SImode))
                return -1;
              return 15;

            case E_V2DImode:
              if (!nonimmediate_operand (operands[3], E_V2DImode)
                  || !nonimmediate_operand (operands[4], E_V2DImode)
                  || !const_0_to_7_operand (operands[5], E_SImode))
                return -1;
              return 16;

            default:
              return -1;
            }

        case E_V16QImode:
          if (pattern314 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 17;

        case E_V8HImode:
          if (pattern314 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 18;

        case E_V32QImode:
          if (pattern314 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 19;

        case E_V16HImode:
          if (pattern314 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 20;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[2] = x3;
      x4 = XEXP (x1, 1);
      operands[3] = x4;
      return 21;

    default:
      return -1;
    }
}

int
pattern379 (rtx x1)
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
  operands[2] = x6;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern378 (x3, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern378 (x3, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern390 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x5) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern398 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern405 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern412 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!commutative_operator (x3, i1))
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
  if (!memory_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = XEXP (x2, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern423 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 0;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern430 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
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
      return 0;

    case E_HImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern443 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !x86_64_general_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern448 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return pattern447 (x1); /* [-1, 1] */

    case PLUS:
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern446 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
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
      res = pattern16 (x1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern464 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i4)
      || !nonimmediate_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern470 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x6;
      x7 = XEXP (x1, 2);
      if (GET_CODE (x7) != UNSPEC
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 223)
        return -1;
      x8 = XVECEXP (x7, 0, 0);
      operands[5] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x1) != E_V32HFmode
              || GET_MODE (x2) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HFmode)
              || !vector_operand (operands[2], E_V32HFmode)
              || !vector_operand (operands[3], E_V32HFmode)
              || !const0_operand (operands[4], E_V32HFmode)
              || GET_MODE (x7) != E_SImode
              || !register_operand (operands[5], E_HImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (pattern468 (x1, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern468 (x1, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      x7 = XEXP (x1, 2);
      switch (GET_CODE (x7))
        {
        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 223)
            return -1;
          x8 = XVECEXP (x7, 0, 0);
          operands[4] = x8;
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (!register_operand (operands[0], E_V32HFmode)
                  || GET_MODE (x1) != E_V32HFmode
                  || GET_MODE (x2) != E_V32HFmode
                  || !vector_operand (operands[1], E_V32HFmode)
                  || !vector_operand (operands[2], E_V32HFmode)
                  || !vector_operand (operands[3], E_V32HFmode)
                  || GET_MODE (x7) != E_SImode
                  || !register_operand (operands[4], E_HImode))
                return -1;
              return 3;

            case E_V16HFmode:
              if (pattern469 (x1, 
E_HImode, 
E_V16HFmode) != 0)
                return -1;
              return 4;

            case E_V8HFmode:
              if (pattern469 (x1, 
E_QImode, 
E_V8HFmode) != 0)
                return -1;
              return 5;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x7, 0) != 3L
              || !register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x1) != E_V8HFmode
              || GET_MODE (x2) != E_V8HFmode
              || !vector_operand (operands[1], E_V8HFmode)
              || !vector_operand (operands[2], E_V8HFmode)
              || !vector_operand (operands[3], E_V8HFmode)
              || !rtx_equal_p (x6, operands[2]))
            return -1;
          return 6;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern504 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !nonimm_or_0_operand (operands[2], i1))
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
pattern513 (rtx x1, machine_mode i1)
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
pattern515 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HFmode)
      || GET_MODE (x1) != E_V16HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HImode:
      if (!vector_operand (operands[1], E_V16HImode))
        return -1;
      return 0;

    case E_V16SImode:
      if (!vector_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern519 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V16HFmode:
      if (!vector_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V16SFmode:
      if (!vector_operand (operands[1], E_V16SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern525 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !permvar_truncate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern533 (rtx x1, machine_mode i1)
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
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1)
      || !regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern537 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x1, 1);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern533 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern533 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern533 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V32BFmode:
      if (pattern533 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 3;

    case E_V16BFmode:
      if (pattern533 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 4;

    case E_V8BFmode:
      if (pattern533 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 5;

    case E_V16SFmode:
      if (pattern533 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 6;

    case E_V8SFmode:
      if (pattern533 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 7;

    case E_V4SFmode:
      if (pattern533 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 8;

    case E_V8DFmode:
      if (pattern533 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 9;

    case E_V4DFmode:
      if (pattern533 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern533 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern546 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern553 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
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
      return 0;

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x6, 0) != 1
          || XINT (x6, 1) != 38)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern559 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!bt_comparison_operator (operands[1], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x8 = XEXP (x3, 0);
  operands[2] = x8;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[2], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[2], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern578 (rtx x1)
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
  return pattern577 (x1); /* [-1, 3] */
}

int
pattern584 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0)
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x6;
      x7 = XEXP (x6, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x6, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x10) != SET)
        return -1;
      x11 = XEXP (x10, 1);
      if (GET_CODE (x11) != SUBREG
          || maybe_ne (SUBREG_BYTE (x11), 0))
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != i1
          || GET_MODE (x12) != E_QImode)
        return -1;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != SUBREG
          || maybe_ne (SUBREG_BYTE (x13), 0)
          || GET_MODE (x13) != E_QImode)
        return -1;
      x14 = XEXP (x13, 0);
      switch (GET_CODE (x14))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          if (!rtx_equal_p (x14, operands[3]))
            return -1;
          x15 = XEXP (x10, 0);
          if (GET_CODE (x15) != ZERO_EXTRACT)
            return -1;
          x16 = XEXP (x15, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x17 = XEXP (x15, 2);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x18 = XEXP (x2, 0);
          operands[4] = x18;
          if (!flags_reg_operand (operands[4], E_VOIDmode))
            return -1;
          operands[5] = x3;
          if (!compare_operator (operands[5], E_VOIDmode))
            return -1;
          return pattern583 (x1); /* [-1, 2] */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern607 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern611 (rtx x1, machine_mode i1)
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
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern617 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern624 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern630 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern635 (rtx x1)
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
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || GET_MODE (x2) != E_V8SImode
          || !nonimm_or_0_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
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

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x2) != E_V4SImode
          || !nonimm_or_0_operand (operands[2], E_V4SImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
            return -1;
          return 3;

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode))
            return -1;
          return 4;

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode
          || GET_MODE (x2) != E_V8DImode
          || !nonimm_or_0_operand (operands[2], E_V8DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode))
            return -1;
          return 6;

        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode))
            return -1;
          return 7;

        default:
          return -1;
        }

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode
          || GET_MODE (x2) != E_V4DImode
          || !nonimm_or_0_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode))
            return -1;
          return 8;

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
            return -1;
          return 9;

        default:
          return -1;
        }

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x2) != E_V2DImode
          || !nonimm_or_0_operand (operands[2], E_V2DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode))
            return -1;
          return 10;

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode))
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
pattern673 (rtx x1)
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
pattern681 (rtx x1, rtx_code i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern685 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != SIGN_EXTEND)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != i1
      || pattern684 (x1, 
i1) != 0)
    return -1;
  return 0;
}

int
pattern690 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern688 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern688 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern689 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern689 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern698 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_TFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern695 (x5, 
E_TFmode); /* [-1, 0] */

    case E_HFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern219 (x5, 
E_V8HFmode, 
E_HFmode) != 0)
        return -1;
      return 1;

    case E_SFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern219 (x5, 
E_V4SFmode, 
E_SFmode) != 0)
        return -1;
      return 2;

    case E_DFmode:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern219 (x5, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 3;

    case E_V2SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern696 (x5) != 0)
        return -1;
      return 4;

    case E_V2BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2BFmode) != 0)
        return -1;
      return 5;

    case E_V4BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4BFmode) != 0)
        return -1;
      return 6;

    case E_V2HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V2HFmode) != 0)
        return -1;
      return 7;

    case E_V4HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern697 (x5, 
E_V4HFmode) != 0)
        return -1;
      return 8;

    case E_V32BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32BFmode) != 0)
        return -1;
      return 9;

    case E_V16BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16BFmode) != 0)
        return -1;
      return 10;

    case E_V8BFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8BFmode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V32HFmode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16HFmode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8HFmode) != 0)
        return -1;
      return 14;

    case E_V16SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V16SFmode) != 0)
        return -1;
      return 15;

    case E_V8SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8SFmode) != 0)
        return -1;
      return 16;

    case E_V4SFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4SFmode) != 0)
        return -1;
      return 17;

    case E_V8DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V8DFmode) != 0)
        return -1;
      return 18;

    case E_V4DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V4DFmode) != 0)
        return -1;
      return 19;

    case E_V2DFmode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern695 (x5, 
E_V2DFmode) != 0)
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern747 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !binary_fp_operator (operands[3], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
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
pattern756 (rtx x1, machine_mode i1)
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
pattern764 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern769 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 223
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x1, 2);
  if (XWINT (x5, 0) != 3L
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode)
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 1);
  operands[2] = x7;
  if (!vector_operand (operands[2], E_V8HFmode))
    return -1;
  x8 = XEXP (x2, 1);
  operands[3] = x8;
  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
    return -1;
  x9 = XVECEXP (x4, 0, 0);
  operands[4] = x9;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x10 = XEXP (x1, 1);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  return 0;
}

int
pattern785 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern794 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern801 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern809 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern815 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern820 (rtx x1)
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
      if (XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 174)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          return 1;

        case E_HImode:
          return 2;

        case E_SImode:
          return 3;

        case E_DImode:
          return 4;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern828 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
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
  return 0;
}

int
pattern832 (rtx x1, rtx_code i1, int i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MINUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern839 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 4
      || peep2_current_count < 5
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  if (!register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != XOR)
    return -1;
  x7 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x5, 0);
  operands[4] = x9;
  x10 = XEXP (x6, 1);
  operands[2] = x10;
  x11 = XEXP (x6, 0);
  if (!rtx_equal_p (x11, operands[4]))
    return -1;
  x12 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x12) != SET)
    return -1;
  x13 = XEXP (x12, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x14) != SET)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != COMPARE
      || GET_MODE (x15) != E_CCZmode)
    return -1;
  x16 = XEXP (x14, 0);
  if (GET_CODE (x16) != REG
      || REGNO (x16) != 17
      || GET_MODE (x16) != E_CCZmode)
    return -1;
  x17 = XEXP (x15, 0);
  if (!register_operand (x17, i1))
    return -1;
  x18 = XEXP (x15, 1);
  if (!nonmemory_operand (x18, i1))
    return -1;
  return 0;
}

int
pattern856 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || pattern855 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern861 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern868 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern876 (rtx x1, machine_mode i1)
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

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern885 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern899 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != CONST_INT)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x1, 0, 8);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x1, 0, 16);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x1, 0, 17);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x1, 0, 18);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x1, 0, 19);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x1, 0, 20);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x1, 0, 21);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x1, 0, 22);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x1, 0, 23);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x1, 0, 24);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x1, 0, 25);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x1, 0, 26);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x1, 0, 27);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x1, 0, 28);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x1, 0, 29);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x1, 0, 30);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x1, 0, 31);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  return 0;
}

int
pattern928 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern933 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern939 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern946 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern945 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern945 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern953 (rtx x1, machine_mode i1, unsigned int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern958 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!immediate_operand (operands[1], i1)
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!mask_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern964 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_gr_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  x5 = XEXP (x4, 1);
  return pattern963 (x5, 
i1); /* [-1, 0] */
}

int
pattern967 (rtx x1)
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
          if (!nonimm_or_0_operand (operands[1], E_V16QImode)
              || !nonimm_or_0_operand (operands[2], E_V16QImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!nonimm_or_0_operand (operands[1], E_V16HImode)
              || !nonimm_or_0_operand (operands[2], E_V16HImode))
            return -1;
          return 1;

        case E_V16SImode:
          if (!nonimm_or_0_operand (operands[1], E_V16SImode)
              || !nonimm_or_0_operand (operands[2], E_V16SImode))
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
          if (!nonimm_or_0_operand (operands[1], E_V8HImode)
              || !nonimm_or_0_operand (operands[2], E_V8HImode))
            return -1;
          return 3;

        case E_V8SImode:
          if (!nonimm_or_0_operand (operands[1], E_V8SImode)
              || !nonimm_or_0_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V4SImode:
          if (!nonimm_or_0_operand (operands[1], E_V4SImode)
              || !nonimm_or_0_operand (operands[2], E_V4SImode))
            return -1;
          return 5;

        case E_V8DImode:
          if (!nonimm_or_0_operand (operands[1], E_V8DImode)
              || !nonimm_or_0_operand (operands[2], E_V8DImode))
            return -1;
          return 6;

        case E_V4DImode:
          if (!nonimm_or_0_operand (operands[1], E_V4DImode)
              || !nonimm_or_0_operand (operands[2], E_V4DImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!nonimm_or_0_operand (operands[1], E_V2DImode)
              || !nonimm_or_0_operand (operands[2], E_V2DImode))
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
pattern983 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 3
      || XINT (x2, 1) != 59)
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x1, 0);
  operands[3] = x4;
  x5 = XEXP (x1, 1);
  operands[4] = x5;
  x6 = XVECEXP (x2, 0, 0);
  operands[1] = x6;
  x7 = XVECEXP (x2, 0, 1);
  operands[2] = x7;
  switch (GET_MODE (x1))
    {
    case E_V32QImode:
      return pattern982 (x2, 
E_V32QImode, 
E_SImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern982 (x2, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern992 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !memory_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern997 (rtx x1)
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
pattern1010 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1018 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1026 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1034 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
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
pattern1044 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  return pattern1043 (x1); /* [-1, 5] */
}

int
pattern1049 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x4, 1);
  operands[3] = x8;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1048 (x3, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern1048 (x3, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern1048 (x3, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1057 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 1);
  operands[3] = x4;
  switch (GET_CODE (x3))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x3), 0))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != AND)
        return -1;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!const_int_operand (operands[2], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern369 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern369 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern369 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern369 (x1, 
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
pattern1081 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1088 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1092 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 3
      || XINT (x3, 1) != 59
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XVECEXP (x3, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x2, 0);
  operands[3] = x5;
  x6 = XEXP (x2, 1);
  operands[4] = x6;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      return pattern1091 (x2, 
E_V8SImode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1091 (x2, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V4DFmode:
      if (pattern1091 (x2, 
E_V4DImode) != 0)
        return -1;
      return 2;

    case E_V2DFmode:
      if (pattern1091 (x2, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1102 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1109 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 1
      || XINT (x4, 1) != 223
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x1, 2);
  if (XWINT (x5, 0) != 3L
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || !vector_operand (operands[1], E_V8HFmode)
      || !vector_operand (operands[2], E_V8HFmode)
      || !vector_operand (operands[3], E_V8HFmode))
    return -1;
  x6 = XVECEXP (x4, 0, 0);
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XEXP (x1, 1);
  if (!rtx_equal_p (x7, operands[2]))
    return -1;
  x8 = XEXP (x2, 1);
  switch (GET_CODE (x8))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x8;
      if (!const0_operand (operands[4], E_V8HFmode))
        return -1;
      operands[5] = x6;
      return 0;

    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      operands[4] = x6;
      return 1;

    default:
      return -1;
    }
}

int
pattern1126 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i3
      || !register_operand (operands[1], i3)
      || !register_operand (operands[2], i3)
      || !register_operand (operands[3], i3)
      || !const0_operand (operands[4], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1135 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XVECEXP (x2, 0, 2);
  operands[3] = x3;
  if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1134 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1134 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1143 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !palignr_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1150 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
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

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1162 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern1161 (x3, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern1161 (x3, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1172 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  return pattern1171 (x6, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1179 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (maybe_ne (SUBREG_BYTE (x2), 0)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[1] = x3;
      return pattern1168 (x1); /* [-1, 11] */

    case CONST_INT:
      return 12;

    default:
      return -1;
    }
}

int
pattern1186 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonmemory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1193 (rtx x1, machine_mode i1)
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
  if (GET_CODE (x4) != MINUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 1);
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
  x11 = XEXP (x4, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  return pattern1191 (x12, 
i1); /* [-1, 1] */
}

int
pattern1204 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1208 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      if (XVECLEN (x1, 0) != 2
          || XINT (x1, 1) != 52
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      operands[1] = x2;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x3 = XVECEXP (x1, 0, 1);
      operands[2] = x3;
      return 0;

    case VEC_SELECT:
      if (GET_MODE (x1) != E_V4SImode)
        return -1;
      x4 = XEXP (x1, 1);
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 3);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x9 = XEXP (x1, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1227 (rtx x1)
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
          || !register_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode
          || GET_MODE (x5) != E_V16QImode
          || !register_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (GET_MODE (x4) != E_V4SImode
              || !const0_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (GET_MODE (x4) != E_V2DImode
              || !const0_operand (operands[4], E_V2DImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !register_operand (operands[1], E_V32QImode)
          || !vector_operand (operands[2], E_V32QImode)
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x5) != E_V32QImode
          || !register_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (GET_MODE (x4) != E_V8SImode
              || !const0_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (GET_MODE (x4) != E_V4DImode
              || !const0_operand (operands[4], E_V4DImode))
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
pattern1249 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode
      || !register_operand (operands[0], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 0);
  x7 = XEXP (x6, 1);
  x8 = XVECEXP (x7, 0, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x9 = XVECEXP (x7, 0, 1);
  operands[2] = x9;
  return 0;
}

int
pattern1260 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !fcmov_comparison_operator (operands[1], E_VOIDmode)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1265 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  x4 = XEXP (x1, 0);
  switch (GET_CODE (x4))
    {
    case STRICT_LOW_PART:
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return pattern1264 (); /* [-1, 2] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      res = pattern1264 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1279 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i3)
      || pattern479 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1287 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x3) != i4
      || !nonimmediate_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern1299 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1307 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8HFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode
      || !nonimm_or_0_operand (operands[2], E_V8HFmode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1319 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  x7 = XEXP (x4, 1);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1318 (x2, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1318 (x2, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1328 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x2, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern201 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern201 (x1, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case NOT:
      x3 = XEXP (x2, 0);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1327 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern1327 (x1, 
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
pattern1345 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  return 0;
}

int
pattern1354 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!extract_operator (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[2], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[2], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1362 (rtx x1)
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
pattern1371 (rtx x1, machine_mode i1)
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
pattern1383 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x2, 2);
  return pattern1382 (x3, 
i1); /* [-1, 0] */
}

int
pattern1392 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1382 (x4, 
i1); /* [-1, 0] */
}

int
pattern1401 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1407 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[4] = x2;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  return pattern1406 (x1); /* [-1, 2] */
}

int
pattern1412 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1421 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return pattern1151 (x1); /* [-1, 5] */
}

int
pattern1427 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1435 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern1434 (x3); /* [-1, 1] */

    case PLUS:
      res = pattern1434 (x3);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      res = pattern196 (x3);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1449 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!const_int_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      return pattern1448 (x3, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern1448 (x3, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1460 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1465 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !vector_operand (operands[3], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1476 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V16SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V16SImode
      || !nonimm_or_0_operand (operands[2], E_V16SImode)
      || !register_operand (operands[3], E_HImode))
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
pattern1484 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V4HFmode:
      if (!memory_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4BFmode:
      if (!memory_operand (operands[1], E_V8BFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1495 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode
      || !nonimmediate_operand (operands[3], E_SImode)
      || !register_operand (operands[1], E_SImode))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  return 0;
}

int
pattern1505 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  x9 = XEXP (x4, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  return pattern1494 (x1); /* [-1, 1] */
}

int
pattern1512 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
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
  return 0;
}

int
pattern1519 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i4
      || !register_operand (operands[2], i3))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i4
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1534 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x2, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != i1)
        return -1;
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      x8 = PATTERN (peep2_next_insn (2));
      x9 = XEXP (x8, 0);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      x10 = XEXP (x3, 0);
      switch (GET_CODE (x10))
        {
        case REG:
          return pattern1189 (x1, 
i1); /* [-1, 0] */

        case PLUS:
          if (pattern1190 (x1, 
i1) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case PLUS:
      res = pattern1192 (x1, 
i1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      res = pattern1193 (x1, 
i1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1553 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1561 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i2
      || !sext_operand (operands[2], i1)
      || pattern718 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1571 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x1, 0) != 1
          || XINT (x1, 1) != 32)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return 0;

    case CLOBBER:
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      return 1;

    case USE:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XEXP (x1, 0);
      operands[4] = x3;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1583 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1591 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1601 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
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
pattern1608 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i2)
      || !register_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (x1))
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
pattern1617 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1616 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1616 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1628 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1634 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  if (GET_MODE (x5) != i2
      || !register_mmxmem_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i2
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1648 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1655 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1664 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !vector_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1675 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1685 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
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
pattern1695 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x7 = XEXP (x2, 1);
  if (!rtx_equal_p (x7, operands[1]))
    return -1;
  x8 = XEXP (x1, 1);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  return 0;
}

int
pattern1703 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1702 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1702 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1714 (rtx x1, machine_mode i1)
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
      return pattern1713 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1713 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1725 (machine_mode i1)
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
pattern1734 (rtx x1, machine_mode i1)
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
  x5 = XEXP (x4, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1741 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[4]))
    {
    case E_V4SImode:
      if (!register_operand (operands[4], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[4], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1748 (machine_mode i1)
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
pattern1756 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V8HFmode:
      if (!memory_operand (operands[1], E_V16HFmode))
        return -1;
      return 0;

    case E_V8BFmode:
      if (!memory_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1767 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XWINT (x2, 0) != 1L)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (XWINT (x3, 0) != 2L)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  if (XWINT (x4, 0) != 3L)
    return -1;
  x5 = XVECEXP (x1, 0, 4);
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x1, 0, 5);
  if (XWINT (x6, 0) != 5L)
    return -1;
  x7 = XVECEXP (x1, 0, 6);
  if (XWINT (x7, 0) != 6L)
    return -1;
  x8 = XVECEXP (x1, 0, 7);
  if (XWINT (x8, 0) != 7L)
    return -1;
  x9 = XVECEXP (x1, 0, 8);
  if (XWINT (x9, 0) != 8L)
    return -1;
  x10 = XVECEXP (x1, 0, 9);
  if (XWINT (x10, 0) != 9L)
    return -1;
  x11 = XVECEXP (x1, 0, 10);
  if (XWINT (x11, 0) != 10L)
    return -1;
  x12 = XVECEXP (x1, 0, 11);
  if (XWINT (x12, 0) != 11L)
    return -1;
  x13 = XVECEXP (x1, 0, 12);
  if (XWINT (x13, 0) != 12L)
    return -1;
  x14 = XVECEXP (x1, 0, 13);
  if (XWINT (x14, 0) != 13L)
    return -1;
  x15 = XVECEXP (x1, 0, 14);
  if (XWINT (x15, 0) != 14L)
    return -1;
  x16 = XVECEXP (x1, 0, 15);
  if (XWINT (x16, 0) != 15L)
    return -1;
  return 0;
}

int
pattern1785 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[4], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[4], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1792 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vsib_mem_operator (operands[7], i2)
      || !register_operand (operands[5], i1)
      || !scratch_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1791 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1791 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1805 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 4
      || XINT (x3, 1) != 109)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != UNSPEC_VOLATILE
      || XVECLEN (x8, 0) != 1
      || XINT (x8, 1) != 109
      || GET_MODE (x8) != E_CCZmode)
    return -1;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XEXP (x7, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCZmode)
    return -1;
  x11 = XEXP (x2, 0);
  operands[2] = x11;
  x12 = XVECEXP (x3, 0, 0);
  operands[3] = x12;
  x13 = XVECEXP (x3, 0, 2);
  operands[4] = x13;
  x14 = XVECEXP (x3, 0, 3);
  operands[5] = x14;
  if (!const_int_operand (operands[5], E_SImode))
    return -1;
  x15 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x15, operands[2]))
    return -1;
  x16 = XEXP (x4, 0);
  if (!rtx_equal_p (x16, operands[3]))
    return -1;
  x17 = PATTERN (peep2_next_insn (2));
  x18 = XEXP (x17, 1);
  x19 = XEXP (x18, 0);
  if (!rtx_equal_p (x19, operands[2]))
    return -1;
  x20 = XEXP (x18, 1);
  if (!rtx_equal_p (x20, operands[1]))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_QImode:
      return pattern1804 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1804 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1804 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1804 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1834 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode)
          || !register_operand (operands[4], E_V8SFmode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[3], E_V4DImode)
          || !register_operand (operands[4], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1841 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2
      || !ix86_carry_flag_operator (operands[4], i2)
      || !const_scalar_int_operand (operands[6], i2)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1852 ()
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
pattern1860 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1865 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[4], i1)
      || GET_MODE (x1) != i1
      || !nonmemory_operand (operands[2], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
    return -1;
  x4 = PATTERN (peep2_next_insn (4));
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[5] = x6;
  x7 = XEXP (x5, 1);
  operands[6] = x7;
  return 0;
}

int
pattern1872 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_MODE (x7) != i2
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1870 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1880 (rtx x1, int i1)
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
recog_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case COMPARE:
      if (GET_MODE (x6) != E_CCmode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != MINUS)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != UNSPEC
          || XVECLEN (x9, 0) != 1
          || XINT (x9, 1) != 109
          || GET_MODE (x9) != E_CCmode)
        return -1;
      x10 = XEXP (x1, 0);
      operands[0] = x10;
      if (!flags_reg_operand (operands[0], E_CCmode)
          || GET_MODE (x2) != E_CCmode
          || !comparison_operator (operands[1], E_VOIDmode)
          || GET_MODE (x4) != E_CCmode)
        return -1;
      x11 = XEXP (x7, 0);
      operands[2] = x11;
      x12 = XEXP (x7, 1);
      operands[3] = x12;
      x13 = XVECEXP (x9, 0, 0);
      operands[4] = x13;
      if (!const_0_to_15_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (x7))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[2], E_QImode)
              || !general_operand (operands[3], E_QImode)
              || !
#line 1539 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 1; /* ccmpqi */

        case E_HImode:
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !general_operand (operands[3], E_HImode)
              || !
#line 1539 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 2; /* ccmphi */

        case E_SImode:
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !x86_64_general_operand (operands[3], E_SImode)
              || !
#line 1539 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_CCMP))
            return -1;
          return 3; /* ccmpsi */

        case E_DImode:
          if (!nonimmediate_operand (operands[2], E_DImode)
              || !x86_64_general_operand (operands[3], E_DImode)
              || !(
#line 1539 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_CCMP) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 4; /* ccmpdi */

        default:
          return -1;
        }

    case LABEL_REF:
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return -1;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC
          || !ix86_comparison_operator (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      return 1458; /* *jcc */

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x6;
      x10 = XEXP (x1, 0);
      operands[0] = x10;
      x9 = XEXP (x2, 2);
      operands[3] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern1197 (x2, 
E_HImode) != 0
              || !
#line 26319 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1803; /* *movhicc_noc */

        case E_QImode:
          if (pattern1198 (x2) != 0
              || !
#line 26393 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
            return -1;
          return 1808; /* *movqicc_noc */

        case E_XFmode:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x2) != E_XFmode
              || !fcmov_comparison_operator (operands[1], E_VOIDmode)
              || !register_operand (operands[2], E_XFmode)
              || !register_operand (operands[3], E_XFmode)
              || !
#line 26587 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE))
            return -1;
          return 1810; /* *movxfcc_1 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || pattern1260 (x2, 
E_DFmode) != 0
              || !
#line 26602 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1811; /* *movdfcc_1 */

        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || pattern1260 (x2, 
E_SFmode) != 0
              || !
#line 26637 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1812; /* *movsfcc_1_387 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_13 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 105:
      if (GET_MODE (x2) != E_TImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!push_operand (operands[0], E_TImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3889 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2))
        return -1;
      return 159; /* push2_di */

    case 40:
      if (GET_MODE (x2) != E_CCCmode
          || pattern248 (x1) != 0)
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x4))
        {
        case LTU:
          if (pattern716 (x4) != 0)
            return -1;
          x6 = XEXP (x4, 0);
          switch (GET_MODE (x6))
            {
            case E_CCmode:
              if (!
#line 9904 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 532; /* *setcc_qi_negqi_ccc_2_cc */

            case E_CCCmode:
              if (!
#line 9904 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 533; /* *setcc_qi_negqi_ccc_2_ccc */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          if (pnum_clobbers == NULL)
            return -1;
          operands[1] = x4;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode))
                return -1;
              *pnum_clobbers = 1;
              return 984; /* *negqi_ccc_2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode))
                return -1;
              *pnum_clobbers = 1;
              return 985; /* *neghi_ccc_2 */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 986; /* *negsi_ccc_2 */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 987; /* *negdi_ccc_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 66:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_XFmode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], E_XFmode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24127 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1721; /* atan2xf3 */

    case 67:
      if (pnum_clobbers == NULL
          || pattern157 (x1, 
E_XFmode) != 0
          || !
#line 24430 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1722; /* fyl2xxf3_i387 */

    case 68:
      if (pnum_clobbers == NULL
          || pattern157 (x1, 
E_XFmode) != 0
          || !
#line 24527 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      *pnum_clobbers = 1;
      return 1723; /* fyl2xp1xf3_i387 */

    case 58:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern61 (x2, 
E_SFmode) != 0
              || !
#line 24836 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F))
            return -1;
          return 1727; /* avx512f_scalefsf2 */

        case E_DFmode:
          if (pattern61 (x2, 
E_DFmode) != 0
              || !
#line 24836 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F))
            return -1;
          return 1728; /* avx512f_scalefdf2 */

        default:
          return -1;
        }

    case 94:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_HFmode)
              || GET_MODE (x2) != E_HFmode
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !(
#line 24954 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE4_1) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 1729; /* sse4_1_roundhf2 */

        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 24954 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE4_1))
            return -1;
          return 1730; /* sse4_1_roundsf2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 24954 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE4_1))
            return -1;
          return 1731; /* sse4_1_rounddf2 */

        default:
          return -1;
        }

    case 63:
      switch (pattern62 (x1))
        {
        case 0:
          if (!
#line 26755 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1821; /* *ieee_smaxhf3 */

        case 1:
          if (!
#line 26767 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return -1;
          return 1823; /* *ieee_smaxsf3 */

        case 2:
          if (!
#line 26767 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return -1;
          return 1825; /* *ieee_smaxdf3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern62 (x1))
        {
        case 0:
          if (!
#line 26755 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1822; /* *ieee_sminhf3 */

        case 1:
          if (!
#line 26767 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return -1;
          return 1824; /* *ieee_sminsf3 */

        case 2:
          if (!
#line 26767 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return -1;
          return 1826; /* *ieee_smindf3 */

        default:
          return -1;
        }

    case 113:
      if (pattern63 (x1, 
E_V2SFmode) != 0
          || !
#line 911 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2060; /* mmx_rcpit1v2sf3 */

    case 114:
      if (pattern63 (x1, 
E_V2SFmode) != 0
          || !
#line 922 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2061; /* mmx_rcpit2v2sf3 */

    case 116:
      if (pattern63 (x1, 
E_V2SFmode) != 0
          || !
#line 959 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2063; /* mmx_rsqit1v2sf3 */

    case 57:
      switch (pattern65 (x1))
        {
        case 0:
          if (!
#line 4792 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2293; /* mmx_packuswb */

        case 1:
          if (!
#line 4831 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2295; /* mmx_packusdw */

        default:
          return -1;
        }

    case 52:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!vector_operand (operands[2], E_V16QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (!register_operand (operands[0], E_V8QImode)
              || GET_MODE (x2) != E_V8QImode
              || !register_operand (operands[1], E_V8QImode)
              || !
#line 5489 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSSE3 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2330; /* mmx_pshufbv8qi3 */

        case E_V4QImode:
          if (!register_operand (operands[0], E_V4QImode)
              || GET_MODE (x2) != E_V4QImode
              || !register_operand (operands[1], E_V4QImode)
              || !
#line 5507 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSSE3))
            return -1;
          return 2331; /* mmx_pshufbv4qi3 */

        default:
          return -1;
        }

    case 56:
      if (GET_MODE (x2) != E_V1DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V1DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_mmxmem_operand (operands[1], E_V8QImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!register_mmxmem_operand (operands[2], E_V8QImode)
          || !
#line 6477 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
        return -1;
      return 2383; /* *mmx_psadbw */

    case 176:
      if (pattern66 (x1) != 0)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2078 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2610; /* ktestqi */

        case 1:
          if (!(
#line 2334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2078 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2611; /* ktesthi */

        case 2:
          if (!(
#line 2334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2612; /* ktestsi */

        case 3:
          if (!(
#line 2334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2613; /* ktestdi */

        default:
          return -1;
        }

    case 178:
      return recog_9 (x1, insn, pnum_clobbers);

    case 61:
      return recog_10 (x1, insn, pnum_clobbers);

    case 158:
      switch (pattern68 (x1))
        {
        case 0:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8117; /* avx512vl_testmv16qi3 */

        case 1:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8121; /* avx512vl_testmv16hi3 */

        case 2:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8125; /* avx512f_testmv16si3 */

        case 3:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8123; /* avx512vl_testmv8hi3 */

        case 4:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8127; /* avx512vl_testmv8si3 */

        case 5:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8129; /* avx512vl_testmv4si3 */

        case 6:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8131; /* avx512f_testmv8di3 */

        case 7:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8133; /* avx512vl_testmv4di3 */

        case 8:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8135; /* avx512vl_testmv2di3 */

        default:
          return -1;
        }

    case 159:
      switch (pattern68 (x1))
        {
        case 0:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8141; /* avx512vl_testnmv16qi3 */

        case 1:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8145; /* avx512vl_testnmv16hi3 */

        case 2:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8149; /* avx512f_testnmv16si3 */

        case 3:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8147; /* avx512vl_testnmv8hi3 */

        case 4:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8151; /* avx512vl_testnmv8si3 */

        case 5:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8153; /* avx512vl_testnmv4si3 */

        case 6:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8155; /* avx512f_testnmv8di3 */

        case 7:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8157; /* avx512vl_testnmv4di3 */

        case 8:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8159; /* avx512vl_testnmv2di3 */

        default:
          return -1;
        }

    case 120:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern732 (x2, 
E_V8QImode) != 0
              || !
#line 23214 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8641; /* ssse3_psignv8qi3 */

        case E_V4HImode:
          if (pattern64 (x2, 
E_V4HImode) != 0
              || !
#line 23214 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8642; /* ssse3_psignv4hi3 */

        case E_V2SImode:
          if (pattern732 (x2, 
E_V2SImode) != 0
              || !
#line 23214 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return -1;
          return 8643; /* ssse3_psignv2si3 */

        default:
          return -1;
        }

    case 148:
      if (pattern66 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || !nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 25313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8938; /* avx_vtestps256 */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 25313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8939; /* avx_vtestps */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 25313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 8940; /* avx_vtestpd256 */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || !nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 25313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8941; /* avx_vtestpd */

        default:
          return -1;
        }

    case 130:
      return recog_11 (x1, insn, pnum_clobbers);

    case 150:
      if (GET_MODE (x2) != E_V4HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!memory_operand (operands[0], E_V4HImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode)
          || !
#line 29169 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return -1;
      return 9664; /* *vcvtps2ph_store */

    case 193:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          switch (pattern641 (x2, 
E_HImode))
            {
            case 0:
              if (!(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16HFmode)) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 9993; /* avx512dq_fpclassv16hf */

            case 1:
              if (!(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V16SFmode)) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9997; /* avx512dq_fpclassv16sf */

            default:
              return -1;
            }

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!vector_operand (operands[1], E_V8HFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8HFmode)) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 9995; /* avx512dq_fpclassv8hf */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8SFmode)) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9999; /* avx512dq_fpclassv8sf */

            case E_V4SFmode:
              if (!vector_operand (operands[1], E_V4SFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4SFmode)) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10001; /* avx512dq_fpclassv4sf */

            case E_V8DFmode:
              if (!vector_operand (operands[1], E_V8DFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V8DFmode)) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10003; /* avx512dq_fpclassv8df */

            case E_V4DFmode:
              if (!vector_operand (operands[1], E_V4DFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V4DFmode)) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10005; /* avx512dq_fpclassv4df */

            case E_V2DFmode:
              if (!vector_operand (operands[1], E_V2DFmode)
                  || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V2DFmode)) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10007; /* avx512dq_fpclassv2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 214:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!nonimmediate_operand (operands[2], E_V16QImode)
          || !(
#line 30934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10329; /* avx512vl_vpshufbitqmbv16qi */

    case 215:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_P2QImode:
          if (!register_operand (operands[0], E_P2QImode)
              || GET_MODE (x2) != E_P2QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !vector_operand (operands[2], E_V8DImode)
                  || !(
#line 30974 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30940 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 10335; /* avx512vp2intersect_2intersectv8di */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !vector_operand (operands[2], E_V4DImode)
                  || !(
#line 30974 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10336; /* avx512vp2intersect_2intersectv4di */

            case E_V2DImode:
              if (!register_operand (operands[1], E_V2DImode)
                  || !vector_operand (operands[2], E_V2DImode)
                  || !(
#line 30974 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10337; /* avx512vp2intersect_2intersectv2di */

            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !vector_operand (operands[2], E_V8SImode)
                  || !(
#line 30974 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10338; /* avx512vp2intersect_2intersectv8si */

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !vector_operand (operands[2], E_V4SImode)
                  || !(
#line 30974 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT) && 
#line 30942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 10339; /* avx512vp2intersect_2intersectv4si */

            default:
              return -1;
            }

        case E_P2HImode:
          if (pattern733 (x2, 
E_V16SImode, 
E_P2HImode) != 0
              || !
#line 30983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT && TARGET_EVEX512))
            return -1;
          return 10340; /* avx512vp2intersect_2intersectv16si */

        default:
          return -1;
        }

    case 262:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonimmediate_operand (operands[1], E_V16BFmode)
              || !
#line 32448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10725; /* avx10_2_fpclassbf16_v16bf */

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_operand (operands[1], E_V8BFmode)
              || !
#line 32448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10727; /* avx10_2_fpclassbf16_v8bf */

        default:
          return -1;
        }

    case 288:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!memory_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !nonmemory_operand (operands[1], E_QImode))
            return -1;
          return 11018; /* atomic_storeqi_1 */

        case E_HImode:
          if (!memory_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !nonmemory_operand (operands[1], E_HImode))
            return -1;
          return 11019; /* atomic_storehi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_36 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern739 (x2, 
E_TImode) != 0)
        return -1;
      if ((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 810; /* *andnti3_doubleword_bmi */
        }
      if (!(
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 812; /* *andnti3_doubleword */

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern610 (x2, 
E_QImode) != 0
          || !
#line 13362 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 815; /* *andnqi_1 */

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern610 (x2, 
E_HImode) != 0
          || !
#line 13362 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI || TARGET_AVX512BW))
        return -1;
      *pnum_clobbers = 1;
      return 816; /* *andnhi_1 */

    case E_V2SFmode:
      if (pattern610 (x2, 
E_V2SFmode) != 0
          || !
#line 1343 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
        return -1;
      return 2076; /* *mmx_andnotv2sf3 */

    case E_V2BFmode:
      if (pattern610 (x2, 
E_V2BFmode) != 0
          || !
#line 2568 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
        return -1;
      return 2107; /* *mmx_andnotv2bf3 */

    case E_V4BFmode:
      if (pattern610 (x2, 
E_V4BFmode) != 0
          || !(
#line 2568 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2108; /* *mmx_andnotv4bf3 */

    case E_V2HFmode:
      if (pattern610 (x2, 
E_V2HFmode) != 0
          || !
#line 2568 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
        return -1;
      return 2109; /* *mmx_andnotv2hf3 */

    case E_V4HFmode:
      if (pattern610 (x2, 
E_V4HFmode) != 0
          || !(
#line 2568 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
        return -1;
      return 2110; /* *mmx_andnotv4hf3 */

    case E_V8QImode:
      if (pattern611 (x2, 
E_V8QImode) != 0
          || !
#line 4592 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2268; /* mmx_andnotv8qi3 */

    case E_V4HImode:
      if (pattern611 (x2, 
E_V4HImode) != 0
          || !
#line 4592 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2269; /* mmx_andnotv4hi3 */

    case E_V2SImode:
      if (pattern611 (x2, 
E_V2SImode) != 0
          || !
#line 4592 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
        return -1;
      return 2270; /* mmx_andnotv2si3 */

    case E_V4QImode:
      if (pnum_clobbers == NULL
          || pattern610 (x2, 
E_V4QImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2271; /* *andnotv4qi3 */

    case E_V2QImode:
      if (pnum_clobbers == NULL
          || pattern610 (x2, 
E_V2QImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2272; /* *andnotv2qi3 */

    case E_V2HImode:
      if (pnum_clobbers == NULL
          || pattern610 (x2, 
E_V2HImode) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 2273; /* *andnotv2hi3 */

    case E_BFmode:
      if (pattern610 (x2, 
E_BFmode) != 0
          || !
#line 5531 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3779; /* *andnotbf3 */

    case E_HFmode:
      if (pattern610 (x2, 
E_HFmode) != 0
          || !
#line 5531 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3780; /* *andnothf3 */

    case E_SFmode:
      if (pattern610 (x2, 
E_SFmode) != 0
          || !
#line 5531 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3781; /* *andnotsf3 */

    case E_DFmode:
      if (pattern610 (x2, 
E_DFmode) != 0
          || !(
#line 5531 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2)))
        return -1;
      return 3782; /* *andnotdf3 */

    case E_TFmode:
      if (pattern612 (x2, 
E_TFmode) != 0
          || !
#line 5601 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3783; /* *andnottf3 */

    default:
      return -1;
    }
}

 int
recog_41 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_TImode:
      if (pattern265 (x3, pnum_clobbers, 
E_TImode) != 0
          || !(
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 996; /* *absti2_doubleword */

    case E_QImode:
      if (pattern265 (x3, pnum_clobbers, 
E_QImode) != 0
          || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 999; /* *absqi2_1 */

    case E_HImode:
      if (pattern265 (x3, pnum_clobbers, 
E_HImode) != 0
          || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1000; /* *abshi2_1 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !register_operand (operands[1], E_SFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1010; /* *abssf2_i387_1 */
        }
      if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1024; /* *abssf2_i387 */

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !register_operand (operands[1], E_DFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1012; /* *absdf2_i387_1 */
        }
      if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1026; /* *absdf2_i387 */

    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || !register_operand (operands[1], E_XFmode))
        return -1;
      if (pnum_clobbers != NULL
          && 
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 1014; /* *absxf2_i387_1 */
        }
      if (!
#line 14932 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
        return -1;
      return 1028; /* *absxf2_i387 */

    case E_V8QImode:
      if (!register_operand (operands[0], E_V8QImode)
          || GET_MODE (x3) != E_V8QImode
          || !register_mmxmem_operand (operands[1], E_V8QImode)
          || !
#line 3814 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2192; /* ssse3_absv8qi2 */

    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode
          || !register_mmxmem_operand (operands[1], E_V4HImode)
          || !
#line 3814 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2193; /* ssse3_absv4hi2 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_mmxmem_operand (operands[1], E_V2SImode)
          || !
#line 3814 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 2194; /* ssse3_absv2si2 */

    case E_V4QImode:
      if (!register_operand (operands[0], E_V4QImode)
          || GET_MODE (x3) != E_V4QImode
          || !register_operand (operands[1], E_V4QImode)
          || !
#line 3835 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2195; /* absv4qi2 */

    case E_V2QImode:
      if (!register_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2QImode)
          || !
#line 3835 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2196; /* absv2qi2 */

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2HImode)
          || !
#line 3835 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSSE3))
        return -1;
      return 2197; /* absv2hi2 */

    default:
      return -1;
    }
}

 int
recog_45 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case ZERO_EXTRACT:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XEXP (x2, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !register_operand (operands[0], E_QImode)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      x7 = XEXP (x3, 2);
      operands[2] = x7;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      switch (GET_MODE (x3))
        {
        case E_SImode:
          if (!register_operand (operands[1], E_SImode)
              || !
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1440; /* *btsi_setncqi_2 */

        case E_DImode:
          if (!register_operand (operands[1], E_DImode)
              || !(
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1441; /* *btdi_setncqi_2 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 4141 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V8QImode, operands)))
            return -1;
          return 2217; /* *mmx_eqv8qi3 */

        case E_V4HImode:
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 4141 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V4HImode, operands)))
            return -1;
          return 2218; /* *mmx_eqv4hi3 */

        case E_V2SImode:
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 4141 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (EQ, V2SImode, operands)))
            return -1;
          return 2219; /* *mmx_eqv2si3 */

        case E_V4QImode:
          if (pattern7 (x2, 
E_V4QImode) != 0
              || !
#line 4157 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2220; /* *eqv4qi3 */

        case E_V2QImode:
          if (pattern7 (x2, 
E_V2QImode) != 0
              || !
#line 4157 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2221; /* *eqv2qi3 */

        case E_V2HImode:
          if (pattern7 (x2, 
E_V2HImode) != 0
              || !
#line 4157 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2222; /* *eqv2hi3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_52 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 267; /* *addti3_doubleword */

        case E_HImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, 
E_HImode) != 0)
            return -1;
          if (
#line 6813 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 297; /* *addhi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 6813 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 298; /* *addhi_1 */

        case E_QImode:
          x2 = XEXP (x1, 1);
          if (pattern74 (x2, 
E_QImode) != 0)
            return -1;
          if (
#line 6870 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 299; /* *addqi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 6870 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 300; /* *addqi_1 */

        case E_HFmode:
          x2 = XEXP (x1, 1);
          if (pattern5 (x2, 
E_HFmode) != 0
              || !
#line 23445 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1676; /* *addhf */

        case E_V8QImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V8QImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)))
            return -1;
          return 2124; /* *mmx_addv8qi3 */

        case E_V4HImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V4HImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)))
            return -1;
          return 2126; /* *mmx_addv4hi3 */

        case E_V2SImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V2SImode) != 0
              || !
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)))
            return -1;
          return 2128; /* *mmx_addv2si3 */

        case E_V1DImode:
          x2 = XEXP (x1, 1);
          if (pattern8 (x2, 
E_V1DImode) != 0
              || !(
#line 3211 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)) && 
#line 50 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2)))
            return -1;
          return 2130; /* *mmx_addv1di3 */

        case E_V4QImode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V4QImode) != 0
              || !
#line 3227 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2132; /* addv4qi3 */

        case E_V2HImode:
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2HImode) != 0
              || !
#line 3227 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2134; /* addv2hi3 */

        case E_V2QImode:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XEXP (x1, 1);
          if (pattern7 (x2, 
E_V2QImode) != 0
              || !
#line 3241 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          *pnum_clobbers = 1;
          return 2136; /* addv2qi3 */

        default:
          return -1;
        }

    case 1:
      if (!
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 301; /* *addqi_1_slp */

    case 2:
      if (!
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      *pnum_clobbers = 1;
      return 302; /* *addhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_60 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      if (pattern95 (x3, 
E_V2SFmode, 
E_SFmode) != 0)
        return -1;
      x5 = XEXP (x3, 1);
      x6 = XEXP (x5, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_V2SFmode)
          || pattern1848 (x3) != 0
          || !
#line 995 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6])))
        return -1;
      return 2064; /* *mmx_haddv2sf3 */

    case MINUS:
      if (pattern96 (x4, 
E_SFmode) != 0
          || !register_operand (operands[0], E_V2SFmode)
          || GET_MODE (x3) != E_V2SFmode)
        return -1;
      x8 = XEXP (x4, 0);
      x9 = XEXP (x8, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_V2SFmode))
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_MODE (x5) != E_SFmode)
        return -1;
      x10 = XEXP (x4, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return -1;
      switch (GET_CODE (x5))
        {
        case MINUS:
          if (pattern1555 (x5, 
E_SFmode) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2SFmode))
            return -1;
          x12 = XEXP (x5, 1);
          x13 = XEXP (x12, 0);
          if (!rtx_equal_p (x13, operands[2])
              || !
#line 1043 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A))
            return -1;
          return 2066; /* mmx_hsubv2sf3 */

        case PLUS:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_SELECT
              || GET_MODE (x6) != E_SFmode)
            return -1;
          x14 = XEXP (x6, 1);
          if (GET_CODE (x14) != PARALLEL
              || XVECLEN (x14, 0) != 1)
            return -1;
          x12 = XEXP (x5, 1);
          if (GET_CODE (x12) != VEC_SELECT
              || GET_MODE (x12) != E_SFmode)
            return -1;
          x15 = XEXP (x12, 1);
          if (GET_CODE (x15) != PARALLEL
              || XVECLEN (x15, 0) != 1)
            return -1;
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          if (!nonimmediate_operand (operands[2], E_V2SFmode))
            return -1;
          x16 = XVECEXP (x14, 0, 0);
          operands[3] = x16;
          if (!const_0_to_1_operand (operands[3], E_SImode))
            return -1;
          x17 = XVECEXP (x15, 0, 0);
          operands[4] = x17;
          if (!const_0_to_1_operand (operands[4], E_SImode))
            return -1;
          x13 = XEXP (x12, 0);
          if (!rtx_equal_p (x13, operands[2])
              || !
#line 1105 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A
   && INTVAL (operands[3]) != INTVAL (operands[4])))
            return -1;
          return 2068; /* *mmx_haddsubv2sf3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (!register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !nonimmediate_operand (operands[1], E_SFmode))
            return -1;
          if (nonimm_or_0_operand (operands[2], E_SFmode))
            {
              if (
#line 1755 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
                return 2092; /* *mmx_concatv2sf */
              if (
#line 11766 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 5291; /* *vec_concatv2sf_sse4_1 */
            }
          if (!reg_or_0_operand (operands[2], E_SFmode)
              || !
#line 11830 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5292; /* *vec_concatv2sf_sse */

        case E_V2SImode:
          if (!register_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          if (nonimm_or_0_operand (operands[2], E_SImode))
            {
              if (
#line 5701 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE))
                return 2348; /* *mmx_concatv2si */
              if (
#line 21518 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 8483; /* *vec_concatv2si_sse4_1 */
            }
          if (!reg_or_0_operand (operands[2], E_SImode)
              || !
#line 21567 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !TARGET_SSE4_1))
            return -1;
          return 8484; /* *vec_concatv2si */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SS_TRUNCATE)
        return -1;
      switch (pattern270 (x3))
        {
        case 0:
          if (!
#line 4771 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2292; /* mmx_packsswb */

        case 1:
          if (!
#line 4812 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2294; /* mmx_packssdw */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_66 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
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
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTEND:
              switch (pattern748 (x3, 
SIGN_EXTEND))
                {
                case 0:
                  if (!
#line 3447 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                    return -1;
                  return 2161; /* *mmx_smulv4hi3_highpart */

                case 1:
                  if (!
#line 3516 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2163; /* smulv2hi3_highpart */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern748 (x3, 
ZERO_EXTEND))
                {
                case 0:
                  if (!
#line 3482 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                    return -1;
                  return 2162; /* *mmx_umulv4hi3_highpart */

                case 1:
                  if (!
#line 3516 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2164; /* umulv2hi3_highpart */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case MULT:
              if (GET_MODE (x7) != E_V4SImode)
                return -1;
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != SIGN_EXTEND
                  || GET_MODE (x8) != E_V4SImode)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != SIGN_EXTEND
                  || GET_MODE (x9) != E_V4SImode)
                return -1;
              x10 = XEXP (x6, 1);
              if (GET_CODE (x10) != CONST_VECTOR
                  || XVECLEN (x10, 0) != 4
                  || GET_MODE (x10) != E_V4SImode)
                return -1;
              x11 = XVECEXP (x10, 0, 0);
              if (GET_CODE (x11) != CONST_INT
                  || XWINT (x11, 0) != 32768L)
                return -1;
              x12 = XVECEXP (x10, 0, 1);
              if (GET_CODE (x12) != CONST_INT
                  || XWINT (x12, 0) != 32768L)
                return -1;
              x13 = XVECEXP (x10, 0, 2);
              if (GET_CODE (x13) != CONST_INT
                  || XWINT (x13, 0) != 32768L)
                return -1;
              x14 = XVECEXP (x10, 0, 3);
              if (GET_CODE (x14) != CONST_INT
                  || XWINT (x14, 0) != 32768L
                  || XWINT (x5, 0) != 16L
                  || !register_operand (operands[0], E_V4HImode)
                  || GET_MODE (x3) != E_V4HImode
                  || GET_MODE (x4) != E_V4SImode
                  || GET_MODE (x6) != E_V4SImode)
                return -1;
              x15 = XEXP (x8, 0);
              operands[1] = x15;
              if (!nonimmediate_operand (operands[1], E_V4HImode))
                return -1;
              x16 = XEXP (x9, 0);
              operands[2] = x16;
              if (!nonimmediate_operand (operands[2], E_V4HImode)
                  || !
#line 3605 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)))
                return -1;
              return 2166; /* *mmx_pmulhrwv4hi3 */

            case PLUS:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != ZERO_EXTEND)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != ZERO_EXTEND)
                return -1;
              x10 = XEXP (x6, 1);
              if (GET_CODE (x10) != CONST_VECTOR
                  || XWINT (x5, 0) != 1L)
                return -1;
              x15 = XEXP (x8, 0);
              operands[1] = x15;
              x16 = XEXP (x9, 0);
              operands[2] = x16;
              switch (XVECLEN (x10, 0))
                {
                case 8:
                  if (pattern1359 (x10, 
E_V8HImode) != 0
                      || pattern1634 (x3, 
E_V8QImode, 
E_V8HImode) != 0
                      || !
#line 6332 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 2378; /* *mmx_uavgv8qi3 */

                case 4:
                  x11 = XVECEXP (x10, 0, 0);
                  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x12 = XVECEXP (x10, 0, 1);
                  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x13 = XVECEXP (x10, 0, 2);
                  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x14 = XVECEXP (x10, 0, 3);
                  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V4HImode:
                      if (pattern1634 (x3, 
E_V4HImode, 
E_V4SImode) != 0
                          || GET_MODE (x10) != E_V4SImode
                          || !
#line 6376 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                        return -1;
                      return 2379; /* *mmx_uavgv4hi3 */

                    case E_V4QImode:
                      if (pattern1538 (x3, 
E_V4HImode, 
E_V4QImode) != 0
                          || !
#line 6416 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2380; /* uavgv4qi3_ceil */

                    default:
                      return -1;
                    }

                case 2:
                  x11 = XVECEXP (x10, 0, 0);
                  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  x12 = XVECEXP (x10, 0, 1);
                  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V2QImode:
                      if (pattern1538 (x3, 
E_V2HImode, 
E_V2QImode) != 0
                          || !
#line 6436 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2381; /* uavgv2qi3_ceil */

                    case E_V2HImode:
                      if (pattern1538 (x3, 
E_V2SImode, 
E_V2HImode) != 0
                          || !
#line 6456 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                        return -1;
                      return 2382; /* uavgv2hi3_ceil */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case LSHIFTRT:
              if (pattern616 (x7) != 0
                  || XWINT (x5, 0) != 1L)
                return -1;
              x8 = XEXP (x7, 0);
              x15 = XEXP (x8, 0);
              x17 = XEXP (x15, 0);
              operands[1] = x17;
              x18 = XEXP (x8, 1);
              x19 = XEXP (x18, 0);
              operands[2] = x19;
              x10 = XEXP (x6, 1);
              operands[3] = x10;
              switch (GET_MODE (operands[0]))
                {
                case E_V4HImode:
                  if (pattern1513 (x3, 
E_V4SImode, 
E_V4HImode) != 0
                      || !register_mmxmem_operand (operands[1], E_V4HImode)
                      || GET_MODE (x18) != E_V4SImode
                      || !register_mmxmem_operand (operands[2], E_V4HImode)
                      || !const1_operand (operands[3], E_V4HImode)
                      || !
#line 23068 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8626; /* *ssse3_pmulhrswv4hi3 */

                case E_V2HImode:
                  if (pattern1513 (x3, 
E_V2SImode, 
E_V2HImode) != 0
                      || !register_operand (operands[1], E_V2HImode)
                      || GET_MODE (x18) != E_V2SImode
                      || !register_operand (operands[2], E_V2HImode)
                      || !const1_operand (operands[3], E_V2HImode)
                      || !
#line 23113 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8627; /* *smulhrsv2hi3 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4QImode:
          if (GET_MODE (x3) != E_V4QImode)
            return -1;
          if (register_operand (operands[0], E_V4QImode)
              && register_operand (operands[1], E_V4HImode)
              && (
#line 5144 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BW) && 
#line 73 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2312; /* avx512vl_truncv4hiv4qi2 */
          if (!memory_operand (operands[0], E_V4QImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7315; /* *avx512vl_truncatev4siv4qi2_store_1 */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7318; /* *avx512vl_truncatev4div4qi2_store_1 */

            default:
              return -1;
            }

        case E_V2QImode:
          if (GET_MODE (x3) != E_V2QImode)
            return -1;
          if (register_operand (operands[0], E_V2QImode))
            {
              switch (GET_MODE (operands[1]))
                {
                case E_V2HImode:
                  if (register_operand (operands[1], E_V2HImode)
                      && 
#line 5144 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_AVX512BW))
                    return 2313; /* avx512vl_truncv2hiv2qi2 */
                  break;

                case E_V2SImode:
                  if (register_operand (operands[1], E_V2SImode)
                      && 
#line 5170 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
                    return 2314; /* avx512vl_truncv2siv2qi2 */
                  break;

                default:
                  break;
                }
            }
          if (!memory_operand (operands[0], E_V2QImode)
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 15413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7300; /* *avx512vl_truncatev2div2qi2_store_1 */

        case E_V2HImode:
          if (GET_MODE (x3) != E_V2HImode)
            return -1;
          if (register_operand (operands[0], E_V2HImode)
              && register_operand (operands[1], E_V2SImode)
              && 
#line 5170 "../../src/gcc/config/i386/mmx.md"
(TARGET_AVX512VL && TARGET_MMX_WITH_SSE))
            return 2315; /* avx512vl_truncv2siv2hi2 */
          if (!memory_operand (operands[0], E_V2HImode)
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 15859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7415; /* *avx512vl_truncatev2div2hi2_store_1 */

        case E_V8QImode:
          switch (pattern12 (x3))
            {
            case 0:
              if (!(
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 7345; /* *avx512vl_truncatev8hiv8qi2_store_1 */

            case 1:
              if (!
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7348; /* *avx512vl_truncatev8siv8qi2_store_1 */

            case 2:
              if (!
#line 16122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 7452; /* *avx512f_truncatev8div16qi2_store_1 */

            default:
              return -1;
            }

        case E_V4HImode:
          switch (pattern11 (x3, 
E_V4HImode))
            {
            case 0:
              if (!
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7385; /* *avx512vl_truncatev4siv4hi2_store_1 */

            case 1:
              if (!
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 7388; /* *avx512vl_truncatev4div4hi2_store_1 */

            default:
              return -1;
            }

        case E_V2SImode:
          if (!memory_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !register_operand (operands[1], E_V2DImode)
              || !
#line 16009 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7434; /* *avx512vl_truncatev2div2si2_store_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_76 (rtx x1 ATTRIBUTE_UNUSED,
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
    case PLUS:
      return recog_71 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_73 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_75 (x1, insn, pnum_clobbers);

    case SMUL_HIGHPART:
      if (pattern106 (x3, pnum_clobbers) != 0
          || !
#line 11150 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 2;
      return 631; /* *smulsi3_highpart_zext */

    case UMUL_HIGHPART:
      if (pattern106 (x3, pnum_clobbers) != 0
          || !
#line 11150 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 2;
      return 632; /* *umulsi3_highpart_zext */

    case TRUNCATE:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != LSHIFTRT
          || GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MULT
          || GET_MODE (x6) != E_DImode)
        return -1;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 32]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x8 = XEXP (x6, 0);
      if (GET_MODE (x8) != E_DImode)
        return -1;
      x9 = XEXP (x6, 1);
      if (GET_MODE (x9) != E_DImode)
        return -1;
      switch (GET_CODE (x8))
        {
        case SIGN_EXTEND:
          if (GET_CODE (x9) != SIGN_EXTEND)
            return -1;
          x10 = XEXP (x8, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 635; /* *smulsi3_highpart_zext */

        case ZERO_EXTEND:
          if (GET_CODE (x9) != ZERO_EXTEND)
            return -1;
          x10 = XEXP (x8, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 2;
          return 636; /* *umulsi3_highpart_zext */

        default:
          return -1;
        }

    case AND:
      return recog_72 (x1, insn, pnum_clobbers);

    case IOR:
      switch (pattern108 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 847; /* *iorqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 848; /* *iorqi_1_zextsi */

        case 1:
          if (
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 855; /* *iorhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 856; /* *iorhi_1_zextsi */

        case 2:
          if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 851; /* *iorqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 852; /* *iorqi_1_zextdi */

        case 3:
          if (
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 859; /* *iorhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 860; /* *iorhi_1_zextdi */

        case 4:
          if (!
#line 13745 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 863; /* *iorsi_1_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern108 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 849; /* *xorqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 850; /* *xorqi_1_zextsi */

        case 1:
          if (
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 857; /* *xorhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 858; /* *xorhi_1_zextsi */

        case 2:
          if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 853; /* *xorqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 854; /* *xorqi_1_zextdi */

        case 3:
          if (
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 861; /* *xorhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 862; /* *xorhi_1_zextdi */

        case 4:
          if (!
#line 13745 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 864; /* *xorsi_1_zext */

        default:
          return -1;
        }

    case NEG:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern281 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 964; /* *negqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 965; /* *negqi_1_zextsi */

        case 1:
          if (
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 968; /* *neghi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 969; /* *neghi_1_zextsi */

        case 2:
          if (
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 966; /* *negqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 967; /* *negqi_1_zextdi */

        case 3:
          if (
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 970; /* *neghi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 971; /* *neghi_1_zextdi */

        case 4:
          if (!
#line 14381 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 972; /* *negsi_1_zext */

        default:
          return -1;
        }

    case NOT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          switch (pattern280 (x3))
            {
            case 0:
              if (!
#line 15002 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1036; /* *one_cmplqi2_1_zextsi */

            case 1:
              if (!
#line 15011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1038; /* *one_cmplhi2_1_zextsi */

            default:
              return -1;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 15002 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1037; /* *one_cmplqi2_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 15011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              return 1039; /* *one_cmplhi2_1_zextdi */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 15020 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1040; /* *one_cmplsi2_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern109 (x3))
        {
        case 0:
          if (register_operand (operands[2], E_SImode)
              && 
#line 15998 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return 1092; /* *bmi2_ashlsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 16031 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1103; /* *ashlsi3_1_zext */

        case 1:
          if (
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1097; /* *ashlqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1098; /* *ashlqi3_1_zextdi */

        case 2:
          if (
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1101; /* *ashlhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1102; /* *ashlhi3_1_zextdi */

        case 3:
          if (
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1095; /* *ashlqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1096; /* *ashlqi3_1_zextsi */

        case 4:
          if (
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1099; /* *ashlhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1100; /* *ashlhi3_1_zextsi */

        default:
          return -1;
        }

    case ASHIFTRT:
      if (GET_MODE (x4) == E_SImode
          && register_operand (operands[0], E_DImode))
        {
          res = recog_69 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern282 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1192; /* *ashrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1193; /* *ashrqi3_1_zextsi */

        case 1:
          if (
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1200; /* *ashrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1201; /* *ashrhi3_1_zextsi */

        case 2:
          if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1196; /* *ashrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1197; /* *ashrqi3_1_zextdi */

        case 3:
          if (
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1204; /* *ashrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1205; /* *ashrhi3_1_zextdi */

        case 4:
          if (!
#line 17478 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1207; /* *ashrsi3_1_zext */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern109 (x3))
        {
        case 0:
          if (register_operand (operands[2], E_SImode)
              && 
#line 17445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return 1184; /* *bmi2_lshrsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 17478 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 1206; /* *lshrsi3_1_zext */

        case 1:
          if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1194; /* *lshrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1195; /* *lshrqi3_1_zextdi */

        case 2:
          if (
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1202; /* *lshrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1203; /* *lshrhi3_1_zextdi */

        case 3:
          if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1190; /* *lshrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1191; /* *lshrqi3_1_zextsi */

        case 4:
          if (
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1198; /* *lshrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1199; /* *lshrhi3_1_zextsi */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern109 (x3))
        {
        case 0:
          if (const_0_to_31_operand (operands[2], E_QImode)
              && 
#line 18560 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && !optimize_function_for_size_p (cfun)))
            return 1350; /* *bmi2_rorxsi3_1_zext */
          if (pnum_clobbers == NULL
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 18593 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 1372; /* *rotrsi3_1_zext */

        case 1:
          if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1361; /* *rotrqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1362; /* *rotrqi3_1_zextdi */

        case 2:
          if (
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1369; /* *rotrhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1370; /* *rotrhi3_1_zextdi */

        case 3:
          if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1357; /* *rotrqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1358; /* *rotrqi3_1_zextsi */

        case 4:
          if (
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1365; /* *rotrhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1366; /* *rotrhi3_1_zextsi */

        default:
          return -1;
        }

    case ROTATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (pattern282 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1355; /* *rotlqi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1356; /* *rotlqi3_1_zextsi */

        case 1:
          if (
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1363; /* *rotlhi3_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1364; /* *rotlhi3_1_zextsi */

        case 2:
          if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1359; /* *rotlqi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1360; /* *rotlqi3_1_zextdi */

        case 3:
          if (
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
            return 1367; /* *rotlhi3_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          *pnum_clobbers = 1;
          return 1368; /* *rotlhi3_1_zextdi */

        case 4:
          if (!
#line 18593 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
            return -1;
          *pnum_clobbers = 1;
          return 1371; /* *rotlsi3_1_zext */

        default:
          return -1;
        }

    case CTZ:
      if (pattern110 (x3, pnum_clobbers, 
E_SImode, 
E_DImode) != 0
          || !
#line 21161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1521; /* *ctzsidi2_uext */

    case CLZ:
      if (pattern110 (x3, pnum_clobbers, 
E_SImode, 
E_DImode) != 0
          || !
#line 21596 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1543; /* *clzsi2_lzcnt_zext_2 */

    case POPCOUNT:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern617 (x3, 
E_DImode, 
E_SImode) != 0
              || !
#line 22433 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1634; /* *popcountsi2_zext_2 */

        case E_SImode:
          if (pattern617 (x3, 
E_SImode, 
E_HImode) != 0
              || !
#line 22499 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1637; /* *popcounthi2_2 */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_70 (x1, insn, pnum_clobbers);

    case IF_THEN_ELSE:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (!ix86_comparison_operator (x5, E_VOIDmode))
        return -1;
      operands[1] = x5;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x12 = XEXP (x4, 1);
      operands[2] = x12;
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      x13 = XEXP (x4, 2);
      operands[3] = x13;
      if (!nonimmediate_operand (operands[3], E_SImode)
          || !
#line 26355 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 1807; /* *movsicc_noc_zext_1 */

    case VEC_SELECT:
      return recog_74 (x1, insn, pnum_clobbers);

    case SUBREG:
      if (pattern111 (x3) != 0
          || !
#line 22151 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
        return -1;
      return 8565; /* *sse2_pmovskb_zexthisi */

    default:
      return -1;
    }
}

 int
recog_103 (rtx x1 ATTRIBUTE_UNUSED,
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
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1297; /* *rotrsi3_mask_1 */

    case 1:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1299; /* *rotrdi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1313; /* *rotrsi3_add_1 */

    case 3:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1315; /* *rotrdi3_add_1 */

    case 4:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1329; /* *rotrsi3_sub_1 */

    case 5:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1331; /* *rotrdi3_sub_1 */

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
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1289; /* *rotrsi3_mask */
                }
              break;

            case 1:
              if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1291; /* *rotrdi3_mask */
                }
              break;

            case 2:
              if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1305; /* *rotrsi3_add */
                }
              break;

            case 3:
              if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1307; /* *rotrdi3_add */
                }
              break;

            case 4:
              if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                {
                  *pnum_clobbers = 1;
                  return 1321; /* *rotrsi3_sub */
                }
              break;

            case 5:
              if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1323; /* *rotrdi3_sub */
                }
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          operands[2] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern613 (x2, pnum_clobbers, 
E_DImode) == 0
                  && const_1_to_31_operand (operands[2], E_QImode)
                  && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                {
                  *pnum_clobbers = 2;
                  return 1334; /* ix86_rotrdi3_doubleword */
                }
              break;

            case E_SImode:
              if (register_operand (operands[0], E_SImode)
                  && GET_MODE (x2) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && const_0_to_31_operand (operands[2], E_QImode)
                  && 
#line 18468 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && !optimize_function_for_size_p (cfun)))
                return 1340; /* *bmi2_rorxsi3_1 */
              break;

            default:
              break;
            }
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode)
            {
              if (XWINT (x3, 0) == 32L
                  && register_operand (operands[1], E_DImode)
                  && 
#line 18427 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return 1337; /* rotr32di2_doubleword */
              if (nonimmediate_operand (operands[1], E_DImode))
                {
                  operands[2] = x3;
                  if (const_0_to_63_operand (operands[2], E_QImode)
                      && (
#line 18468 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1341; /* *bmi2_rorxdi3_1 */
                }
            }
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
(ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1344; /* *rotrsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1345; /* *rotrsi3_1 */

        case 1:
          if ((
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1348; /* *rotrdi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 18478 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1349; /* *rotrdi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_114 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (pattern126 (x3))
    {
    case 0:
      if (
#line 21485 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT))
        return 1532; /* clzsi2_lzcnt_nf */
      if (pnum_clobbers == NULL
          || !
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
        return -1;
      *pnum_clobbers = 1;
      return 1534; /* clzsi2_lzcnt */

    case 1:
      if ((
#line 21485 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1533; /* clzdi2_lzcnt_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1535; /* clzdi2_lzcnt */

    default:
      return -1;
    }
}

 int
recog_116 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (!ix86_carry_flag_operator (x3, E_VOIDmode))
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
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XEXP (x2, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x1, 0);
  operands[0] = x8;
  switch (pattern23 (x2))
    {
    case 0:
      *pnum_clobbers = 1;
      return 1797; /* *x86_movsicc_0_m1_se */

    case 1:
      if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 1798; /* *x86_movdicc_0_m1_se */

    default:
      return -1;
    }
}

 int
recog_119 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_V2DImode)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (XWINT (x5, 0) != 0L
      || GET_MODE (x2) != E_DImode)
    return -1;
  x6 = XEXP (x3, 0);
  switch (pattern1208 (x6))
    {
    case 0:
      if (pshufb_truncv8hiv8qi_operand (operands[2], E_V16QImode)
          && 
#line 15395 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()))
        return 7298; /* *avx512f_pshufb_truncv8hiv8qi_1 */
      if (!pshufb_truncv4siv4hi_operand (operands[2], E_V16QImode)
          || !
#line 15750 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 7383; /* *avx512f_pshufb_truncv4siv4hi_1 */

    case 1:
      if (!
#line 15991 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 7432; /* *avx512f_pshufd_truncv2div2si_1 */

    default:
      return -1;
    }
}

 int
recog_120 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XEXP (x2, 0);
  operands[1] = x6;
  res = recog_118 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (register_operand (operands[0], E_DImode))
    {
      res = recog_119 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  if (!nonimmediate_operand (operands[0], E_DImode)
      || XWINT (x4, 0) != 0L
      || GET_MODE (x2) != E_DImode)
    return -1;
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V2DImode))
    return -1;
  if ((
#line 21170 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return 8472; /* *vec_extractv2di_0 */
  if (!
#line 21184 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
    return -1;
  return 8473; /* *vec_extractv2di_0_sse */
}

 int
recog_122 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4428; /* avx512fp16_vcvtph2w_v32hi_mask */

    case 1:
      switch (pattern994 (x2))
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
          return 4436; /* avx512fp16_vcvtph2dq_v16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8708 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4843; /* avx512f_fix_notruncv16sfv16si_mask */

        default:
          return -1;
        }

    case 2:
      if (pattern773 (x2, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4444; /* avx512fp16_vcvtph2qq_v8di_mask */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4857; /* avx512dq_cvtps2qqv8di_mask */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5103; /* fix_notruncv8dfv8di2_mask */

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
      return 4452; /* avx512fp16_vcvtph2w_v16hi_mask */

    case 4:
      switch (pattern993 (x2))
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
          return 4460; /* avx512fp16_vcvtph2dq_v8si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 4837; /* avx_fix_notruncv8sfv8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5007; /* avx512f_cvtpd2dq512_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern1099 (x2, 
E_V4DImode))
        {
        case 0:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4468; /* avx512fp16_vcvtph2qq_v4di_mask */

        case 1:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4861; /* avx512dq_cvtps2qqv4di_mask */

        case 2:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5107; /* fix_notruncv4dfv4di2_mask */

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
      return 4473; /* avx512fp16_vcvtph2w_v8hi_mask */

    case 7:
      switch (pattern1099 (x2, 
E_V4SImode))
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
          return 4477; /* avx512fp16_vcvtph2dq_v4si_mask */

        case 1:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 4840; /* sse2_fix_notruncv4sfv4si_mask */

        case 2:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5011; /* avx_cvtpd2dq256_mask */

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
          return 4481; /* avx512fp16_vcvtph2qq_v2di_mask */

        case 1:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5110; /* fix_notruncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8742 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 4864; /* avx512dq_cvtps2qqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_128 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SImode:
      if (pattern1101 (x2, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9119; /* avx2_permvarv8si_mask */

    case E_V8SFmode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9121; /* avx2_permvarv8sf_mask */

    case E_V16SImode:
      if (pattern1101 (x2, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 997 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9123; /* avx512f_permvarv16si_mask */

    case E_V16SFmode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9125; /* avx512f_permvarv16sf_mask */

    case E_V8DImode:
      if (pattern1101 (x2, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 999 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9127; /* avx512f_permvarv8di_mask */

    case E_V8DFmode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8DFmode, 
E_V8DImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 1000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9129; /* avx512f_permvarv8df_mask */

    case E_V4DImode:
      if (pattern1101 (x2, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 1001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9131; /* avx2_permvarv4di_mask */

    case E_V4DFmode:
      if (pattern1102 (x2, 
E_QImode, 
E_V4DFmode, 
E_V4DImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 1001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9133; /* avx2_permvarv4df_mask */

    case E_V64QImode:
      if (pattern1101 (x2, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (64 == 64 || TARGET_AVX512VL)) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9135; /* avx512bw_permvarv64qi_mask */

    case E_V16QImode:
      if (pattern1101 (x2, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (16 == 64 || TARGET_AVX512VL)) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9137; /* avx512vl_permvarv16qi_mask */

    case E_V32QImode:
      if (pattern1101 (x2, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && (32 == 64 || TARGET_AVX512VL)) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9139; /* avx512vl_permvarv32qi_mask */

    case E_V8HImode:
      if (pattern1101 (x2, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9141; /* avx512vl_permvarv8hi_mask */

    case E_V16HImode:
      if (pattern1101 (x2, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9143; /* avx512vl_permvarv16hi_mask */

    case E_V32HImode:
      if (pattern1101 (x2, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9145; /* avx512bw_permvarv32hi_mask */

    case E_V8HFmode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8HFmode, 
E_V8HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9147; /* avx512fp16_permvarv8hf_mask */

    case E_V16HFmode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16HFmode, 
E_V16HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9149; /* avx512vl_permvarv16hf_mask */

    case E_V32HFmode:
      if (pattern1102 (x2, 
E_SImode, 
E_V32HFmode, 
E_V32HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9151; /* avx512bw_permvarv32hf_mask */

    case E_V8BFmode:
      if (pattern1102 (x2, 
E_QImode, 
E_V8BFmode, 
E_V8HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9153; /* avx512vl_permvarv8bf_mask */

    case E_V16BFmode:
      if (pattern1102 (x2, 
E_HImode, 
E_V16BFmode, 
E_V16HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9155; /* avx512vl_permvarv16bf_mask */

    case E_V32BFmode:
      if (pattern1102 (x2, 
E_SImode, 
E_V32BFmode, 
E_V32HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9157; /* avx512bw_permvarv32bf_mask */

    default:
      return -1;
    }
}

 int
recog_139 (rtx x1 ATTRIBUTE_UNUSED,
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
  x7 = XEXP (x2, 1);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      x8 = XEXP (x2, 2);
      operands[4] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern478 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 32060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10585; /* vdpphps_v16sf_mask */

        case E_V8SFmode:
          if (pattern478 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !
#line 32060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10586; /* vdpphps_v8sf_mask */

        case E_V4SFmode:
          if (pattern478 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !
#line 32060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10587; /* vdpphps_v4sf_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x7;
      x8 = XEXP (x2, 2);
      operands[5] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern480 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 32087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10588; /* vdpphps_v16sf_maskz_1 */

        case E_V8SFmode:
          if (pattern480 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !
#line 32087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10589; /* vdpphps_v8sf_maskz_1 */

        case E_V4SFmode:
          if (pattern480 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !
#line 32087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10590; /* vdpphps_v4sf_maskz_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_144 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XINT (x3, 1))
    {
    case 63:
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3069; /* ieee_maxv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3077; /* ieee_maxv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3084; /* ieee_maxv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3089; /* ieee_maxv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3097; /* ieee_maxv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
            return -1;
          return 3104; /* ieee_maxv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3109; /* ieee_maxv8df3_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3117; /* ieee_maxv4df3_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3124; /* ieee_maxv2df3_mask */

        case 9:
          if (!(
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3157; /* avx512fp16_ieee_vmmaxv8hf3 */

        case 10:
          if (!
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3165; /* sse_ieee_vmmaxv4sf3 */

        case 11:
          if (!(
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3173; /* sse2_ieee_vmmaxv2df3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern457 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3073; /* ieee_minv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3081; /* ieee_minv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3086; /* ieee_minv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3093; /* ieee_minv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3101; /* ieee_minv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
            return -1;
          return 3106; /* ieee_minv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 3113; /* ieee_minv8df3_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3121; /* ieee_minv4df3_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3126; /* ieee_minv2df3_mask */

        case 9:
          if (!(
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 3161; /* avx512fp16_ieee_vmminv8hf3 */

        case 10:
          if (!
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3169; /* sse_ieee_vmminv4sf3 */

        case 11:
          if (!(
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3177; /* sse2_ieee_vmminv2df3 */

        default:
          return -1;
        }

    case 192:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1209 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3197; /* reducepv32hf_mask */

        case E_V16HFmode:
          if (pattern1209 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3201; /* reducepv16hf_mask */

        case E_V8HFmode:
          if (pattern1209 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3204; /* reducepv8hf_mask */

        case E_V16SFmode:
          if (pattern1209 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3207; /* reducepv16sf_mask */

        case E_V8SFmode:
          if (pattern1209 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3211; /* reducepv8sf_mask */

        case E_V4SFmode:
          if (pattern1209 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3214; /* reducepv4sf_mask */

        case E_V8DFmode:
          if (pattern1209 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3217; /* reducepv8df_mask */

        case E_V4DFmode:
          if (pattern1209 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3221; /* reducepv4df_mask */

        case E_V2DFmode:
          if (pattern1209 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3224; /* reducepv2df_mask */

        default:
          return -1;
        }

    case 221:
      switch (pattern459 (x2))
        {
        case 0:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4383; /* avx512bw_fmulc_v32hf_mask */

        case 1:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4391; /* avx512vl_fmulc_v16hf_mask */

        case 2:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4399; /* avx512fp16_fmulc_v8hf_mask */

        case 3:
          if (!
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4414; /* avx512fp16_fmulcsh_v8hf */

        default:
          return -1;
        }

    case 222:
      switch (pattern459 (x2))
        {
        case 0:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4387; /* avx512bw_fcmulc_v32hf_mask */

        case 1:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4395; /* avx512vl_fcmulc_v16hf_mask */

        case 2:
          if (!(
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4401; /* avx512fp16_fcmulc_v8hf_mask */

        case 3:
          if (!
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return -1;
          return 4418; /* avx512fp16_fcmulcsh_v8hf */

        default:
          return -1;
        }

    case 58:
      return recog_130 (x1, insn, pnum_clobbers);

    case 165:
      x7 = XEXP (x2, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (pattern456 (x2))
        {
        case 0:
          if (!(
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 7071; /* avx512f_sgetexpv8hf */

        case 1:
          if (!
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 7075; /* avx512f_sgetexpv4sf */

        case 2:
          if (!(
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7079; /* avx512f_sgetexpv2df */

        default:
          return -1;
        }

    case 94:
      return recog_129 (x1, insn, pnum_clobbers);

    case 188:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern462 (x2, 
E_HImode, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (64 == 64 || TARGET_AVX512VL)) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7593; /* avx512bw_pmaddwd512v32hi_mask */

        case E_V8SImode:
          if (pattern462 (x2, 
E_QImode, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (32 == 64 || TARGET_AVX512VL)) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7595; /* avx512bw_pmaddwd512v16hi_mask */

        case E_V4SImode:
          if (pattern462 (x2, 
E_QImode, 
E_V4SImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && (16 == 64 || TARGET_AVX512VL))))
            return -1;
          return 7597; /* avx512bw_pmaddwd512v8hi_mask */

        default:
          return -1;
        }

    case 57:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern1100 (x2, 
E_DImode, 
E_V64QImode, 
E_V32HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8318; /* avx512bw_packuswb_mask */

        case E_V32QImode:
          if (pattern1100 (x2, 
E_SImode, 
E_V32QImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8320; /* avx2_packuswb_mask */

        case E_V16QImode:
          if (pattern1100 (x2, 
E_HImode, 
E_V16QImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8322; /* sse2_packuswb_mask */

        case E_V32HImode:
          if (pattern1100 (x2, 
E_SImode, 
E_V32HImode, 
E_V16SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8733; /* avx512bw_packusdw_mask */

        case E_V16HImode:
          if (pattern1100 (x2, 
E_HImode, 
E_V16HImode, 
E_V8SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8735; /* avx2_packusdw_mask */

        case E_V8HImode:
          if (pattern1100 (x2, 
E_QImode, 
E_V8HImode, 
E_V4SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8737; /* sse4_1_packusdw_mask */

        default:
          return -1;
        }

    case 190:
      if (pattern460 (x2) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8448; /* avx512bw_pshuflwv32hi_mask */

    case 189:
      if (pattern460 (x2) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20902 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8454; /* avx512bw_pshufhwv32hi_mask */

    case 187:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern462 (x2, 
E_QImode, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 8611; /* avx512bw_pmaddubsw512v8hi_mask */

        case E_V16HImode:
          if (pattern462 (x2, 
E_HImode, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 8613; /* avx512bw_pmaddubsw512v16hi_mask */

        case E_V32HImode:
          if (pattern462 (x2, 
E_SImode, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 8615; /* avx512bw_pmaddubsw512v32hi_mask */

        default:
          return -1;
        }

    case 52:
      switch (pattern461 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 8629; /* avx512bw_pshufbv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 8631; /* avx2_pshufbv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW)))
            return -1;
          return 8633; /* ssse3_pshufbv16qi3_mask */

        default:
          return -1;
        }

    case 151:
      return recog_128 (x1, insn, pnum_clobbers);

    case 144:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1103 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9356; /* avx512f_vpermilvarv16sf3_mask */

        case E_V8SFmode:
          if (pattern1103 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 9358; /* avx_vpermilvarv8sf3_mask */

        case E_V4SFmode:
          if (pattern1103 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL))))
            return -1;
          return 9360; /* avx_vpermilvarv4sf3_mask */

        case E_V8DFmode:
          if (pattern1103 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 9362; /* avx512f_vpermilvarv8df3_mask */

        case E_V4DFmode:
          if (pattern1103 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 9364; /* avx_vpermilvarv4df3_mask */

        case E_V2DFmode:
          if (pattern1103 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (16 == 64 || TARGET_AVX512VL)) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 9366; /* avx_vpermilvarv2df3_mask */

        default:
          return -1;
        }

    case 150:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1000 (x2, 
E_QImode, 
E_V8SFmode, 
E_V8HImode) != 0)
            return -1;
          x7 = XEXP (x2, 2);
          operands[4] = x7;
          if (register_operand (operands[0], E_V8HImode))
            {
              x6 = XEXP (x2, 1);
              operands[3] = x6;
              if (nonimm_or_0_operand (operands[3], E_V8HImode)
                  && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29180 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
                return 9666; /* vcvtps2ph256_mask */
            }
          operands[3] = x7;
          if (!memory_operand (operands[0], E_V8HImode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[0])
              || !(
#line 96 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29192 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
            return -1;
          return 9668; /* *vcvtps2ph256_merge_mask */

        case E_V16HImode:
          if (pattern1000 (x2, 
E_HImode, 
E_V16SFmode, 
E_V16HImode) != 0)
            return -1;
          x7 = XEXP (x2, 2);
          operands[4] = x7;
          if (register_operand (operands[0], E_V16HImode))
            {
              x6 = XEXP (x2, 1);
              operands[3] = x6;
              if (nonimm_or_0_operand (operands[3], E_V16HImode)
                  && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29231 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9671; /* avx512f_vcvtps2ph512_mask */
            }
          operands[3] = x7;
          if (!memory_operand (operands[0], E_V16HImode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[0])
              || !(
#line 96 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29243 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9674; /* *avx512f_vcvtps2ph512_merge_mask */

        default:
          return -1;
        }

    case 166:
      return recog_131 (x1, insn, pnum_clobbers);

    case 197:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern1104 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10131; /* vpmultishiftqbv64qi_mask */

        case E_V16QImode:
          if (pattern1104 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10133; /* vpmultishiftqbv16qi_mask */

        case E_V32QImode:
          if (pattern1104 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10135; /* vpmultishiftqbv32qi_mask */

        default:
          return -1;
        }

    case 200:
      switch (pattern461 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 10181; /* vgf2p8mulb_v64qi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 10183; /* vgf2p8mulb_v32qi_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI)))
            return -1;
          return 10185; /* vgf2p8mulb_v16qi_mask */

        default:
          return -1;
        }

    case 249:
      switch (pattern463 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10451; /* vcvt2ph2bf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10459; /* vcvt2ph2bf8v16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10467; /* vcvt2ph2bf8v8hf_mask */

        default:
          return -1;
        }

    case 250:
      switch (pattern463 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10453; /* vcvt2ph2bf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10461; /* vcvt2ph2bf8sv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10469; /* vcvt2ph2bf8sv8hf_mask */

        default:
          return -1;
        }

    case 251:
      switch (pattern463 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10455; /* vcvt2ph2hf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10463; /* vcvt2ph2hf8v16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10471; /* vcvt2ph2hf8v8hf_mask */

        default:
          return -1;
        }

    case 252:
      switch (pattern463 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10457; /* vcvt2ph2hf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10465; /* vcvt2ph2hf8sv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10473; /* vcvt2ph2hf8sv8hf_mask */

        default:
          return -1;
        }

    case 245:
      switch (pattern465 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10483; /* vcvtbiasph2bf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10491; /* vcvtbiasph2bf8v16hf_mask */

        default:
          return -1;
        }

    case 246:
      switch (pattern465 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10485; /* vcvtbiasph2bf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10493; /* vcvtbiasph2bf8sv16hf_mask */

        default:
          return -1;
        }

    case 247:
      switch (pattern465 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10487; /* vcvtbiasph2hf8v32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10495; /* vcvtbiasph2hf8v16hf_mask */

        default:
          return -1;
        }

    case 248:
      switch (pattern465 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10489; /* vcvtbiasph2hf8sv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10497; /* vcvtbiasph2hf8sv16hf_mask */

        default:
          return -1;
        }

    case 258:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 2);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1104 (x2, 
E_V32BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10592; /* avx10_2_scalefbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1104 (x2, 
E_V16BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10594; /* avx10_2_scalefbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1104 (x2, 
E_V8BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10596; /* avx10_2_scalefbf16_v8bf_mask */

        default:
          return -1;
        }

    case 259:
      switch (pattern467 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10706; /* avx10_2_rndscalebf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10712; /* avx10_2_rndscalebf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10718; /* avx10_2_rndscalebf16_v8bf_mask */

        default:
          return -1;
        }

    case 260:
      switch (pattern467 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10708; /* avx10_2_reducebf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10714; /* avx10_2_reducebf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10720; /* avx10_2_reducebf16_v8bf_mask */

        default:
          return -1;
        }

    case 261:
      switch (pattern467 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10710; /* avx10_2_getmantbf16_v32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10716; /* avx10_2_getmantbf16_v16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10722; /* avx10_2_getmantbf16_v8bf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_173 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) == CONST_INT)
    {
      res = recog_170 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x5;
  res = recog_172 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 0L
      || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || pattern1302 (x2, 
E_V8HImode) != 0
      || pattern1548 (x4) != 0)
    return -1;
  x9 = XEXP (x2, 1);
  operands[6] = x9;
  if (!nonimm_or_0_operand (operands[6], E_V8HImode))
    return -1;
  x10 = XEXP (x2, 2);
  operands[7] = x10;
  if (!register_operand (operands[7], E_QImode)
      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 21016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)))
    return -1;
  return 8458; /* sse2_pshufhw_1_mask */
}

 int
recog_178 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      res = recog_156 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      switch (pattern315 (x2))
        {
        case 0:
          res = recog_157 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 1:
          if (vector_all_ones_operand (operands[1], E_V16QImode)
              && const0_operand (operands[2], E_V16QImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7917; /* *avx2_pcmpv16qi3_6 */
          if (const0_operand (operands[1], E_V16QImode)
              && vector_all_ones_operand (operands[2], E_V16QImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7940; /* *avx2_pcmpv16qi3_8 */
          break;

        case 2:
          if (vector_all_ones_operand (operands[1], E_V8HImode)
              && const0_operand (operands[2], E_V8HImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7919; /* *avx2_pcmpv8hi3_6 */
          if (const0_operand (operands[1], E_V8HImode)
              && vector_all_ones_operand (operands[2], E_V8HImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7941; /* *avx2_pcmpv8hi3_8 */
          break;

        case 3:
          if (vector_all_ones_operand (operands[1], E_V4SImode)
              && const0_operand (operands[2], E_V4SImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7921; /* *avx2_pcmpv4si3_6 */
          if (const0_operand (operands[1], E_V4SImode)
              && vector_all_ones_operand (operands[2], E_V4SImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7942; /* *avx2_pcmpv4si3_8 */
          break;

        case 4:
          if (vector_all_ones_operand (operands[1], E_V2DImode)
              && const0_operand (operands[2], E_V2DImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7923; /* *avx2_pcmpv2di3_6 */
          if (const0_operand (operands[1], E_V2DImode)
              && vector_all_ones_operand (operands[2], E_V2DImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7943; /* *avx2_pcmpv2di3_8 */
          break;

        case 5:
          if (vector_all_ones_operand (operands[1], E_V32QImode)
              && const0_operand (operands[2], E_V32QImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7925; /* *avx2_pcmpv32qi3_6 */
          if (const0_operand (operands[1], E_V32QImode)
              && vector_all_ones_operand (operands[2], E_V32QImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7944; /* *avx2_pcmpv32qi3_8 */
          break;

        case 6:
          if (vector_all_ones_operand (operands[1], E_V16HImode)
              && const0_operand (operands[2], E_V16HImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7927; /* *avx2_pcmpv16hi3_6 */
          if (const0_operand (operands[1], E_V16HImode)
              && vector_all_ones_operand (operands[2], E_V16HImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7945; /* *avx2_pcmpv16hi3_8 */
          break;

        case 7:
          if (vector_all_ones_operand (operands[1], E_V8SImode)
              && const0_operand (operands[2], E_V8SImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7929; /* *avx2_pcmpv8si3_6 */
          if (const0_operand (operands[1], E_V8SImode)
              && vector_all_ones_operand (operands[2], E_V8SImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7946; /* *avx2_pcmpv8si3_8 */
          break;

        case 8:
          if (vector_all_ones_operand (operands[1], E_V4DImode)
              && const0_operand (operands[2], E_V4DImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7931; /* *avx2_pcmpv4di3_6 */
          if (const0_operand (operands[1], E_V4DImode)
              && vector_all_ones_operand (operands[2], E_V4DImode)
              && 
#line 18191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && INTVAL (operands[5]) == 4))
            return 7947; /* *avx2_pcmpv4di3_8 */
          break;

        case 9:
          if ((
#line 4144 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3245; /* *avx_cmpv8sf3_2 */
          break;

        case 10:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7908; /* *avx2_pcmpv8si3_2 */
          break;

        case 11:
          if (
#line 4144 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return 3246; /* *avx_cmpv4sf3_2 */
          break;

        case 12:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7904; /* *avx2_pcmpv4si3_2 */
          break;

        case 13:
          if ((
#line 4144 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3247; /* *avx_cmpv4df3_2 */
          break;

        case 14:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7909; /* *avx2_pcmpv4di3_2 */
          break;

        case 15:
          if ((
#line 4144 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3248; /* *avx_cmpv2df3_2 */
          break;

        case 16:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7905; /* *avx2_pcmpv2di3_2 */
          break;

        case 17:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7902; /* *avx2_pcmpv16qi3_2 */
          break;

        case 18:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7903; /* *avx2_pcmpv8hi3_2 */
          break;

        case 19:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7906; /* *avx2_pcmpv32qi3_2 */
          break;

        case 20:
          if (
#line 18008 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   /* NE is commutative.  */
   && ((INTVAL (operands[5]) == 4
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* LE, 3 must be register.  */
       || (INTVAL (operands[5]) == 2
	   && !MEM_P (operands[3]))
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 5
	   && !MEM_P (operands[4])))))
            return 7907; /* *avx2_pcmpv16hi3_2 */
          break;

        case 21:
          switch (GET_MODE (operands[0]))
            {
            case E_V64QImode:
              if (register_operand (operands[0], E_V64QImode)
                  && GET_MODE (x2) == E_V64QImode
                  && register_operand (operands[1], E_DImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V64QImode)
                      && const0_operand (operands[3], E_V64QImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5212; /* *avx512bw_cvtmask2bv64qi */
                  if (const0_operand (operands[2], E_V64QImode)
                      && vector_all_ones_operand (operands[3], E_V64QImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return 5224; /* *avx512bw_cvtmask2bv64qi_not */
                }
              break;

            case E_V16QImode:
              if (register_operand (operands[0], E_V16QImode)
                  && GET_MODE (x2) == E_V16QImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16QImode)
                      && const0_operand (operands[3], E_V16QImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5213; /* *avx512vl_cvtmask2bv16qi */
                  if (const0_operand (operands[2], E_V16QImode)
                      && vector_all_ones_operand (operands[3], E_V16QImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5226; /* *avx512vl_cvtmask2bv16qi_not */
                }
              break;

            case E_V32QImode:
              if (register_operand (operands[0], E_V32QImode)
                  && GET_MODE (x2) == E_V32QImode
                  && register_operand (operands[1], E_SImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V32QImode)
                      && const0_operand (operands[3], E_V32QImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5214; /* *avx512vl_cvtmask2bv32qi */
                  if (const0_operand (operands[2], E_V32QImode)
                      && vector_all_ones_operand (operands[3], E_V32QImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5225; /* *avx512vl_cvtmask2bv32qi_not */
                }
              break;

            case E_V32HImode:
              if (register_operand (operands[0], E_V32HImode)
                  && GET_MODE (x2) == E_V32HImode
                  && register_operand (operands[1], E_SImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V32HImode)
                      && const0_operand (operands[3], E_V32HImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5215; /* *avx512bw_cvtmask2wv32hi */
                  if (const0_operand (operands[2], E_V32HImode)
                      && vector_all_ones_operand (operands[3], E_V32HImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return 5227; /* *avx512bw_cvtmask2wv32hi_not */
                }
              break;

            case E_V16HImode:
              if (register_operand (operands[0], E_V16HImode)
                  && GET_MODE (x2) == E_V16HImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16HImode)
                      && const0_operand (operands[3], E_V16HImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5216; /* *avx512vl_cvtmask2wv16hi */
                  if (const0_operand (operands[2], E_V16HImode)
                      && vector_all_ones_operand (operands[3], E_V16HImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5228; /* *avx512vl_cvtmask2wv16hi_not */
                }
              break;

            case E_V8HImode:
              if (register_operand (operands[0], E_V8HImode)
                  && GET_MODE (x2) == E_V8HImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8HImode)
                      && const0_operand (operands[3], E_V8HImode)
                      && (
#line 10306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5217; /* *avx512vl_cvtmask2wv8hi */
                  if (const0_operand (operands[2], E_V8HImode)
                      && vector_all_ones_operand (operands[3], E_V8HImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return 5229; /* *avx512vl_cvtmask2wv8hi_not */
                }
              break;

            case E_V16SImode:
              if (register_operand (operands[0], E_V16SImode)
                  && GET_MODE (x2) == E_V16SImode
                  && register_operand (operands[1], E_HImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V16SImode)
                      && const0_operand (operands[3], E_V16SImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5218; /* *avx512f_cvtmask2dv16si */
                  if (const0_operand (operands[2], E_V16SImode)
                      && vector_all_ones_operand (operands[3], E_V16SImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5230; /* *avx512f_cvtmask2dv16si_not */
                }
              break;

            case E_V8SImode:
              if (register_operand (operands[0], E_V8SImode)
                  && GET_MODE (x2) == E_V8SImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8SImode)
                      && const0_operand (operands[3], E_V8SImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5219; /* *avx512vl_cvtmask2dv8si */
                  if (const0_operand (operands[2], E_V8SImode)
                      && vector_all_ones_operand (operands[3], E_V8SImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5231; /* *avx512vl_cvtmask2dv8si_not */
                }
              break;

            case E_V4SImode:
              if (register_operand (operands[0], E_V4SImode)
                  && GET_MODE (x2) == E_V4SImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V4SImode)
                      && const0_operand (operands[3], E_V4SImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5220; /* *avx512vl_cvtmask2dv4si */
                  if (const0_operand (operands[2], E_V4SImode)
                      && vector_all_ones_operand (operands[3], E_V4SImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5232; /* *avx512vl_cvtmask2dv4si_not */
                }
              break;

            case E_V8DImode:
              if (register_operand (operands[0], E_V8DImode)
                  && GET_MODE (x2) == E_V8DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V8DImode)
                      && const0_operand (operands[3], E_V8DImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5221; /* *avx512f_cvtmask2qv8di */
                  if (const0_operand (operands[2], E_V8DImode)
                      && vector_all_ones_operand (operands[3], E_V8DImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5233; /* *avx512f_cvtmask2qv8di_not */
                }
              break;

            case E_V4DImode:
              if (register_operand (operands[0], E_V4DImode)
                  && GET_MODE (x2) == E_V4DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V4DImode)
                      && const0_operand (operands[3], E_V4DImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5222; /* *avx512vl_cvtmask2qv4di */
                  if (const0_operand (operands[2], E_V4DImode)
                      && vector_all_ones_operand (operands[3], E_V4DImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5234; /* *avx512vl_cvtmask2qv4di_not */
                }
              break;

            case E_V2DImode:
              if (register_operand (operands[0], E_V2DImode)
                  && GET_MODE (x2) == E_V2DImode
                  && register_operand (operands[1], E_QImode))
                {
                  if (vector_all_ones_operand (operands[2], E_V2DImode)
                      && const0_operand (operands[3], E_V2DImode)
                      && (
#line 10329 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5223; /* *avx512vl_cvtmask2qv2di */
                  if (const0_operand (operands[2], E_V2DImode)
                      && vector_all_ones_operand (operands[3], E_V2DImode)
                      && (
#line 10355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 5235; /* *avx512vl_cvtmask2qv2di_not */
                }
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x3;
  switch (pattern318 (x2))
    {
    case 0:
      if (!(
#line 4171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3249; /* *avx_cmpv8sf3_3 */

    case 1:
      if (!
#line 4171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 3250; /* *avx_cmpv4sf3_3 */

    case 2:
      if (!(
#line 4171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3251; /* *avx_cmpv4df3_3 */

    case 3:
      if (!(
#line 4171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3252; /* *avx_cmpv2df3_3 */

    case 4:
      if (!(
#line 4192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3253; /* *avx_cmpv8sf3_4 */

    case 5:
      if (!
#line 4192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
        return -1;
      return 3254; /* *avx_cmpv4sf3_4 */

    case 6:
      if (!(
#line 4192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 3255; /* *avx_cmpv4df3_4 */

    case 7:
      if (!(
#line 4192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3256; /* *avx_cmpv2df3_4 */

    default:
      return -1;
    }
}

 int
recog_199 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern136 (x2))
    {
    case 0:
      if (pattern774 (x2, 
E_V8HImode, 
E_QImode, 
E_V8HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4613; /* avx512fp16_fixuns_truncv8hi2_mask */

    case 1:
      if (pattern774 (x2, 
E_V16HImode, 
E_HImode, 
E_V16HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 4620; /* avx512fp16_fixuns_truncv16hi2_mask */

    case 2:
      if (pattern774 (x2, 
E_V32HImode, 
E_SImode, 
E_V32HFmode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 693 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4628; /* avx512fp16_fixuns_truncv32hi2_mask */

    case 3:
      switch (pattern896 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4636; /* avx512fp16_fixuns_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5042; /* fixuns_truncv8dfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9926 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 5160; /* fixuns_truncv8sfv8si2_mask */

        default:
          return -1;
        }

    case 4:
      switch (pattern895 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4644; /* avx512fp16_fixuns_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4889; /* fixuns_truncv16sfv16si2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern896 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4652; /* avx512fp16_fixuns_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5087; /* fixuns_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5140; /* fixuns_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern773 (x2, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4HFmode:
          if (!memory_operand (operands[1], E_V4HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4677; /* *avx512fp16_fixuns_truncv4si2_load_mask */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512F)))
            return -1;
          return 5060; /* fixuns_truncv4dfv4si2_mask */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9926 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5162; /* fixuns_truncv4sfv4si2_mask */

        default:
          return -1;
        }

    case 7:
      switch (pattern897 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4681; /* *avx512fp16_fixuns_truncv4di2_load_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5095; /* fixuns_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5144; /* fixuns_truncv4sfv4di2_mask */

        default:
          return -1;
        }

    case 8:
      switch (pattern898 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4693; /* *avx512fp16_fixuns_truncv2di2_load_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5100; /* fixuns_truncv2dfv2di2_mask */

        default:
          return -1;
        }

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4669; /* avx512fp16_fixuns_truncv4si2_mask */

    case 10:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4673; /* avx512fp16_fixuns_truncv4di2_mask */

    case 11:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7968 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4689; /* avx512fp16_fixuns_truncv2di2_mask */

    case 12:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9778 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 5152; /* avx512dq_fixuns_truncv2sfv2di2_mask */

    default:
      return -1;
    }
}

 int
recog_206 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern321 (x2))
    {
    case 0:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x2) != E_V32HImode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4426; /* avx512fp16_vcvtph2w_v32hi */

    case 1:
      switch (pattern641 (x2, 
E_V16SImode))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4434; /* avx512fp16_vcvtph2dq_v16si */

        case 1:
          if (!
#line 8708 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4841; /* avx512f_fix_notruncv16sfv16si */

        default:
          return -1;
        }

    case 2:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4442; /* avx512fp16_vcvtph2qq_v8di */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 8729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4855; /* *avx512dq_cvtps2qqv8di */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5101; /* fix_notruncv8dfv8di2 */

        default:
          return -1;
        }

    case 3:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4450; /* avx512fp16_vcvtph2w_v16hi */

    case 4:
      switch (pattern640 (x2))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4458; /* avx512fp16_vcvtph2dq_v8si */

        case 1:
          if (!(
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 4835; /* avx_fix_notruncv8sfv8si */

        case 2:
          if (!
#line 9411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5005; /* avx512f_cvtpd2dq512 */

        default:
          return -1;
        }

    case 5:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4466; /* avx512fp16_vcvtph2qq_v4di */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 8729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4859; /* *avx512dq_cvtps2qqv4di */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5105; /* fix_notruncv4dfv4di2 */

        default:
          return -1;
        }

    case 6:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4472; /* avx512fp16_vcvtph2w_v8hi */

    case 7:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4476; /* avx512fp16_vcvtph2dq_v4si */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8692 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 4839; /* sse2_fix_notruncv4sfv4si */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !
#line 9421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5009; /* avx_cvtpd2dq256 */

        default:
          return -1;
        }

    case 8:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4480; /* avx512fp16_vcvtph2qq_v2di */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 9723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5109; /* fix_notruncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 8742 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 4863; /* *avx512dq_cvtps2qqv2di */

    default:
      return -1;
    }
}

 int
recog_220 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  switch (XINT (x4, 1))
    {
    case 63:
      switch (pattern912 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 3070; /* ieee_maxv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 3078; /* ieee_maxv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3090; /* ieee_maxv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3098; /* ieee_maxv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3110; /* ieee_maxv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3118; /* ieee_maxv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3159; /* avx512fp16_ieee_vmmaxv8hf3_round */

        case 7:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3167; /* sse_ieee_vmmaxv4sf3_round */

        case 8:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3175; /* sse2_ieee_vmmaxv2df3_round */

        default:
          return -1;
        }

    case 62:
      switch (pattern912 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 3074; /* ieee_minv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 3082; /* ieee_minv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3094; /* ieee_minv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3102; /* ieee_minv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (64 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 3114; /* ieee_minv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (32 == 64 || TARGET_AVX512VL)
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
(TARGET_AVX)))))
            return -1;
          return 3122; /* ieee_minv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3163; /* avx512fp16_ieee_vmminv8hf3_round */

        case 7:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3171; /* sse_ieee_vmminv4sf3_round */

        case 8:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3179; /* sse2_ieee_vmminv2df3_round */

        default:
          return -1;
        }

    case 192:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1551 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && ((V32HFmode == V16SFmode
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
          return 3198; /* reducepv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1551 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && ((V16HFmode == V16SFmode
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
          return 3202; /* reducepv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1551 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && ((V16SFmode == V16SFmode
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
          return 3208; /* reducepv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1551 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && ((V8SFmode == V16SFmode
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
          return 3212; /* reducepv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1551 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && ((V8DFmode == V16SFmode
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
          return 3218; /* reducepv8df_mask_round */

        case E_V4DFmode:
          if (pattern1551 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && ((V4DFmode == V16SFmode
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
          return 3222; /* reducepv4df_mask_round */

        default:
          return -1;
        }

    case 221:
      switch (pattern914 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4385; /* avx512bw_fmulc_v32hf_mask_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4393; /* avx512vl_fmulc_v16hf_mask_round */

        case 2:
          if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4415; /* avx512fp16_fmulcsh_v8hf_round */

        default:
          return -1;
        }

    case 222:
      switch (pattern914 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V32HFmode == V16SFmode
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
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))))
            return -1;
          return 4389; /* avx512bw_fcmulc_v32hf_mask_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 106 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ((V16HFmode == V16SFmode
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
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))))
            return -1;
          return 4397; /* avx512vl_fcmulc_v16hf_mask_round */

        case 2:
          if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4419; /* avx512fp16_fcmulcsh_v8hf_round */

        default:
          return -1;
        }

    case 58:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x9 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x9, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          operands[3] = x9;
          switch (pattern1406 (x2))
            {
            case 0:
              if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 5422; /* avx512f_vmscalefv8hf_round */

            case 1:
              if (!
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 5426; /* avx512f_vmscalefv4sf_round */

            case 2:
              if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13625 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 5430; /* avx512f_vmscalefv2df_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[4] = x8;
          x7 = XEXP (x3, 1);
          operands[3] = x7;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1552 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5436; /* avx512bw_scalefv32hf_mask_round */

            case E_V16HFmode:
              if (pattern1552 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5440; /* avx512vl_scalefv16hf_mask_round */

            case E_V16SFmode:
              if (pattern1552 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5446; /* avx512f_scalefv16sf_mask_round */

            case E_V8SFmode:
              if (pattern1552 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5450; /* avx512vl_scalefv8sf_mask_round */

            case E_V8DFmode:
              if (pattern1552 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5456; /* avx512f_scalefv8df_mask_round */

            case E_V4DFmode:
              if (pattern1552 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 13636 "../../src/gcc/config/i386/sse.md"
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
              return 5460; /* avx512vl_scalefv4df_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 165:
      x8 = XEXP (x3, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x9 = XVECEXP (x2, 0, 1);
      operands[3] = x9;
      if (!const48_operand (operands[3], E_SImode))
        return -1;
      switch (pattern1406 (x2))
        {
        case 0:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 7073; /* avx512f_sgetexpv8hf_round */

        case 1:
          if (!
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
            return -1;
          return 7077; /* avx512f_sgetexpv4sf_round */

        case 2:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14058 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 7081; /* avx512f_sgetexpv2df_round */

        default:
          return -1;
        }

    case 94:
      x6 = XVECEXP (x4, 0, 1);
      if (!const_0_to_255_operand (x6, E_SImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[4] = x8;
          x5 = XVECEXP (x4, 0, 0);
          operands[1] = x5;
          operands[2] = x6;
          x7 = XEXP (x3, 1);
          operands[3] = x7;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1553 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7148; /* avx512bw_rndscalev32hf_mask_round */

            case E_V16HFmode:
              if (pattern1553 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7152; /* avx512vl_rndscalev16hf_mask_round */

            case E_V16SFmode:
              if (pattern1553 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7158; /* avx512f_rndscalev16sf_mask_round */

            case E_V8SFmode:
              if (pattern1553 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7162; /* avx512vl_rndscalev8sf_mask_round */

            case E_V8DFmode:
              if (pattern1553 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7168; /* avx512f_rndscalev8df_mask_round */

            case E_V4DFmode:
              if (pattern1553 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
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
              return 7172; /* avx512vl_rndscalev4df_mask_round */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          x5 = XVECEXP (x4, 0, 0);
          operands[2] = x5;
          operands[3] = x6;
          x7 = XEXP (x3, 1);
          operands[1] = x7;
          operands[4] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1586 (x2, 
E_V8HFmode) != 0
                  || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 7177; /* avx512f_rndscalev8hf_round */

            case E_V4SFmode:
              if (pattern1586 (x2, 
E_V4SFmode) != 0
                  || !
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 7181; /* avx512f_rndscalev4sf_round */

            case E_V2DFmode:
              if (pattern1586 (x2, 
E_V2DFmode) != 0
                  || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 7185; /* avx512f_rndscalev2df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 150:
      if (GET_MODE (x4) != E_V16HImode
          || !register_operand (operands[0], E_V16HImode)
          || GET_MODE (x2) != E_V16HImode
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!nonimm_or_0_operand (operands[3], E_V16HImode))
        return -1;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode)
          || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29231 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9672; /* avx512f_vcvtps2ph512_mask_round */

    case 166:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x9 = XVECEXP (x2, 0, 1);
      operands[5] = x9;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1553 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10018; /* avx512bw_getmantv32hf_mask_round */

        case E_V16HFmode:
          if (pattern1553 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10022; /* avx512vl_getmantv16hf_mask_round */

        case E_V16SFmode:
          if (pattern1553 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10028; /* avx512f_getmantv16sf_mask_round */

        case E_V8SFmode:
          if (pattern1553 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10032; /* avx512vl_getmantv8sf_mask_round */

        case E_V8DFmode:
          if (pattern1553 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10038; /* avx512f_getmantv8df_mask_round */

        case E_V4DFmode:
          if (pattern1553 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
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
          return 10042; /* avx512vl_getmantv4df_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_238 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x3) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V32HFmode))) && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3195; /* *reducepv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16HFmode))) && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3199; /* *reducepv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3203; /* *reducepv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x3) != E_V16SFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V16SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3205; /* *reducepv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3209; /* *reducepv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode))) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3213; /* *reducepv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x3) != E_V8DFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3215; /* *reducepv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3219; /* *reducepv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !(
#line 4024 "../../src/gcc/config/i386/sse.md"
((TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3223; /* *reducepv2df */

    default:
      return -1;
    }
}

 int
recog_241 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[2] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (pattern786 (x3, 
E_V4SFmode, 
E_V4SImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9489; /* avx_maskloadps */

    case E_V2DFmode:
      if (pattern786 (x3, 
E_V2DFmode, 
E_V2DImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9490; /* avx_maskloadpd */

    case E_V4DImode:
      if (pattern787 (x3, 
E_V4DImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9491; /* avx2_maskloadq256 */

    case E_V2DImode:
      if (pattern787 (x3, 
E_V2DImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9492; /* avx2_maskloadq */

    case E_V8SFmode:
      if (pattern786 (x3, 
E_V8SFmode, 
E_V8SImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9493; /* avx_maskloadps256 */

    case E_V4DFmode:
      if (pattern786 (x3, 
E_V4DFmode, 
E_V4DImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9494; /* avx_maskloadpd256 */

    case E_V8SImode:
      if (pattern787 (x3, 
E_V8SImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9495; /* avx2_maskloadd256 */

    case E_V4SImode:
      if (pattern787 (x3, 
E_V4SImode) != 0
          || !
#line 28634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9496; /* avx2_maskloadd */

    default:
      return -1;
    }
}

 int
recog_243 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
    case E_V32QImode:
      if (pattern150 (x3, 
E_V32QImode) != 0
          || !(
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 752 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8635; /* avx2_psignv32qi3 */

    case E_V16QImode:
      if (pattern150 (x3, 
E_V16QImode) != 0
          || !
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8636; /* ssse3_psignv16qi3 */

    case E_V16HImode:
      if (pattern150 (x3, 
E_V16HImode) != 0
          || !(
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 753 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8637; /* avx2_psignv16hi3 */

    case E_V8HImode:
      if (pattern150 (x3, 
E_V8HImode) != 0
          || !
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8638; /* ssse3_psignv8hi3 */

    case E_V8SImode:
      if (pattern150 (x3, 
E_V8SImode) != 0
          || !(
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 754 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 8639; /* avx2_psignv8si3 */

    case E_V4SImode:
      if (pattern150 (x3, 
E_V4SImode) != 0
          || !
#line 23197 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 8640; /* ssse3_psignv4si3 */

    default:
      return -1;
    }
}

 int
recog_247 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && (
#line 6403 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4090; /* *fma_fmaddsub_v8sf */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !vector_operand (operands[2], E_V8SFmode)
              || !vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4108; /* *fma_fmaddsub_v8sf */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6403 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 4091; /* *fma_fmaddsub_v4sf */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !vector_operand (operands[2], E_V4SFmode)
              || !vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4112; /* *fma_fmaddsub_v4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && (
#line 6403 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4092; /* *fma_fmaddsub_v4df */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !vector_operand (operands[2], E_V4DFmode)
              || !vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4118; /* *fma_fmaddsub_v4df */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && (
#line 6403 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 4093; /* *fma_fmaddsub_v2df */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !vector_operand (operands[2], E_V2DFmode)
              || !vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4122; /* *fma_fmaddsub_v2df */

        case E_V32HFmode:
          if (pattern665 (x3, 
E_V32HFmode) != 0
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4094; /* *fma_fmaddsub_v32hf */

        case E_V16HFmode:
          if (pattern665 (x3, 
E_V16HFmode) != 0
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4098; /* *fma_fmaddsub_v16hf */

        case E_V8HFmode:
          if (pattern665 (x3, 
E_V8HFmode) != 0
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4102; /* *fma_fmaddsub_v8hf */

        case E_V16SFmode:
          if (pattern665 (x3, 
E_V16SFmode) != 0
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4104; /* *fma_fmaddsub_v16sf */

        case E_V8DFmode:
          if (pattern665 (x3, 
E_V8DFmode) != 0
              || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4114; /* *fma_fmaddsub_v8df */

        default:
          return -1;
        }

    case NEG:
      x7 = XEXP (x6, 0);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode
              || GET_MODE (x6) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && (
#line 6472 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4154; /* *fma_fmsubadd_v8sf */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !vector_operand (operands[2], E_V8SFmode)
              || !vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4172; /* *fma_fmsubadd_v8sf */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || GET_MODE (x6) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6472 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 4155; /* *fma_fmsubadd_v4sf */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !vector_operand (operands[2], E_V4SFmode)
              || !vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4176; /* *fma_fmsubadd_v4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode
              || GET_MODE (x6) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && (
#line 6472 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 4156; /* *fma_fmsubadd_v4df */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !vector_operand (operands[2], E_V4DFmode)
              || !vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4182; /* *fma_fmsubadd_v4df */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode
              || GET_MODE (x6) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && (
#line 6472 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 4157; /* *fma_fmsubadd_v2df */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !vector_operand (operands[2], E_V2DFmode)
              || !vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4186; /* *fma_fmsubadd_v2df */

        case E_V32HFmode:
          if (pattern1026 (x3, 
E_V32HFmode) != 0
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4158; /* *fma_fmsubadd_v32hf */

        case E_V16HFmode:
          if (pattern1026 (x3, 
E_V16HFmode) != 0
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4162; /* *fma_fmsubadd_v16hf */

        case E_V8HFmode:
          if (pattern1026 (x3, 
E_V8HFmode) != 0
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4166; /* *fma_fmsubadd_v8hf */

        case E_V16SFmode:
          if (pattern1026 (x3, 
E_V16SFmode) != 0
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4168; /* *fma_fmsubadd_v16sf */

        case E_V8DFmode:
          if (pattern1026 (x3, 
E_V8DFmode) != 0
              || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4178; /* *fma_fmsubadd_v8df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_249 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1028 (x3, 
E_HImode, 
E_V16SImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9927; /* expandv16si_mask */

        case E_V16SFmode:
          if (pattern1028 (x3, 
E_HImode, 
E_V16SFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9928; /* expandv16sf_mask */

        case E_V8DImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V8DImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9929; /* expandv8di_mask */

        case E_V8DFmode:
          if (pattern1028 (x3, 
E_QImode, 
E_V8DFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9930; /* expandv8df_mask */

        case E_V8SImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V8SImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9931; /* expandv8si_mask */

        case E_V8SFmode:
          if (pattern1028 (x3, 
E_QImode, 
E_V8SFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9932; /* expandv8sf_mask */

        case E_V4DImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V4DImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9933; /* expandv4di_mask */

        case E_V4DFmode:
          if (pattern1028 (x3, 
E_QImode, 
E_V4DFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9934; /* expandv4df_mask */

        case E_V4SImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V4SImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9935; /* expandv4si_mask */

        case E_V4SFmode:
          if (pattern1028 (x3, 
E_QImode, 
E_V4SFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9936; /* expandv4sf_mask */

        case E_V2DImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V2DImode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9937; /* expandv2di_mask */

        case E_V2DFmode:
          if (pattern1028 (x3, 
E_QImode, 
E_V2DFmode) != 0
              || !(
#line 29731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9938; /* expandv2df_mask */

        case E_V64QImode:
          if (pattern1028 (x3, 
E_DImode, 
E_V64QImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9939; /* expandv64qi_mask */

        case E_V16QImode:
          if (pattern1028 (x3, 
E_HImode, 
E_V16QImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9940; /* expandv16qi_mask */

        case E_V32QImode:
          if (pattern1028 (x3, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9941; /* expandv32qi_mask */

        case E_V32HImode:
          if (pattern1028 (x3, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9942; /* expandv32hi_mask */

        case E_V16HImode:
          if (pattern1028 (x3, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9943; /* expandv16hi_mask */

        case E_V8HImode:
          if (pattern1028 (x3, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 29745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9944; /* expandv8hi_mask */

        default:
          return -1;
        }

    case CONST_INT:
      switch (pattern918 (x3))
        {
        case 0:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && 
#line 1016 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9945; /* *expandv16si_mask */

        case 1:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && 
#line 1017 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9946; /* *expandv16sf_mask */

        case 2:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && 
#line 1018 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9947; /* *expandv8di_mask */

        case 3:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && 
#line 1019 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9948; /* *expandv8df_mask */

        case 4:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && 
#line 1020 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9949; /* *expandv8si_mask */

        case 5:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && 
#line 1020 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9950; /* *expandv8sf_mask */

        case 6:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && 
#line 1021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9951; /* *expandv4di_mask */

        case 7:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && 
#line 1021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9952; /* *expandv4df_mask */

        case 8:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && 
#line 1022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9953; /* *expandv4si_mask */

        case 9:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && 
#line 1022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9954; /* *expandv4sf_mask */

        case 10:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && 
#line 1023 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9955; /* *expandv2di_mask */

        case 11:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && 
#line 1023 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9956; /* *expandv2df_mask */

        case 12:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9957; /* *expandv64qi_mask */

        case 13:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9958; /* *expandv16qi_mask */

        case 14:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9959; /* *expandv32qi_mask */

        case 15:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9960; /* *expandv32hi_mask */

        case 16:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9961; /* *expandv16hi_mask */

        case 17:
          if (!(
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9962; /* *expandv8hi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_256 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern174 (x1))
    {
    case 0:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10249; /* vpshldv_v32hi */

    case 1:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10250; /* vpshldv_v16si */

    case 2:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10251; /* vpshldv_v8di */

    case 3:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10252; /* vpshldv_v16hi */

    case 4:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10253; /* vpshldv_v8si */

    case 5:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10254; /* vpshldv_v4di */

    case 6:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10255; /* vpshldv_v8hi */

    case 7:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10256; /* vpshldv_v4si */

    case 8:
      if (!(
#line 30488 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10257; /* vpshldv_v2di */

    default:
      return -1;
    }
}

 int
recog_261 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
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
  if (!const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (pattern152 (x3, 
E_V8SFmode) != 0
          || !(
#line 23768 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8717; /* avx_dpps256 */

    case E_V4SFmode:
      if (pattern152 (x3, 
E_V4SFmode) != 0
          || !
#line 23768 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8718; /* sse4_1_dpps */

    case E_V4DFmode:
      if (pattern152 (x3, 
E_V4DFmode) != 0
          || !(
#line 23768 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8719; /* avx_dppd256 */

    case E_V2DFmode:
      if (pattern152 (x3, 
E_V2DFmode) != 0
          || !(
#line 23768 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 8720; /* sse4_1_dppd */

    default:
      return -1;
    }
}

 int
recog_265 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 51:
      return recog_248 (x1, insn, pnum_clobbers);

    case 59:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!cmpps_imm_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern61 (x2, 
E_V8SFmode) != 0
              || !(
#line 4096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3237; /* avx_cmpv8sf3 */

        case E_V4SFmode:
          if (pattern61 (x2, 
E_V4SFmode) != 0
              || !
#line 4096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3238; /* avx_cmpv4sf3 */

        case E_V4DFmode:
          if (pattern61 (x2, 
E_V4DFmode) != 0
              || !(
#line 4096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3239; /* avx_cmpv4df3 */

        case E_V2DFmode:
          if (pattern61 (x2, 
E_V2DFmode) != 0
              || !(
#line 4096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3240; /* avx_cmpv2df3 */

        default:
          return -1;
        }

    case 133:
      return recog_247 (x1, insn, pnum_clobbers);

    case 217:
      return recog_263 (x1, insn, pnum_clobbers);

    case 219:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (pattern666 (x2))
        {
        case 0:
          if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4332; /* fma_fcmaddc_v32hf */
          break;

        case 1:
          if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4340; /* fma_fcmaddc_v16hf */
          break;

        case 2:
          if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4346; /* fma_fcmaddc_v8hf */
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0))
        return -1;
      switch (pattern592 (x2))
        {
        case 0:
          if (!(
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4369; /* fma_v32hf_fcmaddc_bcst */

        case 1:
          if (!(
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4370; /* fma_v16hf_fcmaddc_bcst */

        case 2:
          if (!(
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4371; /* fma_v8hf_fcmaddc_bcst */

        default:
          return -1;
        }

    case 218:
      switch (pattern167 (x1))
        {
        case 0:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4360; /* fma_fmaddc_v16sf_pair */

        case 1:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4362; /* fma_fmaddc_v8sf_pair */

        case 2:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4364; /* fma_fmaddc_v4sf_pair */

        default:
          return -1;
        }

    case 220:
      switch (pattern167 (x1))
        {
        case 0:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4361; /* fma_fcmaddc_v16sf_pair */

        case 1:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4363; /* fma_fcmaddc_v8sf_pair */

        case 2:
          if (!(
#line 7225 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4365; /* fma_fcmaddc_v4sf_pair */

        default:
          return -1;
        }

    case 50:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[2] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[1] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          if (pattern969 (x2, 
E_V4SImode) != 0
              || !
#line 12243 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 5335; /* sse4_1_insertps_v4si */

        case E_V4SFmode:
          if (pattern969 (x2, 
E_V4SFmode) != 0
              || !
#line 12243 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 5336; /* sse4_1_insertps_v4sf */

        default:
          return -1;
        }

    case 167:
      return recog_255 (x1, insn, pnum_clobbers);

    case 155:
      return recog_250 (x1, insn, pnum_clobbers);

    case 47:
      return recog_246 (x1, insn, pnum_clobbers);

    case 121:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_mul_8_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4TImode:
          if (pattern150 (x2, 
E_V4TImode) != 0
              || !(
#line 23254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 725 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8647; /* avx512bw_palignrv4ti */

        case E_V2TImode:
          if (pattern150 (x2, 
E_V2TImode) != 0
              || !(
#line 23254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 725 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8648; /* avx2_palignrv2ti */

        case E_V1TImode:
          if (pattern150 (x2, 
E_V1TImode) != 0
              || !
#line 23254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8649; /* ssse3_palignrv1ti */

        default:
          return -1;
        }

    case 122:
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_VOIDmode)
          || !
#line 23448 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8679; /* sse4a_extrqi */

    case 126:
      return recog_261 (x1, insn, pnum_clobbers);

    case 128:
      return recog_262 (x1, insn, pnum_clobbers);

    case 53:
      if (pattern63 (x1, 
E_V16QImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_V16QImode)
          || !
#line 26496 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9032; /* xop_pperm */

    case 135:
      return recog_260 (x1, insn, pnum_clobbers);

    case 143:
      if (pattern158 (x1, 
E_V2DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode)
          || !
#line 27209 "../../src/gcc/config/i386/sse.md"
(TARGET_PCLMUL))
        return -1;
      return 9091; /* pclmulqdq */

    case 152:
      if (pattern63 (x1, 
E_V4DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode)
          || !
#line 27666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
        return -1;
      return 9181; /* avx2_permv2ti */

    case 146:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SImode:
          if (pattern61 (x2, 
E_V8SImode) != 0
              || !
#line 28319 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9451; /* *avx_vperm2f128v8si_full */

        case E_V8SFmode:
          if (pattern61 (x2, 
E_V8SFmode) != 0
              || !
#line 28319 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9452; /* *avx_vperm2f128v8sf_full */

        case E_V4DFmode:
          if (pattern61 (x2, 
E_V4DFmode) != 0
              || !
#line 28319 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9453; /* *avx_vperm2f128v4df_full */

        default:
          return -1;
        }

    case 153:
      return recog_245 (x1, insn, pnum_clobbers);

    case 169:
      return recog_252 (x1, insn, pnum_clobbers);

    case 170:
      return recog_251 (x1, insn, pnum_clobbers);

    case 171:
      return recog_249 (x1, insn, pnum_clobbers);

    case 194:
      return recog_254 (x1, insn, pnum_clobbers);

    case 186:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern161 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10057; /* *avx512bw_dbpsadbwv8hi */

        case E_V16HImode:
          if (pattern161 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10059; /* *avx512bw_dbpsadbwv16hi */

        case E_V32HImode:
          if (pattern161 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 29937 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10061; /* *avx512bw_dbpsadbwv32hi */

        default:
          return -1;
        }

    case 182:
      if (pattern158 (x1, 
E_V4SImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_3_operand (operands[3], E_SImode)
          || !
#line 30005 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10090; /* sha1rnds4 */

    case 185:
      if (pattern158 (x1, 
E_V4SImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!register_operand (operands[3], E_V4SImode)
          || !
#line 30040 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10093; /* sha256rnds2 */

    case 224:
      if (pattern169 (x1) != 0
          || !
#line 30053 "../../src/gcc/config/i386/sse.md"
(TARGET_SM3))
        return -1;
      return 10094; /* vsm3msg1 */

    case 225:
      if (pattern169 (x1) != 0
          || !
#line 30065 "../../src/gcc/config/i386/sse.md"
(TARGET_SM3))
        return -1;
      return 10095; /* vsm3msg2 */

    case 241:
      if (pattern157 (x1, 
E_V4DImode) != 0)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!register_operand (operands[3], E_V2DImode)
          || !
#line 30113 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10099; /* vsha512rnds2 */

    case 195:
      switch (pattern171 (x1))
        {
        case 0:
          if (!
#line 30222 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA && TARGET_EVEX512))
            return -1;
          return 10112; /* vpmadd52luqv8di */

        case 1:
          if (!(
#line 30235 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10114; /* vpmadd52luqv4di */

        case 2:
          if (!
#line 30235 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)))
            return -1;
          return 10116; /* vpmadd52luqv2di */

        default:
          return -1;
        }

    case 196:
      switch (pattern171 (x1))
        {
        case 0:
          if (!
#line 30222 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512IFMA && TARGET_EVEX512))
            return -1;
          return 10113; /* vpmadd52huqv8di */

        case 1:
          if (!(
#line 30235 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10115; /* vpmadd52huqv4di */

        case 2:
          if (!
#line 30235 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXIFMA || (TARGET_AVX512IFMA && TARGET_AVX512VL)))
            return -1;
          return 10117; /* vpmadd52huqv2di */

        default:
          return -1;
        }

    case 198:
      switch (pattern172 (x1))
        {
        case 0:
          if (!(
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10168; /* vgf2p8affineinvqb_v64qi */

        case 1:
          if (!(
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10170; /* vgf2p8affineinvqb_v32qi */

        case 2:
          if (!
#line 30359 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10172; /* vgf2p8affineinvqb_v16qi */

        default:
          return -1;
        }

    case 199:
      switch (pattern172 (x1))
        {
        case 0:
          if (!(
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10174; /* vgf2p8affineqb_v64qi */

        case 1:
          if (!(
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10176; /* vgf2p8affineqb_v32qi */

        case 2:
          if (!
#line 30376 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10178; /* vgf2p8affineqb_v16qi */

        default:
          return -1;
        }

    case 202:
      return recog_259 (x1, insn, pnum_clobbers);

    case 201:
      return recog_257 (x1, insn, pnum_clobbers);

    case 203:
      return recog_258 (x1, insn, pnum_clobbers);

    case 204:
      return recog_256 (x1, insn, pnum_clobbers);

    case 205:
      switch (pattern175 (x1))
        {
        case 0:
          if (!
#line 30593 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10276; /* vpdpbusd_v16si */

        case 1:
          if (!(
#line 30604 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 668 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10277; /* vpdpbusd_v8si */

        case 2:
          if (!
#line 30604 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10278; /* vpdpbusd_v4si */

        default:
          return -1;
        }

    case 206:
      switch (pattern175 (x1))
        {
        case 0:
          if (!
#line 30662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10285; /* vpdpbusds_v16si */

        case 1:
          if (!(
#line 30673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 668 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10286; /* vpdpbusds_v8si */

        case 2:
          if (!
#line 30673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10287; /* vpdpbusds_v4si */

        default:
          return -1;
        }

    case 207:
      switch (pattern175 (x1))
        {
        case 0:
          if (!
#line 30731 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10294; /* vpdpwssd_v16si */

        case 1:
          if (!(
#line 30742 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 668 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10295; /* vpdpwssd_v8si */

        case 2:
          if (!
#line 30742 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10296; /* vpdpwssd_v4si */

        default:
          return -1;
        }

    case 208:
      switch (pattern175 (x1))
        {
        case 0:
          if (!
#line 30800 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VNNI && TARGET_EVEX512))
            return -1;
          return 10303; /* vpdpwssds_v16si */

        case 1:
          if (!(
#line 30811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)) && 
#line 668 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 10304; /* vpdpwssds_v8si */

        case 2:
          if (!
#line 30811 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNI || (TARGET_AVX512VNNI && TARGET_AVX512VL)))
            return -1;
          return 10305; /* vpdpwssds_v4si */

        default:
          return -1;
        }

    case 213:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern150 (x2, 
E_V8DImode) != 0
              || !(
#line 30924 "../../src/gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ) && 
#line 620 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10324; /* vpclmulqdq_v8di */

        case E_V4DImode:
          if (pattern150 (x2, 
E_V4DImode) != 0
              || !
#line 30924 "../../src/gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ))
            return -1;
          return 10325; /* vpclmulqdq_v4di */

        case E_V2DImode:
          if (pattern150 (x2, 
E_V2DImode) != 0
              || !(
#line 30924 "../../src/gcc/config/i386/sse.md"
(TARGET_VPCLMULQDQ) && 
#line 620 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10326; /* vpclmulqdq_v2di */

        default:
          return -1;
        }

    case 216:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern919 (x2, 
E_V32BFmode, 
E_V16SFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10354; /* avx512f_dpbf16ps_v16sf */

        case E_V8SFmode:
          if (pattern919 (x2, 
E_V16BFmode, 
E_V8SFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10356; /* avx512f_dpbf16ps_v8sf */

        case E_V4SFmode:
          if (pattern919 (x2, 
E_V8BFmode, 
E_V4SFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10358; /* avx512f_dpbf16ps_v4sf */

        default:
          return -1;
        }

    case 227:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10374; /* vpdpbssd_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10380; /* vpdpbssd_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10386; /* vpdpbssd_v16si */

        default:
          return -1;
        }

    case 228:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10375; /* vpdpbssds_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10381; /* vpdpbssds_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10387; /* vpdpbssds_v16si */

        default:
          return -1;
        }

    case 229:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10376; /* vpdpbsud_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10382; /* vpdpbsud_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10388; /* vpdpbsud_v16si */

        default:
          return -1;
        }

    case 230:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10377; /* vpdpbsuds_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10383; /* vpdpbsuds_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10389; /* vpdpbsuds_v16si */

        default:
          return -1;
        }

    case 231:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10378; /* vpdpbuud_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10384; /* vpdpbuud_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10390; /* vpdpbuud_v16si */

        default:
          return -1;
        }

    case 232:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10379; /* vpdpbuuds_v8si */

        case 1:
          if (!
#line 31574 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT8 || TARGET_AVX10_2_256))
            return -1;
          return 10385; /* vpdpbuuds_v4si */

        case 2:
          if (!
#line 31585 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10391; /* vpdpbuuds_v16si */

        default:
          return -1;
        }

    case 233:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10528; /* vpdpwusd_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10534; /* vpdpwusd_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10540; /* vpdpwusd_v16si */

        default:
          return -1;
        }

    case 234:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10529; /* vpdpwusds_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10535; /* vpdpwusds_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10541; /* vpdpwusds_v16si */

        default:
          return -1;
        }

    case 235:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10530; /* vpdpwsud_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10536; /* vpdpwsud_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10542; /* vpdpwsud_v16si */

        default:
          return -1;
        }

    case 236:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10531; /* vpdpwsuds_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10537; /* vpdpwsuds_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10543; /* vpdpwsuds_v16si */

        default:
          return -1;
        }

    case 237:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10532; /* vpdpwuud_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10538; /* vpdpwuud_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10544; /* vpdpwuud_v16si */

        default:
          return -1;
        }

    case 238:
      switch (pattern176 (x1))
        {
        case 0:
          if (!(
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256) && 
#line 665 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10533; /* vpdpwuuds_v8si */

        case 1:
          if (!
#line 31983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXVNNIINT16 || TARGET_AVX10_2_256))
            return -1;
          return 10539; /* vpdpwuuds_v4si */

        case 2:
          if (!
#line 31994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
            return -1;
          return 10545; /* vpdpwuuds_v16si */

        default:
          return -1;
        }

    case 244:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern170 (x2, 
E_V16SFmode) != 0
              || !(
#line 32046 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10582; /* vdpphps_v16sf */

        case E_V8SFmode:
          if (pattern170 (x2, 
E_V8SFmode) != 0
              || !
#line 32046 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10583; /* vdpphps_v8sf */

        case E_V4SFmode:
          if (pattern170 (x2, 
E_V4SFmode) != 0
              || !
#line 32046 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10584; /* vdpphps_v4sf */

        default:
          return -1;
        }

    case 277:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!const_0_to_255_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1029 (x2, 
E_V32BFmode) != 0
              || !(
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10935; /* avx10_2_minmaxbf16_v32bf */

        case E_V16BFmode:
          if (pattern1029 (x2, 
E_V16BFmode) != 0
              || !
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10937; /* avx10_2_minmaxbf16_v16bf */

        case E_V8BFmode:
          if (pattern1029 (x2, 
E_V8BFmode) != 0
              || !
#line 32636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10939; /* avx10_2_minmaxbf16_v8bf */

        default:
          return -1;
        }

    case 278:
      return recog_253 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_287 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[2] = x4;
  res = recog_286 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (XWINT (x5, 0) != 1L
          || XWINT (x6, 0) != 2L
          || XWINT (x7, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !nonimmediate_operand (operands[1], E_V8DFmode)
              || !(
#line 12650 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5351; /* vec_extract_lo_v8df */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 12650 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5352; /* vec_extract_lo_v8di */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_V8SImode)
              || !
#line 12983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5375; /* vec_extract_lo_v8si */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 12983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5376; /* vec_extract_lo_v8sf */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x5, 0) != 5L
          || XWINT (x6, 0) != 6L
          || XWINT (x7, 0) != 7L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !register_operand (operands[1], E_V8DFmode)
              || !(
#line 12686 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5355; /* vec_extract_hi_v8df */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_V8DImode)
              || !(
#line 12686 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5356; /* vec_extract_hi_v8di */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_V8SImode)
              || !
#line 13015 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5379; /* vec_extract_hi_v8si */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !register_operand (operands[1], E_V8SFmode)
              || !
#line 13015 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5380; /* vec_extract_hi_v8sf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_294 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[6] = x4;
  res = recog_293 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x3, 0, 5);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x6 = XVECEXP (x3, 0, 6);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x7 = XVECEXP (x3, 0, 7);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern1415 (x3) != 0
      || !register_operand (operands[0], E_V16HImode)
      || GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], E_V16HImode)
      || pattern673 (x3) != 0)
    return -1;
  x8 = XVECEXP (x3, 0, 8);
  operands[6] = x8;
  if (!const_8_to_11_operand (operands[6], E_VOIDmode))
    return -1;
  x9 = XVECEXP (x3, 0, 9);
  operands[7] = x9;
  if (!const_8_to_11_operand (operands[7], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x3, 0, 10);
  operands[8] = x10;
  if (!const_8_to_11_operand (operands[8], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x3, 0, 11);
  operands[9] = x11;
  if (!const_8_to_11_operand (operands[9], E_VOIDmode)
      || !
#line 20793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])))
    return -1;
  return 8449; /* avx2_pshuflw_1 */
}

 int
recog_297 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode))
        {
          if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
              && 
#line 27373 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9158; /* *avx_vperm_broadcast_v4sf */
          if (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4SFmode)))
            return 9165; /* *avx_vpermilpv4sf */
        }
      if (!register_operand (operands[1], E_V4SFmode)
          || !palignr_operand (operands[2], E_VOIDmode)
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9463; /* *ssse3_palignrv4sf_perm */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
          && 
#line 27401 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)))
        return 9159; /* *avx_vperm_broadcast_v8sf */
      if (!(
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 9163; /* *avx_vpermilpv8sf */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      if (avx_vbroadcast_operand (operands[2], E_VOIDmode)
          && 
#line 27401 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)))
        return 9160; /* *avx_vperm_broadcast_v4df */
      if (!(
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 9169; /* *avx_vpermilpv4df */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V16SFmode)) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9161; /* *avx512f_vpermilpv16sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V8DFmode)) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9167; /* *avx512f_vpermilpv8df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && (
#line 27510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return 9171; /* *avx_vpermilpv2df */
      if (!register_operand (operands[1], E_V2DFmode)
          || !palignr_operand (operands[2], E_VOIDmode)
          || !(
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 342 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 9464; /* *ssse3_palignrv2df_perm */

    case E_V16QImode:
      if (pattern1143 (x2, 
E_V16QImode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9457; /* *ssse3_palignrv16qi_perm */

    case E_V8HImode:
      if (pattern1143 (x2, 
E_V8HImode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9458; /* *ssse3_palignrv8hi_perm */

    case E_V8HFmode:
      if (pattern1143 (x2, 
E_V8HFmode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9459; /* *ssse3_palignrv8hf_perm */

    case E_V8BFmode:
      if (pattern1143 (x2, 
E_V8BFmode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9460; /* *ssse3_palignrv8bf_perm */

    case E_V4SImode:
      if (pattern1143 (x2, 
E_V4SImode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9461; /* *ssse3_palignrv4si_perm */

    case E_V2DImode:
      if (pattern1143 (x2, 
E_V2DImode) != 0
          || !
#line 28362 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
        return -1;
      return 9462; /* *ssse3_palignrv2di_perm */

    default:
      return -1;
    }
}

 int
recog_307 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5534; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5561; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5588; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5615; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5642; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5669; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5696; /* *avx512f_vpternlogv16si_1 */

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
          return 5723; /* *avx512vl_vpternlogv8si_1 */

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
          return 5750; /* *avx512vl_vpternlogv4si_1 */

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
          return 5777; /* *avx512f_vpternlogv8di_1 */

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
          return 5804; /* *avx512vl_vpternlogv4di_1 */

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
          return 5831; /* *avx512vl_vpternlogv2di_1 */

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
          return 5537; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5564; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5591; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5618; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5645; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5672; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5699; /* *avx512f_vpternlogv16si_1 */

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
          return 5726; /* *avx512vl_vpternlogv8si_1 */

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
          return 5753; /* *avx512vl_vpternlogv4si_1 */

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
          return 5780; /* *avx512f_vpternlogv8di_1 */

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
          return 5807; /* *avx512vl_vpternlogv4di_1 */

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
          return 5834; /* *avx512vl_vpternlogv2di_1 */

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
          return 5540; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5567; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5594; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5621; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5648; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5675; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5702; /* *avx512f_vpternlogv16si_1 */

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
          return 5729; /* *avx512vl_vpternlogv8si_1 */

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
          return 5756; /* *avx512vl_vpternlogv4si_1 */

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
          return 5783; /* *avx512f_vpternlogv8di_1 */

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
          return 5810; /* *avx512vl_vpternlogv4di_1 */

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
          return 5837; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6824; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6833; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6842; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6851; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6860; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6869; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6878; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6887; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6896; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6905; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6914; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6923; /* *avx512vl_vpternlogv2di_3 */

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
          return 6182; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6209; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6236; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6263; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6290; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6317; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6344; /* *avx512f_vpternlogv16si_2 */

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
          return 6371; /* *avx512vl_vpternlogv8si_2 */

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
          return 6398; /* *avx512vl_vpternlogv4si_2 */

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
          return 6425; /* *avx512f_vpternlogv8di_2 */

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
          return 6452; /* *avx512vl_vpternlogv4di_2 */

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
          return 6479; /* *avx512vl_vpternlogv2di_2 */

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
          return 6185; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6212; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6239; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6266; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6293; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6320; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6347; /* *avx512f_vpternlogv16si_2 */

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
          return 6374; /* *avx512vl_vpternlogv8si_2 */

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
          return 6401; /* *avx512vl_vpternlogv4si_2 */

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
          return 6428; /* *avx512f_vpternlogv8di_2 */

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
          return 6455; /* *avx512vl_vpternlogv4di_2 */

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
          return 6482; /* *avx512vl_vpternlogv2di_2 */

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
          return 6188; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6215; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6242; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6269; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6296; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6323; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6350; /* *avx512f_vpternlogv16si_2 */

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
          return 6377; /* *avx512vl_vpternlogv8si_2 */

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
          return 6404; /* *avx512vl_vpternlogv4si_2 */

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
          return 6431; /* *avx512f_vpternlogv8di_2 */

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
          return 6458; /* *avx512vl_vpternlogv4di_2 */

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
          return 6485; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_316 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_VECTOR
      || XVECLEN (x5, 0) != 32
      || pattern1359 (x5, 
E_V32HImode) != 0)
    return -1;
  x6 = XVECEXP (x5, 0, 8);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x5, 0, 9);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x5, 0, 10);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x9 = XVECEXP (x5, 0, 11);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x10 = XVECEXP (x5, 0, 12);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x11 = XVECEXP (x5, 0, 13);
  if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x12 = XVECEXP (x5, 0, 14);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x5, 0, 15);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x14 = XVECEXP (x5, 0, 16);
  if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x15 = XVECEXP (x5, 0, 17);
  if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x16 = XVECEXP (x5, 0, 18);
  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x17 = XVECEXP (x5, 0, 19);
  if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x18 = XVECEXP (x5, 0, 20);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x19 = XVECEXP (x5, 0, 21);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x20 = XVECEXP (x5, 0, 22);
  if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x21 = XVECEXP (x5, 0, 23);
  if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x22 = XVECEXP (x5, 0, 24);
  if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x23 = XVECEXP (x5, 0, 25);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x24 = XVECEXP (x5, 0, 26);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x25 = XVECEXP (x5, 0, 27);
  if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x26 = XVECEXP (x5, 0, 28);
  if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x27 = XVECEXP (x5, 0, 29);
  if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x28 = XVECEXP (x5, 0, 30);
  if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x29 = XVECEXP (x5, 0, 31);
  if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V32HImode)
      || GET_MODE (x2) != E_V32HImode
      || GET_MODE (x3) != E_V32SImode
      || pattern1512 (x4, 
E_V32SImode) != 0)
    return -1;
  x30 = XEXP (x4, 0);
  x31 = XEXP (x30, 0);
  x32 = XEXP (x31, 1);
  if (GET_MODE (x32) != E_V32SImode)
    return -1;
  x33 = XEXP (x32, 0);
  operands[2] = x33;
  if (!nonimmediate_operand (operands[2], E_V32HImode)
      || !
#line 22840 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
    return -1;
  return 8616; /* avx512bw_umulhrswv32hi3 */
}

 int
recog_317 (rtx x1 ATTRIBUTE_UNUSED,
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
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (XINT (x2, 1))
        {
        case 177:
          return recog_216 (x1, insn, pnum_clobbers);

        case 118:
          if (pnum_clobbers == NULL
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[0], E_V4SImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 1877 "../../src/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC))
            return -1;
          *pnum_clobbers = 1;
          return 2558; /* movdi_to_sse */

        case 119:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V32QImode:
              if (!register_operand (operands[0], E_V32QImode)
                  || GET_MODE (x2) != E_V32QImode
                  || !memory_operand (operands[1], E_V32QImode)
                  || !(
#line 1985 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 2559; /* avx_lddqu256 */

            case E_V16QImode:
              if (!register_operand (operands[0], E_V16QImode)
                  || GET_MODE (x2) != E_V16QImode
                  || !memory_operand (operands[1], E_V16QImode)
                  || !
#line 1985 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 2560; /* sse3_lddqu */

            default:
              return -1;
            }

        case 117:
          return recog_211 (x1, insn, pnum_clobbers);

        case 54:
          return recog_214 (x1, insn, pnum_clobbers);

        case 161:
          switch (pattern320 (x2))
            {
            case 0:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2894; /* *rcp14v16sf */

            case 1:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2896; /* *rcp14v8sf */

            case 2:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2898; /* *rcp14v4sf */

            case 3:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2900; /* *rcp14v8df */

            case 4:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2902; /* *rcp14v4df */

            case 5:
              if (!(
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2904; /* *rcp14v2df */

            default:
              return -1;
            }

        case 55:
          return recog_213 (x1, insn, pnum_clobbers);

        case 162:
          switch (pattern320 (x2))
            {
            case 0:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2972; /* *rsqrt14v16sf */

            case 1:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2974; /* *rsqrt14v8sf */

            case 2:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2976; /* *rsqrt14v4sf */

            case 3:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 2978; /* *rsqrt14v8df */

            case 4:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2980; /* *rsqrt14v4df */

            case 5:
              if (!(
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 2982; /* *rsqrt14v2df */

            default:
              return -1;
            }

        case 156:
          return recog_209 (x1, insn, pnum_clobbers);

        case 46:
          return recog_206 (x1, insn, pnum_clobbers);

        case 172:
          return recog_210 (x1, insn, pnum_clobbers);

        case 173:
          return recog_212 (x1, insn, pnum_clobbers);

        case 165:
          return recog_208 (x1, insn, pnum_clobbers);

        case 127:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DImode:
              if (!register_operand (operands[0], E_V8DImode)
                  || GET_MODE (x2) != E_V8DImode
                  || !memory_operand (operands[1], E_V8DImode)
                  || !(
#line 23792 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 8721; /* avx512f_movntdqa */

            case E_V4DImode:
              if (!register_operand (operands[0], E_V4DImode)
                  || GET_MODE (x2) != E_V4DImode
                  || !memory_operand (operands[1], E_V4DImode)
                  || !(
#line 23792 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8722; /* avx2_movntdqa */

            case E_V2DImode:
              if (!register_operand (operands[0], E_V2DImode)
                  || GET_MODE (x2) != E_V2DImode
                  || !memory_operand (operands[1], E_V2DImode)
                  || !
#line 23792 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8723; /* sse4_1_movntdqa */

            default:
              return -1;
            }

        case 129:
          if (GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[0], E_V8HImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!vector_operand (operands[1], E_V8HImode)
              || !
#line 24117 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8756; /* sse4_1_phminposuw */

        case 136:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || !nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9059; /* xop_frczv4sf2 */

            case E_V2DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x2) != E_V2DFmode
                  || !nonimmediate_operand (operands[1], E_V2DFmode)
                  || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9060; /* xop_frczv2df2 */

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x2) != E_V8SFmode
                  || !nonimmediate_operand (operands[1], E_V8SFmode)
                  || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9061; /* xop_frczv8sf2 */

            case E_V4DFmode:
              if (!register_operand (operands[0], E_V4DFmode)
                  || GET_MODE (x2) != E_V4DFmode
                  || !nonimmediate_operand (operands[1], E_V4DFmode)
                  || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9062; /* xop_frczv4df2 */

            default:
              return -1;
            }

        case 134:
          x4 = XVECEXP (x2, 0, 0);
          switch (GET_CODE (x4))
            {
            case NE:
            case EQ:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
              operands[1] = x4;
              x5 = XEXP (x4, 0);
              operands[2] = x5;
              x6 = XEXP (x4, 1);
              operands[3] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_V16QImode:
                  if (pattern1017 (x2, 
E_V16QImode) != 0
                      || !
#line 27067 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9073; /* xop_maskcmp_uns2v16qi3 */

                case E_V8HImode:
                  if (pattern1017 (x2, 
E_V8HImode) != 0
                      || !
#line 27067 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9074; /* xop_maskcmp_uns2v8hi3 */

                case E_V4SImode:
                  if (pattern1017 (x2, 
E_V4SImode) != 0
                      || !
#line 27067 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9075; /* xop_maskcmp_uns2v4si3 */

                case E_V2DImode:
                  if (pattern1017 (x2, 
E_V2DImode) != 0
                      || !
#line 27067 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 9076; /* xop_maskcmp_uns2v2di3 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 141:
          if (GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[0], E_V2DImode))
            return -1;
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          if (!vector_operand (operands[1], E_V2DImode)
              || !
#line 27181 "../../src/gcc/config/i386/sse.md"
(TARGET_AES))
            return -1;
          return 9089; /* aesimc */

        case 149:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || !memory_operand (operands[1], E_V4HImode)
                  || !
#line 29099 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
                return -1;
              return 9652; /* *vcvtph2ps_load */

            case E_V8SFmode:
              if (!register_operand (operands[0], E_V8SFmode)
                  || GET_MODE (x2) != E_V8SFmode
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || !
#line 29109 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256)))
                return -1;
              return 9654; /* vcvtph2ps256 */

            case E_V16SFmode:
              if (!register_operand (operands[0], E_V16SFmode)
                  || GET_MODE (x2) != E_V16SFmode
                  || !vector_operand (operands[1], E_V16HImode)
                  || !
#line 29122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 9658; /* *avx512f_vcvtph2ps512 */

            default:
              return -1;
            }

        case 168:
          return recog_215 (x1, insn, pnum_clobbers);

        case 253:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10506; /* vcvtph2bf8v16hf */

            case 1:
              if (!(
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10514; /* vcvtph2bf8v32hf */

            default:
              return -1;
            }

        case 254:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10508; /* vcvtph2bf8sv16hf */

            case 1:
              if (!(
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10516; /* vcvtph2bf8sv32hf */

            default:
              return -1;
            }

        case 255:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10510; /* vcvtph2hf8v16hf */

            case 1:
              if (!(
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10518; /* vcvtph2hf8v32hf */

            default:
              return -1;
            }

        case 256:
          switch (pattern322 (x2))
            {
            case 0:
              if (!
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10512; /* vcvtph2hf8sv16hf */

            case 1:
              if (!(
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10520; /* vcvtph2hf8sv32hf */

            default:
              return -1;
            }

        case 257:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (!register_operand (operands[0], E_V32HFmode)
                  || GET_MODE (x2) != E_V32HFmode
                  || !nonimmediate_operand (operands[1], E_V32QImode)
                  || !(
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10522; /* vcvthf82phv32hf */

            case E_V16HFmode:
              if (!register_operand (operands[0], E_V16HFmode)
                  || GET_MODE (x2) != E_V16HFmode
                  || !nonimmediate_operand (operands[1], E_V16QImode)
                  || !
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10524; /* vcvthf82phv16hf */

            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode
                  || !nonimmediate_operand (operands[1], E_V16QImode)
                  || !
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10526; /* vcvthf82phv8hf */

            default:
              return -1;
            }

        case 263:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10735; /* avx10_2_cvtbf162ibsv32bf */

            case 1:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10743; /* avx10_2_cvtbf162ibsv16bf */

            case 2:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10751; /* avx10_2_cvtbf162ibsv8bf */

            default:
              return -1;
            }

        case 264:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10737; /* avx10_2_cvtbf162iubsv32bf */

            case 1:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10745; /* avx10_2_cvtbf162iubsv16bf */

            case 2:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10753; /* avx10_2_cvtbf162iubsv8bf */

            default:
              return -1;
            }

        case 269:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10739; /* avx10_2_cvttbf162ibsv32bf */

            case 1:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10747; /* avx10_2_cvttbf162ibsv16bf */

            case 2:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10755; /* avx10_2_cvttbf162ibsv8bf */

            default:
              return -1;
            }

        case 270:
          switch (pattern323 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
            {
            case 0:
              if (!(
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10741; /* avx10_2_cvttbf162iubsv32bf */

            case 1:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10749; /* avx10_2_cvttbf162iubsv16bf */

            case 2:
              if (!
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10757; /* avx10_2_cvttbf162iubsv8bf */

            default:
              return -1;
            }

        case 265:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10759; /* avx10_2_cvtph2ibsv32hf */

            case 1:
              if (!
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10767; /* avx10_2_cvtph2ibsv16hf */

            case 2:
              if (!
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10775; /* avx10_2_cvtph2ibsv8hf */

            default:
              return -1;
            }

        case 266:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10763; /* avx10_2_cvtph2iubsv32hf */

            case 1:
              if (!
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10771; /* avx10_2_cvtph2iubsv16hf */

            case 2:
              if (!
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10777; /* avx10_2_cvtph2iubsv8hf */

            default:
              return -1;
            }

        case 271:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10779; /* avx10_2_cvttph2ibsv32hf */

            case 1:
              if (!
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10787; /* avx10_2_cvttph2ibsv16hf */

            case 2:
              if (!
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10795; /* avx10_2_cvttph2ibsv8hf */

            default:
              return -1;
            }

        case 272:
          switch (pattern323 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
            {
            case 0:
              if (!(
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10783; /* avx10_2_cvttph2iubsv32hf */

            case 1:
              if (!
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10791; /* avx10_2_cvttph2iubsv16hf */

            case 2:
              if (!
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10797; /* avx10_2_cvttph2iubsv8hf */

            default:
              return -1;
            }

        case 267:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10799; /* avx10_2_cvtps2ibsv16sf */

            case 1:
              if (!
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10807; /* avx10_2_cvtps2ibsv8sf */

            case 2:
              if (!
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10815; /* avx10_2_cvtps2ibsv4sf */

            default:
              return -1;
            }

        case 268:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10803; /* avx10_2_cvtps2iubsv16sf */

            case 1:
              if (!
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10811; /* avx10_2_cvtps2iubsv8sf */

            case 2:
              if (!
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10817; /* avx10_2_cvtps2iubsv4sf */

            default:
              return -1;
            }

        case 273:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10819; /* avx10_2_cvttps2ibsv16sf */

            case 1:
              if (!
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10827; /* avx10_2_cvttps2ibsv8sf */

            case 2:
              if (!
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10835; /* avx10_2_cvttps2ibsv4sf */

            default:
              return -1;
            }

        case 274:
          switch (pattern324 (x2))
            {
            case 0:
              if (!(
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10823; /* avx10_2_cvttps2iubsv16sf */

            case 1:
              if (!
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10831; /* avx10_2_cvttps2iubsv8sf */

            case 2:
              if (!
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10837; /* avx10_2_cvttps2iubsv4sf */

            default:
              return -1;
            }

        case 275:
          switch (pattern325 (x2))
            {
            case 0:
              if (!(
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10839; /* avx10_2_vcvttps2dqsv16sf */

            case 1:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10847; /* avx10_2_vcvttps2dqsv8sf */

            case 2:
              if (!(
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10859; /* avx10_2_vcvttpd2dqsv8df */

            case 3:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10855; /* avx10_2_vcvttps2dqsv4sf */

            case 4:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10867; /* avx10_2_vcvttpd2dqsv4df */

            case 5:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10875; /* avx10_2_vcvttpd2dqsv2df */

            case 6:
              if (!(
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10879; /* avx10_2_vcvttpd2qqsv8df */

            case 7:
              if (!(
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10899; /* avx10_2_vcvttps2qqsv8di */

            case 8:
              if (!
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10887; /* avx10_2_vcvttpd2qqsv4df */

            case 9:
              if (!
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10907; /* avx10_2_vcvttps2qqsv4di */

            case 10:
              if (!
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10895; /* avx10_2_vcvttpd2qqsv2df */

            case 11:
              if (!
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10915; /* avx10_2_vcvttps2qqsv2di */

            default:
              return -1;
            }

        case 276:
          switch (pattern325 (x2))
            {
            case 0:
              if (!(
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10843; /* avx10_2_vcvttps2udqsv16sf */

            case 1:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10851; /* avx10_2_vcvttps2udqsv8sf */

            case 2:
              if (!(
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10863; /* avx10_2_vcvttpd2udqsv8df */

            case 3:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10857; /* avx10_2_vcvttps2udqsv4sf */

            case 4:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10871; /* avx10_2_vcvttpd2udqsv4df */

            case 5:
              if (!
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10877; /* avx10_2_vcvttpd2udqsv2df */

            case 6:
              if (!(
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10883; /* avx10_2_vcvttpd2uqqsv8df */

            case 7:
              if (!(
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10903; /* avx10_2_vcvttps2uqqsv8di */

            case 8:
              if (!
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10891; /* avx10_2_vcvttpd2uqqsv4df */

            case 9:
              if (!
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10911; /* avx10_2_vcvttps2uqqsv4di */

            case 10:
              if (!
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10897; /* avx10_2_vcvttpd2uqqsv2df */

            case 11:
              if (!
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1))
                return -1;
              return 10917; /* avx10_2_vcvttps2uqqsv2di */

            default:
              return -1;
            }

        case 279:
          return recog_207 (x1, insn, pnum_clobbers);

        default:
          return -1;
        }

    case 2:
      return recog_266 (x1, insn, pnum_clobbers);

    case 3:
      return recog_265 (x1, insn, pnum_clobbers);

    case 4:
      return recog_264 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_322 (rtx x1 ATTRIBUTE_UNUSED,
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
    case VEC_SELECT:
      return recog_299 (x1, insn, pnum_clobbers);

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x3) != E_V2DFmode
              || !nonimmediate_operand (operands[1], E_DFmode))
            return -1;
          if (
#line 14899 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 7222; /* vec_dupv2df */
          if (!(
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9291; /* *avx512vl_vec_dup_gprv2df */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9237; /* *avx512f_broadcastv16sf */

            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode)
                  || !(
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9281; /* *avx512f_vec_dup_gprv16sf */

            case E_V8SFmode:
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !(
#line 28075 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9337; /* *avx512dq_broadcastv16sf_1 */

            default:
              return -1;
            }

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !(
#line 27755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9239; /* *avx512f_broadcastv16si */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9269; /* *avx512f_vec_dup_gprv16si */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 28075 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9339; /* *avx512dq_broadcastv16si_1 */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x3) != E_V8DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DFmode:
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !(
#line 27767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9241; /* *avx512f_broadcastv8df */

            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode)
                  || !(
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9287; /* *avx512f_vec_dup_gprv8df */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28086 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9343; /* *avx512dq_broadcastv8df_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x3) != E_V8DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !(
#line 27767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9243; /* *avx512f_broadcastv8di */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9275; /* *avx512f_vec_dup_gprv8di */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28086 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9341; /* *avx512dq_broadcastv8di_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (!register_operand (operands[0], E_V64QImode)
              || GET_MODE (x3) != E_V64QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !(
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9245; /* *avx512bw_vec_dup_gprv64qi */

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x3) != E_V16QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9247; /* *avx512vl_vec_dup_gprv16qi */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9302; /* *vec_dupv16qi */

        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x3) != E_V32QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9249; /* *avx512vl_vec_dup_gprv32qi */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9301; /* *vec_dupv32qi */

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x3) != E_V32HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !(
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9251; /* *avx512bw_vec_dup_gprv32hi */

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x3) != E_V16HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9253; /* *avx512vl_vec_dup_gprv16hi */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9303; /* *vec_dupv16hi */

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !nonimmediate_operand (operands[1], E_HImode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9255; /* *avx512vl_vec_dup_gprv8hi */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9304; /* *vec_dupv8hi */

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x3) != E_V32HFmode
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !(
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9257; /* *avx512bw_vec_dup_gprv32hf */

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x3) != E_V16HFmode
              || !nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9259; /* *avx512vl_vec_dup_gprv16hf */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9307; /* *vec_dupv16hf */

        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x3) != E_V8HFmode
              || !nonimmediate_operand (operands[1], E_HFmode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9261; /* *avx512fp16_vec_dup_gprv8hf */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9308; /* *vec_dupv8hf */

        case E_V32BFmode:
          if (!register_operand (operands[0], E_V32BFmode)
              || GET_MODE (x3) != E_V32BFmode
              || !nonimmediate_operand (operands[1], E_BFmode)
              || !(
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9263; /* *avx512bw_vec_dup_gprv32bf */

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x3) != E_V16BFmode
              || !nonimmediate_operand (operands[1], E_BFmode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9265; /* *avx512vl_vec_dup_gprv16bf */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9309; /* *vec_dupv16bf */

        case E_V8BFmode:
          if (!register_operand (operands[0], E_V8BFmode)
              || GET_MODE (x3) != E_V8BFmode
              || !nonimmediate_operand (operands[1], E_BFmode))
            return -1;
          if ((
#line 27779 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9267; /* *avx512vl_vec_dup_gprv8bf */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9310; /* *vec_dupv8bf */

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x3) != E_V8SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9271; /* *avx512vl_vec_dup_gprv8si */
              if (
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9305; /* *vec_dupv8si */
              if (!
#line 27961 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9311; /* vec_dupv8si */

            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode)
                  || !
#line 28062 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 9333; /* *avx512vl_broadcastv8si_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9273; /* *avx512vl_vec_dup_gprv4si */
          if (
#line 27838 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 9294; /* *vec_dupv4si */
          if (!
#line 27941 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 9306; /* *vec_dupv4si */

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x3) != E_V4DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9277; /* *avx512vl_vec_dup_gprv4di */
              if (!
#line 27961 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9313; /* vec_dupv4di */

            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode)
                  || !(
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9345; /* *avx512dq_broadcastv4di_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (!register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9279; /* *avx512vl_vec_dup_gprv2di */
          if (!
#line 27866 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 9295; /* *vec_dupv2di */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x3) != E_V8SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              if (!nonimmediate_operand (operands[1], E_SFmode))
                return -1;
              if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9283; /* *avx512vl_vec_dup_gprv8sf */
              if (!
#line 27961 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9312; /* vec_dupv8sf */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !
#line 28062 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                return -1;
              return 9335; /* *avx512vl_broadcastv8sf_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x3) != E_V4SFmode
              || !nonimmediate_operand (operands[1], E_SFmode))
            return -1;
          if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 9285; /* *avx512vl_vec_dup_gprv4sf */
          if (!
#line 27806 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 9293; /* vec_dupv4sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x3) != E_V4DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_DFmode:
              if (!nonimmediate_operand (operands[1], E_DFmode))
                return -1;
              if ((
#line 27791 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9289; /* *avx512vl_vec_dup_gprv4df */
              if (!
#line 27961 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return -1;
              return 9314; /* vec_dupv4df */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 28093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9347; /* *avx512dq_broadcastv4df_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      if (GET_MODE (x4) != E_SFmode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          switch (pattern675 (x3, 
E_V8SFmode))
            {
            case 0:
              if (!(
#line 31635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 10428; /* vbcstnebf162ps_v8sf */

            case 1:
              if (!(
#line 31646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 10430; /* vbcstnesh2ps_v8sf */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern675 (x3, 
E_V4SFmode))
            {
            case 0:
              if (!
#line 31635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                return -1;
              return 10429; /* vbcstnebf162ps_v4sf */

            case 1:
              if (!
#line 31646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT))
                return -1;
              return 10431; /* vbcstnesh2ps_v4sf */

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
recog_328 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern29 (x1))
    {
    case 0:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 798 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7649; /* *lshrv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 774 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7672; /* lshrv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9604; /* avx512vl_lshrvv16hi */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 798 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7653; /* *lshrv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7674; /* lshrv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9600; /* avx512vl_lshrvv8hi */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7657; /* *lshrv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7676; /* lshrv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9580; /* avx2_lshrvv8si */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7661; /* *lshrv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7678; /* lshrv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9584; /* avx2_lshrvv4si */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7665; /* *lshrv4di3 */
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7680; /* lshrv4di3 */
      if (!nonimmediate_operand (operands[2], E_V4DImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9592; /* avx2_lshrvv4di */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7669; /* *lshrv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7682; /* lshrv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9596; /* avx2_lshrvv2di */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7689; /* lshrv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9608; /* avx512bw_lshrvv32hi */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7693; /* lshrv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 803 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9576; /* avx512f_lshrvv16si */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7697; /* lshrv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 804 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9588; /* avx512f_lshrvv8di */

    case 9:
      if (register_operand (operands[1], E_V1TImode)
          && const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          && 
#line 17495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return 7700; /* *lshrv1ti3_internal */
      if (!const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      if (nonimmediate_operand (operands[1], E_V1TImode)
          && (
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7709; /* avx512bw_lshrv1ti3 */
      if (!register_operand (operands[1], E_V1TImode)
          || !
#line 17625 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7713; /* sse2_lshrv1ti3 */

    case 10:
      if (!(
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7705; /* avx512bw_lshrv4ti3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V2TImode)
          && (
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7707; /* avx512bw_lshrv2ti3 */
      if (!register_operand (operands[1], E_V2TImode)
          || !(
#line 17625 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 7711; /* avx2_lshrv2ti3 */

    default:
      return -1;
    }
}

 int
recog_333 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  switch (pattern34 (x1))
    {
    case 0:
      if (!
#line 24130 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8759; /* avx2_zero_extendv16qiv16hi2 */

    case 1:
      if (!
#line 24184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8767; /* avx512bw_zero_extendv32qiv32hi2 */

    case 2:
      if (!
#line 24254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
        return -1;
      return 8779; /* *sse4_1_zero_extendv8qiv8hi2_1 */

    case 3:
      if (!
#line 24379 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8791; /* *avx512f_zero_extendv16qiv16si2 */

    case 4:
      if (!
#line 24522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8819; /* avx512f_zero_extendv16hiv16si2 */

    case 5:
      if (!
#line 24411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8799; /* *avx2_zero_extendv8qiv8si2_1 */

    case 6:
      if (!
#line 24575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8827; /* avx2_zero_extendv8hiv8si2 */

    case 7:
      if (!
#line 24472 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8811; /* *sse4_1_zero_extendv4qiv4si2_1 */

    case 8:
      if (!
#line 24645 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8839; /* *sse4_1_zero_extendv4hiv4si2_1 */

    case 9:
      if (!
#line 24776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8855; /* *avx512f_zero_extendv8qiv8di2_1 */

    case 10:
      if (!
#line 24947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8886; /* avx512f_zero_extendv8hiv8di2 */

    case 11:
      if (!
#line 25084 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8914; /* avx512f_zero_extendv8siv8di2 */

    case 12:
      if (!
#line 24834 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8867; /* *avx2_zero_extendv4qiv4di2_1 */

    case 13:
      if (!
#line 24977 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8894; /* *avx2_zero_extendv4hiv4di2_1 */

    case 14:
      if (!
#line 25135 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8920; /* avx2_zero_extendv4siv4di2 */

    case 15:
      if (!
#line 24896 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8879; /* *sse4_1_zero_extendv2qiv2di2_1 */

    case 16:
      if (!
#line 25035 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8906; /* *sse4_1_zero_extendv2hiv2di2_1 */

    case 17:
      if (!
#line 25201 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8930; /* *sse4_1_zero_extendv2siv2di2_1 */

    case 18:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 0);
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      switch (pattern540 (x2))
        {
        case 0:
          if (
#line 24242 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
            return 8775; /* sse4_1_zero_extendv8qiv8hi2 */
          break;

        case 1:
          if (
#line 24400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8795; /* avx2_zero_extendv8qiv8si2 */
          break;

        case 2:
          if (
#line 24766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8851; /* avx512f_zero_extendv8qiv8di2 */
          break;

        case 3:
          if (
#line 24460 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8807; /* sse4_1_zero_extendv4qiv4si2 */
          break;

        case 4:
          if (
#line 24633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8835; /* sse4_1_zero_extendv4hiv4si2 */
          break;

        case 5:
          if (
#line 24823 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8863; /* avx2_zero_extendv4qiv4di2 */
          break;

        case 6:
          if (
#line 24966 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8890; /* avx2_zero_extendv4hiv4di2 */
          break;

        case 7:
          if (
#line 24884 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8875; /* sse4_1_zero_extendv2qiv2di2 */
          break;

        case 8:
          if (
#line 25023 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8902; /* sse4_1_zero_extendv2hiv2di2 */
          break;

        case 9:
          if (
#line 25189 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8926; /* sse4_1_zero_extendv2siv2di2 */
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case VEC_CONCAT:
          switch (pattern678 (x2))
            {
            case 0:
              if (!
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8783; /* *sse4_1_zero_extendv8qiv8hi2_2 */

            case 1:
              if (!
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8803; /* *avx2_zero_extendv8qiv8si2_2 */

            case 2:
              if (!
#line 24794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
                return -1;
              return 8859; /* *avx512f_zero_extendv8qiv8di2_2 */

            case 3:
              if (!
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8843; /* *sse4_1_zero_extendv4hiv4si2_2 */

            case 4:
              if (!
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8898; /* *avx2_zero_extendv4hiv4di2_2 */

            case 5:
              if (!
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                return -1;
              return 8934; /* *sse4_1_zero_extendv2siv2di2_2 */

            default:
              return -1;
            }

        case VEC_MERGE:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != VEC_DUPLICATE)
            return -1;
          if (GET_MODE (x6) == E_V4SImode)
            {
              switch (pattern1032 (x2))
                {
                case 0:
                  if (
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                    return 8815; /* *sse4_1_zero_extendv4qiv4si2_2 */
                  break;

                case 1:
                  if (
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
                    return 8871; /* *avx2_zero_extendv4qiv4di2_2 */
                  break;

                case 2:
                  if (
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
                    return 8910; /* *sse4_1_zero_extendv2hiv2di2_2 */
                  break;

                default:
                  break;
                }
            }
          x7 = XEXP (x5, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          switch (pattern1033 (x2))
            {
            case 0:
              if (!
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8881; /* *sse4_1_zero_extendv2qiv2di2_2 */

            case 1:
              if (!
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8882; /* *sse4_1_zero_extendv2qiv2di2_2 */

            case 2:
              if (!
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                return -1;
              return 8883; /* *sse4_1_zero_extendv2qiv2di2_2 */

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
recog_341 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 2994; /* *smaxv32hf3 */

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
      return 3002; /* *smaxv16hf3 */

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
      return 3010; /* *smaxv8hf3 */

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
      return 3014; /* *smaxv16sf3 */

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
      return 3022; /* *smaxv8sf3 */

    case 5:
      if (!
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1
   && 1))
        return -1;
      return 3030; /* *smaxv4sf3 */

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
      return 3034; /* *smaxv8df3 */

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
      return 3042; /* *smaxv4df3 */

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
      return 3050; /* *smaxv2df3 */

    case 9:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7762; /* *avx2_smaxv32qi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7838; /* *avx512bw_smaxv32qi3 */

    case 10:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7766; /* *avx2_smaxv16hi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7854; /* *avx512bw_smaxv16hi3 */

    case 11:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7770; /* *avx2_smaxv8si3 */
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7782; /* *avx512f_smaxv8si3 */

    case 12:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7774; /* *avx512f_smaxv16si3 */

    case 13:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7790; /* *avx512f_smaxv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7874; /* *sse4_1_smaxv4si3 */

    case 14:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7798; /* *avx512f_smaxv8di3 */

    case 15:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7806; /* *avx512f_smaxv4di3 */

    case 16:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7814; /* *avx512f_smaxv2di3 */

    case 17:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7822; /* *avx512bw_smaxv64qi3 */

    case 18:
      if (nonimmediate_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7830; /* *avx512bw_smaxv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7870; /* *sse4_1_smaxv16qi3 */

    case 19:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7846; /* *avx512bw_smaxv32hi3 */

    case 20:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7862; /* *avx512bw_smaxv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17843 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7878; /* *smaxv8hi3 */

    case 21:
      if (!(
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10597; /* avx10_2_smaxbf16_v32bf */

    case 22:
      if (!
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10601; /* avx10_2_smaxbf16_v16bf */

    case 23:
      if (!
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10605; /* avx10_2_smaxbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_348 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4740; /* avx512fp16_vcvtpd2ph_v8df */

        case E_V8SFmode:
          if (!vector_operand (operands[1], E_V8SFmode)
              || !(
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4748; /* avx512fp16_vcvtps2ph_v8sf */

        default:
          return -1;
        }

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4744; /* avx512fp16_vcvtps2ph_v16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !
#line 10099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5178; /* *avx512f_cvtpd2ps512 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !
#line 10109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
        return -1;
      return 5182; /* avx_cvtpd2ps256 */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x3) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      if (
#line 31142 "../../src/gcc/config/i386/sse.md"
(TARGET_AVXNECONVERT || (TARGET_AVX512BF16 && TARGET_AVX512VL)))
        return 10349; /* vcvtneps2bf16_v8sf */
      if (!(
#line 31180 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10352; /* avx512f_cvtneps2bf16_v8sf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x3) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 31180 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31108 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10350; /* avx512f_cvtneps2bf16_v16sf */

    default:
      return -1;
    }
}

 int
recog_354 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || !register_operand (operands[1], E_XFmode)
          || !
#line 23706 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1708; /* sqrtxf2 */

    case E_HFmode:
      if (!register_operand (operands[0], E_HFmode)
          || GET_MODE (x3) != E_HFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !
#line 23767 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
        return -1;
      return 1711; /* sqrthf2 */

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode
          || !nonimmediate_operand (operands[1], E_SFmode)
          || !
#line 23780 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
        return -1;
      return 1712; /* *sqrtsf2_sse */

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !nonimmediate_operand (operands[1], E_DFmode)
          || !
#line 23780 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
        return -1;
      return 1713; /* *sqrtdf2_sse */

    default:
      return -1;
    }
}

 int
recog_357 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != LABEL_REF)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  operands[0] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!indirect_branch_operand (operands[0], E_SImode)
          || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
        return -1;
      return 1462; /* *tablejump_1 */

    case E_DImode:
      if (!indirect_branch_operand (operands[0], E_DImode)
          || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
        return -1;
      return 1463; /* *tablejump_1 */

    default:
      return -1;
    }
}

 int
recog_359 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case SIGN_EXTRACT:
      x4 = XEXP (x3, 1);
      if (XWINT (x4, 0) != 1L)
        return -1;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      switch (GET_CODE (operands[1]))
        {
        case REG:
        case SUBREG:
          switch (pattern1489 (x3))
            {
            case 0:
              return 120; /* *extvsi_1_0 */

            case 1:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 121; /* *extvdi_1_0 */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          if (pattern571 (operands[1]) != 0)
            return -1;
          switch (pattern1568 (x3))
            {
            case 0:
              return 1797; /* *x86_movsicc_0_m1_se */

            case 1:
              if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 1798; /* *x86_movdicc_0_m1_se */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      x4 = XEXP (x3, 1);
      if (XWINT (x4, 0) == 1L)
        {
          x6 = XEXP (x2, 0);
          if (GET_CODE (x6) == SUBREG)
            {
              switch (pattern1317 (x2))
                {
                case 0:
                  if (
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    return 1434; /* *btsi_setcqi */
                  break;

                case 1:
                  if ((
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1435; /* *btdi_setcqi */
                  break;

                default:
                  break;
                }
            }
          x5 = XEXP (x3, 2);
          if (GET_CODE (x5) == SUBREG)
            {
              switch (pattern1319 (x2))
                {
                case 0:
                  if (
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return 1442; /* *btsi_setcsi_mask */
                  break;

                case 1:
                  if ((
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1443; /* *btdi_setcdi_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_QImode))
        return -1;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      if (!const_0_to_255_operand (operands[3], E_QImode))
        return -1;
      switch (pattern405 (x3))
        {
        case 0:
          if (!
#line 22152 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          return 1604; /* tbm_bextri_si */

        case 1:
          if (!(
#line 22152 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1605; /* tbm_bextri_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_367 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pattern350 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (pattern1041 (x1))
    {
    case 0:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3376; /* *avx512f_cmpv16si3_zero_extendhi_2 */

    case 1:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3397; /* *avx512vl_cmpv16hf3_zero_extendhi_2 */

    case 2:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3403; /* *avx512f_cmpv16sf3_zero_extendhi_2 */

    case 3:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3469; /* *avx512vl_cmpv16qi3_zero_extendhi_2 */

    case 4:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3478; /* *avx512vl_cmpv16hi3_zero_extendhi_2 */

    case 5:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3379; /* *avx512vl_cmpv8si3_zero_extendhi_2 */

    case 6:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3382; /* *avx512vl_cmpv4si3_zero_extendhi_2 */

    case 7:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3385; /* *avx512f_cmpv8di3_zero_extendhi_2 */

    case 8:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3388; /* *avx512vl_cmpv4di3_zero_extendhi_2 */

    case 9:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3391; /* *avx512vl_cmpv2di3_zero_extendhi_2 */

    case 10:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3400; /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */

    case 11:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3406; /* *avx512vl_cmpv8sf3_zero_extendhi_2 */

    case 12:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3409; /* *avx512vl_cmpv4sf3_zero_extendhi_2 */

    case 13:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3412; /* *avx512f_cmpv8df3_zero_extendhi_2 */

    case 14:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3415; /* *avx512vl_cmpv4df3_zero_extendhi_2 */

    case 15:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3418; /* *avx512vl_cmpv2df3_zero_extendhi_2 */

    case 16:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3481; /* *avx512vl_cmpv8hi3_zero_extendhi_2 */

    case 17:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3394; /* *avx512bw_cmpv32hf3_zero_extendhi_2 */

    case 18:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3472; /* *avx512vl_cmpv32qi3_zero_extendhi_2 */

    case 19:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3475; /* *avx512bw_cmpv32hi3_zero_extendhi_2 */

    case 20:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3466; /* *avx512bw_cmpv64qi3_zero_extendhi_2 */

    case 21:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3377; /* *avx512f_cmpv16si3_zero_extendsi_2 */

    case 22:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3398; /* *avx512vl_cmpv16hf3_zero_extendsi_2 */

    case 23:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3404; /* *avx512f_cmpv16sf3_zero_extendsi_2 */

    case 24:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3470; /* *avx512vl_cmpv16qi3_zero_extendsi_2 */

    case 25:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3479; /* *avx512vl_cmpv16hi3_zero_extendsi_2 */

    case 26:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3380; /* *avx512vl_cmpv8si3_zero_extendsi_2 */

    case 27:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3383; /* *avx512vl_cmpv4si3_zero_extendsi_2 */

    case 28:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3386; /* *avx512f_cmpv8di3_zero_extendsi_2 */

    case 29:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3389; /* *avx512vl_cmpv4di3_zero_extendsi_2 */

    case 30:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3392; /* *avx512vl_cmpv2di3_zero_extendsi_2 */

    case 31:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3401; /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */

    case 32:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3407; /* *avx512vl_cmpv8sf3_zero_extendsi_2 */

    case 33:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3410; /* *avx512vl_cmpv4sf3_zero_extendsi_2 */

    case 34:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3413; /* *avx512f_cmpv8df3_zero_extendsi_2 */

    case 35:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3416; /* *avx512vl_cmpv4df3_zero_extendsi_2 */

    case 36:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3419; /* *avx512vl_cmpv2df3_zero_extendsi_2 */

    case 37:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3482; /* *avx512vl_cmpv8hi3_zero_extendsi_2 */

    case 38:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3395; /* *avx512bw_cmpv32hf3_zero_extendsi_2 */

    case 39:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3473; /* *avx512vl_cmpv32qi3_zero_extendsi_2 */

    case 40:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3476; /* *avx512bw_cmpv32hi3_zero_extendsi_2 */

    case 41:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3467; /* *avx512bw_cmpv64qi3_zero_extendsi_2 */

    case 42:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3378; /* *avx512f_cmpv16si3_zero_extenddi_2 */

    case 43:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3399; /* *avx512vl_cmpv16hf3_zero_extenddi_2 */

    case 44:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3405; /* *avx512f_cmpv16sf3_zero_extenddi_2 */

    case 45:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3471; /* *avx512vl_cmpv16qi3_zero_extenddi_2 */

    case 46:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3480; /* *avx512vl_cmpv16hi3_zero_extenddi_2 */

    case 47:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3381; /* *avx512vl_cmpv8si3_zero_extenddi_2 */

    case 48:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3384; /* *avx512vl_cmpv4si3_zero_extenddi_2 */

    case 49:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3387; /* *avx512f_cmpv8di3_zero_extenddi_2 */

    case 50:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3390; /* *avx512vl_cmpv4di3_zero_extenddi_2 */

    case 51:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3393; /* *avx512vl_cmpv2di3_zero_extenddi_2 */

    case 52:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 3402; /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */

    case 53:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3408; /* *avx512vl_cmpv8sf3_zero_extenddi_2 */

    case 54:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3411; /* *avx512vl_cmpv4sf3_zero_extenddi_2 */

    case 55:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3414; /* *avx512f_cmpv8df3_zero_extenddi_2 */

    case 56:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3417; /* *avx512vl_cmpv4df3_zero_extenddi_2 */

    case 57:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3420; /* *avx512vl_cmpv2df3_zero_extenddi_2 */

    case 58:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3483; /* *avx512vl_cmpv8hi3_zero_extenddi_2 */

    case 59:
      if (!(
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 3396; /* *avx512bw_cmpv32hf3_zero_extenddi_2 */

    case 60:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3474; /* *avx512vl_cmpv32qi3_zero_extenddi_2 */

    case 61:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3477; /* *avx512bw_cmpv32hi3_zero_extenddi_2 */

    case 62:
      if (!(
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3468; /* *avx512bw_cmpv64qi3_zero_extenddi_2 */

    case 63:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3550; /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */

    case 64:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3553; /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */

    case 65:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3562; /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */

    case 66:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3622; /* *avx512f_ucmpv16si3_zero_extendhi_2 */

    case 67:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3556; /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */

    case 68:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3559; /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */

    case 69:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3565; /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */

    case 70:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3623; /* *avx512vl_ucmpv8si3_zero_extendhi_2 */

    case 71:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3624; /* *avx512vl_ucmpv4si3_zero_extendhi_2 */

    case 72:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3625; /* *avx512f_ucmpv8di3_zero_extendhi_2 */

    case 73:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3626; /* *avx512vl_ucmpv4di3_zero_extendhi_2 */

    case 74:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3627; /* *avx512vl_ucmpv2di3_zero_extendhi_2 */

    case 75:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3551; /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */

    case 76:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3554; /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */

    case 77:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3563; /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */

    case 78:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3628; /* *avx512f_ucmpv16si3_zero_extendsi_2 */

    case 79:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3557; /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */

    case 80:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3560; /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */

    case 81:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3566; /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */

    case 82:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3629; /* *avx512vl_ucmpv8si3_zero_extendsi_2 */

    case 83:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3630; /* *avx512vl_ucmpv4si3_zero_extendsi_2 */

    case 84:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3631; /* *avx512f_ucmpv8di3_zero_extendsi_2 */

    case 85:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3632; /* *avx512vl_ucmpv4di3_zero_extendsi_2 */

    case 86:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3633; /* *avx512vl_ucmpv2di3_zero_extendsi_2 */

    case 87:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3552; /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */

    case 88:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3555; /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */

    case 89:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3564; /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */

    case 90:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3634; /* *avx512f_ucmpv16si3_zero_extenddi_2 */

    case 91:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3558; /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */

    case 92:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3561; /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */

    case 93:
      if (!(
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3567; /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */

    case 94:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3635; /* *avx512vl_ucmpv8si3_zero_extenddi_2 */

    case 95:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3636; /* *avx512vl_ucmpv4si3_zero_extenddi_2 */

    case 96:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 3637; /* *avx512f_ucmpv8di3_zero_extenddi_2 */

    case 97:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3638; /* *avx512vl_ucmpv4di3_zero_extenddi_2 */

    case 98:
      if (!(
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 3639; /* *avx512vl_ucmpv2di3_zero_extenddi_2 */

    default:
      return -1;
    }
}

 int
recog_394 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17
              || GET_MODE (x7) != E_CCmode)
            return -1;
          operands[1] = x5;
          x8 = XEXP (x4, 1);
          operands[2] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x4) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !(
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                return -1;
              return 591; /* *mulhi3_1 */

            case E_SImode:
              if (pattern1326 (x4, 
E_SImode) != 0
                  || !
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 593; /* *mulsi3_1 */

            case E_DImode:
              if (pattern1326 (x4, 
E_DImode) != 0
                  || !(
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 595; /* *muldi3_1 */

            case E_QImode:
              if (pattern210 (x4, 
E_QImode) != 0
                  || !
#line 10691 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 603; /* *mulqi3_1 */

            default:
              return -1;
            }

        case SET:
          x9 = XEXP (x6, 1);
          if (GET_CODE (x9) != UMUL_HIGHPART)
            return -1;
          switch (pattern588 (x1))
            {
            case 0:
              if (!(
#line 10955 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 615; /* *bmi2_umulsidi3_1 */

            case 1:
              if (!(
#line 10955 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 616; /* *bmi2_umulditi3_1 */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 110)
            return -1;
          x10 = XVECEXP (x6, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x4) != E_V2SFmode)
            return -1;
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_V2SFmode))
            return -1;
          x8 = XEXP (x4, 1);
          operands[2] = x8;
          if (!nonimmediate_operand (operands[2], E_V2SFmode)
              || !
#line 795 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)))
            return -1;
          return 2054; /* *mmx_mulv2sf3 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern562 (x1, 
ZERO_EXTEND))
        {
        case 0:
          if (!(
#line 10994 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 617; /* *umulsidi3_1 */

        case 1:
          if (!(
#line 10994 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 618; /* *umulditi3_1 */

        case 2:
          if (!
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          return 626; /* *umulqihi3_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern562 (x1, 
SIGN_EXTEND))
        {
        case 0:
          if (!(
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 620; /* *mulsidi3_1 */

        case 1:
          if (!(
#line 1199 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && (
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          return 622; /* *mulditi3_1 */

        case 2:
          if (!
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          return 624; /* *mulqihi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_400 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
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
      switch (pattern569 (x1))
        {
        case 0:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 727; /* *xorqi_1_slp */
          break;

        case 1:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 730; /* *xorhi_1_slp */
          break;

        case 2:
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 820; /* *xordi3_doubleword */
          if (x86_64_general_operand (operands[2], E_DImode)
              && (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 834; /* *xordi_1 */
          if (const_int_operand (operands[2], E_DImode)
              && 
#line 13655 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (XOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return 839; /* *xordi_1_btc */
          break;

        case 3:
          if ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 822; /* *xorti3_doubleword */
          break;

        case 4:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && true))
            return 826; /* *xorhi_1 */
          break;

        case 5:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return 830; /* *xorsi_1 */
          break;

        case 6:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V4QImode, operands)))
            return 2285; /* *xorv4qi3 */
          break;

        case 7:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2QImode, operands)))
            return 2288; /* *xorv2qi3 */
          break;

        case 8:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2HImode, operands)))
            return 2291; /* *xorv2hi3 */
          break;

        case 9:
          if (
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2574; /* kxorqi */
          break;

        case 10:
          if (
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2577; /* kxorhi */
          break;

        case 11:
          if ((
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2580; /* kxorsi */
          break;

        case 12:
          if ((
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2583; /* kxordi */
          break;

        default:
          break;
        }
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER
          || pattern570 (x1) != 0)
        return -1;
      if (GET_CODE (x4) == SUBREG
          && pattern558 (x4) == 0)
        {
          x6 = XEXP (x4, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (pattern1623 (x2))
            {
            case 0:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 733; /* *xorqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 736; /* *xorqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 739; /* *xorqi_extdi_1_slp */
              break;

            case 3:
              return 757; /* *xorqi_exthi_0 */

            case 4:
              return 760; /* *xorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 763; /* *xorqi_extdi_0 */
              break;

            default:
              break;
            }
          x8 = XEXP (x3, 1);
          if (GET_CODE (x8) == SUBREG)
            {
              switch (pattern1624 (x2))
                {
                case 0:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 742; /* *xorqi_exthi_2_slp */
                  break;

                case 1:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 745; /* *xorqi_extsi_2_slp */
                  break;

                case 2:
                  if ((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 748; /* *xorqi_extdi_2_slp */
                  break;

                case 3:
                  return 766; /* *xorqi_ext2hi_0 */

                case 4:
                  return 769; /* *xorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 772; /* *xorqi_ext2di_0 */
                  break;

                default:
                  break;
                }
            }
        }
      x9 = XEXP (x2, 0);
      operands[0] = x9;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      if (!general_operand (operands[2], E_QImode)
          || !
#line 13775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      return 870; /* *xorqi_1 */

    case AND:
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != XOR)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      switch (pattern1049 (x2))
        {
        case 0:
          if (!
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          return 840; /* *xor2andn */

        case 1:
          if (!
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          return 841; /* *xor2andn */

        case 2:
          if (!(
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 842; /* *xor2andn */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern368 (x1) != 0
          || !
#line 13762 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
        return -1;
      return 866; /* *xorsi_1_zext_imm */

    case ASHIFT:
      switch (pattern371 (x1, 
1))
        {
        case 0:
          x10 = XEXP (x4, 1);
          operands[2] = x10;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x3))
                {
                case 0:
                  if (
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1392; /* *btcsi */
                  break;

                case 1:
                  if ((
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1394; /* *btcdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x10) != SUBREG)
            return -1;
          switch (pattern1329 (x3))
            {
            case 0:
              if (!
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
          return 1402; /* *btcdi_mask_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x11 = XEXP (x6, 1);
      if (GET_CODE (x11) != SUBREG
          || maybe_ne (SUBREG_BYTE (x11), 0)
          || GET_MODE (x11) != E_SImode)
        return -1;
      x12 = XEXP (x11, 0);
      if (GET_CODE (x12) != CLZ
          || GET_MODE (x12) != E_DImode)
        return -1;
      x8 = XEXP (x3, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern229 (x5, 
E_CCmode, 
17) != 0)
        return -1;
      x9 = XEXP (x2, 0);
      operands[0] = x9;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 21309 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      return 1530; /* *bsr_rex64_2 */

    case PLUS:
      x10 = XEXP (x4, 1);
      if (GET_CODE (x10) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (XWINT (x10, 0))
        {
        case -1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern201 (x3, 
E_SImode) != 0
                  || !
#line 21863 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1578; /* *bmi_blsmsk_si */

            case E_DImode:
              if (pattern201 (x3, 
E_DImode) != 0
                  || !(
#line 21863 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1579; /* *bmi_blsmsk_di */

            default:
              return -1;
            }

        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern201 (x3, 
E_SImode) != 0
                  || !
#line 22209 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1612; /* *tbm_blcmsk_si */

            case E_DImode:
              if (pattern201 (x3, 
E_DImode) != 0
                  || !(
#line 22209 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
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
recog_408 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      x3 = XVECEXP (x1, 0, 0);
      x4 = XEXP (x3, 1);
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      switch (XINT (x2, 1))
        {
        case 37:
          x8 = XVECEXP (x2, 0, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (!memory_operand (operands[1], E_SImode)
                  || !(
#line 20376 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1481; /* *sibcall_value_memory */

            case E_DImode:
              if (!memory_operand (operands[1], E_DImode)
                  || !(
#line 20376 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1482; /* *sibcall_value_memory */

            default:
              return -1;
            }

        case 21:
          x8 = XVECEXP (x2, 0, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 7
              || !constant_call_address_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1528 (x1, 
E_SImode) != 0
                  || !(
#line 23091 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1654; /* *tls_local_dynamic_base_64_si */

            case E_DImode:
              if (pattern1528 (x1, 
E_DImode) != 0
                  || !(
#line 23091 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1655; /* *tls_local_dynamic_base_64_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x2, 1) != 20)
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (GET_CODE (x9) != REG
          || REGNO (x9) != 7)
        return -1;
      x3 = XVECEXP (x1, 0, 0);
      x4 = XEXP (x3, 1);
      x5 = XEXP (x4, 0);
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!constant_call_address_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x4, 1);
      operands[3] = x7;
      x8 = XVECEXP (x2, 0, 0);
      operands[1] = x8;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1631 (x1, 
E_SImode) != 0
              || !(
#line 22976 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1650; /* *tls_global_dynamic_64_si */

        case E_DImode:
          if (pattern1631 (x1, 
E_DImode) != 0
              || !(
#line 22976 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1651; /* *tls_global_dynamic_64_di */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_417 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (pattern381 (x5, 
174, 
0) != 0)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DImode:
      if (pattern1247 (x3, 
E_V8DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28110 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9349; /* avx512cd_maskb_vec_dupv8di */

    case E_V4DImode:
      if (pattern1247 (x3, 
E_V4DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28110 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9350; /* avx512cd_maskb_vec_dupv4di */

    case E_V2DImode:
      if (pattern1247 (x3, 
E_V2DImode, 
E_QImode, 
E_DImode) != 0
          || !(
#line 28110 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9351; /* avx512cd_maskb_vec_dupv2di */

    case E_V16SImode:
      if (pattern1247 (x3, 
E_V16SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9352; /* avx512cd_maskw_vec_dupv16si */

    case E_V8SImode:
      if (pattern1247 (x3, 
E_V8SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9353; /* avx512cd_maskw_vec_dupv8si */

    case E_V4SImode:
      if (pattern1247 (x3, 
E_V4SImode, 
E_HImode, 
E_SImode) != 0
          || !(
#line 28122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9354; /* avx512cd_maskw_vec_dupv4si */

    default:
      return -1;
    }
}

 int
recog_423 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  if (!register_operand (x4, E_DImode))
    return -1;
  x5 = XEXP (x3, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case SMUL_HIGHPART:
      if (pattern826 (x1) != 0
          || !
#line 11150 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 631; /* *smulsi3_highpart_zext */

    case UMUL_HIGHPART:
      if (pattern826 (x1) != 0
          || !
#line 11150 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 632; /* *umulsi3_highpart_zext */

    case TRUNCATE:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != LSHIFTRT
          || GET_MODE (x6) != E_DImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != MULT
          || GET_MODE (x7) != E_DImode)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 32])
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != CLOBBER
          || pattern828 (x1) != 0)
        return -1;
      x10 = XEXP (x7, 0);
      if (GET_MODE (x10) != E_DImode)
        return -1;
      x11 = XEXP (x7, 1);
      if (GET_MODE (x11) != E_DImode)
        return -1;
      x12 = XEXP (x9, 0);
      operands[3] = x12;
      if (!scratch_operand (operands[3], E_SImode))
        return -1;
      switch (GET_CODE (x10))
        {
        case SIGN_EXTEND:
          if (GET_CODE (x11) != SIGN_EXTEND)
            return -1;
          x13 = XEXP (x10, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x14 = XEXP (x11, 0);
          operands[2] = x14;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 635; /* *smulsi3_highpart_zext */

        case ZERO_EXTEND:
          if (GET_CODE (x11) != ZERO_EXTEND)
            return -1;
          x13 = XEXP (x10, 0);
          operands[1] = x13;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x14 = XEXP (x11, 0);
          operands[2] = x14;
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 11198 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 636; /* *umulsi3_highpart_zext */

        default:
          return -1;
        }

    case DIV:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != MOD
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x12 = XEXP (x9, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (pattern1632 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11485 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 643; /* divmodsi4_zext_1 */

        case 1:
          if (!
#line 11684 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 655; /* *divmodsi4_zext_1 */

        case 2:
          if (!
#line 11880 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 673; /* *divmodsi4_noext_zext_1 */

        default:
          return -1;
        }

    case UDIV:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != UMOD
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      x12 = XEXP (x9, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (pattern1572 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11521 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 644; /* udivmodsi4_zext_1 */

        case 1:
          if (!
#line 11719 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 656; /* *udivmodsi4_zext_1 */

        case 2:
          if (!
#line 11880 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 674; /* *udivmodsi4_noext_zext_1 */

        case 3:
          if (!
#line 11741 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          return 657; /* *udivmodsi4_pow2_zext_1 */

        default:
          return -1;
        }

    case MOD:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != DIV
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[1] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x12 = XEXP (x9, 0);
      operands[0] = x12;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      switch (pattern1632 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11544 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 645; /* divmodsi4_zext_2 */

        case 1:
          if (!
#line 11767 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 658; /* *divmodsi4_zext_2 */

        case 2:
          if (!
#line 11894 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 675; /* *divmodsi4_noext_zext_2 */

        default:
          return -1;
        }

    case UMOD:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      x15 = XEXP (x9, 1);
      if (GET_CODE (x15) != UDIV
          || GET_MODE (x15) != E_SImode)
        return -1;
      operands[1] = x4;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x16 = XEXP (x5, 1);
      operands[3] = x16;
      x12 = XEXP (x9, 0);
      operands[0] = x12;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      switch (pattern1572 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 11581 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 646; /* udivmodsi4_zext_2 */

        case 1:
          if (!
#line 11803 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 659; /* *udivmodsi4_zext_2 */

        case 2:
          if (!
#line 11894 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 676; /* *udivmodsi4_noext_zext_2 */

        case 3:
          if (!
#line 11825 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          return 660; /* *udivmodsi4_pow2_zext_2 */

        default:
          return -1;
        }

    case CTZ:
      if (pattern827 (x1) != 0
          || !
#line 21201 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 1523; /* *ctzsidi2_uext_falsedep */

    case CLZ:
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != UNSPEC
          || XVECLEN (x9, 0) != 1
          || XINT (x9, 1) != 38)
        return -1;
      x17 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != REG
          || REGNO (x18) != 17
          || GET_MODE (x18) != E_CCmode)
        return -1;
      operands[0] = x4;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x19 = XVECEXP (x9, 0, 0);
      switch (pattern1422 (x19))
        {
        case 0:
          if (!
#line 21621 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1544; /* *clzsi2_lzcnt_zext_2_falsedep */

        case 1:
          if (!(
#line 21621 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1545; /* *clzsi2_lzcnt_zext_2_falsedep */

        default:
          return -1;
        }

    case POPCOUNT:
      if (pattern827 (x1) != 0
          || !
#line 22464 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
        return -1;
      return 1635; /* *popcountsi2_zext_2_falsedep */

    default:
      return -1;
    }
}

 int
recog_436 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case IF_THEN_ELSE:
      res = recog_2 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case COMPARE:
      res = recog_5 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSPEC:
      res = recog_15 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

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
      res = recog_19 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      res = recog_21 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LSHIFTRT:
      res = recog_22 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFTRT:
      res = recog_23 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IOR:
      res = recog_24 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case XOR:
      res = recog_25 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTEND:
      res = recog_27 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTEND:
      res = recog_28 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT_EXTEND:
      res = recog_29 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT_TRUNCATE:
      res = recog_30 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FIX:
      res = recog_31 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSIGNED_FIX:
      res = recog_32 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FLOAT:
      res = recog_33 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSIGNED_FLOAT:
      res = recog_34 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case AND:
      res = recog_38 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NOT:
      res = recog_39 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NEG:
      res = recog_40 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ABS:
      res = recog_41 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFT:
      res = recog_42 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATE:
      res = recog_43 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATERT:
      res = recog_44 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

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
      res = recog_50 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case POPCOUNT:
      res = recog_51 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case BSWAP:
      if (GET_MODE (x2) == E_HImode)
        {
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (nonimmediate_operand (operands[1], E_HImode)
              && nonimmediate_operand (operands[0], E_HImode)
              && 
#line 22595 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 1644; /* *bswaphi2_movbe */
          if (register_operand (operands[1], E_HImode)
              && register_operand (operands[0], E_HImode)
              && 
#line 22614 "../../src/gcc/config/i386/i386.md"
(!TARGET_MOVBE))
            return 1645; /* *bswaphi2 */
        }
      break;

    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      res = recog_58 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SQRT:
      res = recog_354 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMAX:
      switch (pattern9 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 26723 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return 1815; /* smaxsf3 */
          break;

        case 1:
          if (
#line 26723 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1817; /* smaxdf3 */
          break;

        case 2:
          if (
#line 26737 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return 1819; /* smaxhf3 */
          break;

        case 3:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1835; /* *smaxti3_doubleword */
            }
          break;

        case 4:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1839; /* *smaxqi3_1 */
            }
          break;

        case 5:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1843; /* *smaxhi3_1 */
            }
          break;

        case 6:
          if (
#line 3659 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2168; /* smaxv8qi3 */
          break;

        case 7:
          if (
#line 3659 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2170; /* smaxv2si3 */
          break;

        case 8:
          if (
#line 3684 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)))
            return 2172; /* *mmx_smaxv4hi3 */
          break;

        case 9:
          if (
#line 3708 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2174; /* smaxv4qi3 */
          break;

        case 10:
          if (
#line 3708 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2176; /* smaxv2qi3 */
          break;

        case 11:
          if (
#line 3724 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2178; /* smaxv2hi3 */
          break;

        default:
          break;
        }
      break;

    case SMIN:
      switch (pattern9 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 26723 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
            return 1816; /* sminsf3 */
          break;

        case 1:
          if (
#line 26723 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1818; /* smindf3 */
          break;

        case 2:
          if (
#line 26737 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return 1820; /* sminhf3 */
          break;

        case 3:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1836; /* *sminti3_doubleword */
            }
          break;

        case 4:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1840; /* *sminqi3_1 */
            }
          break;

        case 5:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1844; /* *sminhi3_1 */
            }
          break;

        case 6:
          if (
#line 3659 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2169; /* sminv8qi3 */
          break;

        case 7:
          if (
#line 3659 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2171; /* sminv2si3 */
          break;

        case 8:
          if (
#line 3684 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)))
            return 2173; /* *mmx_sminv4hi3 */
          break;

        case 9:
          if (
#line 3708 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2175; /* sminv4qi3 */
          break;

        case 10:
          if (
#line 3708 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2177; /* sminv2qi3 */
          break;

        case 11:
          if (
#line 3724 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2179; /* sminv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UMAX:
      switch (pattern10 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1837; /* *umaxti3_doubleword */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1841; /* *umaxqi3_1 */
            }
          break;

        case 2:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1845; /* *umaxhi3_1 */
            }
          break;

        case 3:
          if (
#line 3737 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2180; /* umaxv4hi3 */
          break;

        case 4:
          if (
#line 3737 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2182; /* umaxv2si3 */
          break;

        case 5:
          if (
#line 3762 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)))
            return 2184; /* *mmx_umaxv8qi3 */
          break;

        case 6:
          if (
#line 3786 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2186; /* umaxv4qi3 */
          break;

        case 7:
          if (
#line 3786 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2188; /* umaxv2qi3 */
          break;

        case 8:
          if (
#line 3799 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2190; /* umaxv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UMIN:
      switch (pattern10 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1838; /* *uminti3_doubleword */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1842; /* *uminqi3_1 */
            }
          break;

        case 2:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1846; /* *uminhi3_1 */
            }
          break;

        case 3:
          if (
#line 3737 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2181; /* uminv4hi3 */
          break;

        case 4:
          if (
#line 3737 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2183; /* uminv2si3 */
          break;

        case 5:
          if (
#line 3762 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)))
            return 2185; /* *mmx_uminv8qi3 */
          break;

        case 6:
          if (
#line 3786 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2187; /* uminv4qi3 */
          break;

        case 7:
          if (
#line 3786 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2189; /* uminv2qi3 */
          break;

        case 8:
          if (
#line 3799 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2191; /* uminv2hi3 */
          break;

        default:
          break;
        }
      break;

    case UNSPEC_VOLATILE:
      res = recog_59 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_CONCAT:
      res = recog_60 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_MERGE:
      res = recog_61 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_SELECT:
      res = recog_63 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_DUPLICATE:
      res = recog_64 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SS_PLUS:
      res = recog_65 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case US_PLUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern45 (x2))
        {
        case 0:
          if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)))
            return 2139; /* *mmx_usaddv8qi3 */
          break;

        case 1:
          if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)))
            return 2143; /* *mmx_usaddv4hi3 */
          break;

        case 2:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2147; /* usaddv4qi3 */
          break;

        case 3:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2151; /* usaddv2qi3 */
          break;

        case 4:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2155; /* usaddv2hi3 */
          break;

        default:
          break;
        }
      break;

    case SS_MINUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern45 (x2))
            {
            case 0:
              if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)))
                return 2140; /* *mmx_sssubv8qi3 */
              break;

            case 1:
              if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)))
                return 2144; /* *mmx_sssubv4hi3 */
              break;

            case 2:
              if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2148; /* sssubv4qi3 */
              break;

            case 3:
              if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2152; /* sssubv2qi3 */
              break;

            case 4:
              if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return 2156; /* sssubv2hi3 */
              break;

            default:
              break;
            }
          break;

        case VEC_SELECT:
          if (pattern101 (x2) == 0
              && 
#line 22628 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
            return 8602; /* ssse3_phsubswv4hi3 */
          break;

        default:
          break;
        }
      break;

    case US_MINUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (pattern45 (x2))
        {
        case 0:
          if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)))
            return 2141; /* *mmx_ussubv8qi3 */
          break;

        case 1:
          if (
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)))
            return 2145; /* *mmx_ussubv4hi3 */
          break;

        case 2:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2149; /* ussubv4qi3 */
          break;

        case 3:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2153; /* ussubv2qi3 */
          break;

        case 4:
          if (
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2157; /* ussubv2hi3 */
          break;

        default:
          break;
        }
      break;

    case TRUNCATE:
      res = recog_66 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FMA:
      res = recog_67 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SS_TRUNCATE:
      switch (pattern13 (x1))
        {
        case 0:
          if (
#line 15413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7299; /* *avx512vl_ss_truncatev2div2qi2_store_1 */
          break;

        case 1:
          if (
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7314; /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
          break;

        case 2:
          if (
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7317; /* *avx512vl_ss_truncatev4div4qi2_store_1 */
          break;

        case 3:
          if ((
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7344; /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
          break;

        case 4:
          if (
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7347; /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
          break;

        case 5:
          if (
#line 16122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 7451; /* *avx512f_ss_truncatev8div16qi2_store_1 */
          break;

        case 6:
          if (
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7384; /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
          break;

        case 7:
          if (
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7387; /* *avx512vl_ss_truncatev4div4hi2_store_1 */
          break;

        case 8:
          if (
#line 15859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7414; /* *avx512vl_ss_truncatev2div2hi2_store_1 */
          break;

        case 9:
          if (
#line 16009 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7433; /* *avx512vl_ss_truncatev2div2si2_store_1 */
          break;

        default:
          break;
        }
      break;

    case US_TRUNCATE:
      switch (pattern13 (x1))
        {
        case 0:
          if (
#line 15413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7301; /* *avx512vl_us_truncatev2div2qi2_store_1 */
          break;

        case 1:
          if (
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7316; /* *avx512vl_us_truncatev4siv4qi2_store_1 */
          break;

        case 2:
          if (
#line 15508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7319; /* *avx512vl_us_truncatev4div4qi2_store_1 */
          break;

        case 3:
          if ((
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 7346; /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
          break;

        case 4:
          if (
#line 15606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7349; /* *avx512vl_us_truncatev8siv8qi2_store_1 */
          break;

        case 5:
          if (
#line 16122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 7453; /* *avx512f_us_truncatev8div16qi2_store_1 */
          break;

        case 6:
          if (
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7386; /* *avx512vl_us_truncatev4siv4hi2_store_1 */
          break;

        case 7:
          if (
#line 15768 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7389; /* *avx512vl_us_truncatev4div4hi2_store_1 */
          break;

        case 8:
          if (
#line 15859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7416; /* *avx512vl_us_truncatev2div2hi2_store_1 */
          break;

        case 9:
          if (
#line 16009 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return 7435; /* *avx512vl_us_truncatev2div2si2_store_1 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_XImode:
      if (nonimmediate_operand (operands[0], E_XImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_XImode)
          && 
#line 2453 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512F && TARGET_EVEX512
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode))))
        return 92; /* *movxi_internal_avx512f */
      break;

    case E_OImode:
      if (nonimmediate_operand (operands[0], E_OImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_OImode)
          && 
#line 2476 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode))))
        return 93; /* *movoi_internal_avx */
      break;

    case E_SImode:
      if (register_operand (operands[0], E_SImode)
          && address_no_seg_operand (operands[1], E_SImode)
          && 
#line 6372 "../../src/gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 264; /* *leasi */
      break;

    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && address_no_seg_operand (operands[1], E_DImode)
          && (
#line 6372 "../../src/gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 265; /* *leadi */
      break;

    default:
      break;
    }
  switch (GET_CODE (x2))
    {
    case PLUS:
      res = recog_68 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTEND:
      res = recog_76 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case COMPARE:
      res = recog_77 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IOR:
      res = recog_81 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case XOR:
      res = recog_82 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MINUS:
      res = recog_84 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case IF_THEN_ELSE:
      res = recog_87 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MULT:
      res = recog_88 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMUL_HIGHPART:
      switch (pattern15 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 627; /* smulsi3_highpart */
            }
          break;

        case 1:
          if (
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 629; /* smuldi3_highpart */
            }
          break;

        default:
          break;
        }
      break;

    case UMUL_HIGHPART:
      switch (pattern15 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 628; /* umulsi3_highpart */
            }
          break;

        case 1:
          if (
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            {
              *pnum_clobbers = 2;
              return 630; /* umuldi3_highpart */
            }
          break;

        default:
          break;
        }
      break;

    case TRUNCATE:
      res = recog_89 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case AND:
      res = recog_91 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NOT:
      res = recog_92 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case NEG:
      res = recog_93 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ABS:
      res = recog_94 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFT:
      res = recog_96 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LSHIFTRT:
      res = recog_98 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ASHIFTRT:
      res = recog_100 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SUBREG:
      res = recog_101 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATE:
      res = recog_102 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ROTATERT:
      res = recog_103 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case ZERO_EXTRACT:
      res = recog_105 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

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
      res = recog_106 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case UNSPEC:
      res = recog_110 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CALL:
      res = recog_111 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FFS:
      if (pnum_clobbers != NULL
          && GET_MODE (x2) == E_SImode)
        {
          operands[0] = x3;
          if (register_operand (operands[0], E_SImode))
            {
              x4 = XEXP (x2, 0);
              operands[1] = x4;
              if (nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 20965 "../../src/gcc/config/i386/i386.md"
(!TARGET_CMOVE))
                {
                  *pnum_clobbers = 2;
                  return 1507; /* ffssi2_no_cmove */
                }
            }
        }
      break;

    case CTZ:
      res = recog_112 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTEND:
      res = recog_113 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case CLZ:
      res = recog_114 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case POPCOUNT:
      res = recog_115 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case BSWAP:
      res = recog_355 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SIGN_EXTRACT:
      res = recog_116 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SMAX:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1831; /* *smaxdi3_doubleword */
            }
          if ((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1851; /* *smaxdi3_1 */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1847; /* *smaxsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case SMIN:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1832; /* *smindi3_doubleword */
            }
          if ((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1852; /* *smindi3_1 */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1848; /* *sminsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UMAX:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1833; /* *umaxdi3_doubleword */
            }
          if ((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1853; /* *umaxdi3_1 */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1849; /* *umaxsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UMIN:
      switch (pattern21 (x1, pnum_clobbers))
        {
        case 0:
          if ((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1834; /* *umindi3_doubleword */
            }
          if ((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1854; /* *umindi3_1 */
            }
          break;

        case 1:
          if (
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1850; /* *uminsi3_1 */
            }
          break;

        default:
          break;
        }
      break;

    case UNSPEC_VOLATILE:
      res = recog_117 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case VEC_SELECT:
      res = recog_120 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case FIX:
      switch (pattern24 (x1))
        {
        case 0:
          if (
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4702; /* avx512fp16_fix_truncsi2 */
          break;

        case 1:
          if (
#line 8608 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 4804; /* sse_cvttss2si */
          break;

        case 2:
          if (
#line 9154 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 4945; /* sse2_cvttsd2si */
          break;

        case 3:
          if ((
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4706; /* avx512fp16_fix_truncdi2 */
          break;

        case 4:
          if ((
#line 8608 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4806; /* sse_cvttss2siq */
          break;

        case 5:
          if ((
#line 9154 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4947; /* sse2_cvttsd2siq */
          break;

        case 6:
          if (
#line 8011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4710; /* avx512fp16_fix_truncsi2_mem */
          break;

        case 7:
          if ((
#line 8011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4712; /* avx512fp16_fix_truncdi2_mem */
          break;

        default:
          break;
        }
      break;

    case UNSIGNED_FIX:
      switch (pattern24 (x1))
        {
        case 0:
          if (
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4704; /* avx512fp16_fixuns_truncsi2 */
          break;

        case 1:
          if (
#line 9059 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 4919; /* avx512f_vcvttss2usi */
          break;

        case 2:
          if (
#line 9095 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 4931; /* avx512f_vcvttsd2usi */
          break;

        case 3:
          if ((
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4708; /* avx512fp16_fixuns_truncdi2 */
          break;

        case 4:
          if ((
#line 9059 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4921; /* avx512f_vcvttss2usiq */
          break;

        case 5:
          if ((
#line 9095 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4933; /* avx512f_vcvttsd2usiq */
          break;

        case 6:
          if (
#line 8011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
            return 4711; /* avx512fp16_fixuns_truncsi2_mem */
          break;

        case 7:
          if ((
#line 8011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 4713; /* avx512fp16_fixuns_truncdi2_mem */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  res = recog_324 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  switch (GET_CODE (x2))
    {
    case VEC_MERGE:
      return recog_321 (x1, insn, pnum_clobbers);

    case UNSPEC:
      return recog_317 (x1, insn, pnum_clobbers);

    case VEC_CONCAT:
      return recog_318 (x1, insn, pnum_clobbers);

    case PLUS:
      return recog_319 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_345 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_332 (x1, insn, pnum_clobbers);

    case DIV:
      return recog_350 (x1, insn, pnum_clobbers);

    case SQRT:
      return recog_338 (x1, insn, pnum_clobbers);

    case SMAX:
      return recog_341 (x1, insn, pnum_clobbers);

    case SMIN:
      return recog_342 (x1, insn, pnum_clobbers);

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
      return recog_353 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_325 (x1, insn, pnum_clobbers);

    case FLOAT:
      return recog_331 (x1, insn, pnum_clobbers);

    case UNSIGNED_FLOAT:
      return recog_337 (x1, insn, pnum_clobbers);

    case FIX:
      return recog_336 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      return recog_340 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      return recog_326 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      return recog_348 (x1, insn, pnum_clobbers);

    case VEC_SELECT:
      return recog_320 (x1, insn, pnum_clobbers);

    case VEC_DUPLICATE:
      return recog_322 (x1, insn, pnum_clobbers);

    case AND:
    case IOR:
    case XOR:
    case NOT:
      return recog_344 (x1, insn, pnum_clobbers);

    case SS_TRUNCATE:
      operands[0] = x3;
      switch (pattern50 (x2))
        {
        case 0:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7227; /* *avx512f_ss_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7269; /* *avx512vl_ss_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7230; /* *avx512f_ss_truncatev16siv16hi2 */

        case 3:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7233; /* *avx512f_ss_truncatev8div8si2 */

        case 4:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7236; /* *avx512f_ss_truncatev8div8hi2 */

        case 5:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7266; /* *avx512vl_ss_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7256; /* avx512bw_ss_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7263; /* *avx512vl_ss_truncatev4div4si2 */

        default:
          return -1;
        }

    case TRUNCATE:
      return recog_339 (x1, insn, pnum_clobbers);

    case US_TRUNCATE:
      operands[0] = x3;
      switch (pattern50 (x2))
        {
        case 0:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7229; /* *avx512f_us_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7271; /* *avx512vl_us_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7232; /* *avx512f_us_truncatev16siv16hi2 */

        case 3:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7235; /* *avx512f_us_truncatev8div8si2 */

        case 4:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7238; /* *avx512f_us_truncatev8div8hi2 */

        case 5:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7268; /* *avx512vl_us_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7258; /* avx512bw_us_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7265; /* *avx512vl_us_truncatev4div4si2 */

        default:
          return -1;
        }

    case SS_PLUS:
      return recog_323 (x1, insn, pnum_clobbers);

    case US_PLUS:
      operands[0] = x3;
      switch (pattern51 (x2))
        {
        case 0:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7516; /* *avx512bw_usaddv64qi3 */

        case 1:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7524; /* *avx2_usaddv32qi3 */

        case 2:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)))
            return -1;
          return 7532; /* *sse2_usaddv16qi3 */

        case 3:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7540; /* *avx512bw_usaddv32hi3 */

        case 4:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7548; /* *avx2_usaddv16hi3 */

        case 5:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)))
            return -1;
          return 7556; /* *sse2_usaddv8hi3 */

        default:
          return -1;
        }

    case SS_MINUS:
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern51 (x2))
            {
            case 0:
              if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7518; /* *avx512bw_sssubv64qi3 */

            case 1:
              if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7526; /* *avx2_sssubv32qi3 */

            case 2:
              if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)))
                return -1;
              return 7534; /* *sse2_sssubv16qi3 */

            case 3:
              if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7542; /* *avx512bw_sssubv32hi3 */

            case 4:
              if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7550; /* *avx2_sssubv16hi3 */

            case 5:
              if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)))
                return -1;
              return 7558; /* *sse2_sssubv8hi3 */

            default:
              return -1;
            }

        case VEC_SELECT:
          switch (pattern194 (x2))
            {
            case 0:
              if (!
#line 22580 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8594; /* avx2_phsubswv16hi3 */

            case 1:
              if (!
#line 22603 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
                return -1;
              return 8598; /* ssse3_phsubswv8hi3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case US_MINUS:
      operands[0] = x3;
      switch (pattern51 (x2))
        {
        case 0:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7520; /* *avx512bw_ussubv64qi3 */

        case 1:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7528; /* *avx2_ussubv32qi3 */

        case 2:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)))
            return -1;
          return 7536; /* *sse2_ussubv16qi3 */

        case 3:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7544; /* *avx512bw_ussubv32hi3 */

        case 4:
          if (!(
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7552; /* *avx2_ussubv16hi3 */

        case 5:
          if (!
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)))
            return -1;
          return 7560; /* *sse2_ussubv8hi3 */

        default:
          return -1;
        }

    case ASHIFTRT:
      return recog_327 (x1, insn, pnum_clobbers);

    case ASHIFT:
      return recog_329 (x1, insn, pnum_clobbers);

    case LSHIFTRT:
      return recog_328 (x1, insn, pnum_clobbers);

    case ROTATE:
      return recog_352 (x1, insn, pnum_clobbers);

    case ROTATERT:
      return recog_351 (x1, insn, pnum_clobbers);

    case UMAX:
      return recog_347 (x1, insn, pnum_clobbers);

    case UMIN:
      return recog_346 (x1, insn, pnum_clobbers);

    case ABS:
      return recog_335 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      return recog_343 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      return recog_333 (x1, insn, pnum_clobbers);

    case IF_THEN_ELSE:
      return recog_330 (x1, insn, pnum_clobbers);

    case CLZ:
      return recog_349 (x1, insn, pnum_clobbers);

    case POPCOUNT:
      return recog_334 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 rtx_insn *
split_37 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case LSHIFTRT:
      if (GET_MODE (x5) != E_SImode)
        return NULL;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern229 (x6, 
E_CCmode, 
17) != 0
          || !mask_reg_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!mask_reg_operand (operands[1], E_SImode))
        return NULL;
      x8 = XEXP (x5, 1);
      operands[2] = x8;
      if (!const_0_to_31_operand (operands[2], E_VOIDmode)
          || !
#line 2319 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && reload_completed))
        return NULL;
      return gen_split_1232 (insn, operands);

    case UNSPEC:
      if (pattern350 (x1) != 0)
        return NULL;
      switch (pattern1041 (x1))
        {
        case 0:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1344 (insn, operands);

        case 1:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1365 (insn, operands);

        case 2:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1371 (insn, operands);

        case 3:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1407 (insn, operands);

        case 4:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1416 (insn, operands);

        case 5:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1347 (insn, operands);

        case 6:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1350 (insn, operands);

        case 7:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1353 (insn, operands);

        case 8:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1356 (insn, operands);

        case 9:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1359 (insn, operands);

        case 10:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1368 (insn, operands);

        case 11:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1374 (insn, operands);

        case 12:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1377 (insn, operands);

        case 13:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1380 (insn, operands);

        case 14:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1383 (insn, operands);

        case 15:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1386 (insn, operands);

        case 16:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1419 (insn, operands);

        case 17:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1362 (insn, operands);

        case 18:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1410 (insn, operands);

        case 19:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1413 (insn, operands);

        case 20:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1404 (insn, operands);

        case 21:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1345 (insn, operands);

        case 22:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1366 (insn, operands);

        case 23:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1372 (insn, operands);

        case 24:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1408 (insn, operands);

        case 25:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1417 (insn, operands);

        case 26:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1348 (insn, operands);

        case 27:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1351 (insn, operands);

        case 28:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1354 (insn, operands);

        case 29:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1357 (insn, operands);

        case 30:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1360 (insn, operands);

        case 31:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1369 (insn, operands);

        case 32:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1375 (insn, operands);

        case 33:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1378 (insn, operands);

        case 34:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1381 (insn, operands);

        case 35:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1384 (insn, operands);

        case 36:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1387 (insn, operands);

        case 37:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1420 (insn, operands);

        case 38:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1363 (insn, operands);

        case 39:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1411 (insn, operands);

        case 40:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1414 (insn, operands);

        case 41:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1405 (insn, operands);

        case 42:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1346 (insn, operands);

        case 43:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1367 (insn, operands);

        case 44:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1373 (insn, operands);

        case 45:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1409 (insn, operands);

        case 46:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1418 (insn, operands);

        case 47:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1349 (insn, operands);

        case 48:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1352 (insn, operands);

        case 49:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1355 (insn, operands);

        case 50:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1358 (insn, operands);

        case 51:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1361 (insn, operands);

        case 52:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1370 (insn, operands);

        case 53:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1376 (insn, operands);

        case 54:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1379 (insn, operands);

        case 55:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1382 (insn, operands);

        case 56:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1385 (insn, operands);

        case 57:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1388 (insn, operands);

        case 58:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1421 (insn, operands);

        case 59:
          if (!((
#line 4435 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 4441 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1364 (insn, operands);

        case 60:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1412 (insn, operands);

        case 61:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1415 (insn, operands);

        case 62:
          if (!((
#line 4524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
  && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4529 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1406 (insn, operands);

        case 63:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1434 (insn, operands);

        case 64:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1437 (insn, operands);

        case 65:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1446 (insn, operands);

        case 66:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1452 (insn, operands);

        case 67:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1440 (insn, operands);

        case 68:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1443 (insn, operands);

        case 69:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1449 (insn, operands);

        case 70:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1453 (insn, operands);

        case 71:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1454 (insn, operands);

        case 72:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1455 (insn, operands);

        case 73:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1456 (insn, operands);

        case 74:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (HImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1457 (insn, operands);

        case 75:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1435 (insn, operands);

        case 76:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1438 (insn, operands);

        case 77:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1447 (insn, operands);

        case 78:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1458 (insn, operands);

        case 79:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1441 (insn, operands);

        case 80:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1444 (insn, operands);

        case 81:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1450 (insn, operands);

        case 82:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1459 (insn, operands);

        case 83:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1460 (insn, operands);

        case 84:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1461 (insn, operands);

        case 85:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1462 (insn, operands);

        case 86:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (SImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1463 (insn, operands);

        case 87:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1436 (insn, operands);

        case 88:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1439 (insn, operands);

        case 89:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1448 (insn, operands);

        case 90:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1464 (insn, operands);

        case 91:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1442 (insn, operands);

        case 92:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1445 (insn, operands);

        case 93:
          if (!((
#line 4634 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && ix86_pre_reload_split ()
   && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4640 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1451 (insn, operands);

        case 94:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1465 (insn, operands);

        case 95:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1466 (insn, operands);

        case 96:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1467 (insn, operands);

        case 97:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1468 (insn, operands);

        case 98:
          if (!((
#line 4724 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
       < GET_MODE_PRECISION (DImode))
   && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 4730 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1469 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_72 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
          return gen_split_1985 (insn, operands);

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
          return gen_split_2012 (insn, operands);

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
          return gen_split_2039 (insn, operands);

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
          return gen_split_2066 (insn, operands);

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
          return gen_split_2093 (insn, operands);

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
          return gen_split_2120 (insn, operands);

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
          return gen_split_2147 (insn, operands);

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
          return gen_split_2174 (insn, operands);

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
          return gen_split_2201 (insn, operands);

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
          return gen_split_2228 (insn, operands);

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
          return gen_split_2255 (insn, operands);

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
          return gen_split_2282 (insn, operands);

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
          return gen_split_1988 (insn, operands);

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
          return gen_split_2015 (insn, operands);

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
          return gen_split_2042 (insn, operands);

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
          return gen_split_2069 (insn, operands);

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
          return gen_split_2096 (insn, operands);

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
          return gen_split_2123 (insn, operands);

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
          return gen_split_2150 (insn, operands);

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
          return gen_split_2177 (insn, operands);

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
          return gen_split_2204 (insn, operands);

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
          return gen_split_2231 (insn, operands);

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
          return gen_split_2258 (insn, operands);

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
          return gen_split_2285 (insn, operands);

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
          return gen_split_1991 (insn, operands);

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
          return gen_split_2018 (insn, operands);

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
          return gen_split_2045 (insn, operands);

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
          return gen_split_2072 (insn, operands);

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
          return gen_split_2099 (insn, operands);

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
          return gen_split_2126 (insn, operands);

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
          return gen_split_2153 (insn, operands);

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
          return gen_split_2180 (insn, operands);

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
          return gen_split_2207 (insn, operands);

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
          return gen_split_2234 (insn, operands);

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
          return gen_split_2261 (insn, operands);

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
          return gen_split_2288 (insn, operands);

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
          return gen_split_3065 (insn, operands);

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
          return gen_split_3074 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3083 (insn, operands);

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
          return gen_split_3092 (insn, operands);

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
          return gen_split_3101 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3110 (insn, operands);

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
          return gen_split_3119 (insn, operands);

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
          return gen_split_3128 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3137 (insn, operands);

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
          return gen_split_3146 (insn, operands);

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
          return gen_split_3155 (insn, operands);

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
          return gen_split_3164 (insn, operands);

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
          return gen_split_2633 (insn, operands);

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
          return gen_split_2660 (insn, operands);

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
          return gen_split_2687 (insn, operands);

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
          return gen_split_2714 (insn, operands);

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
          return gen_split_2741 (insn, operands);

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
          return gen_split_2768 (insn, operands);

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
          return gen_split_2795 (insn, operands);

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
          return gen_split_2822 (insn, operands);

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
          return gen_split_2849 (insn, operands);

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
          return gen_split_2876 (insn, operands);

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
          return gen_split_2903 (insn, operands);

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
          return gen_split_2930 (insn, operands);

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
          return gen_split_2636 (insn, operands);

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
          return gen_split_2663 (insn, operands);

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
          return gen_split_2690 (insn, operands);

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
          return gen_split_2717 (insn, operands);

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
          return gen_split_2744 (insn, operands);

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
          return gen_split_2771 (insn, operands);

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
          return gen_split_2798 (insn, operands);

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
          return gen_split_2825 (insn, operands);

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
          return gen_split_2852 (insn, operands);

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
          return gen_split_2879 (insn, operands);

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
          return gen_split_2906 (insn, operands);

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
          return gen_split_2933 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1187 (x2, 
E_V32HFmode) != 0
              || !((
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
          return gen_split_2639 (insn, operands);

        case E_V16HFmode:
          if (pattern1002 (x2, 
E_V16HFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16HFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16HFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16HFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16HFmode)
                  && ((
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
                return gen_split_2666 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16HFmode)
              || !register_operand (operands[2], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3702 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3718 (insn, operands);

        case E_V8HFmode:
          if (pattern1002 (x2, 
E_V8HFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8HFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8HFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8HFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8HFmode)
                  && (
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
                return gen_split_2693 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8HFmode)
              || !register_operand (operands[2], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3703 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3719 (insn, operands);

        case E_V32BFmode:
          if (pattern1187 (x2, 
E_V32BFmode) != 0
              || !((
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
          return gen_split_2720 (insn, operands);

        case E_V16BFmode:
          if (pattern1187 (x2, 
E_V16BFmode) != 0
              || !((
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
          return gen_split_2747 (insn, operands);

        case E_V8BFmode:
          if (pattern1187 (x2, 
E_V8BFmode) != 0
              || !(
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
          return gen_split_2774 (insn, operands);

        case E_V16SFmode:
          if (pattern1187 (x2, 
E_V16SFmode) != 0
              || !((
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
          return gen_split_2801 (insn, operands);

        case E_V8SFmode:
          if (pattern1002 (x2, 
E_V8SFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8SFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8SFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8SFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8SFmode)
                  && ((
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
                return gen_split_2828 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8SFmode)
              || !register_operand (operands[2], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3704 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3720 (insn, operands);

        case E_V4SFmode:
          if (pattern1002 (x2, 
E_V4SFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4SFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4SFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4SFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4SFmode)
                  && (
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
                return gen_split_2855 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4SFmode)
              || !register_operand (operands[2], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3705 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3721 (insn, operands);

        case E_V8DFmode:
          if (pattern1187 (x2, 
E_V8DFmode) != 0
              || !((
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
          return gen_split_2882 (insn, operands);

        case E_V4DFmode:
          if (pattern1002 (x2, 
E_V4DFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4DFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4DFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4DFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4DFmode)
                  && ((
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
                return gen_split_2909 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4DFmode)
              || !register_operand (operands[2], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3706 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3722 (insn, operands);

        case E_V2DFmode:
          if (pattern1002 (x2, 
E_V2DFmode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V2DFmode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V2DFmode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V2DFmode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V2DFmode)
                  && ((
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
                return gen_split_2936 (insn, operands);
            }
          if (!register_operand (operands[1], E_V2DFmode)
              || !register_operand (operands[2], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3707 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3723 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_83 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return NULL;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case MINUS:
          switch (pattern725 (x2, 
PLUS))
            {
            case 0:
              if (pattern1664 (x4, 
E_V8SFmode, 
E_V16SFmode) != 0
                  || !(
#line 3589 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1308 (insn, operands);

            case 1:
              if (pattern1664 (x4, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 3589 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
                return NULL;
              return gen_split_1309 (insn, operands);

            case 2:
              if (pattern1664 (x4, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 3589 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1310 (insn, operands);

            case 3:
              if (pattern1664 (x4, 
E_V2DFmode, 
E_V4DFmode) != 0
                  || !(
#line 3589 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return NULL;
              return gen_split_1311 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
          switch (pattern725 (x2, 
MINUS))
            {
            case 0:
              if (pattern1665 (x4, 
E_V8SFmode, 
E_V16SFmode) != 0
                  || !(
#line 3623 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1312 (insn, operands);

            case 1:
              if (pattern1665 (x4, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 3623 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
                return NULL;
              return gen_split_1313 (insn, operands);

            case 2:
              if (pattern1665 (x4, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 3623 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_1314 (insn, operands);

            case 3:
              if (pattern1665 (x4, 
E_V2DFmode, 
E_V4DFmode) != 0
                  || !(
#line 3623 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3
   && can_create_pseudo_p ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return NULL;
              return gen_split_1315 (insn, operands);

            default:
              return NULL;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          res = split_59 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (XVECLEN (x3, 0) < 1)
            return NULL;
          operands[4] = x3;
          switch (pattern807 (x2))
            {
            case 0:
              if ((
#line 24165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24167 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3510 (insn, operands);
              break;

            case 1:
              if ((
#line 24165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24167 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3511 (insn, operands);
              break;

            case 2:
              if ((
#line 24165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24167 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3512 (insn, operands);
              break;

            case 3:
              if (((
#line 24218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 953 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24220 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3514 (insn, operands);
              break;

            case 4:
              if (((
#line 24218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 953 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24220 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3515 (insn, operands);
              break;

            case 5:
              if (((
#line 24218 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 953 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24220 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3516 (insn, operands);
              break;

            case 6:
              if ((
#line 24329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24331 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3522 (insn, operands);
              break;

            case 7:
              if ((
#line 24329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24331 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3523 (insn, operands);
              break;

            case 8:
              if ((
#line 24329 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24331 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3524 (insn, operands);
              break;

            case 9:
              if (((
#line 24562 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 956 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24564 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3534 (insn, operands);
              break;

            case 10:
              if (((
#line 24562 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 956 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24564 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3535 (insn, operands);
              break;

            case 11:
              if (((
#line 24562 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 956 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 24564 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3536 (insn, operands);
              break;

            case 12:
              if ((
#line 24616 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24618 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3538 (insn, operands);
              break;

            case 13:
              if ((
#line 24616 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24618 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3539 (insn, operands);
              break;

            case 14:
              if ((
#line 24616 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 24618 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3540 (insn, operands);
              break;

            case 15:
              if ((
#line 24734 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24736 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3546 (insn, operands);
              break;

            case 16:
              if ((
#line 24734 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24736 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3547 (insn, operands);
              break;

            case 17:
              if ((
#line 24734 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 24736 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_3548 (insn, operands);
              break;

            default:
              break;
            }
          operands[3] = x3;
          switch (pattern808 (x2))
            {
            case 0:
              if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3769 (insn, operands);

            case 1:
              if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3770 (insn, operands);

            case 2:
              if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3771 (insn, operands);

            case 3:
              if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3772 (insn, operands);

            case 4:
              if (!((
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3773 (insn, operands);

            case 5:
              if (!(
#line 29072 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 29074 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3774 (insn, operands);

            default:
              return NULL;
            }

        case VEC_CONCAT:
          switch (pattern524 (x2))
            {
            case 0:
              if (!(
#line 25117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512) && 
#line 25119 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3569 (insn, operands);

            case 1:
              if (!(
#line 25169 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 25171 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3571 (insn, operands);

            case 2:
              if (!(
#line 25265 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 25267 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3577 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      res = split_63 (x1, insn);
      if (res != NULL_RTX)
        return res;
      if (GET_CODE (x4) != SUBREG)
        return NULL;
      switch (pattern526 (x2))
        {
        case 0:
          if (!(
#line 15048 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15050 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3178 (insn, operands);

        case 1:
          if (!(
#line 15101 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15103 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3180 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2)
        return NULL;
      switch (pattern528 (x2))
        {
        case 0:
          if (!(
#line 15023 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15025 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3177 (insn, operands);

        case 1:
          if (!(
#line 15285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()) && 
#line 15288 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3183 (insn, operands);

        case 2:
          if (!(
#line 15080 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15082 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3179 (insn, operands);

        case 3:
          if (!(
#line 15132 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15134 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3181 (insn, operands);

        case 4:
          if (!(
#line 15204 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 15206 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3182 (insn, operands);

        case 5:
          if (!(
#line 15304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15306 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3184 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_insns (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case EH_RETURN:
      if (!
#line 20846 "../../src/gcc/config/i386/i386.md"
(epilogue_completed))
        return NULL;
      return gen_split_869 (insn, operands);

    case PARALLEL:
    case UNSPEC:
    case UNSPEC_VOLATILE:
    case SET:
      switch (GET_CODE (x1))
        {
        case SET:
          res = split_13 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case PARALLEL:
          res = split_35 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      operands[0] = x1;
      if (tls_address_pattern (operands[0], E_VOIDmode)
          && 
#line 23376 "../../src/gcc/config/i386/i386.md"
(TARGET_TLS_DIRECT_SEG_REFS))
        return gen_split_926 (insn, operands);
      switch (GET_CODE (x1))
        {
        case PARALLEL:
          return split_85 (x1, insn);

        case SET:
          x2 = XEXP (x1, 1);
          switch (GET_CODE (x2))
            {
            case NEG:
              res = split_39 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case IF_THEN_ELSE:
              res = split_41 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case UNSPEC:
              res = split_42 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case COMPARE:
              res = split_43 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case NOT:
              res = split_44 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case REG:
            case SUBREG:
            case MEM:
              res = split_45 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[1] = x2;
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (GET_MODE (operands[0]))
                {
                case E_V8QImode:
                  if (nonimmediate_gr_operand (operands[0], E_V8QImode)
                      && const0_operand (operands[1], E_V8QImode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_996 (insn, operands);
                  if (memory_operand (operands[0], E_V8QImode)
                      && x86_64_const_vector_operand (operands[1], E_V8QImode)
                      && (
#line 87 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1007 (insn, operands);
                  break;

                case E_V4HImode:
                  if (nonimmediate_gr_operand (operands[0], E_V4HImode)
                      && const0_operand (operands[1], E_V4HImode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_997 (insn, operands);
                  if (memory_operand (operands[0], E_V4HImode)
                      && x86_64_const_vector_operand (operands[1], E_V4HImode)
                      && (
#line 87 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1008 (insn, operands);
                  break;

                case E_V2SImode:
                  if (nonimmediate_gr_operand (operands[0], E_V2SImode)
                      && const0_operand (operands[1], E_V2SImode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_998 (insn, operands);
                  if (memory_operand (operands[0], E_V2SImode)
                      && x86_64_const_vector_operand (operands[1], E_V2SImode)
                      && (
#line 89 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1011 (insn, operands);
                  break;

                case E_V1DImode:
                  if (nonimmediate_gr_operand (operands[0], E_V1DImode)
                      && const0_operand (operands[1], E_V1DImode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_999 (insn, operands);
                  break;

                case E_V2SFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V2SFmode)
                      && const0_operand (operands[1], E_V2SFmode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_1000 (insn, operands);
                  if (memory_operand (operands[0], E_V2SFmode)
                      && x86_64_const_vector_operand (operands[1], E_V2SFmode)
                      && (
#line 89 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1012 (insn, operands);
                  break;

                case E_V4HFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V4HFmode)
                      && const0_operand (operands[1], E_V4HFmode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_1001 (insn, operands);
                  if (memory_operand (operands[0], E_V4HFmode)
                      && x86_64_const_vector_operand (operands[1], E_V4HFmode)
                      && (
#line 88 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1009 (insn, operands);
                  break;

                case E_V4BFmode:
                  if (nonimmediate_gr_operand (operands[0], E_V4BFmode)
                      && const0_operand (operands[1], E_V4BFmode)
                      && 
#line 317 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
                    return gen_split_1002 (insn, operands);
                  if (memory_operand (operands[0], E_V4BFmode)
                      && x86_64_const_vector_operand (operands[1], E_V4BFmode)
                      && (
#line 88 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT) && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1010 (insn, operands);
                  break;

                case E_V2QImode:
                  if (memory_operand (operands[0], E_V2QImode)
                      && x86_64_const_vector_operand (operands[1], E_V2QImode)
                      && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_1003 (insn, operands);
                  break;

                case E_V4QImode:
                  if (memory_operand (operands[0], E_V4QImode)
                      && x86_64_const_vector_operand (operands[1], E_V4QImode)
                      && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_1004 (insn, operands);
                  break;

                case E_V2HImode:
                  if (memory_operand (operands[0], E_V2HImode)
                      && x86_64_const_vector_operand (operands[1], E_V2HImode)
                      && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_1005 (insn, operands);
                  break;

                case E_V2HFmode:
                  if (memory_operand (operands[0], E_V2HFmode)
                      && x86_64_const_vector_operand (operands[1], E_V2HFmode)
                      && 
#line 417 "../../src/gcc/config/i386/mmx.md"
( reload_completed))
                    return gen_split_1006 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case PLUS:
              res = split_46 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case MINUS:
              res = split_47 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_SELECT:
              res = split_49 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case LT:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern234 (x2))
                {
                case 0:
                  if ((
#line 3873 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 3875 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1052 (insn, operands);
                  break;

                case 1:
                  if ((
#line 3873 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()) && 
#line 3875 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1053 (insn, operands);
                  break;

                case 2:
                  if ((
#line 3962 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 3964 "../../src/gcc/config/i386/mmx.md"
( 1)))
                    return gen_split_1057 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case AND:
              res = split_50 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_CONCAT:
              res = split_51 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case VEC_MERGE:
              res = split_52 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case ZERO_EXTEND:
              res = split_53 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case IOR:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern236 (x2))
                {
                case 0:
                  if (
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1184 (insn, operands);
                  break;

                case 1:
                  if (
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1187 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1190 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1193 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case XOR:
              x3 = XEXP (x1, 0);
              operands[0] = x3;
              switch (pattern236 (x2))
                {
                case 0:
                  if (
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1185 (insn, operands);
                  break;

                case 1:
                  if (
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1188 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1191 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1194 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case ASHIFT:
              switch (pattern52 (x1))
                {
                case 0:
                  if (
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1216 (insn, operands);
                  break;

                case 1:
                  if (
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1218 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1220 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1222 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case LSHIFTRT:
              switch (pattern52 (x1))
                {
                case 0:
                  if (
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1217 (insn, operands);
                  break;

                case 1:
                  if (
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                    return gen_split_1219 (insn, operands);
                  break;

                case 2:
                  if ((
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1221 (insn, operands);
                  break;

                case 3:
                  if ((
#line 2278 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                    return gen_split_1223 (insn, operands);
                  break;

                default:
                  break;
                }
              break;

            case SIGN_EXTEND:
              res = split_54 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            case SS_PLUS:
              if (pattern54 (x1) == 0
                  && 
#line 22633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return gen_split_3466 (insn, operands);
              break;

            case SS_MINUS:
              if (pattern54 (x1) == 0
                  && 
#line 22633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return gen_split_3468 (insn, operands);
              break;

            case NE:
            case EQ:
              res = split_55 (x1, insn);
              if (res != NULL_RTX)
                return res;
              break;

            default:
              break;
            }
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          return split_84 (x1, insn);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_4 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && const_int_operand (operands[1], E_DImode)
          && 
#line 2799 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && optimize_insn_for_size_p ()
   && LEGACY_INT_REG_P (operands[0])
   && !x86_64_immediate_operand (operands[1], DImode)
   && !x86_64_zext_immediate_operand (operands[1], DImode)
   && !((UINTVAL (operands[1]) >> ctz_hwi (UINTVAL (operands[1])))
	& ~HOST_WIDE_INT_C (0xffffffff))
   && peep2_regno_dead_p (0, FLAGS_REG)))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_4 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!general_reg_operand (operands[0], E_DImode))
        return NULL;
      if (const_int_operand (operands[1], E_DImode))
        {
          if ((
#line 2948 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_7 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count >= 2)
            {
              x2 = PATTERN (peep2_next_insn (1));
              switch (pattern1063 (x2))
                {
                case 0:
                  if ((
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_36 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if ((
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_38 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_40 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_DImode) != 0
          || !(
#line 3283 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], DImode)
       || (constm1_operand (operands[1], DImode)
	   && (8 > 1 || TARGET_AVX512DQ)))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_14 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[0], E_HImode))
        return NULL;
      if (const_int_operand (operands[1], E_HImode)
          && 
#line 2948 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_5 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_HImode) != 0
          || !
#line 3283 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], HImode)
       || (constm1_operand (operands[1], HImode)
	   && (2 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_12 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[0], E_SImode))
        return NULL;
      if (const_int_operand (operands[1], E_SImode))
        {
          if (
#line 2948 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && optimize_size > 1
   && operands[1] != const0_rtx
   && IN_RANGE (INTVAL (operands[1]), -128, 127)
   && !ix86_red_zone_used
   && REGNO (operands[0]) != SP_REG))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_6 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count >= 2)
            {
              x2 = PATTERN (peep2_next_insn (1));
              switch (pattern1063 (x2))
                {
                case 0:
                  if (
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_35 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_37 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 3656 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_39 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      if (peep2_current_count < 2)
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_SImode) != 0
          || !
#line 3283 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], SImode)
       || (constm1_operand (operands[1], SImode)
	   && (4 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_13 (insn, operands);

    case E_QImode:
      if (peep2_current_count < 2
          || !general_reg_operand (operands[0], E_QImode))
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern958 (x2, 
E_QImode) != 0
          || !
#line 3283 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])
   && (const0_operand (operands[1], QImode)
       || (constm1_operand (operands[1], QImode)
	   && (1 > 1 || TARGET_AVX512DQ)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_11 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_8 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      switch (GET_CODE (operands[0]))
        {
        case MEM:
          if (push_operand (operands[0], E_DImode)
              && immediate_operand (operands[1], E_DImode)
              && 
#line 2223 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_3 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case REG:
        case SUBREG:
          res = peephole2_4 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          break;

        default:
          break;
        }
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (memory_operand (operands[0], E_HImode)
              && const_int_operand (operands[1], E_HImode)
              && 
#line 2970 "../../src/gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_8 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_SImode:
          if (memory_operand (operands[0], E_SImode)
              && const_int_operand (operands[1], E_SImode)
              && 
#line 2970 "../../src/gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_9 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_DImode:
          if (memory_operand (operands[0], E_DImode)
              && const_int_operand (operands[1], E_DImode)
              && (
#line 2970 "../../src/gcc/config/i386/i386.md"
((operands[1] == const0_rtx || operands[1] == constm1_rtx)
   && optimize_insn_for_size_p () && optimize_size > 1
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_10 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      if (x2 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
        {
          res = peephole2_5 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      operands[1] = x2;
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (memory_operand (operands[0], E_QImode)
              && immediate_operand (operands[1], E_QImode)
              && 
#line 27818 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_259 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_HImode:
          if (memory_operand (operands[0], E_HImode)
              && immediate_operand (operands[1], E_HImode)
              && 
#line 27818 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_260 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case REG:
      res = peephole2_6 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case SUBREG:
    case MEM:
      res = peephole2_7 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    default:
      break;
    }
  if (peep2_current_count < 2)
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x3 = XEXP (x1, 0);
  switch (GET_MODE (x3))
    {
    case E_HImode:
      if (peep2_current_count >= 3
          && peep2_current_count >= 4)
        {
          operands[2] = x3;
          if (general_reg_operand (operands[2], E_HImode))
            {
              operands[3] = x2;
              if (general_gr_operand (operands[3], E_HImode))
                {
                  x5 = XEXP (x4, 0);
                  operands[0] = x5;
                  if (general_reg_operand (operands[0], E_HImode))
                    {
                      x6 = XEXP (x4, 1);
                      if (pattern963 (x6, 
E_HImode) == 0
                          && 
#line 26525 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])))
                        {
                          *pmatch_len_ = 3;
                          res = gen_peephole2_206 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
            }
        }
      operands[0] = x3;
      operands[1] = x2;
      if (x86_64_general_operand (operands[1], E_HImode)
          && general_reg_operand (operands[0], E_HImode))
        {
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (general_reg_operand (operands[2], E_HImode))
            {
              x6 = XEXP (x4, 1);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27122 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_230 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
      if (peep2_current_count < 3
          || pattern839 (x4, 
E_HImode) != 0)
        return NULL;
      switch (GET_MODE (operands[4]))
        {
        case E_HImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1865 (x9, 
E_HImode) != 0
              || !
#line 28383 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_326 (insn, operands);

        case E_SImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1866 (x9, 
E_HImode) != 0
              || !
#line 28427 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_330 (insn, operands);

        default:
          return NULL;
        }

    case E_QImode:
      operands[0] = x3;
      operands[1] = x2;
      if (x86_64_general_operand (operands[1], E_QImode)
          && general_reg_operand (operands[0], E_QImode))
        {
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (general_reg_operand (operands[2], E_QImode))
            {
              x6 = XEXP (x4, 1);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27122 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_229 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
      if (peep2_current_count < 3
          || pattern839 (x4, 
E_QImode) != 0)
        return NULL;
      switch (GET_MODE (operands[4]))
        {
        case E_QImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1865 (x9, 
E_QImode) != 0
              || !
#line 28383 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[4]) == REGNO (operands[0])
       || REGNO (operands[4]) == REGNO (operands[3]))
   && (rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
			     ? 3 : 0], operands[5])
       ? rtx_equal_p (operands[2], operands[6])
       : rtx_equal_p (operands[2], operands[5])
	 && rtx_equal_p (operands[REGNO (operands[4]) == REGNO (operands[0])
				  ? 3 : 0], operands[6]))
   && peep2_reg_dead_p (4, operands[4])
   && peep2_reg_dead_p (5, operands[REGNO (operands[4]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_325 (insn, operands);

        case E_SImode:
          x7 = PATTERN (peep2_next_insn (2));
          x8 = XVECEXP (x7, 0, 0);
          x9 = XEXP (x8, 1);
          if (pattern1866 (x9, 
E_QImode) != 0
              || !
#line 28427 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && (REGNO (operands[5]) == REGNO (operands[0])
       || REGNO (operands[5]) == REGNO (operands[3]))
   && REGNO (operands[5]) == REGNO (operands[4])
   && (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
			     ? 3 : 0], operands[6])
       ? (REG_P (operands[2])
	  ? REG_P (operands[7]) && REGNO (operands[2]) == REGNO (operands[7])
	  : rtx_equal_p (operands[2], operands[7]))
       : (rtx_equal_p (operands[REGNO (operands[5]) == REGNO (operands[0])
				? 3 : 0], operands[7])
	  && REG_P (operands[2])
	  && REGNO (operands[2]) == REGNO (operands[6])))
   && peep2_reg_dead_p (4, operands[5])
   && peep2_reg_dead_p (5, operands[REGNO (operands[5]) == REGNO (operands[0])
				    ? 3 : 0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[3], operands[0])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || any_QIreg_operand (operands[2], SImode))))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_329 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (register_operand (operands[0], E_DImode))
    {
      res = peephole2_15 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], E_DImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    {
      x4 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x4) == SET)
        {
          if (memory_operand (operands[1], E_DImode))
            {
              switch (pattern1194 (x3, 
E_DImode, 
E_TImode))
                {
                case 0:
                  if ((
#line 8701 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_71 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if ((
#line 9134 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_87 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if ((
#line 9621 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_99 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
                  if ((
#line 9987 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_111 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if ((
#line 8818 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_79 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
                  if ((
#line 8844 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_83 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 6:
                  if ((
#line 9302 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_93 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  if ((
#line 9328 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_97 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
          if (peep2_current_count >= 4
              && pattern1196 (x3, 
E_DImode) == 0
              && (
#line 14286 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_152 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (general_reg_operand (operands[1], E_DImode))
            {
              x5 = PATTERN (peep2_next_insn (2));
              if (GET_CODE (x5) == SET)
                {
                  x6 = XEXP (x4, 1);
                  if (GET_CODE (x6) == NEG
                      && pattern1346 (x3, 
E_DImode) == 0
                      && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_158 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (peep2_current_count >= 4
                      && pattern1348 (x3, 
E_DImode) == 0
                      && (
#line 26491 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_205 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (!immediate_operand (operands[1], E_DImode)
      || GET_CODE (x3) != SET)
    return NULL;
  switch (pattern960 (x3, 
E_TImode, 
E_DImode))
    {
    case 0:
      if (!(
#line 11085 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == DX_REG
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_115 (insn, operands);

    case 1:
      if (!(
#line 11107 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != DX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || REGNO (operands[0]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[0]))
   && (REGNO (operands[2]) == REGNO (operands[4])
       || REGNO (operands[2]) == REGNO (operands[5])
       || peep2_reg_dead_p (3, operands[2]))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_117 (insn, operands);

    case 2:
      if (!general_reg_operand (operands[4], E_DImode))
        return NULL;
      x5 = PATTERN (peep2_next_insn (2));
      x7 = XVECEXP (x5, 0, 0);
      x8 = XEXP (x7, 1);
      if (GET_MODE (x8) != E_DImode)
        return NULL;
      x9 = XVECEXP (x5, 0, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return NULL;
      switch (GET_CODE (x8))
        {
        case SMUL_HIGHPART:
          x11 = XEXP (x8, 0);
          if (!rtx_equal_p (x11, operands[2]))
            return NULL;
          x12 = XEXP (x8, 1);
          if (!rtx_equal_p (x12, operands[0])
              || !(
#line 11246 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_120 (insn, operands);

        case UMUL_HIGHPART:
          x11 = XEXP (x8, 0);
          if (!rtx_equal_p (x11, operands[2]))
            return NULL;
          x12 = XEXP (x8, 1);
          if (!rtx_equal_p (x12, operands[0])
              || !(
#line 11246 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_121 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_30 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      x2 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x2) == SET)
        {
          x3 = XEXP (x2, 1);
          if (x3 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              x4 = XEXP (x2, 0);
              operands[2] = x4;
              if (memory_operand (operands[2], E_SImode))
                {
                  if (peep2_current_count >= 3)
                    {
                      x5 = PATTERN (peep2_next_insn (2));
                      if (pattern1259 (x5, 
E_SImode) == 0
                          && 
#line 27027 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
                        {
                          *pmatch_len_ = 3;
                          res = gen_peephole2_217 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (
#line 27043 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_219 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (!
#line 27056 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p () && peep2_regno_dead_p (0, FLAGS_REG)))
    return NULL;
  *pmatch_len_ = 0;
  return gen_peephole2_221 (insn, operands);
}

 rtx_insn *
peephole2_33 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      res = peephole2_32 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (const0_operand (operands[1], E_VOIDmode)
      && general_reg_operand (operands[0], E_VOIDmode)
      && 
#line 28479 "../../src/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_332 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_DFmode)
      || !sse_reg_operand (operands[0], E_DFmode))
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != VEC_CONCAT
      || GET_MODE (x5) != E_V2DFmode)
    return NULL;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!sse_reg_operand (operands[2], E_V2DFmode))
    return NULL;
  x7 = XEXP (x5, 0);
  operands[4] = x7;
  if (!sse_reg_operand (operands[4], E_DFmode))
    return NULL;
  x8 = XEXP (x5, 1);
  operands[3] = x8;
  if (!memory_operand (operands[3], E_DFmode)
      || !
#line 1962 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_LOAD_OPTIMAL
   && REGNO (operands[4]) == REGNO (operands[2])
   && ix86_operands_ok_for_move_multiple (operands, true, DFmode)))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_401 (insn, operands);
}

 rtx_insn *
peephole2_39 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
      if (peep2_current_count < 2)
        return NULL;
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1349 (x4, 
E_SImode))
            {
            case 0:
              if (!
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_29 (insn, operands);

            case 1:
              if (!
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_31 (insn, operands);

            case 2:
              if (!(
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_33 (insn, operands);

            case 3:
              if (!
#line 4937 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_41 (insn, operands);

            case 4:
              if (!
#line 4937 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (SImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_43 (insn, operands);

            case 5:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_133 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_145 (insn, operands);

            case 6:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_134 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_146 (insn, operands);

            case 7:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_SImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_135 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_147 (insn, operands);

            case 8:
              if (!
#line 14331 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_153 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1349 (x4, 
E_DImode))
            {
            case 0:
              if (!(
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_30 (insn, operands);

            case 1:
              if (!(
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_32 (insn, operands);

            case 2:
              if (!(
#line 3643 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_34 (insn, operands);

            case 3:
              if (!(
#line 4937 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_42 (insn, operands);

            case 4:
              if (!(
#line 4937 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) == REGNO (operands[1])
   && (DImode != SImode
       || !TARGET_ZERO_EXTEND_WITH_AND
       || !optimize_function_for_speed_p (cfun))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_44 (insn, operands);

            case 5:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_136 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_148 (insn, operands);

            case 6:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_137 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_149 (insn, operands);

            case 7:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (x86_64_general_operand (operands[1], E_DImode)
                  && (
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_138 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0])
                  || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_150 (insn, operands);

            case 8:
              if (!(
#line 14331 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_154 (insn, operands);

            default:
              return NULL;
            }

        case E_QImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1350 (x4, 
E_QImode))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_127 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_139 (insn, operands);

            case 1:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_128 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_140 (insn, operands);

            case 2:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_QImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_129 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_141 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern1350 (x4, 
E_HImode))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_130 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_142 (insn, operands);

            case 1:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_131 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_143 (insn, operands);

            case 2:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 1);
              operands[1] = x7;
              if (general_operand (operands[1], E_HImode)
                  && 
#line 14037 "../../src/gcc/config/i386/i386.md"
(!reg_mentioned_p (operands[0], operands[1])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_132 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              *pmatch_len_ = 1;
              return gen_peephole2_144 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      if (pattern1065 (x3) != 0
          || !
#line 19081 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_166 (insn, operands);

    default:
      return NULL;
    }
}
