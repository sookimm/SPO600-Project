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
pattern7 (rtx x1, machine_mode i1)
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
pattern12 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_V8QImode)
      || GET_MODE (x1) != E_V8QImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern20 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern19 (x3, pnum_clobbers); /* [-1, 1] */

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern17 (x3);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern16 (x3);
      if (res >= 0)
        return res + 4; /* [4, 5] */
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
      return 6;

    default:
      return -1;
    }
}

int
pattern38 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x2) != E_TImode)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_DImode))
    return -1;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case ASHIFT:
      if (GET_MODE (x6) != E_TImode)
        return -1;
      return pattern37 (x6, 
E_TImode, 
E_DImode); /* [-1, 2] */

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x6;
      if (!const_scalar_int_operand (operands[2], E_TImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern41 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern44 (rtx x1, machine_mode i1)
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
pattern49 (rtx x1, int *pnum_clobbers)
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
  switch (GET_MODE (x5))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !const_1_to_31_operand (operands[2], E_QImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !const_1_to_63_operand (operands[2], E_QImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern63 (rtx x1, machine_mode i1)
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
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern71 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern75 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_or_x86_64_const_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern82 (rtx x1, int *pnum_clobbers)
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
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      return 0;

    case STRICT_LOW_PART:
      res = pattern72 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern90 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL)
    return -1;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  x8 = XEXP (x3, 0);
  switch (GET_CODE (x8))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case VEC_CONCAT:
      return 1;

    default:
      return -1;
    }
}

int
pattern95 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != i2)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XEXP (x1, 1);
  if (GET_CODE (x7) != PLUS
      || GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != i2)
    return -1;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return -1;
  x10 = XEXP (x7, 1);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != i2)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 1
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x12 = XEXP (x3, 0);
  operands[1] = x12;
  if (!register_operand (operands[1], i1))
    return -1;
  x13 = XVECEXP (x4, 0, 0);
  operands[3] = x13;
  if (!const_0_to_1_operand (operands[3], E_SImode))
    return -1;
  x14 = XVECEXP (x6, 0, 0);
  operands[4] = x14;
  if (!const_0_to_1_operand (operands[4], E_SImode))
    return -1;
  return 0;
}

int
pattern116 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (GET_MODE (x1) != E_DImode)
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern126 (rtx x1)
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
pattern135 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimm_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern142 (rtx x1)
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
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          return pattern130 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

        case E_V8SImode:
          if (pattern130 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 1;

        case E_V4SImode:
          if (pattern130 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V8DImode:
          if (pattern130 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V4DImode:
          if (pattern130 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V2DImode:
          if (pattern130 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern141 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 6;

        case E_V8SImode:
          if (pattern141 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V4SImode:
          if (pattern141 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 8;

        case E_V8DImode:
          if (pattern141 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 9;

        case E_V4DImode:
          if (pattern141 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 10;

        case E_V2DImode:
          if (pattern141 (x1, 
E_V2DImode, 
E_QImode) != 0)
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
pattern159 (rtx x1)
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
    case E_V16SImode:
      return pattern150 (x3, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern150 (x3, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern150 (x3, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern168 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SImode))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_V4SImode))
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], E_V4SImode))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  if (!vector_operand (operands[3], E_V4SImode))
    return -1;
  return 0;
}

int
pattern177 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern181 (rtx x1)
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
    case E_V32HFmode:
      return pattern180 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern180 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern180 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern180 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern180 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern180 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern180 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern180 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern180 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    case E_V64QImode:
      if (pattern180 (x1, 
E_V64QImode) != 0)
        return -1;
      return 9;

    case E_V32QImode:
      if (pattern180 (x1, 
E_V32QImode) != 0)
        return -1;
      return 10;

    case E_V16QImode:
      if (pattern180 (x1, 
E_V16QImode) != 0)
        return -1;
      return 11;

    case E_V32HImode:
      if (pattern180 (x1, 
E_V32HImode) != 0)
        return -1;
      return 12;

    case E_V16HImode:
      if (pattern180 (x1, 
E_V16HImode) != 0)
        return -1;
      return 13;

    case E_V8HImode:
      if (pattern180 (x1, 
E_V8HImode) != 0)
        return -1;
      return 14;

    case E_V16SImode:
      if (pattern180 (x1, 
E_V16SImode) != 0)
        return -1;
      return 15;

    case E_V8SImode:
      if (pattern180 (x1, 
E_V8SImode) != 0)
        return -1;
      return 16;

    case E_V4SImode:
      if (pattern180 (x1, 
E_V4SImode) != 0)
        return -1;
      return 17;

    case E_V8DImode:
      if (pattern180 (x1, 
E_V8DImode) != 0)
        return -1;
      return 18;

    case E_V4DImode:
      if (pattern180 (x1, 
E_V4DImode) != 0)
        return -1;
      return 19;

    case E_V2DImode:
      if (pattern180 (x1, 
E_V2DImode) != 0)
        return -1;
      return 20;

    case E_V32BFmode:
      if (pattern14 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 21;

    case E_V16BFmode:
      if (pattern14 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 22;

    case E_V8BFmode:
      if (pattern14 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern197 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern196 (x3); /* [-1, 1] */
}

int
pattern201 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern203 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || !nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern213 (rtx x1)
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
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x6, 1);
  operands[2] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern209 (x6, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern209 (x6, 
E_TImode) != 0)
        return -1;
      return 1;

    case E_QImode:
      if (pattern209 (x6, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_HImode:
      if (pattern209 (x6, 
E_HImode) != 0)
        return -1;
      return 3;

    case E_SImode:
      if (pattern209 (x6, 
E_SImode) != 0)
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern223 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM
      || GET_MODE (x2) != E_BLKmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SCRATCH)
    return -1;
  return 0;
}

int
pattern231 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return pattern126 (x1); /* [-1, 1] */
}

int
pattern237 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_vector_duplicate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern243 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 0;

    case E_TImode:
      if (!register_operand (operands[0], E_TImode)
          || GET_MODE (x1) != E_TImode
          || !register_operand (operands[1], E_TImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern251 (rtx x1)
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
          return 0;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !extract_operator (operands[2], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x2) != E_DImode
              || !extract_operator (operands[2], E_DImode))
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
pattern281 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern280 (x1); /* [-1, 1] */

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
          return 2;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          return 3;

        case E_SImode:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode))
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
pattern294 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V8QImode:
      return pattern99 (); /* [-1, 2] */

    case E_V4HImode:
      switch (GET_MODE (operands[1]))
        {
        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode))
            return -1;
          return 3;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode))
            return -1;
          return 4;

        default:
          return -1;
        }

    case E_V2SImode:
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern306 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern314 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1)
      || !const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  return 0;
}

int
pattern320 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x1) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || !nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x1) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 3;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode))
        return -1;
      return 4;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || !nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern331 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
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
pattern333 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35;
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
  x9 = XEXP (x1, 1);
  if (GET_CODE (x9) != PLUS)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != VEC_SELECT)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != PARALLEL)
    return -1;
  x13 = XEXP (x9, 1);
  if (GET_CODE (x13) != i1)
    return -1;
  x14 = XEXP (x13, 0);
  if (GET_CODE (x14) != VEC_SELECT)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != PARALLEL)
    return -1;
  x16 = XEXP (x4, 0);
  operands[1] = x16;
  x17 = XEXP (x7, 0);
  if (!rtx_equal_p (x17, operands[1]))
    return -1;
  x18 = XEXP (x11, 0);
  if (!rtx_equal_p (x18, operands[1]))
    return -1;
  x19 = XEXP (x14, 0);
  if (!rtx_equal_p (x19, operands[1]))
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 4:
      x20 = XVECEXP (x5, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XVECEXP (x5, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x22 = XVECEXP (x5, 0, 2);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x23 = XVECEXP (x5, 0, 3);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 12]
          || XVECLEN (x8, 0) != 4)
        return -1;
      x24 = XVECEXP (x8, 0, 0);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x25 = XVECEXP (x8, 0, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x26 = XVECEXP (x8, 0, 2);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x27 = XVECEXP (x8, 0, 3);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 13]
          || XVECLEN (x12, 0) != 4)
        return -1;
      x28 = XVECEXP (x12, 0, 0);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x29 = XVECEXP (x12, 0, 1);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x30 = XVECEXP (x12, 0, 2);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x31 = XVECEXP (x12, 0, 3);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x15, 0) != 4)
        return -1;
      x32 = XVECEXP (x15, 0, 0);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x33 = XVECEXP (x15, 0, 1);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x34 = XVECEXP (x15, 0, 2);
      if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x35 = XVECEXP (x15, 0, 3);
      if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern332 (x1, 
E_V4QImode, 
E_V4SImode, 
E_V16QImode) != 0)
        return -1;
      return 0;

    case 2:
      x20 = XVECEXP (x5, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XVECEXP (x5, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 4]
          || XVECLEN (x8, 0) != 2)
        return -1;
      x24 = XVECEXP (x8, 0, 0);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x25 = XVECEXP (x8, 0, 1);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 5]
          || XVECLEN (x12, 0) != 2)
        return -1;
      x28 = XVECEXP (x12, 0, 0);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x29 = XVECEXP (x12, 0, 1);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x15, 0) != 2)
        return -1;
      x32 = XVECEXP (x15, 0, 0);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x33 = XVECEXP (x15, 0, 1);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern332 (x1, 
E_V2HImode, 
E_V2DImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern372 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17
      || GET_MODE (x2) != E_CCmode)
    return -1;
  return 0;
}

int
pattern376 (rtx x1, machine_mode i1)
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
pattern381 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  return 0;
}

int
pattern386 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x1) != E_SFmode)
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x1) != E_DFmode)
        return -1;
      return 1;

    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x1) != E_XFmode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern394 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (XINT (x1, 1) != i1
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 20
      || GET_MODE (x2) != E_V2DImode)
    return -1;
  return 0;
}

int
pattern402 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      x5 = XEXP (x4, 1);
      operands[3] = x5;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              return pattern398 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

            case E_TImode:
              if (pattern398 (x1, 
E_TImode, 
E_DImode) != 0)
                return -1;
              return 1;

            default:
              return -1;
            }

        case SIGN_EXTEND:
          res = pattern400 (x1);
          if (res >= 0)
            return res + 2; /* [2, 3] */
          return -1;

        case ZERO_EXTEND:
          res = pattern400 (x1);
          if (res >= 0)
            return res + 4; /* [4, 5] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern401 (x1, 
E_DImode, 
E_SImode) != 0)
            return -1;
          return 6;

        case E_TImode:
          if (pattern401 (x1, 
E_TImode, 
E_DImode) != 0)
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
pattern421 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  return pattern420 (x2, 
i1); /* [-1, 0] */
}

int
pattern429 (rtx x1)
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
  if (!const248_operand (operands[2], E_VOIDmode))
    return -1;
  return pattern428 (x1); /* [-1, 1] */
}

int
pattern436 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != ASHIFT
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern441 (rtx x1, rtx_code i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != MINUS
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern449 (rtx x1, machine_mode i1)
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
  switch (GET_MODE (x3))
    {
    case E_HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern458 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[1], i2)
      || !vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern467 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V32BFmode:
      return pattern466 (x1, 
E_V32BFmode, 
E_SImode); /* [-1, 0] */

    case E_V16BFmode:
      if (pattern466 (x1, 
E_V16BFmode, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_V8BFmode:
      if (pattern466 (x1, 
E_V8BFmode, 
E_QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern475 (rtx x1)
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
  x6 = XEXP (x1, 2);
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XEXP (x1, 1);
  switch (GET_CODE (x7))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x7;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          return pattern473 (x1, 
E_V8DImode); /* [-1, 0] */

        case E_V4DImode:
          if (pattern473 (x1, 
E_V4DImode) != 0)
            return -1;
          return 1;

        case E_V2DImode:
          if (pattern473 (x1, 
E_V2DImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x7, operands[1]))
        return -1;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern474 (x1, 
E_V8DImode) != 0)
            return -1;
          return 3;

        case E_V4DImode:
          if (pattern474 (x1, 
E_V4DImode) != 0)
            return -1;
          return 4;

        case E_V2DImode:
          if (pattern474 (x1, 
E_V2DImode) != 0)
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
pattern492 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XVECEXP (x1, 0, 1);
  operands[2] = x4;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      return pattern490 (x1, 
E_V16HFmode, 
E_V16HImode); /* [-1, 0] */

    case E_V32HImode:
      if (pattern490 (x1, 
E_V32HFmode, 
E_V32HImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      res = pattern491 (x1, 
E_V8SImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || GET_MODE (x2) != E_V16SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!register_operand (operands[1], E_V16HFmode))
            return -1;
          return 4;

        case E_V16SFmode:
          if (!register_operand (operands[1], E_V16SFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V8DImode:
      res = pattern491 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V4DImode:
      if (pattern490 (x1, 
E_V4DFmode, 
E_V4DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern505 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern510 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[2], i1))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      return 0;

    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern516 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DFmode)
      || GET_MODE (x1) != E_V2DFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V2SImode:
      if (!nonimmediate_operand (operands[1], E_V2SImode))
        return -1;
      return 0;

    case E_V2DImode:
      if (!nonimmediate_operand (operands[1], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern521 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4HFmode:
      if (!memory_operand (operands[1], E_V4HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
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
pattern529 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !regmem_or_bitnot_regmem_operand (operands[3], i1)
      || !regmem_or_bitnot_regmem_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern536 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern535 (x1); /* [-1, 11] */

    case IOR:
      res = pattern535 (x1);
      if (res >= 0)
        return res + 12; /* [12, 23] */
      return -1;

    case XOR:
      res = pattern535 (x1);
      if (res >= 0)
        return res + 24; /* [24, 35] */
      return -1;

    case REG:
    case SUBREG:
    case MEM:
    case NOT:
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern531 (x1, 
E_V32HFmode) != 0)
            return -1;
          return 36;

        case E_V16HFmode:
          if (pattern531 (x1, 
E_V16HFmode) != 0)
            return -1;
          return 37;

        case E_V8HFmode:
          if (pattern531 (x1, 
E_V8HFmode) != 0)
            return -1;
          return 38;

        case E_V32BFmode:
          if (pattern531 (x1, 
E_V32BFmode) != 0)
            return -1;
          return 39;

        case E_V16BFmode:
          if (pattern531 (x1, 
E_V16BFmode) != 0)
            return -1;
          return 40;

        case E_V8BFmode:
          if (pattern531 (x1, 
E_V8BFmode) != 0)
            return -1;
          return 41;

        case E_V16SFmode:
          if (pattern531 (x1, 
E_V16SFmode) != 0)
            return -1;
          return 42;

        case E_V8SFmode:
          if (pattern531 (x1, 
E_V8SFmode) != 0)
            return -1;
          return 43;

        case E_V4SFmode:
          if (pattern531 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 44;

        case E_V8DFmode:
          if (pattern531 (x1, 
E_V8DFmode) != 0)
            return -1;
          return 45;

        case E_V4DFmode:
          if (pattern531 (x1, 
E_V4DFmode) != 0)
            return -1;
          return 46;

        case E_V2DFmode:
          if (pattern531 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 47;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern549 (rtx x1)
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
  operands[0] = x5;
  return 0;
}

int
pattern552 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != i2
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  return 0;
}

int
pattern557 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x5;
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          return 0;

        case UNSPEC:
          return 1;

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      res = pattern556 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern569 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case STRICT_LOW_PART:
      return pattern556 (x1); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x5;
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
            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode))
                return -1;
              return 2;

            case E_TImode:
              if (pattern563 (x3, 
E_TImode) != 0)
                return -1;
              return 3;

            case E_HImode:
              if (pattern564 (x3, 
E_HImode) != 0)
                return -1;
              return 4;

            case E_SImode:
              if (pattern565 (x3) != 0)
                return -1;
              return 5;

            case E_V4QImode:
              if (pattern566 (x3, 
E_V4QImode) != 0)
                return -1;
              return 6;

            case E_V2QImode:
              if (pattern566 (x3, 
E_V2QImode) != 0)
                return -1;
              return 7;

            case E_V2HImode:
              if (pattern566 (x3, 
E_V2HImode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        case UNSPEC:
          res = pattern568 (x1);
          if (res >= 0)
            return res + 9; /* [9, 12] */
          return -1;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern592 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XVECEXP (x1, 0, 2);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern591 (x1, 
E_V32HFmode, 
E_V16SFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern591 (x1, 
E_V16HFmode, 
E_V8SFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern591 (x1, 
E_V8HFmode, 
E_V4SFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern599 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 3)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC_VOLATILE
      || XVECLEN (x3, 0) != i1)
    return -1;
  return 0;
}

int
pattern602 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) != AND)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_MODE (x4) != E_CCZmode
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x5 = XVECEXP (x2, 0, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  x7 = XEXP (x5, 1);
  operands[1] = x7;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  switch (GET_MODE (x5))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || !vector_operand (operands[1], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || !vector_operand (operands[1], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 2;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || !vector_operand (operands[1], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      return 3;

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !vector_operand (operands[1], E_V1TImode)
          || GET_MODE (x3) != E_V1TImode)
        return -1;
      return 4;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !vector_operand (operands[1], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      return 5;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !vector_operand (operands[1], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      return 6;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || !vector_operand (operands[1], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode)
        return -1;
      return 7;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || !vector_operand (operands[1], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode)
        return -1;
      return 8;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || !vector_operand (operands[1], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode)
        return -1;
      return 9;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || !vector_operand (operands[1], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode)
        return -1;
      return 10;

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !vector_operand (operands[1], E_V2TImode)
          || GET_MODE (x3) != E_V2TImode)
        return -1;
      return 11;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !vector_operand (operands[1], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode)
        return -1;
      return 12;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !vector_operand (operands[1], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode)
        return -1;
      return 13;

    default:
      return -1;
    }
}

int
pattern647 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (XWINT (x3, 0) != 1L)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  operands[3] = x4;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern646 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern646 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern646 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern655 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !vector_operand (operands[2], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern660 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i2)
      || !register_operand (operands[2], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[3], i1)
      || !vector_all_ones_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern664 (rtx x1)
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
      return pattern663 (x1, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern663 (x1, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern676 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || GET_MODE (x2) != i2)
    return -1;
  x8 = XEXP (x2, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  return pattern27 (x1); /* [-1, 1] */
}

int
pattern684 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCOmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 1);
  if (GET_MODE (x6) != E_CCOmode)
    return -1;
  x7 = XEXP (x4, 0);
  operands[0] = x7;
  return 0;
}

int
pattern691 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  return pattern690 (x2); /* [-1, 3] */
}

int
pattern696 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2SFmode)
      || GET_MODE (x1) != E_V2SFmode
      || !register_operand (operands[1], E_V2SFmode)
      || !nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern703 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern405 (x5); /* [-1, 1] */
}

int
pattern708 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_V2DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XEXP (x4, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCZmode
      || !register_operand (operands[0], E_V2DImode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_V2DImode))
    return -1;
  x8 = XVECEXP (x3, 0, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], E_BLKmode))
    return -1;
  x9 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XVECEXP (x5, 0, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

int
pattern718 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern725 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XEXP (x1, 1);
  if (XVECLEN (x4, 0) < 1)
    return -1;
  operands[5] = x4;
  if (!addsub_vs_parallel (operands[5], E_VOIDmode))
    return -1;
  operands[7] = x1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x3, 0);
  operands[3] = x8;
  x9 = XEXP (x3, 1);
  operands[4] = x9;
  x10 = XVECEXP (x4, 0, 0);
  operands[6] = x10;
  if (!const_int_operand (operands[6], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      return 0;

    case E_V4SFmode:
      return 1;

    case E_V4DFmode:
      return 2;

    case E_V2DFmode:
      return 3;

    default:
      return -1;
    }
}

int
pattern736 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1)
      || !nonmemory_operand (operands[4], i1)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern746 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_XFmode:
      if (!register_operand (operands[0], E_XFmode)
          || !binary_fp_operator (operands[3], E_XFmode))
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || !binary_fp_operator (operands[3], E_DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern754 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  switch (GET_MODE (x1))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern766 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_HFmode:
      if (!nonimmediate_operand (operands[1], E_HFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!nonimmediate_operand (operands[1], E_SFmode))
        return -1;
      return 1;

    case E_DFmode:
      if (!nonimmediate_operand (operands[1], E_DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern775 (rtx x1, machine_mode i1)
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

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern782 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern789 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const0_or_m1_operand (operands[2], i2))
    return -1;
  return 0;
}

int
pattern798 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern807 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (!pmovzx_parallel (operands[4], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0))
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != VEC_CONCAT)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XEXP (x2, 1);
  operands[3] = x7;
  x8 = XEXP (x1, 1);
  x9 = XVECEXP (x8, 0, 0);
  operands[5] = x9;
  if (!const_int_operand (operands[5], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || GET_MODE (x2) != E_V64QImode
          || GET_MODE (x3) != E_V32QImode
          || !const0_operand (operands[3], E_V32QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V16HImode:
          if (!nonimmediate_operand (operands[1], E_V8HImode)
              || !const0_operand (operands[2], E_V8HImode))
            return -1;
          return 0;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode))
            return -1;
          return 1;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x1) != E_V64QImode
          || GET_MODE (x2) != E_V128QImode
          || GET_MODE (x3) != E_V64QImode
          || !const0_operand (operands[3], E_V64QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V32HImode:
          if (!nonimmediate_operand (operands[1], E_V16HImode)
              || !const0_operand (operands[2], E_V16HImode))
            return -1;
          return 3;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode))
            return -1;
          return 4;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || GET_MODE (x2) != E_V32QImode
          || GET_MODE (x3) != E_V16QImode
          || !const0_operand (operands[3], E_V16QImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V8HImode:
          if (!vector_operand (operands[1], E_V4HImode)
              || !const0_operand (operands[2], E_V4HImode))
            return -1;
          return 6;

        case E_V4SImode:
          if (!vector_operand (operands[1], E_V2SImode)
              || !const0_operand (operands[2], E_V2SImode))
            return -1;
          return 7;

        case E_V2DImode:
          if (!vector_operand (operands[1], E_DImode)
              || !const0_operand (operands[2], E_DImode))
            return -1;
          return 8;

        default:
          return -1;
        }

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || GET_MODE (x2) != E_V64HImode
          || GET_MODE (x3) != E_V32HImode
          || !const0_operand (operands[3], E_V32HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V64QImode:
          if (!nonimmediate_operand (operands[1], E_V32QImode)
              || !const0_operand (operands[2], E_V32QImode))
            return -1;
          return 9;

        case E_V16SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !const0_operand (operands[2], E_V8SImode))
            return -1;
          return 10;

        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !const0_operand (operands[2], E_V4DImode))
            return -1;
          return 11;

        default:
          return -1;
        }

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || GET_MODE (x2) != E_V32HImode
          || GET_MODE (x3) != E_V16HImode
          || !const0_operand (operands[3], E_V16HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V32QImode:
          if (!nonimmediate_operand (operands[1], E_V16QImode)
              || !const0_operand (operands[2], E_V16QImode))
            return -1;
          return 12;

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !const0_operand (operands[2], E_V4SImode))
            return -1;
          return 13;

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V2DImode)
              || !const0_operand (operands[2], E_V2DImode))
            return -1;
          return 14;

        default:
          return -1;
        }

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || GET_MODE (x2) != E_V16HImode
          || GET_MODE (x3) != E_V8HImode
          || !const0_operand (operands[3], E_V8HImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_V16QImode:
          if (!vector_operand (operands[1], E_V8QImode)
              || !const0_operand (operands[2], E_V8QImode))
            return -1;
          return 15;

        case E_V4SImode:
          if (!vector_operand (operands[1], E_V2SImode)
              || !const0_operand (operands[2], E_V2SImode))
            return -1;
          return 16;

        case E_V2DImode:
          if (!vector_operand (operands[1], E_DImode)
              || !const0_operand (operands[2], E_DImode))
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
pattern886 (rtx x1, machine_mode i1, machine_mode i2)
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
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern897 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4DImode
      || !nonimm_or_0_operand (operands[2], E_V4DImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4HFmode:
      if (!memory_operand (operands[1], E_V4HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!vector_operand (operands[1], E_V4DFmode))
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
pattern909 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  operands[3] = x7;
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern908 (x1, 
E_V8HFmode, 
E_HFmode); /* [-1, 1] */

    case E_V4SFmode:
      res = pattern908 (x1, 
E_V4SFmode, 
E_SFmode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || GET_MODE (x2) != E_V2DFmode
          || GET_MODE (x3) != E_V2DFmode
          || GET_MODE (x4) != E_DFmode
          || !register_operand (operands[2], E_DImode)
          || !register_operand (operands[1], E_V2DFmode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern919 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern923 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern925 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern930 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  return 0;
}

int
pattern938 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern386 (x5); /* [-1, 2] */
}

int
pattern944 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x3, 1);
  operands[2] = x6;
  x7 = XEXP (x4, 1);
  switch (GET_CODE (x7))
    {
    case NE:
      return pattern943 (x3); /* [-1, 3] */

    case EQ:
      res = pattern943 (x3);
      if (res >= 0)
        return res + 4; /* [4, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern954 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern961 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[6] = x2;
  x3 = XEXP (x1, 1);
  operands[7] = x3;
  if (!memory_operand (operands[7], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (1));
  x5 = XEXP (x4, 1);
  operands[9] = x5;
  if (!memory_operand (operands[9], i1))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 2)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != COMPARE
      || GET_MODE (x8) != E_CCCmode)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != ZERO_EXTEND
      || GET_MODE (x9) != i2)
    return -1;
  x10 = XEXP (x8, 1);
  if (GET_CODE (x10) != PLUS
      || GET_MODE (x10) != i2)
    return -1;
  x11 = XEXP (x10, 0);
  if (!ix86_carry_flag_operator (x11, i2))
    return -1;
  operands[4] = x11;
  x12 = XEXP (x11, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x13 = XEXP (x10, 1);
  if (GET_CODE (x13) != ZERO_EXTEND
      || GET_MODE (x13) != i2)
    return -1;
  x14 = XEXP (x7, 0);
  if (GET_CODE (x14) != REG
      || REGNO (x14) != 17
      || GET_MODE (x14) != E_CCCmode)
    return -1;
  x15 = XVECEXP (x6, 0, 1);
  if (GET_CODE (x15) != SET)
    return -1;
  x16 = XEXP (x15, 1);
  if (GET_CODE (x16) != MINUS
      || GET_MODE (x16) != i1)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != MINUS
      || GET_MODE (x17) != i1)
    return -1;
  x18 = XEXP (x17, 1);
  if (!ix86_carry_flag_operator (x18, i1))
    return -1;
  operands[5] = x18;
  x19 = XEXP (x18, 1);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x20 = XEXP (x9, 0);
  operands[0] = x20;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x21 = XEXP (x11, 0);
  operands[3] = x21;
  if (!flags_reg_operand (operands[3], E_VOIDmode))
    return -1;
  x22 = XEXP (x13, 0);
  operands[2] = x22;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x23 = XEXP (x17, 0);
  if (!rtx_equal_p (x23, operands[0]))
    return -1;
  x24 = XEXP (x18, 0);
  if (!rtx_equal_p (x24, operands[3]))
    return -1;
  x25 = XEXP (x16, 1);
  if (!rtx_equal_p (x25, operands[2]))
    return -1;
  x26 = XEXP (x15, 0);
  if (!rtx_equal_p (x26, operands[0]))
    return -1;
  x27 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x27) != SET)
    return -1;
  x28 = XEXP (x27, 1);
  switch (GET_CODE (x28))
    {
    case REG:
      if (!rtx_equal_p (x28, operands[0]))
        return -1;
      x29 = XEXP (x27, 0);
      operands[1] = x29;
      if (!memory_operand (operands[1], i1))
        return -1;
      return 0;

    case LTU:
      if (peep2_current_count < 5
          || peep2_current_count < 6
          || GET_MODE (x28) != E_QImode)
        return -1;
      x30 = XEXP (x28, 0);
      if (GET_CODE (x30) != REG
          || REGNO (x30) != 17
          || GET_MODE (x30) != E_CCCmode)
        return -1;
      x31 = XEXP (x28, 1);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x29 = XEXP (x27, 0);
      operands[10] = x29;
      if (!general_reg_operand (operands[10], E_QImode))
        return -1;
      x32 = PATTERN (peep2_next_insn (4));
      if (GET_CODE (x32) != SET)
        return -1;
      x33 = XEXP (x32, 1);
      if (GET_CODE (x33) != ZERO_EXTEND
          || GET_MODE (x33) != i1)
        return -1;
      x34 = XEXP (x32, 0);
      operands[11] = x34;
      if (!general_reg_operand (operands[11], i1))
        return -1;
      x35 = XEXP (x33, 0);
      if (!rtx_equal_p (x35, operands[10]))
        return -1;
      x36 = PATTERN (peep2_next_insn (5));
      if (GET_CODE (x36) != SET)
        return -1;
      x37 = XEXP (x36, 0);
      operands[1] = x37;
      if (!memory_operand (operands[1], i1))
        return -1;
      x38 = XEXP (x36, 1);
      if (!rtx_equal_p (x38, operands[0]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern996 (rtx x1, machine_mode i1)
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
pattern1008 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1017 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_comparison_uns_operator (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1023 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      return 0;

    case E_V8DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1033 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2QImode)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_MODE (x6) != E_V16QImode)
    return -1;
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  x10 = XEXP (x7, 1);
  operands[2] = x10;
  switch (GET_MODE (x7))
    {
    case E_V8HImode:
      if (GET_MODE (x8) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_HImode)
          || !const0_operand (operands[2], E_V8HImode))
        return -1;
      return 0;

    case E_V8HFmode:
      if (GET_MODE (x8) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_HFmode)
          || !const0_operand (operands[2], E_V8HFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (GET_MODE (x8) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_BFmode)
          || !const0_operand (operands[2], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1045 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x4;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x6 = XEXP (x4, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != SUBREG
          || maybe_ne (SUBREG_BYTE (x7), 0)
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x7, 0);
      switch (GET_CODE (x8))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[4] = x8;
          x9 = XEXP (x8, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x10 = XEXP (x8, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode)
            return -1;
          return pattern1044 (x1); /* [-1, 5] */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1059 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode
      || !register_operand (operands[0], E_XFmode)
      || !register_operand (operands[1], E_XFmode))
    return -1;
  return 0;
}

int
pattern1065 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x4 = XEXP (x1, 2);
  operands[1] = x4;
  if (!const_0_to_63_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern1072 (rtx x1)
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
  return pattern740 (); /* [-1, 2] */
}

int
pattern1079 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_DImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_DImode
          || !register_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode)
          || !register_operand (operands[3], E_DImode))
        return -1;
      return 0;

    case E_SImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[3], E_SImode))
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

    case E_HImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[3], E_HImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16QImode:
          if (!register_operand (operands[1], E_V16QImode)
              || !nonimmediate_operand (operands[2], E_V16QImode))
            return -1;
          return 3;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode)
              || !nonimmediate_operand (operands[2], E_V16HImode))
            return -1;
          return 4;

        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode)
              || !nonimmediate_operand (operands[2], E_V16SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_QImode:
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_QImode
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HImode:
          if (!register_operand (operands[1], E_V8HImode)
              || !nonimmediate_operand (operands[2], E_V8HImode))
            return -1;
          return 6;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode)
              || !nonimmediate_operand (operands[2], E_V8SImode))
            return -1;
          return 7;

        case E_V4SImode:
          if (!register_operand (operands[1], E_V4SImode)
              || !nonimmediate_operand (operands[2], E_V4SImode))
            return -1;
          return 8;

        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !nonimmediate_operand (operands[2], E_V8DImode))
            return -1;
          return 9;

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !nonimmediate_operand (operands[2], E_V4DImode))
            return -1;
          return 10;

        case E_V2DImode:
          if (!register_operand (operands[1], E_V2DImode)
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
pattern1122 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
      || !vector_operand (operands[2], i3))
    return -1;
  x4 = XEXP (x2, 1);
  return pattern1120 (x4, 
i1, 
i2, 
i3, 
i4); /* [-1, 0] */
}

int
pattern1130 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x5;
          x6 = XEXP (x2, 2);
          operands[5] = x6;
          x7 = XVECEXP (x1, 0, 1);
          operands[6] = x7;
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

        case REG:
        case SUBREG:
        case MEM:
          res = pattern1129 (x1);
          if (res >= 0)
            return res + 6; /* [6, 14] */
          return -1;

        default:
          return -1;
        }

    case NEG:
      x8 = XEXP (x4, 0);
      operands[3] = x8;
      return 15;

    default:
      return -1;
    }
}

int
pattern1148 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[5], i1)
      || !immediate_operand (operands[3], i1)
      || !register_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1154 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ZERO_EXTEND)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_CODE (x5) != ZERO_EXTEND)
    return -1;
  return pattern354 (x1); /* [-1, 3] */
}

int
pattern1159 (rtx x1, machine_mode i1)
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
pattern1169 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  return pattern1168 (x2); /* [-1, 11] */
}

int
pattern1176 (rtx x1)
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
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      return 0;

    case STRICT_LOW_PART:
      res = pattern555 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1184 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1190 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PLUS)
    return -1;
  x7 = XEXP (x2, 0);
  if (GET_MODE (x7) != E_CCCmode
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x8 = XEXP (x4, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x4, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x3, 1);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x6, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x6, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return -1;
  return 0;
}

int
pattern1199 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x1, 0);
  switch (GET_MODE (x6))
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
pattern1212 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
          return 0;

        case E_V4SFmode:
          return 1;

        case E_V2DFmode:
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x4 = XEXP (x2, 2);
      operands[5] = x4;
      x5 = XEXP (x1, 1);
      if (!rtx_equal_p (x5, operands[1]))
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
pattern1226 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !register_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || GET_MODE (x2) != E_V16QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V4SImode:
          if (!register_operand (operands[3], E_V4SImode)
              || !const0_operand (operands[4], E_V4SImode))
            return -1;
          return 0;

        case E_V2DImode:
          if (!register_operand (operands[3], E_V2DImode)
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
          || GET_MODE (x2) != E_V32QImode)
        return -1;
      switch (GET_MODE (x3))
        {
        case E_V8SImode:
          if (!register_operand (operands[3], E_V8SImode)
              || !const0_operand (operands[4], E_V8SImode))
            return -1;
          return 2;

        case E_V4DImode:
          if (!register_operand (operands[3], E_V4DImode)
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
pattern1245 (rtx x1, machine_mode i1)
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
pattern1250 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1256 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != IF_THEN_ELSE)
    return -1;
  x8 = XEXP (x7, 0);
  if (!bt_comparison_operator (x8, E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1269 (rtx x1, machine_mode i1)
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
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1274 (rtx x1, machine_mode i1)
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
pattern1282 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1292 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1300 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x2, 2);
  return pattern1295 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1308 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SFmode)
      || GET_MODE (x1) != E_V8SFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SFmode
      || !nonimm_or_0_operand (operands[2], E_V8SFmode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      return 0;

    case E_V8DImode:
      return 1;

    default:
      return -1;
    }
}

int
pattern1316 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1321 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !const_1_to_31_operand (operands[2], E_QImode)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1325 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XEXP (x1, 1);
      return pattern1324 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern1324 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1334 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || pattern560 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1339 (rtx x1)
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
pattern1349 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      x2 = XEXP (x1, 1);
      switch (GET_CODE (x2))
        {
        case CONST_INT:
          if (XWINT (x2, 0) != 0L)
            return -1;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != ZERO_EXTRACT)
            return -1;
          x4 = XEXP (x3, 1);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x5 = XEXP (x3, 2);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x6 = XEXP (x3, 0);
          operands[1] = x6;
          if (!int248_register_operand (operands[1], E_VOIDmode))
            return -1;
          switch (GET_MODE (x3))
            {
            case E_HImode:
              return 0;

            case E_SImode:
              return 1;

            case E_DImode:
              return 2;

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x2;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != STRICT_LOW_PART)
            return -1;
          x6 = XEXP (x3, 0);
          operands[1] = x6;
          res = pattern1341 ();
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        default:
          return -1;
        }

    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return -1;
      x7 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 1);
      switch (GET_CODE (x8))
        {
        case PLUS:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 5;

        case IOR:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 6;

        case XOR:
          if (GET_MODE (x8) != i1
              || pattern1344 (x1) != 0)
            return -1;
          return 7;

        case UNSPEC:
          if (peep2_current_count < 3
              || peep2_current_count < 4
              || XVECLEN (x8, 0) != 2
              || XINT (x8, 1) != 40
              || GET_MODE (x8) != E_CCCmode)
            return -1;
          x9 = XVECEXP (x8, 0, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x7, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 17
              || GET_MODE (x10) != E_CCCmode)
            return -1;
          x11 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x11) != SET)
            return -1;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != NEG
              || GET_MODE (x12) != i1)
            return -1;
          x13 = XVECEXP (x8, 0, 0);
          operands[1] = x13;
          if (!general_reg_operand (operands[1], i1))
            return -1;
          x14 = XEXP (x12, 0);
          if (!rtx_equal_p (x14, operands[1]))
            return -1;
          x15 = XEXP (x11, 0);
          if (!rtx_equal_p (x15, operands[1]))
            return -1;
          x16 = PATTERN (peep2_next_insn (2));
          if (pattern1195 (x16, 
i1) != 0)
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
pattern1408 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1415 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 12);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x3 = XVECEXP (x1, 0, 13);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x4 = XVECEXP (x1, 0, 14);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x5 = XVECEXP (x1, 0, 15);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  return 0;
}

int
pattern1425 (rtx x1)
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
      return pattern1423 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1423 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1424 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1424 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1439 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !scratch_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1446 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[0] = x3;
  x4 = XEXP (x1, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_MODE (x5) != E_SImode
          || !const_int_operand (operands[0], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      x5 = XEXP (x2, 0);
      if (GET_MODE (x5) != E_DImode
          || !const_int_operand (operands[0], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1456 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[6], i3))
    return -1;
  return 0;
}

int
pattern1468 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[2], i1)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1473 (rtx x1, machine_mode i1)
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

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1483 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1491 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1498 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1502 (rtx x1, rtx_code i1)
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
  return pattern1501 (x1); /* [-1, 1] */
}

int
pattern1515 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i1)
      || !register_operand (operands[5], i3))
    return -1;
  return 0;
}

int
pattern1526 (rtx x1, machine_mode i1)
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
pattern1533 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V16SImode))
        return -1;
      return 1;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_V16HImode))
        return -1;
      return 2;

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 3;

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || GET_MODE (x1) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1551 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1557 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XWINT (x2, 0) != 2L)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (XWINT (x3, 0) != 3L)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (XWINT (x5, 0) != 5L)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (XWINT (x6, 0) != 6L)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (XWINT (x7, 0) != 7L)
    return -1;
  return 0;
}

int
pattern1570 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1578 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1
      || !general_reg_operand (operands[4], i1)
      || !general_reg_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1586 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1594 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1603 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!vsib_mem_operator (operands[5], i1)
      || !register_operand (operands[6], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
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
pattern1611 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1610 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1610 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1623 (rtx x1)
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
      return pattern1622 (); /* [-1, 2] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_QImode))
        return -1;
      res = pattern1622 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1639 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  x5 = XEXP (x1, 1);
  operands[3] = x5;
  if (!nonimm_or_0_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x1, 2);
  operands[4] = x6;
  return 0;
}

int
pattern1650 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1660 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1666 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  if (XWINT (x2, 0) != 2L)
    return -1;
  x3 = XVECEXP (x1, 0, 3);
  if (XWINT (x3, 0) != 2L)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (XWINT (x4, 0) != 4L)
    return -1;
  x5 = XVECEXP (x1, 0, 5);
  if (XWINT (x5, 0) != 4L)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (XWINT (x6, 0) != 6L)
    return -1;
  x7 = XVECEXP (x1, 0, 7);
  if (XWINT (x7, 0) != 6L)
    return -1;
  return 0;
}

int
pattern1677 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_TImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  return 0;
}

int
pattern1688 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1697 ()
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
pattern1704 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[2], i1))
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
pattern1710 (machine_mode i1)
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
pattern1718 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vsib_mem_operator (operands[5], i1))
    return -1;
  switch (GET_MODE (operands[6]))
    {
    case E_HImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      return pattern1717 (x3, 
E_HImode, 
E_V16SImode); /* [-1, 1] */

    case E_QImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      res = pattern1717 (x3, 
E_QImode, 
E_V8DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1731 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (XWINT (x4, 0) != 6L)
    return -1;
  x5 = XVECEXP (x3, 0, 5);
  if (XWINT (x5, 0) != 14L)
    return -1;
  x6 = XVECEXP (x3, 0, 6);
  if (XWINT (x6, 0) != 7L)
    return -1;
  x7 = XVECEXP (x3, 0, 7);
  if (XWINT (x7, 0) != 15L)
    return -1;
  x8 = XEXP (x2, 0);
  x9 = XEXP (x8, 1);
  operands[2] = x9;
  x10 = XEXP (x1, 1);
  operands[3] = x10;
  x11 = XEXP (x1, 2);
  operands[4] = x11;
  return 0;
}

int
pattern1739 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[4], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1744 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1)
      || !scratch_operand (operands[2], E_QImode))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1743 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1743 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1758 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !x86_64_dwzext_immediate_operand (operands[2], i2)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1765 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i2)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1775 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1774 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1774 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1787 (machine_mode i1)
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
pattern1794 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern1802 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!register_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = PATTERN (peep2_next_insn (4));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != COMPARE)
    return -1;
  x7 = XEXP (x6, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x5, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17)
    return -1;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[4]))
    return -1;
  return 0;
}

int
pattern1814 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return pattern1813 (x1, 
i1); /* [-1, 1] */
}

int
pattern1822 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[4] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XEXP (x5, 0);
      operands[2] = x8;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x9 = XEXP (x1, 0);
      switch (GET_MODE (x9))
        {
        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !extract_operator (operands[3], E_HImode)
              || !extract_operator (operands[4], E_HImode))
            return -1;
          return 0;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !extract_operator (operands[3], E_SImode)
              || !extract_operator (operands[4], E_SImode))
            return -1;
          return 1;

        case E_DImode:
          if (GET_MODE (x2) != E_DImode
              || !extract_operator (operands[3], E_DImode)
              || !extract_operator (operands[4], E_DImode))
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
pattern1838 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[5], i1))
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
pattern1846 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vsib_mem_operator (operands[6], i3)
      || !register_operand (operands[4], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 1);
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!vsib_address_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!vsib_address_operand (operands[2], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1855 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      x11 = XEXP (x10, 1);
      x12 = XEXP (x11, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return 0;

        case E_SImode:
          return 1;

        case E_DImode:
          return 2;

        case E_TImode:
          return 3;

        default:
          return -1;
        }

    case CONST_INT:
      operands[6] = x5;
      x7 = XEXP (x3, 1);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 1);
      operands[2] = x9;
      x10 = XVECEXP (x1, 0, 1);
      x11 = XEXP (x10, 1);
      x12 = XEXP (x11, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HImode:
          return 4;

        case E_SImode:
          return 5;

        case E_DImode:
          return 6;

        case E_TImode:
          return 7;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1867 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCZmode)
    return -1;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XEXP (x2, 1);
  if (GET_CODE (x6) != LABEL_REF)
    return -1;
  x7 = XEXP (x2, 2);
  if (GET_CODE (x7) != PC)
    return -1;
  x8 = XEXP (x1, 0);
  if (GET_CODE (x8) != PC)
    return -1;
  return 0;
}

int
pattern1875 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1882 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (XWINT (x2, 0) != 12L)
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (XWINT (x3, 0) != 44L)
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (XWINT (x4, 0) != 13L)
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (XWINT (x5, 0) != 45L)
    return -1;
  x6 = XVECEXP (x1, 0, 12);
  if (XWINT (x6, 0) != 14L)
    return -1;
  x7 = XVECEXP (x1, 0, 13);
  if (XWINT (x7, 0) != 46L)
    return -1;
  x8 = XVECEXP (x1, 0, 14);
  if (XWINT (x8, 0) != 15L)
    return -1;
  x9 = XVECEXP (x1, 0, 15);
  if (XWINT (x9, 0) != 47L)
    return -1;
  return 0;
}

 int
recog_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
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
      operands[1] = x3;
      res = recog_1 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || !bt_comparison_operator (x3, E_VOIDmode))
        return -1;
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) != CONST_INT)
        return -1;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          switch (XWINT (x4, 0))
            {
            case 0L:
              x6 = XEXP (x2, 1);
              if (GET_CODE (x6) != PLUS
                  || GET_MODE (x6) != E_HImode)
                return -1;
              x7 = XEXP (x6, 1);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
                return -1;
              x8 = XEXP (x1, 0);
              operands[0] = x8;
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              operands[1] = x3;
              operands[2] = x5;
              if (!register_operand (operands[2], E_HImode))
                return -1;
              x9 = XEXP (x2, 2);
              operands[3] = x9;
              if (!nonimmediate_operand (operands[3], E_HImode))
                return -1;
              x10 = XEXP (x6, 0);
              if (!rtx_equal_p (x10, operands[2])
                  || !
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              *pnum_clobbers = 1;
              return 449; /* *dec_cmovhi */

            case -1L:
              x6 = XEXP (x2, 1);
              switch (GET_CODE (x6))
                {
                case LABEL_REF:
                  x9 = XEXP (x2, 2);
                  if (GET_CODE (x9) != PC)
                    return -1;
                  x8 = XEXP (x1, 0);
                  if (GET_CODE (x8) != PC)
                    return -1;
                  operands[0] = x3;
                  operands[1] = x5;
                  x10 = XEXP (x6, 0);
                  operands[2] = x10;
                  switch (GET_MODE (operands[1]))
                    {
                    case E_QImode:
                      if (!register_operand (operands[1], E_QImode)
                          || !(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2630; /* *kortest_cmpqi_jcc */

                    case E_HImode:
                      if (!register_operand (operands[1], E_HImode)
                          || !
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2631; /* *kortest_cmphi_jcc */

                    case E_SImode:
                      if (!register_operand (operands[1], E_SImode)
                          || !
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2632; /* *kortest_cmpsi_jcc */

                    case E_DImode:
                      if (!register_operand (operands[1], E_DImode)
                          || !(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 2633; /* *kortest_cmpdi_jcc */

                    default:
                      return -1;
                    }

                case REG:
                case SUBREG:
                case MEM:
                  operands[2] = x6;
                  x8 = XEXP (x1, 0);
                  operands[0] = x8;
                  operands[1] = x3;
                  operands[4] = x5;
                  x9 = XEXP (x2, 2);
                  operands[3] = x9;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_QImode:
                      if (!register_operand (operands[0], E_QImode)
                          || GET_MODE (x2) != E_QImode
                          || !register_operand (operands[2], E_QImode)
                          || !register_operand (operands[3], E_QImode))
                        return -1;
                      switch (pattern1364 ())
                        {
                        case 0:
                          if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2634; /* *kortest_cmpqi_movqicc */

                        case 1:
                          if (!
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2635; /* *kortest_cmphi_movqicc */

                        case 2:
                          if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2636; /* *kortest_cmpsi_movqicc */

                        case 3:
                          if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2637; /* *kortest_cmpdi_movqicc */

                        default:
                          return -1;
                        }

                    case E_HImode:
                      switch (pattern1365 (x2, 
E_HImode))
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
                          return 2638; /* *kortest_cmpqi_movhicc */

                        case 1:
                          if (!
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2641; /* *kortest_cmphi_movhicc */

                        case 2:
                          if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2644; /* *kortest_cmpsi_movhicc */

                        case 3:
                          if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                            return -1;
                          *pnum_clobbers = 1;
                          return 2647; /* *kortest_cmpdi_movhicc */

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

        case ZERO_EXTRACT:
          x11 = XEXP (x5, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x4, 0) != 0L)
            return -1;
          x6 = XEXP (x2, 1);
          if (GET_CODE (x6) != LABEL_REF)
            return -1;
          x9 = XEXP (x2, 2);
          if (GET_CODE (x9) != PC)
            return -1;
          x8 = XEXP (x1, 0);
          if (GET_CODE (x8) != PC)
            return -1;
          operands[0] = x3;
          x12 = XEXP (x5, 0);
          operands[1] = x12;
          x13 = XEXP (x5, 2);
          switch (GET_CODE (x13))
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
              operands[2] = x13;
              if (nonmemory_operand (operands[2], E_QImode))
                {
                  x10 = XEXP (x6, 0);
                  operands[3] = x10;
                  switch (GET_MODE (x5))
                    {
                    case E_SImode:
                      if (nonimmediate_operand (operands[1], E_SImode)
                          && 
#line 19189 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()))
                        {
                          *pnum_clobbers = 1;
                          return 1424; /* *jcc_btsi */
                        }
                      break;

                    case E_DImode:
                      if (nonimmediate_operand (operands[1], E_DImode)
                          && (
#line 19189 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        {
                          *pnum_clobbers = 1;
                          return 1425; /* *jcc_btdi */
                        }
                      break;

                    default:
                      break;
                    }
                }
              if (GET_CODE (x13) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x13), 0)
                  || GET_MODE (x13) != E_QImode)
                return -1;
              x14 = XEXP (x13, 0);
              if (GET_CODE (x14) != AND)
                return -1;
              x15 = XEXP (x14, 0);
              operands[2] = x15;
              x16 = XEXP (x14, 1);
              operands[3] = x16;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return -1;
              x10 = XEXP (x6, 0);
              operands[4] = x10;
              switch (GET_MODE (x5))
                {
                case E_SImode:
                  switch (pattern1763 (x14, 
E_SImode))
                    {
                    case 0:
                      if (!
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1428; /* *jcc_btsi_mask_1 */

                    case 1:
                      if (!
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1430; /* *jcc_btsi_mask_1 */

                    case 2:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1432; /* *jcc_btsi_mask_1 */

                    default:
                      return -1;
                    }

                case E_DImode:
                  switch (pattern1763 (x14, 
E_DImode))
                    {
                    case 0:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1429; /* *jcc_btdi_mask_1 */

                    case 1:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1431; /* *jcc_btdi_mask_1 */

                    case 2:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                        return -1;
                      *pnum_clobbers = 1;
                      return 1433; /* *jcc_btdi_mask_1 */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case AND:
              if (GET_MODE (x13) != E_QImode)
                return -1;
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_QImode))
                return -1;
              x17 = XEXP (x13, 1);
              operands[3] = x17;
              if (!const_int_operand (operands[3], E_VOIDmode))
                return -1;
              x10 = XEXP (x6, 0);
              operands[4] = x10;
              switch (GET_MODE (x5))
                {
                case E_SImode:
                  if (!register_operand (operands[1], E_SImode)
                      || !
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1426; /* *jcc_btsi_mask */

                case E_DImode:
                  if (!register_operand (operands[1], E_DImode)
                      || !(
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1427; /* *jcc_btdi_mask */

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
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern245 (x2, 
E_SFmode) != 0
              || !
#line 26708 "../../src/gcc/config/i386/i386.md"
(TARGET_XOP))
            return -1;
          return 1813; /* *xop_pcmov_sf */

        case E_DFmode:
          if (pattern245 (x2, 
E_DFmode) != 0
              || !
#line 26708 "../../src/gcc/config/i386/i386.md"
(TARGET_XOP))
            return -1;
          return 1814; /* *xop_pcmov_df */

        case E_V8QImode:
          if (pattern246 (x2, 
E_V8QImode) != 0
              || !
#line 4466 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2252; /* *xop_pcmov_v8qi */

        case E_V4HImode:
          if (pattern246 (x2, 
E_V4HImode) != 0
              || !
#line 4466 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2253; /* *xop_pcmov_v4hi */

        case E_V2SImode:
          if (pattern246 (x2, 
E_V2SImode) != 0
              || !
#line 4466 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2254; /* *xop_pcmov_v2si */

        case E_V2SFmode:
          if (pattern246 (x2, 
E_V2SFmode) != 0
              || !
#line 4466 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2255; /* *xop_pcmov_v2sf */

        case E_V4HFmode:
          if (pattern246 (x2, 
E_V4HFmode) != 0
              || !
#line 4477 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2256; /* *xop_pcmov_v4hf */

        case E_V4BFmode:
          if (pattern246 (x2, 
E_V4BFmode) != 0
              || !
#line 4477 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP && TARGET_MMX_WITH_SSE))
            return -1;
          return 2257; /* *xop_pcmov_v4bf */

        case E_V4QImode:
          if (pattern246 (x2, 
E_V4QImode) != 0
              || !
#line 4488 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2258; /* *xop_pcmov_v4qi */

        case E_V2QImode:
          if (pattern246 (x2, 
E_V2QImode) != 0
              || !
#line 4488 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2259; /* *xop_pcmov_v2qi */

        case E_V2HImode:
          if (pattern246 (x2, 
E_V2HImode) != 0
              || !
#line 4488 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2260; /* *xop_pcmov_v2hi */

        case E_V2HFmode:
          if (pattern246 (x2, 
E_V2HFmode) != 0
              || !
#line 4499 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2261; /* *xop_pcmov_v2hf */

        case E_V2BFmode:
          if (pattern246 (x2, 
E_V2BFmode) != 0
              || !
#line 4499 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2262; /* *xop_pcmov_v2bf */

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x2, 1);
      if (pattern247 (x6) != 0)
        return -1;
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      x5 = XEXP (x3, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x6, 0);
      operands[1] = x10;
      x9 = XEXP (x2, 2);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_HFmode:
          if (pattern1447 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 1736 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2503; /* avx512f_storehf_mask */

        case E_SFmode:
          if (pattern1447 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 1736 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2504; /* avx512f_storesf_mask */

        case E_DFmode:
          if (pattern1447 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !
#line 1736 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2505; /* avx512f_storedf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_24 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
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
          return 144; /* *insvti_highpart_1 */

        case 1:
          if (!
#line 3726 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
            return -1;
          return 147; /* *insvti_lowpart_1 */

        case 2:
          if (!
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
            return -1;
          return 150; /* *insvdi_lowpart_1 */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          x6 = XEXP (x3, 1);
          operands[2] = x6;
          switch (pattern606 (x2))
            {
            case 0:
              if (!
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 372; /* *leaqi_general_4 */

            case 1:
              if (!
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 374; /* *leahi_general_4 */

            case 2:
              if (!(
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
              return 932; /* *concatditi3_5 */

            case 3:
              if (!(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 896; /* *concatditi3_1 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          x7 = XEXP (x5, 0);
          switch (GET_CODE (x7))
            {
            case TRUNCATE:
              if (GET_MODE (x7) != E_QImode)
                return -1;
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != MOD
                  || GET_MODE (x8) != E_HImode)
                return -1;
              x6 = XEXP (x3, 1);
              if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
                return -1;
              x9 = XEXP (x2, 1);
              if (GET_CODE (x9) != ZERO_EXTEND
                  || GET_MODE (x9) != E_HImode)
                return -1;
              x10 = XEXP (x9, 0);
              if (pattern1200 (x10, 
E_HImode, 
DIV, 
E_QImode, 
TRUNCATE) != 0
                  || pattern1002 (x2, 
E_HImode) != 0)
                return -1;
              x11 = XEXP (x8, 0);
              operands[1] = x11;
              if (!register_operand (operands[1], E_HImode))
                return -1;
              x12 = XEXP (x8, 1);
              if (GET_MODE (x12) != E_HImode)
                return -1;
              x13 = XEXP (x10, 0);
              x14 = XEXP (x13, 1);
              if (GET_MODE (x14) != E_HImode)
                return -1;
              x15 = XEXP (x13, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              switch (GET_CODE (x12))
                {
                case SIGN_EXTEND:
                  if (GET_CODE (x14) != SIGN_EXTEND)
                    return -1;
                  x16 = XEXP (x12, 0);
                  operands[2] = x16;
                  if (!nonimmediate_operand (operands[2], E_QImode))
                    return -1;
                  x17 = XEXP (x14, 0);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  if (
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && TARGET_APX_NF))
                    return 678; /* divmodhiqi3_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 679; /* divmodhiqi3 */

                case ZERO_EXTEND:
                  if (GET_CODE (x14) != ZERO_EXTEND)
                    return -1;
                  x16 = XEXP (x12, 0);
                  operands[2] = x16;
                  if (!nonimmediate_operand (operands[2], E_QImode))
                    return -1;
                  x17 = XEXP (x14, 0);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  if (
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && TARGET_APX_NF))
                    return 680; /* udivmodhiqi3_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 681; /* udivmodhiqi3 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || GET_MODE (x3) != E_TImode
                  || GET_MODE (x5) != E_TImode)
                return -1;
              x6 = XEXP (x3, 1);
              operands[2] = x6;
              if (!const_int_operand (operands[2], E_QImode))
                return -1;
              x9 = XEXP (x2, 1);
              switch (pattern257 (x9, 
E_DImode, 
E_TImode))
                {
                case 0:
                  if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 914; /* *concatditi3_3 */

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
                  return 944; /* *concatditi3_6 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern258 (x2, 
E_DImode, 
E_TImode))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 911; /* *concatditi3_3 */

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
              return 941; /* *concatditi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      switch (pattern76 (x1, pnum_clobbers))
        {
        case 0:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 726; /* *iorqi_1_slp */
            }
          break;

        case 1:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 729; /* *iorhi_1_slp */
            }
          break;

        case 2:
          if ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 821; /* *iorti3_doubleword */
            }
          break;

        case 3:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 823; /* *iorhi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 824; /* *iorhi_1 */
            }
          break;

        case 4:
          if (
#line 1357 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return 2078; /* iorv2sf3 */
          break;

        case 5:
          if (
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2112; /* iorv2bf3 */
          break;

        case 6:
          if ((
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2115; /* iorv4bf3 */
          break;

        case 7:
          if (
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2118; /* iorv2hf3 */
          break;

        case 8:
          if ((
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2121; /* iorv4hf3 */
          break;

        case 9:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V8QImode, operands)))
            return 2275; /* *mmx_iorv8qi3 */
          break;

        case 10:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V4HImode, operands)))
            return 2278; /* *mmx_iorv4hi3 */
          break;

        case 11:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (IOR, V2SImode, operands)))
            return 2281; /* *mmx_iorv2si3 */
          break;

        case 12:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V4QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2284; /* *iorv4qi3 */
            }
          break;

        case 13:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2287; /* *iorv2qi3 */
            }
          break;

        case 14:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2HImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2290; /* *iorv2hi3 */
            }
          break;

        case 15:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3786; /* iorbf3 */
          break;

        case 16:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3789; /* iorhf3 */
          break;

        case 17:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3792; /* iorsf3 */
          break;

        case 18:
          if ((
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return 3795; /* iordf3 */
          break;

        case 19:
          if (
#line 5736 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 3798; /* *iortf3 */
          break;

        default:
          break;
        }
      if (pnum_clobbers != NULL
          && pattern77 (x2) == 0)
        {
          x5 = XEXP (x3, 0);
          x7 = XEXP (x5, 0);
          operands[2] = x7;
          switch (pattern1265 (x1))
            {
            case 0:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 732; /* *iorqi_exthi_1_slp */
                }
              break;

            case 1:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 735; /* *iorqi_extsi_1_slp */
                }
              break;

            case 2:
              if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 738; /* *iorqi_extdi_1_slp */
                }
              break;

            case 3:
              *pnum_clobbers = 1;
              return 756; /* *iorqi_exthi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 759; /* *iorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                {
                  *pnum_clobbers = 1;
                  return 762; /* *iorqi_extdi_0 */
                }
              break;

            default:
              break;
            }
          x9 = XEXP (x2, 1);
          if (GET_CODE (x9) == SUBREG)
            {
              switch (pattern1268 (x1))
                {
                case 0:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 741; /* *iorqi_exthi_2_slp */
                    }
                  break;

                case 1:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 744; /* *iorqi_extsi_2_slp */
                    }
                  break;

                case 2:
                  if ((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 747; /* *iorqi_extdi_2_slp */
                    }
                  break;

                case 3:
                  *pnum_clobbers = 1;
                  return 765; /* *iorqi_ext2hi_0 */

                case 4:
                  *pnum_clobbers = 1;
                  return 768; /* *iorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 771; /* *iorqi_ext2di_0 */
                    }
                  break;

                default:
                  break;
                }
            }
        }
      operands[1] = x3;
      if (pattern78 (x1) != 0)
        return -1;
      if (
#line 13775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 867; /* *iorqi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 13775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 868; /* *iorqi_1 */

    case ZERO_EXTEND:
      switch (pattern38 (x1))
        {
        case 0:
          if (!(
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 902; /* *concatditi3_2 */

        case 1:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 923; /* *concatditi3_4 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 926; /* *concatditi3_4 */

        case 3:
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
          return 950; /* *concatditi3_7 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_44 (rtx x1 ATTRIBUTE_UNUSED,
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
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1293; /* *rotrqi3_mask_1 */

    case 1:
      if (!
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1295; /* *rotrhi3_mask_1 */

    case 2:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1309; /* *rotrqi3_add_1 */

    case 3:
      if (!
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1311; /* *rotrhi3_add_1 */

    case 4:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1325; /* *rotrqi3_sub_1 */

    case 5:
      if (!
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1327; /* *rotrhi3_sub_1 */

    case 6:
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      switch (pattern267 (x3, pnum_clobbers))
        {
        case 0:
          if (
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1285; /* *rotrqi3_mask */
            }
          break;

        case 1:
          if (
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1287; /* *rotrhi3_mask */
            }
          break;

        case 2:
          if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1301; /* *rotrqi3_add */
            }
          break;

        case 3:
          if (
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1303; /* *rotrhi3_add */
            }
          break;

        case 4:
          if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1317; /* *rotrqi3_sub */
            }
          break;

        case 5:
          if (
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            {
              *pnum_clobbers = 1;
              return 1319; /* *rotrhi3_sub */
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
              return 1335; /* ix86_rotrti3_doubleword */
            }
          x4 = XEXP (x3, 1);
          if (XWINT (x4, 0) == 64L
              && register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && 
#line 18445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return 1339; /* rotr64ti2_doubleword */
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
(ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1375; /* *rotrqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1376; /* *rotrqi3_1 */

        case 1:
          if (
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 1379; /* *rotrhi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 18659 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 1380; /* *rotrhi3_1 */

        case 2:
          if (!
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1382; /* *rotrqi3_1_slp */

        case 3:
          if (!
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1384; /* *rotrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_55 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
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
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x3;
      res = recog_54 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers == NULL
          || GET_CODE (x3) != SUBREG
          || maybe_ne (SUBREG_BYTE (x3), 0)
          || GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          operands[3] = x4;
          x5 = XEXP (x4, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x6 = XEXP (x4, 2);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x7 = XEXP (x4, 0);
          operands[2] = x7;
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          x8 = XEXP (x1, 0);
          switch (GET_CODE (x8))
            {
            case STRICT_LOW_PART:
              x9 = XEXP (x8, 0);
              operands[0] = x9;
              if (!register_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1694 ())
                {
                case 0:
                  if (!
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 405; /* *subqi_exthi_1_slp */

                case 1:
                  if (!
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 406; /* *subqi_extsi_1_slp */

                case 2:
                  if (!(
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 407; /* *subqi_extdi_1_slp */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              operands[0] = x8;
              if (!nonimmediate_operand (operands[0], E_QImode))
                return -1;
              switch (pattern1694 ())
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 416; /* *subqi_exthi_0 */

                case 1:
                  *pnum_clobbers = 1;
                  return 417; /* *subqi_extsi_0 */

                case 2:
                  if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 418; /* *subqi_extdi_0 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_TImode)
        return -1;
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      if (pattern758 (x2, 
E_DImode, 
E_TImode) != 0
          || !(
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 383; /* *subti3_doubleword_zext */

    case LTU:
    case UNLT:
      switch (pattern431 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1204 (x2, 
E_QImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 491; /* *subqi3_carry_0 */

        case 1:
          if (pattern1204 (x2, 
E_HImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 492; /* *subhi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern431 (x1, pnum_clobbers))
        {
        case 0:
          if (pattern1205 (x2, 
E_QImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 495; /* *subqi3_carry_0r */

        case 1:
          if (pattern1205 (x2, 
E_HImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 496; /* *subhi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern433 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 582; /* *subqi3_eq_0 */

        case 1:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 583; /* *subhi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern433 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 586; /* *subqi3_ne_0 */

        case 1:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 587; /* *subhi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_63 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      return recog_62 (x1, insn, pnum_clobbers);

    case VEC_CONCAT:
      switch (pattern273 (x2))
        {
        case 0:
          x6 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x6) == CONST_INT)
            {
              switch (pattern978 (x2))
                {
                case 0:
                  if (
#line 1691 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2087; /* *vec_interleave_lowv2sf */
                  break;

                case 1:
                  if (
#line 4991 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return 2303; /* mmx_punpckldq */
                  break;

                case 2:
                  if (
#line 1708 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
                    return 2088; /* *vec_interleave_highv2sf */
                  break;

                case 3:
                  if (
#line 4970 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return 2302; /* mmx_punpckhdq */
                  break;

                default:
                  break;
                }
            }
          x7 = XVECEXP (x3, 0, 0);
          operands[3] = x7;
          switch (pattern979 (x2))
            {
            case 0:
              if (!
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2368; /* *punpckwd */

            case 1:
              if (!
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2369; /* *punpckwd */

            case 2:
              if (!
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2370; /* *punpckwd */

            default:
              return -1;
            }

        case 1:
          if (!
#line 4850 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2296; /* mmx_punpckhbw */

        case 2:
          if (!
#line 4890 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2298; /* mmx_punpcklbw */

        case 3:
          if (!
#line 4871 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2297; /* mmx_punpckhbw_low */

        case 4:
          if (!
#line 4928 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2300; /* mmx_punpckhwd */

        case 5:
          if (!
#line 4911 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2299; /* mmx_punpcklbw_low */

        case 6:
          if (!
#line 4949 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2301; /* mmx_punpcklwd */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern274 (x2) != 0
          || !
#line 8431 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
        return -1;
      return 4787; /* sse_cvtps2pi */

    case FIX:
      if (pattern276 (x2) != 0
          || !
#line 8495 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
        return -1;
      return 4789; /* sse_cvttps2pi */

    default:
      return -1;
    }
}

 int
recog_67 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x5;
      x6 = XEXP (x3, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3800; /* *fma_fmadd_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3817; /* *fma_fmadd_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3801; /* *fma_fmadd_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3828; /* *fma_fmadd_df */

            case E_HFmode:
              if (pattern864 (x3, 
E_HFmode) != 0
                  || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5930 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3816; /* *fma_fmadd_hf */

            default:
              return -1;
            }

        case NEG:
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode
                  || GET_MODE (x6) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3869; /* *fma_fmsub_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3886; /* *fma_fmsub_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode
                  || GET_MODE (x6) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3870; /* *fma_fmsub_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3897; /* *fma_fmsub_df */

            case E_HFmode:
              if (pattern865 (x3, 
E_HFmode) != 0
                  || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5930 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3885; /* *fma_fmsub_hf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x6 = XEXP (x3, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
        case VEC_DUPLICATE:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x3) != E_SFmode
                  || GET_MODE (x5) != E_SFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6119 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3938; /* *fma_fnmadd_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3955; /* *fma_fnmadd_sf */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x3) != E_DFmode
                  || GET_MODE (x5) != E_DFmode)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6119 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 3939; /* *fma_fnmadd_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 3966; /* *fma_fnmadd_df */

            case E_HFmode:
              if (pattern866 (x3, 
E_HFmode) != 0
                  || !(
#line 6151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5930 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 3954; /* *fma_fnmadd_hf */

            default:
              return -1;
            }

        case NEG:
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern867 (x3, 
E_SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && nonimmediate_operand (operands[2], E_SFmode)
                  && nonimmediate_operand (operands[3], E_SFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4007; /* *fma_fnmsub_sf */
              if (!bcst_vector_operand (operands[1], E_SFmode)
                  || !bcst_vector_operand (operands[2], E_SFmode)
                  || !bcst_vector_operand (operands[3], E_SFmode)
                  || !
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 4038; /* *fma_fnmsub_sf */

            case E_DFmode:
              if (pattern867 (x3, 
E_DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && nonimmediate_operand (operands[2], E_DFmode)
                  && nonimmediate_operand (operands[3], E_DFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4009; /* *fma_fnmsub_df */
              if (!bcst_vector_operand (operands[1], E_DFmode)
                  || !bcst_vector_operand (operands[2], E_DFmode)
                  || !bcst_vector_operand (operands[3], E_DFmode)
                  || !
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1))
                return -1;
              return 4049; /* *fma_fnmsub_df */

            case E_HFmode:
              if (pattern868 (x3, 
E_HFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5930 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4037; /* *fma_fnmsub_hf */

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
recog_74 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 1)
    return -1;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      switch (pattern985 (x2, 
E_SImode))
        {
        case 0:
          if (
#line 5437 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return 2324; /* *mmx_pextrw_zext */
          break;

        case 1:
          if (
#line 6098 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2362; /* *pextrw_zext */
          break;

        case 2:
          if (
#line 21127 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8466; /* *vec_extractv8hi_zext */
          break;

        case 3:
          if (
#line 5474 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2328; /* *mmx_pextrb_zext */
          break;

        case 4:
          if (
#line 6130 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2366; /* *pextrb_zext */
          break;

        case 5:
          if ((
#line 21127 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 21070 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1)))
            return 8464; /* *vec_extractv16qi_zext */
          break;

        default:
          break;
        }
      break;

    case E_DImode:
      switch (pattern985 (x2, 
E_DImode))
        {
        case 0:
          if ((
#line 5437 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2325; /* *mmx_pextrw_zext */
          break;

        case 1:
          if ((
#line 6098 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2363; /* *pextrw_zext */
          break;

        case 2:
          if ((
#line 21127 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 8467; /* *vec_extractv8hi_zext */
          break;

        case 3:
          if ((
#line 5474 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2329; /* *mmx_pextrb_zext */
          break;

        case 4:
          if ((
#line 6130 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 2367; /* *pextrb_zext */
          break;

        case 5:
          if ((
#line 21127 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && (
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21070 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))))
            return 8465; /* *vec_extractv16qi_zext */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x2) != E_DImode
      || GET_MODE (x3) != E_SImode)
    return -1;
  operands[1] = x6;
  switch (XWINT (x5, 0))
    {
    case 0L:
      switch (GET_MODE (operands[1]))
        {
        case E_V2SImode:
          if (register_operand (operands[1], E_V2SImode))
            {
              if (
#line 5749 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE4_1))
                return 2350; /* *vec_extractv2si_0_zext_sse4 */
              if (
#line 5764 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC))
                return 2351; /* *vec_extractv2si_0_zext */
            }
          break;

        case E_V4SImode:
          if (register_operand (operands[1], E_V4SImode))
            {
              if (
#line 21227 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1))
                return 8474; /* *vec_extractv4si_0_zext_sse4 */
              if (
#line 21242 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_FROM_VEC))
                return 8475; /* *vec_extractv4si_0_zext */
            }
          break;

        default:
          break;
        }
      break;

    case 1L:
      if (register_operand (operands[1], E_V2SImode)
          && 
#line 5826 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_64BIT && TARGET_SSE4_1))
        return 2353; /* *vec_extractv2si_1_zext */
      break;

    default:
      break;
    }
  operands[2] = x5;
  switch (GET_MODE (operands[1]))
    {
    case E_V2SImode:
      if (!memory_operand (operands[1], E_V2SImode)
          || !const_0_to_1_operand (operands[2], E_SImode)
          || !
#line 5842 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_64BIT))
        return -1;
      return 2354; /* *vec_extractv2si_zext_mem */

    case E_V4SImode:
      if (!const_0_to_3_operand (operands[2], E_SImode))
        return -1;
      if (register_operand (operands[1], E_V4SImode)
          && 
#line 21303 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1))
        return 8477; /* *vec_extractv4si_zext */
      if (!memory_operand (operands[1], E_V4SImode)
          || !
#line 21326 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
        return -1;
      return 8479; /* *vec_extractv4si_zext_mem */

    default:
      return -1;
    }
}

 int
recog_80 (rtx x1 ATTRIBUTE_UNUSED,
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
    case MEM:
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
          x6 = XEXP (x2, 1);
          switch (GET_CODE (x6))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x6;
              operands[1] = x4;
              operands[2] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern603 (x2, 
E_SImode) != 0
                      || !
#line 8039 "../../src/gcc/config/i386/i386.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[3])
   < (HOST_WIDE_INT_1U << INTVAL (operands[2]))))
                    return -1;
                  return 376; /* *leasi_general_4 */

                case E_DImode:
                  if (GET_MODE (x2) != E_DImode
                      || GET_MODE (x3) != E_DImode)
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
                    return 378; /* *leadi_general_4 */
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
                  return 929; /* *concatsidi3_5 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (GET_MODE (x6) != E_DImode
                  || !nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || GET_MODE (x3) != E_DImode)
                return -1;
              operands[1] = x4;
              if (!register_operand (operands[1], E_DImode))
                return -1;
              operands[2] = x5;
              if (!const_int_operand (operands[2], E_QImode))
                return -1;
              x7 = XEXP (x6, 0);
              operands[3] = x7;
              if (!nonimmediate_operand (operands[3], E_SImode)
                  || !(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 893; /* *concatsidi3_1 */

            case SUBREG:
              switch (pattern437 (x2, 
LSHIFTRT))
                {
                case 0:
                  operands[2] = x5;
                  if (pattern1360 (x2) == 0)
                    {
                      if (
#line 15437 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && TARGET_APX_NF))
                        return 1066; /* x86_64_shld_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 15437 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                        {
                          *pnum_clobbers = 1;
                          return 1067; /* x86_64_shld_1 */
                        }
                    }
                  operands[3] = x5;
                  if (pattern1361 (x2) != 0)
                    return -1;
                  if (
#line 15459 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1068; /* x86_64_shld_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15459 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1069; /* x86_64_shld_ndd_1 */

                case 1:
                  operands[2] = x5;
                  if (pattern1362 (x2) == 0)
                    {
                      if (
#line 15669 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && TARGET_APX_NF))
                        return 1078; /* x86_shld_1_nf */
                      if (pnum_clobbers != NULL
                          && 
#line 15669 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && true))
                        {
                          *pnum_clobbers = 1;
                          return 1079; /* x86_shld_1 */
                        }
                    }
                  operands[3] = x5;
                  if (pattern1363 (x2) != 0)
                    return -1;
                  if (
#line 15691 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && TARGET_APX_NF))
                    return 1080; /* x86_shld_ndd_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15691 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1081; /* x86_shld_ndd_1 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              switch (pattern440 (x2, pnum_clobbers))
                {
                case 0:
                  if (
#line 15475 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1070; /* *x86_64_shld_shrd_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15531 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1071; /* *x86_64_shld_shrd_1_nozext */

                case 1:
                  if (
#line 15707 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return 1082; /* *x86_shld_shrd_1_nozext_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 15763 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1083; /* *x86_shld_shrd_1_nozext */

                case 2:
                  x7 = XEXP (x6, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      operands[2] = x5;
                      if (rtx_equal_p (x4, operands[0]))
                        {
                          x8 = XEXP (x6, 1);
                          x9 = XEXP (x8, 1);
                          if (rtx_equal_p (x9, operands[2])
                              && 
#line 15584 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1072; /* *x86_64_shld_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  operands[1] = x4;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  operands[3] = x5;
                  x8 = XEXP (x6, 1);
                  x9 = XEXP (x8, 1);
                  if (!rtx_equal_p (x9, operands[3])
                      || !
#line 15605 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1073; /* *x86_64_shld_ndd_2 */

                case 3:
                  x7 = XEXP (x6, 0);
                  operands[1] = x7;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      operands[2] = x5;
                      if (rtx_equal_p (x4, operands[0]))
                        {
                          x8 = XEXP (x6, 1);
                          x9 = XEXP (x8, 1);
                          if (rtx_equal_p (x9, operands[2])
                              && 
#line 15815 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            {
                              *pnum_clobbers = 1;
                              return 1084; /* *x86_shld_2 */
                            }
                        }
                    }
                  operands[2] = x7;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  operands[1] = x4;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  operands[3] = x5;
                  x8 = XEXP (x6, 1);
                  x9 = XEXP (x8, 1);
                  if (!rtx_equal_p (x9, operands[3])
                      || !
#line 15836 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1085; /* *x86_shld_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case AND:
          switch (pattern288 (x2, 
LSHIFTRT))
            {
            case 0:
              x6 = XEXP (x2, 1);
              x7 = XEXP (x6, 0);
              x10 = XEXP (x7, 0);
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  res = recog_78 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[2] = x11;
              if (!register_operand (operands[0], E_DImode))
                return -1;
              operands[1] = x4;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return -1;
              x12 = XEXP (x5, 0);
              operands[3] = x12;
              x13 = XEXP (x7, 1);
              x14 = XEXP (x13, 1);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[3]))
                return -1;
              if (
#line 15422 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1064; /* x86_64_shld_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 15422 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1065; /* x86_64_shld_ndd */

            case 1:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || pattern287 (x2, 
E_SImode, 
E_DImode) != 0)
                return -1;
              x6 = XEXP (x2, 1);
              x7 = XEXP (x6, 0);
              x10 = XEXP (x7, 0);
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              x12 = XEXP (x5, 0);
              operands[2] = x12;
              if (rtx_equal_p (x4, operands[0]))
                {
                  x13 = XEXP (x7, 1);
                  x14 = XEXP (x13, 1);
                  x15 = XEXP (x14, 0);
                  if (rtx_equal_p (x15, operands[2]))
                    {
                      if (
#line 15631 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF))
                        return 1074; /* x86_shld_nf */
                      if (pnum_clobbers != NULL)
                        {
                          *pnum_clobbers = 1;
                          return 1075; /* x86_shld */
                        }
                    }
                }
              operands[2] = x11;
              operands[1] = x4;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              operands[3] = x12;
              x13 = XEXP (x7, 1);
              x14 = XEXP (x13, 1);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[3]))
                return -1;
              if (
#line 15653 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
                return 1076; /* x86_shld_ndd_nf */
              if (pnum_clobbers == NULL
                  || !
#line 15653 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              *pnum_clobbers = 1;
              return 1077; /* x86_shld_ndd */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern258 (x2, 
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
          return 905; /* *concatsidi3_3 */

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
          return 935; /* *concatsidi3_6 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern258 (x2, 
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
          return 908; /* *concatsidi3_3 */

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
          return 938; /* *concatsidi3_6 */

        default:
          return -1;
        }

    case CONST_INT:
      switch (pattern286 (x2, pnum_clobbers))
        {
        case 0:
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern752 (x2))
                {
                case 0:
                  if (
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    {
                      *pnum_clobbers = 1;
                      return 1391; /* *btssi */
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
                      return 1393; /* *btsdi */
                    }
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x5) != SUBREG)
            return -1;
          switch (pattern761 (x2))
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
              return 1395; /* *btssi_mask */

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
              return 1397; /* *btsdi_mask */

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
          return 1399; /* *btssi_mask_1 */

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
          return 1401; /* *btsdi_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_99 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (pnum_clobbers != NULL)
        {
          x2 = XEXP (x1, 1);
          if (pattern738 (x2, 
E_DImode, 
E_QImode) == 0
              && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            {
              *pnum_clobbers = 1;
              return 1131; /* ashrdi3_doubleword */
            }
        }
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode))
        return -1;
      if (nonimmediate_operand (operands[0], E_DImode)
          && const_int_operand (operands[2], E_QImode))
        {
          if ((
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1168; /* ashrdi3_cvt_nf */
          if (pnum_clobbers != NULL
              && (
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1169; /* ashrdi3_cvt */
            }
        }
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[2], E_DImode)
          && (
#line 17313 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1174; /* *bmi2_ashrdi3_1 */
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
      if ((
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1177; /* *ashrdi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1178; /* *ashrdi3_1 */

    case E_SImode:
      x2 = XEXP (x1, 1);
      if (pattern623 (x2, 
E_SImode) != 0)
        return -1;
      if (
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1175; /* *ashrsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1176; /* *ashrsi3_1 */

    default:
      return -1;
    }
}

 int
recog_104 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SUBREG
      && known_eq (SUBREG_BYTE (x2), 0))
    {
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      if (register_operand (operands[0], E_QImode))
        {
          x4 = XEXP (x1, 1);
          x5 = XEXP (x4, 2);
          operands[2] = x5;
          if (register_operand (operands[2], E_QImode))
            {
              switch (GET_MODE (x2))
                {
                case E_SImode:
                  if (GET_MODE (x4) == E_SImode
                      && register_operand (operands[1], E_SImode)
                      && 
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1434; /* *btsi_setcqi */
                    }
                  break;

                case E_DImode:
                  if (GET_MODE (x4) == E_DImode
                      && register_operand (operands[1], E_DImode)
                      && (
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pnum_clobbers = 1;
                      return 1435; /* *btdi_setcqi */
                    }
                  break;

                default:
                  break;
                }
            }
        }
    }
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 2);
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0)
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != AND)
    return -1;
  operands[0] = x2;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (pattern1452 (x4, 
E_SImode) != 0
          || !
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1442; /* *btsi_setcsi_mask */

    case E_DImode:
      if (pattern1452 (x4, 
E_DImode) != 0
          || !(
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1443; /* *btdi_setcdi_mask */

    default:
      return -1;
    }
}

 int
recog_106 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !ix86_comparison_operator (operands[1], E_SImode))
        return -1;
      if (
#line 19473 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_ZU))
        return 1445; /* *setcc_si_zu */
      if (pnum_clobbers != NULL
          && 
#line 19497 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
        {
          *pnum_clobbers = 1;
          return 1449; /* *setcc_si_1_and */
        }
      if (!
#line 19514 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && !TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))))
        return -1;
      return 1451; /* *setcc_si_1_movzbl */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !ix86_comparison_operator (operands[1], E_DImode))
        return -1;
      if ((
#line 19473 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_ZU) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1446; /* *setcc_di_zu */
      if (!
#line 19481 "../../src/gcc/config/i386/i386.md"
(!TARGET_APX_ZU && TARGET_64BIT && !TARGET_PARTIAL_REG_STALL))
        return -1;
      return 1447; /* *setcc_di_1 */

    default:
      return -1;
    }
}

 int
recog_109 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (XINT (x3, 1))
    {
    case 45:
      if (pattern296 (x3) != 0
          || !register_operand (operands[0], E_SImode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!register_operand (operands[2], E_SImode)
          || !
#line 19556 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
        return -1;
      return 1454; /* *setcc_si_slp */

    case 98:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern783 (x3, 
E_SImode) != 0
              || !
#line 21734 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          *pnum_clobbers = 1;
          return 1566; /* bmi_bextr_si */

        case E_DImode:
          if (pattern783 (x3, 
E_DImode) != 0
              || !(
#line 21734 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1567; /* bmi_bextr_di */

        default:
          return -1;
        }

    case 99:
      switch (pattern297 (x3))
        {
        case 0:
          if (!
#line 22127 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
            return -1;
          return 1600; /* bmi2_pdep_si3 */

        case 1:
          if (!(
#line 22127 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1601; /* bmi2_pdep_di3 */

        default:
          return -1;
        }

    case 100:
      switch (pattern297 (x3))
        {
        case 0:
          if (!
#line 22138 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
            return -1;
          return 1602; /* bmi2_pext_si3 */

        case 1:
          if (!(
#line 22138 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1603; /* bmi2_pext_di3 */

        default:
          return -1;
        }

    case 93:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_CCZmode
          || !flags_reg_operand (operands[0], E_CCZmode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !memory_operand (operands[2], E_SImode)
              || !
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          *pnum_clobbers = 1;
          return 1883; /* stack_protect_test_1_si */

        case E_DImode:
          if (!memory_operand (operands[1], E_DImode)
              || !memory_operand (operands[2], E_DImode)
              || !
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          *pnum_clobbers = 1;
          return 1884; /* stack_protect_test_1_di */

        default:
          return -1;
        }

    case 95:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[2]))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[2], E_QImode)
              || !
#line 29036 "../../src/gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1891; /* sse4_2_crc32qi */

        case E_HImode:
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !
#line 29036 "../../src/gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1892; /* sse4_2_crc32hi */

        case E_SImode:
          if (!nonimmediate_operand (operands[2], E_SImode)
              || !
#line 29036 "../../src/gcc/config/i386/i386.md"
(TARGET_CRC32))
            return -1;
          return 1893; /* sse4_2_crc32si */

        default:
          return -1;
        }

    case 178:
      x5 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x5))
        {
        case UNSPEC:
          switch (XVECLEN (x5, 0))
            {
            case 3:
              if (XINT (x5, 1) != 59
                  || GET_MODE (x5) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return -1;
              x6 = XVECEXP (x5, 0, 0);
              operands[1] = x6;
              if (!register_operand (operands[1], E_V32HFmode))
                return -1;
              x7 = XVECEXP (x5, 0, 1);
              operands[2] = x7;
              if (!nonimmediate_operand (operands[2], E_V32HFmode))
                return -1;
              x8 = XVECEXP (x5, 0, 2);
              operands[3] = x8;
              if (!const_0_to_31_operand (operands[3], E_SImode))
                return -1;
              x4 = XVECEXP (x3, 0, 1);
              operands[4] = x4;
              if (!const48_operand (operands[4], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3302; /* avx512bw_cmpv32hf3_round */

            case 1:
              x4 = XVECEXP (x3, 0, 1);
              operands[2] = x4;
              switch (XINT (x5, 1))
                {
                case 156:
                  switch (pattern875 (x3))
                    {
                    case 0:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4547; /* avx512fp16_vcvtsh2usi_round */

                    case 1:
                      if (!
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4912; /* avx512f_vcvtss2usi_round */

                    case 2:
                      if (!
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4924; /* avx512f_vcvtsd2usi_round */

                    case 3:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4551; /* avx512fp16_vcvtsh2usiq_round */

                    case 4:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9036 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4914; /* avx512f_vcvtss2usiq_round */

                    case 5:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9072 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4926; /* avx512f_vcvtsd2usiq_round */

                    default:
                      return -1;
                    }

                case 46:
                  switch (pattern875 (x3))
                    {
                    case 0:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4549; /* avx512fp16_vcvtsh2si_round */

                    case 1:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8564 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                        return -1;
                      return 4795; /* sse_cvtss2si_round */

                    case 2:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9108 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 4936; /* sse2_cvtsd2si_round */

                    case 3:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7824 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4553; /* avx512fp16_vcvtsh2siq_round */

                    case 4:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8564 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4797; /* sse_cvtss2siq_round */

                    case 5:
                      if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9108 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4938; /* sse2_cvtsd2siq_round */

                    default:
                      return -1;
                    }

                case 172:
                  switch (pattern877 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7989 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4695; /* unspec_avx512fp16_fix_truncsi2_round */

                    case 1:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8592 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                        return -1;
                      return 4801; /* unspec_sse_cvttss2si_round */

                    case 2:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9137 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 4942; /* unspec_sse2_cvttsd2si_round */

                    case 3:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7989 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4699; /* unspec_avx512fp16_fix_truncdi2_round */

                    case 4:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8592 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4803; /* unspec_sse_cvttss2siq_round */

                    case 5:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9137 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4944; /* unspec_sse2_cvttsd2siq_round */

                    default:
                      return -1;
                    }

                case 173:
                  switch (pattern877 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7989 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                        return -1;
                      return 4697; /* unspec_avx512fp16_fixuns_truncsi2_round */

                    case 1:
                      if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4916; /* unspec_avx512f_vcvttss2usi_round */

                    case 2:
                      if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return -1;
                      return 4928; /* unspec_avx512f_vcvttsd2usi_round */

                    case 3:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7989 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4701; /* unspec_avx512fp16_fixuns_truncdi2_round */

                    case 4:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9047 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4918; /* unspec_avx512f_vcvttss2usiq_round */

                    case 5:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9083 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 4930; /* unspec_avx512f_vcvttsd2usiq_round */

                    default:
                      return -1;
                    }

                case 275:
                  switch (pattern879 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10920; /* avx10_2_vcvttsd2sissi_round */

                    case 1:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10928; /* avx10_2_vcvttss2sissi_round */

                    case 2:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10924; /* avx10_2_vcvttsd2sisdi_round */

                    case 3:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10932; /* avx10_2_vcvttss2sisdi_round */

                    default:
                      return -1;
                    }

                case 276:
                  switch (pattern879 (x3))
                    {
                    case 0:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10922; /* avx10_2_vcvttsd2usissi_round */

                    case 1:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                        return -1;
                      return 10930; /* avx10_2_vcvttss2usissi_round */

                    case 2:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10926; /* avx10_2_vcvttsd2usisdi_round */

                    case 3:
                      if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32623 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                        return -1;
                      return 10934; /* avx10_2_vcvttss2usisdi_round */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case AND:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (GET_CODE (x9) != UNSPEC
              || XVECLEN (x9, 0) != 3
              || XINT (x9, 1) != 59
              || GET_MODE (x9) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          x10 = XVECEXP (x9, 0, 0);
          operands[1] = x10;
          if (!register_operand (operands[1], E_V32HFmode))
            return -1;
          x11 = XVECEXP (x9, 0, 1);
          operands[2] = x11;
          if (!nonimmediate_operand (operands[2], E_V32HFmode))
            return -1;
          x12 = XVECEXP (x9, 0, 2);
          operands[3] = x12;
          if (!const_0_to_31_operand (operands[3], E_SImode))
            return -1;
          x13 = XEXP (x5, 1);
          operands[4] = x13;
          if (!register_operand (operands[4], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 1);
          operands[5] = x4;
          if (!const48_operand (operands[5], E_SImode)
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))))
            return -1;
          return 3304; /* avx512bw_cmpv32hf3_mask_round */

        case FIX:
          switch (pattern450 (x3))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4703; /* avx512fp16_fix_truncsi2_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8608 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 4805; /* sse_cvttss2si_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9154 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4946; /* sse2_cvttsd2si_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4707; /* avx512fp16_fix_truncdi2_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8608 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4807; /* sse_cvttss2siq_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9154 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4948; /* sse2_cvttsd2siq_round */

            default:
              return -1;
            }

        case UNSIGNED_FIX:
          switch (pattern450 (x3))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4705; /* avx512fp16_fixuns_truncsi2_round */

            case 1:
              if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4920; /* avx512f_vcvttss2usi_round */

            case 2:
              if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4932; /* avx512f_vcvttsd2usi_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4709; /* avx512fp16_fixuns_truncdi2_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9059 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4922; /* avx512f_vcvttss2usiq_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9095 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
                return -1;
              return 4934; /* avx512f_vcvttsd2usiq_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 158:
      switch (pattern299 (x3))
        {
        case 0:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8113; /* avx512bw_testmv64qi3 */

        case 1:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8115; /* avx512vl_testmv32qi3 */

        case 2:
          if (!(
#line 19065 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8119; /* avx512bw_testmv32hi3 */

        default:
          return -1;
        }

    case 159:
      switch (pattern299 (x3))
        {
        case 0:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8137; /* avx512bw_testnmv64qi3 */

        case 1:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8139; /* avx512vl_testnmv32qi3 */

        case 2:
          if (!(
#line 19076 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8143; /* avx512bw_testnmv32hi3 */

        default:
          return -1;
        }

    case 193:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!vector_operand (operands[1], E_V32HFmode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode)
          || !(
#line 29867 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || VALID_AVX512FP16_REG_MODE(V32HFmode)) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 9991; /* avx512dq_fpclassv32hf */

    case 214:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern161 (x3, 
E_DImode, 
E_V64QImode) != 0
              || !(
#line 30934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10327; /* avx512vl_vpshufbitqmbv64qi */

        case E_SImode:
          if (pattern161 (x3, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 30934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10331; /* avx512vl_vpshufbitqmbv32qi */

        default:
          return -1;
        }

    case 262:
      if (GET_MODE (x3) != E_SImode
          || !register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      if (!nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_0_to_255_operand (operands[2], E_VOIDmode)
          || !(
#line 32448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10723; /* avx10_2_fpclassbf16_v32bf */

    case 288:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x4 = XVECEXP (x3, 0, 1);
      operands[2] = x4;
      if (!const_int_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!memory_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !x86_64_nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 11020; /* atomic_storesi_1 */

        case E_DImode:
          if (!memory_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !x86_64_nonmemory_operand (operands[1], E_DImode)
              || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11021; /* atomic_storedi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_149 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PARALLEL)
    return -1;
  switch (XVECLEN (x5, 0))
    {
    case 1:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 2);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
          if (XWINT (x7, 0) != 1L)
            return -1;
          switch (pattern1009 (x2))
            {
            case 0:
              if (!
#line 12050 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5307; /* *vec_setv8hi_0_1 */

            case 1:
              if (!
#line 12050 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5308; /* *vec_setv8hf_0_1 */

            case 2:
              if (!
#line 12050 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
                return -1;
              return 5309; /* *vec_setv8bf_0_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x7;
          x8 = XEXP (x4, 0);
          operands[1] = x8;
          x9 = XEXP (x2, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1287 (x2, 
E_V16SImode, 
E_HImode, 
E_V4SImode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9190; /* avx512f_vec_dupv16si_mask */

            case E_V8SImode:
              if (pattern1287 (x2, 
E_V8SImode, 
E_QImode, 
E_V4SImode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9192; /* avx512vl_vec_dupv8si_mask */

            case E_V4SImode:
              if (pattern1288 (x2, 
E_V4SImode, 
E_SImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9194; /* avx512vl_vec_dupv4si_mask */

            case E_V8DImode:
              if (pattern1287 (x2, 
E_V8DImode, 
E_QImode, 
E_V2DImode, 
E_DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9196; /* avx512f_vec_dupv8di_mask */

            case E_V4DImode:
              if (pattern1287 (x2, 
E_V4DImode, 
E_QImode, 
E_V2DImode, 
E_DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9198; /* avx512vl_vec_dupv4di_mask */

            case E_V2DImode:
              if (pattern1288 (x2, 
E_V2DImode, 
E_DImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9200; /* avx512vl_vec_dupv2di_mask */

            case E_V16SFmode:
              if (pattern1287 (x2, 
E_V16SFmode, 
E_HImode, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9202; /* avx512f_vec_dupv16sf_mask */

            case E_V8SFmode:
              if (pattern1287 (x2, 
E_V8SFmode, 
E_QImode, 
E_V4SFmode, 
E_SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9204; /* avx512vl_vec_dupv8sf_mask */

            case E_V4SFmode:
              if (pattern1288 (x2, 
E_V4SFmode, 
E_SFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9206; /* avx512vl_vec_dupv4sf_mask */

            case E_V8DFmode:
              if (pattern1287 (x2, 
E_V8DFmode, 
E_QImode, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9208; /* avx512f_vec_dupv8df_mask */

            case E_V4DFmode:
              if (pattern1287 (x2, 
E_V4DFmode, 
E_QImode, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9210; /* avx512vl_vec_dupv4df_mask */

            case E_V2DFmode:
              if (pattern1288 (x2, 
E_V2DFmode, 
E_DFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9212; /* avx512vl_vec_dupv2df_mask */

            case E_V64QImode:
              if (pattern1287 (x2, 
E_V64QImode, 
E_DImode, 
E_V16QImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9214; /* avx512bw_vec_dupv64qi_mask */

            case E_V16QImode:
              if (pattern1288 (x2, 
E_V16QImode, 
E_QImode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9216; /* avx512vl_vec_dupv16qi_mask */

            case E_V32QImode:
              if (pattern1287 (x2, 
E_V32QImode, 
E_SImode, 
E_V16QImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9218; /* avx512vl_vec_dupv32qi_mask */

            case E_V32HImode:
              if (pattern1287 (x2, 
E_V32HImode, 
E_SImode, 
E_V8HImode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9220; /* avx512bw_vec_dupv32hi_mask */

            case E_V16HImode:
              if (pattern772 (x2, 
E_HImode, 
E_V16HImode) != 0
                  || !nonimmediate_operand (operands[1], E_V8HImode)
                  || !nonimm_or_0_operand (operands[2], E_V16HImode)
                  || !register_operand (operands[3], E_HImode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9222; /* avx512vl_vec_dupv16hi_mask */

            case E_V8HImode:
              if (pattern1288 (x2, 
E_V8HImode, 
E_HImode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9224; /* avx512vl_vec_dupv8hi_mask */

            case E_V32HFmode:
              if (pattern1287 (x2, 
E_V32HFmode, 
E_SImode, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9226; /* avx512bw_vec_dupv32hf_mask */

            case E_V16HFmode:
              if (pattern1287 (x2, 
E_V16HFmode, 
E_HImode, 
E_V8HFmode, 
E_HFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9228; /* avx512vl_vec_dupv16hf_mask */

            case E_V8HFmode:
              if (pattern1288 (x2, 
E_V8HFmode, 
E_HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9230; /* avx512fp16_vec_dupv8hf_mask */

            case E_V32BFmode:
              if (pattern1287 (x2, 
E_V32BFmode, 
E_SImode, 
E_V8BFmode, 
E_BFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9232; /* avx512bw_vec_dupv32bf_mask */

            case E_V16BFmode:
              if (pattern1287 (x2, 
E_V16BFmode, 
E_HImode, 
E_V8BFmode, 
E_BFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9234; /* avx512vl_vec_dupv16bf_mask */

            case E_V8BFmode:
              if (pattern1288 (x2, 
E_V8BFmode, 
E_BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9236; /* avx512vl_vec_dupv8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XVECEXP (x5, 0, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      x9 = XEXP (x2, 1);
      operands[2] = x9;
      x7 = XEXP (x2, 2);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1287 (x2, 
E_V16SImode, 
E_HImode, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9324; /* avx512dq_broadcastv16si_mask */

        case E_V8SImode:
          if (pattern1287 (x2, 
E_V8SImode, 
E_QImode, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9326; /* avx512dq_broadcastv8si_mask */

        case E_V4SImode:
          if (pattern1288 (x2, 
E_V4SImode, 
E_V2SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9328; /* avx512dq_broadcastv4si_mask */

        case E_V16SFmode:
          if (pattern1287 (x2, 
E_V16SFmode, 
E_HImode, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28036 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 9330; /* avx512dq_broadcastv16sf_mask */

        case E_V8SFmode:
          if (pattern1287 (x2, 
E_V8SFmode, 
E_QImode, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28036 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 9332; /* avx512dq_broadcastv8sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_157 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      x2 = XEXP (x1, 1);
      switch (pattern1290 (x2))
        {
        case 0:
          if ((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3241; /* *avx_cmpv8sf3_1 */
          break;

        case 1:
          if (
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return 3242; /* *avx_cmpv4sf3_1 */
          break;

        case 2:
          if ((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3243; /* *avx_cmpv4df3_1 */
          break;

        case 3:
          if ((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3244; /* *avx_cmpv2df3_1 */
          break;

        default:
          break;
        }
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 2);
      x4 = XVECEXP (x3, 0, 2);
      if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 1])
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern1469 (x2, 
E_V32HImode, 
E_SImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 763 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 7638; /* *avx512_ashrv32hi3_1 */
              break;

            case E_V16HImode:
              if (pattern1469 (x2, 
E_V16HImode, 
E_HImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                return 7639; /* *avx512_ashrv16hi3_1 */
              break;

            case E_V8HImode:
              if (pattern1469 (x2, 
E_V8HImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                return 7640; /* *avx512_ashrv8hi3_1 */
              break;

            case E_V16SImode:
              if (pattern1469 (x2, 
E_V16SImode, 
E_HImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7641; /* *avx512_ashrv16si3_1 */
              break;

            case E_V8SImode:
              if (pattern1469 (x2, 
E_V8SImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7642; /* *avx512_ashrv8si3_1 */
              break;

            case E_V4SImode:
              if (pattern1469 (x2, 
E_V4SImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7643; /* *avx512_ashrv4si3_1 */
              break;

            case E_V8DImode:
              if (pattern1469 (x2, 
E_V8DImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7644; /* *avx512_ashrv8di3_1 */
              break;

            case E_V4DImode:
              if (pattern1469 (x2, 
E_V4DImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7645; /* *avx512_ashrv4di3_1 */
              break;

            case E_V2DImode:
              if (pattern1469 (x2, 
E_V2DImode, 
E_QImode) == 0
                  && (
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7646; /* *avx512_ashrv2di3_1 */
              break;

            default:
              break;
            }
        }
      break;

    default:
      break;
    }
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  x4 = XVECEXP (x3, 0, 2);
  operands[5] = x4;
  switch (pattern1291 (x2))
    {
    case 0:
      if (vector_all_ones_operand (operands[1], E_V16QImode)
          && const0_operand (operands[2], E_V16QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16QImode)
              && nonimm_or_0_operand (operands[4], E_V16QImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7894; /* *avx2_pcmpv16qi3_1 */
          if (nonimmediate_operand (operands[3], E_V16QImode)
              && nonimmediate_operand (operands[4], E_V16QImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7916; /* *avx2_pcmpv16qi3_6 */
        }
      if (!const0_operand (operands[1], E_V16QImode)
          || !vector_all_ones_operand (operands[2], E_V16QImode)
          || !nonimmediate_operand (operands[3], E_V16QImode)
          || !nonimmediate_operand (operands[4], E_V16QImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7932; /* *avx2_pcmpv16qi3_7 */

    case 1:
      if (vector_all_ones_operand (operands[1], E_V8HImode)
          && const0_operand (operands[2], E_V8HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8HImode)
              && nonimm_or_0_operand (operands[4], E_V8HImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7895; /* *avx2_pcmpv8hi3_1 */
          if (nonimmediate_operand (operands[3], E_V8HImode)
              && nonimmediate_operand (operands[4], E_V8HImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7918; /* *avx2_pcmpv8hi3_6 */
        }
      if (!const0_operand (operands[1], E_V8HImode)
          || !vector_all_ones_operand (operands[2], E_V8HImode)
          || !nonimmediate_operand (operands[3], E_V8HImode)
          || !nonimmediate_operand (operands[4], E_V8HImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7933; /* *avx2_pcmpv8hi3_7 */

    case 2:
      if (vector_all_ones_operand (operands[1], E_V4SImode)
          && const0_operand (operands[2], E_V4SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4SImode)
              && nonimm_or_0_operand (operands[4], E_V4SImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7896; /* *avx2_pcmpv4si3_1 */
          if (nonimmediate_operand (operands[3], E_V4SImode)
              && nonimmediate_operand (operands[4], E_V4SImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7920; /* *avx2_pcmpv4si3_6 */
        }
      if (!const0_operand (operands[1], E_V4SImode)
          || !vector_all_ones_operand (operands[2], E_V4SImode)
          || !nonimmediate_operand (operands[3], E_V4SImode)
          || !nonimmediate_operand (operands[4], E_V4SImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7934; /* *avx2_pcmpv4si3_7 */

    case 3:
      if (vector_all_ones_operand (operands[1], E_V2DImode)
          && const0_operand (operands[2], E_V2DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V2DImode)
              && nonimm_or_0_operand (operands[4], E_V2DImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7897; /* *avx2_pcmpv2di3_1 */
          if (nonimmediate_operand (operands[3], E_V2DImode)
              && nonimmediate_operand (operands[4], E_V2DImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7922; /* *avx2_pcmpv2di3_6 */
        }
      if (!const0_operand (operands[1], E_V2DImode)
          || !vector_all_ones_operand (operands[2], E_V2DImode)
          || !nonimmediate_operand (operands[3], E_V2DImode)
          || !nonimmediate_operand (operands[4], E_V2DImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7935; /* *avx2_pcmpv2di3_7 */

    case 4:
      if (vector_all_ones_operand (operands[1], E_V32QImode)
          && const0_operand (operands[2], E_V32QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V32QImode)
              && nonimm_or_0_operand (operands[4], E_V32QImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7898; /* *avx2_pcmpv32qi3_1 */
          if (nonimmediate_operand (operands[3], E_V32QImode)
              && nonimmediate_operand (operands[4], E_V32QImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7924; /* *avx2_pcmpv32qi3_6 */
        }
      if (!const0_operand (operands[1], E_V32QImode)
          || !vector_all_ones_operand (operands[2], E_V32QImode)
          || !nonimmediate_operand (operands[3], E_V32QImode)
          || !nonimmediate_operand (operands[4], E_V32QImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7936; /* *avx2_pcmpv32qi3_7 */

    case 5:
      if (vector_all_ones_operand (operands[1], E_V16HImode)
          && const0_operand (operands[2], E_V16HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16HImode)
              && nonimm_or_0_operand (operands[4], E_V16HImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7899; /* *avx2_pcmpv16hi3_1 */
          if (nonimmediate_operand (operands[3], E_V16HImode)
              && nonimmediate_operand (operands[4], E_V16HImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7926; /* *avx2_pcmpv16hi3_6 */
        }
      if (!const0_operand (operands[1], E_V16HImode)
          || !vector_all_ones_operand (operands[2], E_V16HImode)
          || !nonimmediate_operand (operands[3], E_V16HImode)
          || !nonimmediate_operand (operands[4], E_V16HImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7937; /* *avx2_pcmpv16hi3_7 */

    case 6:
      if (vector_all_ones_operand (operands[1], E_V8SImode)
          && const0_operand (operands[2], E_V8SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8SImode)
              && nonimm_or_0_operand (operands[4], E_V8SImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7900; /* *avx2_pcmpv8si3_1 */
          if (nonimmediate_operand (operands[3], E_V8SImode)
              && nonimmediate_operand (operands[4], E_V8SImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7928; /* *avx2_pcmpv8si3_6 */
        }
      if (!const0_operand (operands[1], E_V8SImode)
          || !vector_all_ones_operand (operands[2], E_V8SImode)
          || !nonimmediate_operand (operands[3], E_V8SImode)
          || !nonimmediate_operand (operands[4], E_V8SImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7938; /* *avx2_pcmpv8si3_7 */

    case 7:
      if (vector_all_ones_operand (operands[1], E_V4DImode)
          && const0_operand (operands[2], E_V4DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4DImode)
              && nonimm_or_0_operand (operands[4], E_V4DImode)
              && 
#line 17969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* EQ is commutative.  */
   && ((INTVAL (operands[5]) == 0
	&& !(MEM_P (operands[3]) && MEM_P (operands[4])))
	  /* NLE aka GT, 3 must be register.  */
       || (INTVAL (operands[5]) == 6
	   && !MEM_P (operands[3]))
	  /* LT, 4 must be register and we swap operands.  */
       || (INTVAL (operands[5]) == 1
	   && !MEM_P (operands[4])))))
            return 7901; /* *avx2_pcmpv4di3_1 */
          if (nonimmediate_operand (operands[3], E_V4DImode)
              && nonimmediate_operand (operands[4], E_V4DImode)
              && 
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)))
            return 7930; /* *avx2_pcmpv4di3_6 */
        }
      if (!const0_operand (operands[1], E_V4DImode)
          || !vector_all_ones_operand (operands[2], E_V4DImode)
          || !nonimmediate_operand (operands[3], E_V4DImode)
          || !nonimmediate_operand (operands[4], E_V4DImode)
          || !
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)))
        return -1;
      return 7939; /* *avx2_pcmpv4di3_7 */

    default:
      return -1;
    }
}

 int
recog_165 (rtx x1 ATTRIBUTE_UNUSED,
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
  rtx x66, x67, x68, x69, x70;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (pattern899 (x4) != 0)
    return -1;
  x5 = XVECEXP (x4, 0, 32);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 33);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x4, 0, 34);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 35);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XVECEXP (x4, 0, 36);
  if (GET_CODE (x9) != CONST_INT)
    return -1;
  x10 = XVECEXP (x4, 0, 37);
  if (GET_CODE (x10) != CONST_INT)
    return -1;
  x11 = XVECEXP (x4, 0, 38);
  if (GET_CODE (x11) != CONST_INT)
    return -1;
  x12 = XVECEXP (x4, 0, 39);
  if (GET_CODE (x12) != CONST_INT)
    return -1;
  x13 = XVECEXP (x4, 0, 40);
  if (GET_CODE (x13) != CONST_INT)
    return -1;
  x14 = XVECEXP (x4, 0, 41);
  if (GET_CODE (x14) != CONST_INT)
    return -1;
  x15 = XVECEXP (x4, 0, 42);
  if (GET_CODE (x15) != CONST_INT)
    return -1;
  x16 = XVECEXP (x4, 0, 43);
  if (GET_CODE (x16) != CONST_INT)
    return -1;
  x17 = XVECEXP (x4, 0, 44);
  if (GET_CODE (x17) != CONST_INT)
    return -1;
  x18 = XVECEXP (x4, 0, 45);
  if (GET_CODE (x18) != CONST_INT)
    return -1;
  x19 = XVECEXP (x4, 0, 46);
  if (GET_CODE (x19) != CONST_INT)
    return -1;
  x20 = XVECEXP (x4, 0, 47);
  if (GET_CODE (x20) != CONST_INT)
    return -1;
  x21 = XVECEXP (x4, 0, 48);
  if (GET_CODE (x21) != CONST_INT)
    return -1;
  x22 = XVECEXP (x4, 0, 49);
  if (GET_CODE (x22) != CONST_INT)
    return -1;
  x23 = XVECEXP (x4, 0, 50);
  if (GET_CODE (x23) != CONST_INT)
    return -1;
  x24 = XVECEXP (x4, 0, 51);
  if (GET_CODE (x24) != CONST_INT)
    return -1;
  x25 = XVECEXP (x4, 0, 52);
  if (GET_CODE (x25) != CONST_INT)
    return -1;
  x26 = XVECEXP (x4, 0, 53);
  if (GET_CODE (x26) != CONST_INT)
    return -1;
  x27 = XVECEXP (x4, 0, 54);
  if (GET_CODE (x27) != CONST_INT)
    return -1;
  x28 = XVECEXP (x4, 0, 55);
  if (GET_CODE (x28) != CONST_INT)
    return -1;
  x29 = XVECEXP (x4, 0, 56);
  if (GET_CODE (x29) != CONST_INT)
    return -1;
  x30 = XVECEXP (x4, 0, 57);
  if (GET_CODE (x30) != CONST_INT)
    return -1;
  x31 = XVECEXP (x4, 0, 58);
  if (GET_CODE (x31) != CONST_INT)
    return -1;
  x32 = XVECEXP (x4, 0, 59);
  if (GET_CODE (x32) != CONST_INT)
    return -1;
  x33 = XVECEXP (x4, 0, 60);
  if (GET_CODE (x33) != CONST_INT)
    return -1;
  x34 = XVECEXP (x4, 0, 61);
  if (GET_CODE (x34) != CONST_INT)
    return -1;
  x35 = XVECEXP (x4, 0, 62);
  if (GET_CODE (x35) != CONST_INT)
    return -1;
  x36 = XVECEXP (x4, 0, 63);
  if (GET_CODE (x36) != CONST_INT
      || pattern1214 (x2, 
E_V64QImode, 
E_V128QImode) != 0)
    return -1;
  x37 = XEXP (x2, 1);
  operands[3] = x37;
  if (!nonimm_or_0_operand (operands[3], E_V64QImode))
    return -1;
  x38 = XEXP (x2, 2);
  operands[4] = x38;
  if (!register_operand (operands[4], E_DImode))
    return -1;
  x39 = XVECEXP (x4, 0, 0);
  switch (XWINT (x39, 0))
    {
    case 8L:
      x40 = XVECEXP (x4, 0, 1);
      if (XWINT (x40, 0) != 72L)
        return -1;
      x41 = XVECEXP (x4, 0, 2);
      if (XWINT (x41, 0) != 9L)
        return -1;
      x42 = XVECEXP (x4, 0, 3);
      if (XWINT (x42, 0) != 73L)
        return -1;
      x43 = XVECEXP (x4, 0, 4);
      if (XWINT (x43, 0) != 10L)
        return -1;
      x44 = XVECEXP (x4, 0, 5);
      if (XWINT (x44, 0) != 74L)
        return -1;
      x45 = XVECEXP (x4, 0, 6);
      if (XWINT (x45, 0) != 11L)
        return -1;
      x46 = XVECEXP (x4, 0, 7);
      if (XWINT (x46, 0) != 75L)
        return -1;
      x47 = XVECEXP (x4, 0, 8);
      if (XWINT (x47, 0) != 12L)
        return -1;
      x48 = XVECEXP (x4, 0, 9);
      if (XWINT (x48, 0) != 76L)
        return -1;
      x49 = XVECEXP (x4, 0, 10);
      if (XWINT (x49, 0) != 13L)
        return -1;
      x50 = XVECEXP (x4, 0, 11);
      if (XWINT (x50, 0) != 77L)
        return -1;
      x51 = XVECEXP (x4, 0, 12);
      if (XWINT (x51, 0) != 14L)
        return -1;
      x52 = XVECEXP (x4, 0, 13);
      if (XWINT (x52, 0) != 78L)
        return -1;
      x53 = XVECEXP (x4, 0, 14);
      if (XWINT (x53, 0) != 15L)
        return -1;
      x54 = XVECEXP (x4, 0, 15);
      if (XWINT (x54, 0) != 79L)
        return -1;
      x55 = XVECEXP (x4, 0, 16);
      if (XWINT (x55, 0) != 24L)
        return -1;
      x56 = XVECEXP (x4, 0, 17);
      if (XWINT (x56, 0) != 88L)
        return -1;
      x57 = XVECEXP (x4, 0, 18);
      if (XWINT (x57, 0) != 25L)
        return -1;
      x58 = XVECEXP (x4, 0, 19);
      if (XWINT (x58, 0) != 89L)
        return -1;
      x59 = XVECEXP (x4, 0, 20);
      if (XWINT (x59, 0) != 26L)
        return -1;
      x60 = XVECEXP (x4, 0, 21);
      if (XWINT (x60, 0) != 90L)
        return -1;
      x61 = XVECEXP (x4, 0, 22);
      if (XWINT (x61, 0) != 27L)
        return -1;
      x62 = XVECEXP (x4, 0, 23);
      if (XWINT (x62, 0) != 91L)
        return -1;
      x63 = XVECEXP (x4, 0, 24);
      if (XWINT (x63, 0) != 28L)
        return -1;
      x64 = XVECEXP (x4, 0, 25);
      if (XWINT (x64, 0) != 92L)
        return -1;
      x65 = XVECEXP (x4, 0, 26);
      if (XWINT (x65, 0) != 29L)
        return -1;
      x66 = XVECEXP (x4, 0, 27);
      if (XWINT (x66, 0) != 93L)
        return -1;
      x67 = XVECEXP (x4, 0, 28);
      if (XWINT (x67, 0) != 30L)
        return -1;
      x68 = XVECEXP (x4, 0, 29);
      if (XWINT (x68, 0) != 94L)
        return -1;
      x69 = XVECEXP (x4, 0, 30);
      if (XWINT (x69, 0) != 31L)
        return -1;
      x70 = XVECEXP (x4, 0, 31);
      if (XWINT (x70, 0) != 95L
          || XWINT (x5, 0) != 40L
          || XWINT (x6, 0) != 104L
          || XWINT (x7, 0) != 41L
          || XWINT (x8, 0) != 105L
          || XWINT (x9, 0) != 42L
          || XWINT (x10, 0) != 106L
          || XWINT (x11, 0) != 43L
          || XWINT (x12, 0) != 107L
          || XWINT (x13, 0) != 44L
          || XWINT (x14, 0) != 108L
          || XWINT (x15, 0) != 45L
          || XWINT (x16, 0) != 109L
          || XWINT (x17, 0) != 46L
          || XWINT (x18, 0) != 110L
          || XWINT (x19, 0) != 47L
          || XWINT (x20, 0) != 111L
          || XWINT (x21, 0) != 56L
          || XWINT (x22, 0) != 120L
          || XWINT (x23, 0) != 57L
          || XWINT (x24, 0) != 121L
          || XWINT (x25, 0) != 58L
          || XWINT (x26, 0) != 122L
          || XWINT (x27, 0) != 59L
          || XWINT (x28, 0) != 123L
          || XWINT (x29, 0) != 60L
          || XWINT (x30, 0) != 124L
          || XWINT (x31, 0) != 61L
          || XWINT (x32, 0) != 125L
          || XWINT (x33, 0) != 62L
          || XWINT (x34, 0) != 126L
          || XWINT (x35, 0) != 63L
          || XWINT (x36, 0) != 127L
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19437 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8324; /* avx512bw_interleave_highv64qi_mask */

    case 0L:
      x40 = XVECEXP (x4, 0, 1);
      if (XWINT (x40, 0) != 64L)
        return -1;
      x41 = XVECEXP (x4, 0, 2);
      if (XWINT (x41, 0) != 1L)
        return -1;
      x42 = XVECEXP (x4, 0, 3);
      if (XWINT (x42, 0) != 65L)
        return -1;
      x43 = XVECEXP (x4, 0, 4);
      if (XWINT (x43, 0) != 2L)
        return -1;
      x44 = XVECEXP (x4, 0, 5);
      if (XWINT (x44, 0) != 66L)
        return -1;
      x45 = XVECEXP (x4, 0, 6);
      if (XWINT (x45, 0) != 3L)
        return -1;
      x46 = XVECEXP (x4, 0, 7);
      if (XWINT (x46, 0) != 67L)
        return -1;
      x47 = XVECEXP (x4, 0, 8);
      if (XWINT (x47, 0) != 4L)
        return -1;
      x48 = XVECEXP (x4, 0, 9);
      if (XWINT (x48, 0) != 68L)
        return -1;
      x49 = XVECEXP (x4, 0, 10);
      if (XWINT (x49, 0) != 5L)
        return -1;
      x50 = XVECEXP (x4, 0, 11);
      if (XWINT (x50, 0) != 69L)
        return -1;
      x51 = XVECEXP (x4, 0, 12);
      if (XWINT (x51, 0) != 6L)
        return -1;
      x52 = XVECEXP (x4, 0, 13);
      if (XWINT (x52, 0) != 70L)
        return -1;
      x53 = XVECEXP (x4, 0, 14);
      if (XWINT (x53, 0) != 7L)
        return -1;
      x54 = XVECEXP (x4, 0, 15);
      if (XWINT (x54, 0) != 71L)
        return -1;
      x55 = XVECEXP (x4, 0, 16);
      if (XWINT (x55, 0) != 16L)
        return -1;
      x56 = XVECEXP (x4, 0, 17);
      if (XWINT (x56, 0) != 80L)
        return -1;
      x57 = XVECEXP (x4, 0, 18);
      if (XWINT (x57, 0) != 17L)
        return -1;
      x58 = XVECEXP (x4, 0, 19);
      if (XWINT (x58, 0) != 81L)
        return -1;
      x59 = XVECEXP (x4, 0, 20);
      if (XWINT (x59, 0) != 18L)
        return -1;
      x60 = XVECEXP (x4, 0, 21);
      if (XWINT (x60, 0) != 82L)
        return -1;
      x61 = XVECEXP (x4, 0, 22);
      if (XWINT (x61, 0) != 19L)
        return -1;
      x62 = XVECEXP (x4, 0, 23);
      if (XWINT (x62, 0) != 83L)
        return -1;
      x63 = XVECEXP (x4, 0, 24);
      if (XWINT (x63, 0) != 20L)
        return -1;
      x64 = XVECEXP (x4, 0, 25);
      if (XWINT (x64, 0) != 84L)
        return -1;
      x65 = XVECEXP (x4, 0, 26);
      if (XWINT (x65, 0) != 21L)
        return -1;
      x66 = XVECEXP (x4, 0, 27);
      if (XWINT (x66, 0) != 85L)
        return -1;
      x67 = XVECEXP (x4, 0, 28);
      if (XWINT (x67, 0) != 22L)
        return -1;
      x68 = XVECEXP (x4, 0, 29);
      if (XWINT (x68, 0) != 86L)
        return -1;
      x69 = XVECEXP (x4, 0, 30);
      if (XWINT (x69, 0) != 23L)
        return -1;
      x70 = XVECEXP (x4, 0, 31);
      if (XWINT (x70, 0) != 87L
          || XWINT (x5, 0) != 32L
          || XWINT (x6, 0) != 96L
          || XWINT (x7, 0) != 33L
          || XWINT (x8, 0) != 97L
          || XWINT (x9, 0) != 34L
          || XWINT (x10, 0) != 98L
          || XWINT (x11, 0) != 35L
          || XWINT (x12, 0) != 99L
          || XWINT (x13, 0) != 36L
          || XWINT (x14, 0) != 100L
          || XWINT (x15, 0) != 37L
          || XWINT (x16, 0) != 101L
          || XWINT (x17, 0) != 38L
          || XWINT (x18, 0) != 102L
          || XWINT (x19, 0) != 39L
          || XWINT (x20, 0) != 103L
          || XWINT (x21, 0) != 48L
          || XWINT (x22, 0) != 112L
          || XWINT (x23, 0) != 49L
          || XWINT (x24, 0) != 113L
          || XWINT (x25, 0) != 50L
          || XWINT (x26, 0) != 114L
          || XWINT (x27, 0) != 51L
          || XWINT (x28, 0) != 115L
          || XWINT (x29, 0) != 52L
          || XWINT (x30, 0) != 116L
          || XWINT (x31, 0) != 53L
          || XWINT (x32, 0) != 117L
          || XWINT (x33, 0) != 54L
          || XWINT (x34, 0) != 118L
          || XWINT (x35, 0) != 55L
          || XWINT (x36, 0) != 119L
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return -1;
      return 8330; /* avx512bw_interleave_lowv64qi_mask */

    default:
      return -1;
    }
}

 int
recog_184 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      return recog_145 (x1, insn, pnum_clobbers);

    case 2:
      return recog_144 (x1, insn, pnum_clobbers);

    case 3:
      return recog_143 (x1, insn, pnum_clobbers);

    case 4:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      x7 = XVECEXP (x3, 0, 3);
      operands[4] = x7;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      switch (XINT (x3, 1))
        {
        case 164:
          x8 = XEXP (x2, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x9 = XEXP (x2, 2);
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern1454 (x2, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 5464; /* avx512f_vternlogv16si_maskz_1 */

                case E_V8SImode:
                  if (pattern1454 (x2, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5466; /* avx512vl_vternlogv8si_maskz_1 */

                case E_V4SImode:
                  if (pattern1454 (x2, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5468; /* avx512vl_vternlogv4si_maskz_1 */

                case E_V8DImode:
                  if (pattern1454 (x2, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 5470; /* avx512f_vternlogv8di_maskz_1 */

                case E_V4DImode:
                  if (pattern1454 (x2, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5472; /* avx512vl_vternlogv4di_maskz_1 */

                case E_V2DImode:
                  if (pattern1454 (x2, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 13664 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 5474; /* avx512vl_vternlogv2di_maskz_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              if (!rtx_equal_p (x8, operands[1]))
                return -1;
              x9 = XEXP (x2, 2);
              operands[5] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern1455 (x2, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7035; /* *avx512f_vternlogv16si_mask */

                case E_V8SImode:
                  if (pattern1455 (x2, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7036; /* *avx512vl_vternlogv8si_mask */

                case E_V4SImode:
                  if (pattern1455 (x2, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7037; /* *avx512vl_vternlogv4si_mask */

                case E_V8DImode:
                  if (pattern1455 (x2, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7038; /* *avx512f_vternlogv8di_mask */

                case E_V4DImode:
                  if (pattern1455 (x2, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7039; /* *avx512vl_vternlogv4di_mask */

                case E_V2DImode:
                  if (pattern1455 (x2, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 14034 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7040; /* *avx512vl_vternlogv2di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 163:
          x8 = XEXP (x2, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[5] = x8;
              x9 = XEXP (x2, 2);
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1456 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7105; /* avx512f_fixupimmv16sf_maskz_1 */

                case E_V8SFmode:
                  if (pattern1456 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7109; /* avx512vl_fixupimmv8sf_maskz_1 */

                case E_V4SFmode:
                  if (pattern1456 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7112; /* avx512vl_fixupimmv4sf_maskz_1 */

                case E_V8DFmode:
                  if (pattern1456 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 7115; /* avx512f_fixupimmv8df_maskz_1 */

                case E_V4DFmode:
                  if (pattern1456 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7119; /* avx512vl_fixupimmv4df_maskz_1 */

                case E_V2DFmode:
                  if (pattern1456 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
                      || !(
#line 14159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 7122; /* avx512vl_fixupimmv2df_maskz_1 */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              x9 = XEXP (x2, 2);
              switch (GET_CODE (x9))
                {
                case REG:
                case SUBREG:
                  operands[5] = x9;
                  if (!rtx_equal_p (x8, operands[1]))
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16SFmode:
                      if (pattern1515 (x2, 
E_V16SImode, 
E_V16SFmode, 
E_HImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return -1;
                      return 7123; /* avx512f_fixupimmv16sf_mask */

                    case E_V8SFmode:
                      if (pattern1515 (x2, 
E_V8SImode, 
E_V8SFmode, 
E_QImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7125; /* avx512vl_fixupimmv8sf_mask */

                    case E_V4SFmode:
                      if (pattern1515 (x2, 
E_V4SImode, 
E_V4SFmode, 
E_QImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7127; /* avx512vl_fixupimmv4sf_mask */

                    case E_V8DFmode:
                      if (pattern1515 (x2, 
E_V8DImode, 
E_V8DFmode, 
E_QImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                        return -1;
                      return 7128; /* avx512f_fixupimmv8df_mask */

                    case E_V4DFmode:
                      if (pattern1515 (x2, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7130; /* avx512vl_fixupimmv4df_mask */

                    case E_V2DFmode:
                      if (pattern1515 (x2, 
E_V2DImode, 
E_V2DFmode, 
E_QImode) != 0
                          || !(
#line 14175 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                        return -1;
                      return 7132; /* avx512vl_fixupimmv2df_mask */

                    default:
                      return -1;
                    }

                case CONST_INT:
                  if (XWINT (x9, 0) != 1L
                      || !rtx_equal_p (x8, operands[2]))
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V4SFmode:
                      if (pattern1516 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                          || !
#line 14207 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                        return -1;
                      return 7133; /* avx512f_sfixupimmv4sf */

                    case E_V2DFmode:
                      if (pattern1516 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                          || !(
#line 14207 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                        return -1;
                      return 7137; /* avx512f_sfixupimmv2df */

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
}

 int
recog_188 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern140 (x2))
    {
    case 0:
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 798 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7648; /* ashlv16hi3_mask */
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9603; /* avx512vl_ashlvv16hi_mask */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 798 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7652; /* ashlv8hi3_mask */
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9599; /* avx512vl_ashlvv8hi_mask */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7656; /* ashlv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9579; /* avx2_ashlvv8si_mask */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7660; /* ashlv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9583; /* avx2_ashlvv4si_mask */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7664; /* ashlv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9591; /* avx2_ashlvv4di_mask */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7668; /* ashlv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9595; /* avx2_ashlvv2di_mask */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
        return 7688; /* ashlv32hi3_mask */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9607; /* avx512bw_ashlvv32hi_mask */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7692; /* ashlv16si3_mask */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 803 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9575; /* avx512f_ashlvv16si_mask */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7696; /* ashlv8di3_mask */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 804 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9587; /* avx512f_ashlvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_195 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4611; /* avx512fp16_fix_truncv8hi2_mask */

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
      return 4616; /* avx512fp16_fix_truncv16hi2_mask */

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
      return 4624; /* avx512fp16_fix_truncv32hi2_mask */

    case 3:
      if (pattern773 (x2, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4632; /* avx512fp16_fix_truncv8si2_mask */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8806 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
            return -1;
          return 4896; /* fix_truncv8sfv8si2_mask */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5038; /* fix_truncv8dfv8si2_mask */

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
          return 4640; /* avx512fp16_fix_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4885; /* fix_truncv16sfv16si2_mask */

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
          return 4648; /* avx512fp16_fix_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5083; /* fix_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5138; /* fix_truncv8sfv8di2_mask */

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
          return 4675; /* *avx512fp16_fix_truncv4si2_load_mask */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8836 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 4900; /* fix_truncv4sfv4si2_mask */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F))))
            return -1;
          return 5054; /* fix_truncv4dfv4si2_mask */

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
          return 4679; /* *avx512fp16_fix_truncv4di2_load_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5091; /* fix_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5142; /* fix_truncv4sfv4di2_mask */

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
          return 4691; /* *avx512fp16_fix_truncv2di2_load_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5098; /* fix_truncv2dfv2di2_mask */

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
      return 4667; /* avx512fp16_fix_truncv4si2_mask */

    case 10:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4671; /* avx512fp16_fix_truncv4di2_mask */

    case 11:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7968 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 4687; /* avx512fp16_fix_truncv2di2_mask */

    case 12:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9778 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
        return -1;
      return 5150; /* avx512dq_fix_truncv2sfv2di2_mask */

    default:
      return -1;
    }
}

 int
recog_204 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (pattern486 (x2))
    {
    case 0:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 2685; /* *addv32hf3_mask */

    case 1:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 2693; /* *addv16hf3_mask */

    case 2:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 2701; /* *addv8hf3_mask */

    case 3:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 2709; /* *addv16sf3_mask */

    case 4:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 2717; /* *addv8sf3_mask */

    case 5:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
        return -1;
      return 2725; /* *addv4sf3_mask */

    case 6:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 2733; /* *addv8df3_mask */

    case 7:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 2741; /* *addv4df3_mask */

    case 8:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 2749; /* *addv2df3_mask */

    case 9:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7490; /* *addv16si3_mask */

    case 10:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7492; /* *addv8si3_mask */

    case 11:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7494; /* *addv4si3_mask */

    case 12:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7496; /* *addv8di3_mask */

    case 13:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7498; /* *addv4di3_mask */

    case 14:
      if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (PLUS, V2DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7500; /* *addv2di3_mask */

    case 15:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7502; /* *addv64qi3_mask */

    case 16:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7504; /* *addv16qi3_mask */

    case 17:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7506; /* *addv32qi3_mask */

    case 18:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7508; /* *addv32hi3_mask */

    case 19:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7510; /* *addv16hi3_mask */

    case 20:
      if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (PLUS, V8HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7512; /* *addv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10610; /* avx10_2_addbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10618; /* avx10_2_addbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10626; /* avx10_2_addbf16_v8bf_mask */

    case 24:
      if (!(
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 2761; /* avx512fp16_vmaddv8hf3 */

    case 25:
      if (!
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2769; /* sse_vmaddv4sf3 */

    case 26:
      if (!(
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2777; /* sse2_vmaddv2df3 */

    default:
      return -1;
    }
}

 int
recog_217 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XEXP (x5, 2);
  if (!register_operand (x6, E_QImode))
    return -1;
  x7 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x7, E_SImode))
    return -1;
  x8 = XEXP (x5, 0);
  x9 = XEXP (x8, 0);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x9;
      x10 = XEXP (x8, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 2);
      switch (GET_CODE (x11))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x11;
          switch (pattern1518 (x2))
            {
            case 0:
              if (pattern1668 (x2, 
E_V8HFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8HFmode)
                  && register_operand (operands[3], E_V8HFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                        return 4249; /* avx512f_vmfmadd_v8hf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4255; /* avx512f_vmfmadd_v8hf_mask3_round */

            case 1:
              if (pattern1668 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && register_operand (operands[3], E_V4SFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return 4251; /* avx512f_vmfmadd_v4sf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4257; /* avx512f_vmfmadd_v4sf_mask3_round */

            case 2:
              if (pattern1668 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && register_operand (operands[3], E_V2DFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                        return 4253; /* avx512f_vmfmadd_v2df_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6691 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4259; /* avx512f_vmfmadd_v2df_mask3_round */

            case 3:
              if (pattern1733 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4261; /* avx512f_vmfmadd_v8hf_maskz_1_round */

            case 4:
              if (pattern1733 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4263; /* avx512f_vmfmadd_v4sf_maskz_1_round */

            case 5:
              if (pattern1733 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6723 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4265; /* avx512f_vmfmadd_v2df_maskz_1_round */

            default:
              return -1;
            }

        case NEG:
          x14 = XEXP (x11, 0);
          operands[3] = x14;
          switch (pattern1518 (x2))
            {
            case 0:
              if (pattern1669 (x2, 
E_V8HFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8HFmode)
                  && register_operand (operands[3], E_V8HFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                        return 4267; /* *avx512f_vmfmsub_v8hf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4273; /* avx512f_vmfmsub_v8hf_mask3_round */

            case 1:
              if (pattern1669 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && register_operand (operands[3], E_V4SFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                        return 4269; /* *avx512f_vmfmsub_v4sf_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4275; /* avx512f_vmfmsub_v4sf_mask3_round */

            case 2:
              if (pattern1669 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && register_operand (operands[3], E_V2DFmode))
                {
                  x12 = XEXP (x5, 1);
                  if (rtx_equal_p (x12, operands[1]))
                    {
                      x13 = XEXP (x3, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                        return 4271; /* *avx512f_vmfmsub_v2df_mask_round */
                    }
                }
              if (!register_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode))
                return -1;
              x12 = XEXP (x5, 1);
              if (!rtx_equal_p (x12, operands[3]))
                return -1;
              x13 = XEXP (x3, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4277; /* avx512f_vmfmsub_v2df_mask3_round */

            case 3:
              if (pattern1734 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4279; /* *avx512f_vmfmsub_v8hf_maskz_1_round */

            case 4:
              if (pattern1734 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4281; /* *avx512f_vmfmsub_v4sf_maskz_1_round */

            case 5:
              if (pattern1734 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4283; /* *avx512f_vmfmsub_v2df_maskz_1_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x11 = XEXP (x8, 2);
      switch (GET_CODE (x11))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[3] = x11;
          switch (pattern1400 (x2))
            {
            case 0:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1809 (x3, 
E_V8HFmode) == 0
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return 4285; /* avx512f_vmfnmadd_v8hf_mask_round */
              operands[1] = x10;
              if (pattern1810 (x3, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6826 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4291; /* avx512f_vmfnmadd_v8hf_mask3_round */

            case 1:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1809 (x3, 
E_V4SFmode) == 0
                  && 
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return 4287; /* avx512f_vmfnmadd_v4sf_mask_round */
              operands[1] = x10;
              if (pattern1810 (x3, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4293; /* avx512f_vmfnmadd_v4sf_mask3_round */

            case 2:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1809 (x3, 
E_V2DFmode) == 0
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return 4289; /* avx512f_vmfnmadd_v2df_mask_round */
              operands[1] = x10;
              if (pattern1810 (x3, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6826 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4295; /* avx512f_vmfnmadd_v2df_mask3_round */

            case 3:
              if (pattern1735 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4297; /* avx512f_vmfnmadd_v8hf_maskz_1_round */

            case 4:
              if (pattern1735 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4299; /* avx512f_vmfnmadd_v4sf_maskz_1_round */

            case 5:
              if (pattern1735 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6859 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4301; /* avx512f_vmfnmadd_v2df_maskz_1_round */

            default:
              return -1;
            }

        case NEG:
          x14 = XEXP (x11, 0);
          operands[3] = x14;
          switch (pattern1400 (x2))
            {
            case 0:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1811 (x3, 
E_V8HFmode) == 0
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6881 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return 4303; /* *avx512f_vmfnmsub_v8hf_mask_round */
              operands[1] = x10;
              if (pattern1812 (x3, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6903 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4309; /* *avx512f_vmfnmsub_v8hf_mask3_round */

            case 1:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1811 (x3, 
E_V4SFmode) == 0
                  && 
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return 4305; /* *avx512f_vmfnmsub_v4sf_mask_round */
              operands[1] = x10;
              if (pattern1812 (x3, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4311; /* *avx512f_vmfnmsub_v4sf_mask3_round */

            case 2:
              x10 = XEXP (x8, 1);
              operands[2] = x10;
              if (pattern1811 (x3, 
E_V2DFmode) == 0
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6881 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return 4307; /* *avx512f_vmfnmsub_v2df_mask_round */
              operands[1] = x10;
              if (pattern1812 (x3, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6903 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4313; /* *avx512f_vmfnmsub_v2df_mask3_round */

            case 3:
              if (pattern1736 (x2, 
E_V8HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 4315; /* *avx512f_vmfnmsub_v8hf_maskz_1_round */

            case 4:
              if (pattern1736 (x2, 
E_V4SFmode) != 0
                  || !
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 4317; /* *avx512f_vmfnmsub_v4sf_maskz_1_round */

            case 5:
              if (pattern1736 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 4319; /* *avx512f_vmfnmsub_v2df_maskz_1_round */

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
recog_229 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[3] = x6;
      switch (XINT (x3, 1))
        {
        case 63:
          switch (pattern1132 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3068; /* ieee_maxv32hf3_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3076; /* ieee_maxv16hf3_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3088; /* ieee_maxv16sf3_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3096; /* ieee_maxv8sf3_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3108; /* ieee_maxv8df3_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3116; /* ieee_maxv4df3_round */

            default:
              return -1;
            }

        case 62:
          switch (pattern1132 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3072; /* ieee_minv32hf3_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3080; /* ieee_minv16hf3_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3092; /* ieee_minv16sf3_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3100; /* ieee_minv8sf3_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3112; /* ieee_minv8df3_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
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
              return 3120; /* ieee_minv4df3_round */

            default:
              return -1;
            }

        case 192:
          if (!const_0_to_255_operand (operands[2], E_SImode)
              || !const48_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1225 (x2, 
E_V32HFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3196; /* *reducepv32hf_round */

            case E_V16HFmode:
              if (pattern1225 (x2, 
E_V16HFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3200; /* *reducepv16hf_round */

            case E_V16SFmode:
              if (pattern1225 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3206; /* *reducepv16sf_round */

            case E_V8SFmode:
              if (pattern1225 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3210; /* *reducepv8sf_round */

            case E_V8DFmode:
              if (pattern1225 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 3216; /* *reducepv8df_round */

            case E_V4DFmode:
              if (pattern1225 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 3220; /* *reducepv4df_round */

            default:
              return -1;
            }

        case 221:
          switch (pattern1133 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4384; /* avx512bw_fmulc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4392; /* avx512vl_fmulc_v16hf_round */

            default:
              return -1;
            }

        case 222:
          switch (pattern1133 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 4388; /* avx512bw_fcmulc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 4396; /* avx512vl_fcmulc_v16hf_round */

            default:
              return -1;
            }

        case 58:
          if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1311 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 5434; /* avx512bw_scalefv32hf_round */

            case E_V16HFmode:
              if (pattern1311 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 5438; /* avx512vl_scalefv16hf_round */

            case E_V16SFmode:
              if (pattern1311 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5444; /* avx512f_scalefv16sf_round */

            case E_V8SFmode:
              if (pattern1311 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5448; /* avx512vl_scalefv8sf_round */

            case E_V8DFmode:
              if (pattern1311 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 5454; /* avx512f_scalefv8df_round */

            case E_V4DFmode:
              if (pattern1311 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 5458; /* avx512vl_scalefv4df_round */

            default:
              return -1;
            }

        case 94:
          if (!const_0_to_255_operand (operands[2], E_SImode))
            return -1;
          switch (pattern1218 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 7146; /* avx512bw_rndscalev32hf_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 7150; /* avx512vl_rndscalev16hf_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 7156; /* avx512f_rndscalev16sf_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 7160; /* avx512vl_rndscalev8sf_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 7166; /* avx512f_rndscalev8df_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 7170; /* avx512vl_rndscalev4df_round */

            default:
              return -1;
            }

        case 150:
          if (GET_MODE (x3) != E_V16HImode
              || !register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_V16SFmode)
              || !const_0_to_255_operand (operands[2], E_SImode)
              || !const48_operand (operands[3], E_SImode)
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29231 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9670; /* *avx512f_vcvtps2ph512_round */

        case 166:
          if (!const_0_to_15_operand (operands[2], E_SImode))
            return -1;
          switch (pattern1218 (x2))
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 10016; /* avx512bw_getmantv32hf_round */

            case 1:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 10020; /* avx512vl_getmantv16hf_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 10026; /* avx512f_getmantv16sf_round */

            case 3:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 10030; /* avx512vl_getmantv8sf_round */

            case 4:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512))))
                return -1;
              return 10036; /* avx512f_getmantv8df_round */

            case 5:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL))))
                return -1;
              return 10040; /* avx512vl_getmantv4df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x2, 0, 1);
      operands[4] = x6;
      switch (XINT (x3, 1))
        {
        case 133:
          if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
            return -1;
          x7 = XVECEXP (x3, 0, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[3] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1134 (x2, 
E_V32HFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V32HFmode == V16SFmode
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
                  return 4096; /* *fma_fmaddsub_v32hf_round */

                case E_V16HFmode:
                  if (pattern1134 (x2, 
E_V16HFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16HFmode == V16SFmode
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
                  return 4100; /* *fma_fmaddsub_v16hf_round */

                case E_V16SFmode:
                  if (pattern1134 (x2, 
E_V16SFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16SFmode == V16SFmode
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
                  return 4106; /* *fma_fmaddsub_v16sf_round */

                case E_V8SFmode:
                  if (pattern1134 (x2, 
E_V8SFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8SFmode == V16SFmode
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
                  return 4110; /* *fma_fmaddsub_v8sf_round */

                case E_V8DFmode:
                  if (pattern1134 (x2, 
E_V8DFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8DFmode == V16SFmode
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
                  return 4116; /* *fma_fmaddsub_v8df_round */

                case E_V4DFmode:
                  if (pattern1134 (x2, 
E_V4DFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V4DFmode == V16SFmode
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
                  return 4120; /* *fma_fmaddsub_v4df_round */

                default:
                  return -1;
                }

            case NEG:
              x8 = XEXP (x7, 0);
              operands[3] = x8;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1481 (x2, 
E_V32HFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V32HFmode == V16SFmode
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
                  return 4160; /* *fma_fmsubadd_v32hf_round */

                case E_V16HFmode:
                  if (pattern1481 (x2, 
E_V16HFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16HFmode == V16SFmode
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
                  return 4164; /* *fma_fmsubadd_v16hf_round */

                case E_V16SFmode:
                  if (pattern1481 (x2, 
E_V16SFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V16SFmode == V16SFmode
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
                  return 4170; /* *fma_fmsubadd_v16sf_round */

                case E_V8SFmode:
                  if (pattern1481 (x2, 
E_V8SFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8SFmode == V16SFmode
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
                  return 4174; /* *fma_fmsubadd_v8sf_round */

                case E_V8DFmode:
                  if (pattern1481 (x2, 
E_V8DFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V8DFmode == V16SFmode
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
                  return 4180; /* *fma_fmsubadd_v8df_round */

                case E_V4DFmode:
                  if (pattern1481 (x2, 
E_V4DFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && ((V4DFmode == V16SFmode
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
                  return 4184; /* *fma_fmsubadd_v4df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 217:
          switch (pattern1135 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V32HFmode == V16SFmode
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
(TARGET_EVEX512))))
                return -1;
              return 4329; /* fma_fmaddc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V16HFmode == V16SFmode
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
(TARGET_AVX512VL))))
                return -1;
              return 4337; /* fma_fmaddc_v16hf_round */

            default:
              return -1;
            }

        case 219:
          switch (pattern1135 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V32HFmode == V16SFmode
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
(TARGET_EVEX512))))
                return -1;
              return 4333; /* fma_fcmaddc_v32hf_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && ((V16HFmode == V16SFmode
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
(TARGET_AVX512VL))))
                return -1;
              return 4341; /* fma_fcmaddc_v16hf_round */

            default:
              return -1;
            }

        case 194:
          x7 = XVECEXP (x3, 0, 2);
          operands[3] = x7;
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !const48_operand (operands[4], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1131 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V16SFmode == V16SFmode
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
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9964; /* avx512dq_rangepv16sf_round */

            case E_V8SFmode:
              if (pattern1131 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && ((V8SFmode == V16SFmode
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
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9968; /* avx512dq_rangepv8sf_round */

            case E_V8DFmode:
              if (pattern1131 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
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
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9974; /* avx512dq_rangepv8df_round */

            case E_V4DFmode:
              if (pattern1131 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29825 "../../src/gcc/config/i386/sse.md"
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
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9978; /* avx512dq_rangepv4df_round */

            default:
              return -1;
            }

        case 278:
          x7 = XVECEXP (x3, 0, 2);
          operands[3] = x7;
          if (!const_0_to_255_operand (operands[3], E_SImode)
              || !const48_operand (operands[4], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1131 (x2, 
E_V32HFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 531 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10942; /* avx10_2_minmaxpv32hf_round */

            case E_V16HFmode:
              if (pattern1131 (x2, 
E_V16HFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10946; /* avx10_2_minmaxpv16hf_round */

            case E_V8HFmode:
              if (pattern1131 (x2, 
E_V8HFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10950; /* avx10_2_minmaxpv8hf_round */

            case E_V16SFmode:
              if (pattern1131 (x2, 
E_V16SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10954; /* avx10_2_minmaxpv16sf_round */

            case E_V8SFmode:
              if (pattern1131 (x2, 
E_V8SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10958; /* avx10_2_minmaxpv8sf_round */

            case E_V4SFmode:
              if (pattern1131 (x2, 
E_V4SFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10962; /* avx10_2_minmaxpv4sf_round */

            case E_V8DFmode:
              if (pattern1131 (x2, 
E_V8DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10966; /* avx10_2_minmaxpv8df_round */

            case E_V4DFmode:
              if (pattern1131 (x2, 
E_V4DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10970; /* avx10_2_minmaxpv4df_round */

            case E_V2DFmode:
              if (pattern1131 (x2, 
E_V2DFmode) != 0
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10974; /* avx10_2_minmaxpv2df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      return recog_227 (x1, insn, pnum_clobbers);

    case 4:
      if (XINT (x3, 1) != 163)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x7 = XVECEXP (x3, 0, 2);
      operands[3] = x7;
      x9 = XVECEXP (x3, 0, 3);
      operands[4] = x9;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x6 = XVECEXP (x2, 0, 1);
      operands[5] = x6;
      if (!const48_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1520 (x2, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14159 "../../src/gcc/config/i386/sse.md"
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
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7104; /* avx512f_fixupimmv16sf_round */

        case E_V8SFmode:
          if (pattern1520 (x2, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14159 "../../src/gcc/config/i386/sse.md"
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
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7108; /* avx512vl_fixupimmv8sf_round */

        case E_V8DFmode:
          if (pattern1520 (x2, 
E_V8DImode, 
E_V8DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14159 "../../src/gcc/config/i386/sse.md"
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
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7114; /* avx512f_fixupimmv8df_round */

        case E_V4DFmode:
          if (pattern1520 (x2, 
E_V4DImode, 
E_V4DFmode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14159 "../../src/gcc/config/i386/sse.md"
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
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7118; /* avx512vl_fixupimmv4df_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_259 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern173 (x1))
    {
    case 0:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10186; /* vpshrd_v32hi */

    case 1:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10188; /* vpshrd_v16si */

    case 2:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10190; /* vpshrd_v8di */

    case 3:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10192; /* vpshrd_v16hi */

    case 4:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10194; /* vpshrd_v8si */

    case 5:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10196; /* vpshrd_v4di */

    case 6:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10198; /* vpshrd_v8hi */

    case 7:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10200; /* vpshrd_v4si */

    case 8:
      if (!(
#line 30409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10202; /* vpshrd_v2di */

    default:
      return -1;
    }
}

 int
recog_266 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 175:
      return recog_239 (x1, insn, pnum_clobbers);

    case 178:
      return recog_232 (x1, insn, pnum_clobbers);

    case 63:
      switch (pattern151 (x1))
        {
        case 0:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3067; /* ieee_maxv32hf3 */

        case 1:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3075; /* ieee_maxv16hf3 */

        case 2:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3083; /* ieee_maxv8hf3 */

        case 3:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3087; /* ieee_maxv16sf3 */

        case 4:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3095; /* ieee_maxv8sf3 */

        case 5:
          if (!
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1))
            return -1;
          return 3103; /* ieee_maxv4sf3 */

        case 6:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3107; /* ieee_maxv8df3 */

        case 7:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3115; /* ieee_maxv4df3 */

        case 8:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3123; /* ieee_maxv2df3 */

        default:
          return -1;
        }

    case 62:
      switch (pattern151 (x1))
        {
        case 0:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3071; /* ieee_minv32hf3 */

        case 1:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3079; /* ieee_minv16hf3 */

        case 2:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3085; /* ieee_minv8hf3 */

        case 3:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3091; /* ieee_minv16sf3 */

        case 4:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3099; /* ieee_minv8sf3 */

        case 5:
          if (!
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1))
            return -1;
          return 3105; /* ieee_minv4sf3 */

        case 6:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 3111; /* ieee_minv8df3 */

        case 7:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3119; /* ieee_minv4df3 */

        case 8:
          if (!(
#line 3393 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && 1
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3125; /* ieee_minv2df3 */

        default:
          return -1;
        }

    case 192:
      return recog_238 (x1, insn, pnum_clobbers);

    case 221:
      switch (pattern153 (x1))
        {
        case 0:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4382; /* avx512bw_fmulc_v32hf */

        case 1:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4390; /* avx512vl_fmulc_v16hf */

        case 2:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4398; /* avx512fp16_fmulc_v8hf */

        default:
          return -1;
        }

    case 222:
      switch (pattern153 (x1))
        {
        case 0:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4386; /* avx512bw_fcmulc_v32hf */

        case 1:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4394; /* avx512vl_fcmulc_v16hf */

        case 2:
          if (!(
#line 7318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4400; /* avx512fp16_fcmulc_v8hf */

        default:
          return -1;
        }

    case 58:
      return recog_240 (x1, insn, pnum_clobbers);

    case 94:
      return recog_235 (x1, insn, pnum_clobbers);

    case 188:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern161 (x2, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7592; /* avx512bw_pmaddwd512v32hi */

        case E_V8SImode:
          if (pattern161 (x2, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7594; /* avx512bw_pmaddwd512v16hi */

        case E_V4SImode:
          if (pattern161 (x2, 
E_V4SImode, 
E_V8HImode) != 0
              || !
#line 16684 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1))
            return -1;
          return 7596; /* avx512bw_pmaddwd512v8hi */

        default:
          return -1;
        }

    case 57:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern733 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8317; /* avx512bw_packuswb */

        case E_V32QImode:
          if (pattern733 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8319; /* avx2_packuswb */

        case E_V16QImode:
          if (pattern733 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !
#line 19389 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8321; /* sse2_packuswb */

        case E_V32HImode:
          if (pattern733 (x2, 
E_V16SImode, 
E_V32HImode) != 0
              || !(
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8732; /* avx512bw_packusdw */

        case E_V16HImode:
          if (pattern733 (x2, 
E_V8SImode, 
E_V16HImode) != 0
              || !(
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8734; /* avx2_packusdw */

        case E_V8HImode:
          if (pattern733 (x2, 
E_V4SImode, 
E_V8HImode) != 0
              || !
#line 23854 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
            return -1;
          return 8736; /* sse4_1_packusdw */

        default:
          return -1;
        }

    case 190:
      if (pattern154 (x1) != 0
          || !
#line 20726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8447; /* *avx512bw_pshuflwv32hi */

    case 189:
      if (pattern154 (x1) != 0
          || !
#line 20902 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8453; /* *avx512bw_pshufhwv32hi */

    case 56:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DImode:
          if (pattern782 (x2, 
E_V64QImode, 
E_V8DImode) != 0
              || !(
#line 21929 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8509; /* *avx512f_psadbw */

        case E_V4DImode:
          if (pattern782 (x2, 
E_V32QImode, 
E_V4DImode) != 0
              || !(
#line 21929 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8510; /* *avx2_psadbw */

        case E_V2DImode:
          if (pattern782 (x2, 
E_V16QImode, 
E_V2DImode) != 0
              || !
#line 21929 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
            return -1;
          return 8511; /* *sse2_psadbw */

        default:
          return -1;
        }

    case 187:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern161 (x2, 
E_V8HImode, 
E_V16QImode) != 0
              || !(
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8610; /* avx512bw_pmaddubsw512v8hi */

        case E_V16HImode:
          if (pattern161 (x2, 
E_V16HImode, 
E_V32QImode) != 0
              || !(
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8612; /* avx512bw_pmaddubsw512v16hi */

        case E_V32HImode:
          if (pattern161 (x2, 
E_V32HImode, 
E_V64QImode) != 0
              || !(
#line 22805 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8614; /* avx512bw_pmaddubsw512v32hi */

        default:
          return -1;
        }

    case 52:
      switch (pattern155 (x1))
        {
        case 0:
          if (!(
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 8628; /* avx512bw_pshufbv64qi3 */

        case 1:
          if (!(
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1) && 
#line 632 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8630; /* avx2_pshufbv32qi3 */

        case 2:
          if (!
#line 23130 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1))
            return -1;
          return 8632; /* ssse3_pshufbv16qi3 */

        default:
          return -1;
        }

    case 120:
      return recog_243 (x1, insn, pnum_clobbers);

    case 123:
      if (pattern156 (x1, 
E_V16QImode, 
E_V2DImode) != 0
          || !
#line 23460 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8680; /* sse4a_extrq */

    case 125:
      if (pattern157 (x1, 
E_V2DImode) != 0
          || !
#line 23486 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
        return -1;
      return 8682; /* sse4a_insertq */

    case 130:
      return recog_234 (x1, insn, pnum_clobbers);

    case 137:
      if (pattern158 (x1, 
E_V2DImode) != 0
          || !
#line 27110 "../../src/gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9085; /* aesenc */

    case 138:
      if (pattern158 (x1, 
E_V2DImode) != 0
          || !
#line 27128 "../../src/gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9086; /* aesenclast */

    case 139:
      if (pattern158 (x1, 
E_V2DImode) != 0
          || !
#line 27146 "../../src/gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9087; /* aesdec */

    case 140:
      if (pattern158 (x1, 
E_V2DImode) != 0
          || !
#line 27164 "../../src/gcc/config/i386/sse.md"
(TARGET_AES || (TARGET_VAES && TARGET_AVX512VL)))
        return -1;
      return 9088; /* aesdeclast */

    case 142:
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      if (!vector_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      if (!const_0_to_255_operand (operands[2], E_SImode)
          || !
#line 27194 "../../src/gcc/config/i386/sse.md"
(TARGET_AES))
        return -1;
      return 9090; /* aeskeygenassist */

    case 151:
      return recog_236 (x1, insn, pnum_clobbers);

    case 144:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern785 (x2, 
E_V16SImode, 
E_V16SFmode) != 0
              || !(
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9355; /* avx512f_vpermilvarv16sf3 */

        case E_V8SFmode:
          if (pattern785 (x2, 
E_V8SImode, 
E_V8SFmode) != 0
              || !(
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9357; /* avx_vpermilvarv8sf3 */

        case E_V4SFmode:
          if (pattern785 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
              || !
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9359; /* avx_vpermilvarv4sf3 */

        case E_V8DFmode:
          if (pattern785 (x2, 
E_V8DImode, 
E_V8DFmode) != 0
              || !(
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9361; /* avx512f_vpermilvarv8df3 */

        case E_V4DFmode:
          if (pattern785 (x2, 
E_V4DImode, 
E_V4DFmode) != 0
              || !(
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9363; /* avx_vpermilvarv4df3 */

        case E_V2DFmode:
          if (pattern785 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
              || !(
#line 28134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9365; /* avx_vpermilvarv2df3 */

        default:
          return -1;
        }

    case 47:
      return recog_241 (x1, insn, pnum_clobbers);

    case 150:
      return recog_242 (x1, insn, pnum_clobbers);

    case 160:
      return recog_233 (x1, insn, pnum_clobbers);

    case 166:
      return recog_237 (x1, insn, pnum_clobbers);

    case 179:
      if (pattern158 (x1, 
E_V4SImode) != 0
          || !
#line 29971 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10087; /* sha1msg1 */

    case 180:
      if (pattern158 (x1, 
E_V4SImode) != 0
          || !
#line 29982 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10088; /* sha1msg2 */

    case 181:
      if (pattern158 (x1, 
E_V4SImode) != 0
          || !
#line 29993 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10089; /* sha1nexte */

    case 183:
      if (pattern158 (x1, 
E_V4SImode) != 0
          || !
#line 30017 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10091; /* sha256msg1 */

    case 184:
      if (pattern158 (x1, 
E_V4SImode) != 0
          || !
#line 30028 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA))
        return -1;
      return 10092; /* sha256msg2 */

    case 239:
      if (pattern156 (x1, 
E_V2DImode, 
E_V4DImode) != 0
          || !
#line 30090 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10097; /* vsha512msg1 */

    case 240:
      if (pattern157 (x1, 
E_V4DImode) != 0
          || !
#line 30101 "../../src/gcc/config/i386/sse.md"
(TARGET_SHA512))
        return -1;
      return 10098; /* vsha512msg2 */

    case 242:
      switch (pattern159 (x1))
        {
        case 0:
          if (!(
#line 30124 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10100; /* vsm4key4_v16si */

        case 1:
          if (!
#line 30124 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10101; /* vsm4key4_v8si */

        case 2:
          if (!
#line 30124 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10102; /* vsm4key4_v4si */

        default:
          return -1;
        }

    case 243:
      switch (pattern159 (x1))
        {
        case 0:
          if (!(
#line 30137 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4) && 
#line 677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10103; /* vsm4rnds4_v16si */

        case 1:
          if (!
#line 30137 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10104; /* vsm4rnds4_v8si */

        case 2:
          if (!
#line 30137 "../../src/gcc/config/i386/sse.md"
(TARGET_SM4))
            return -1;
          return 10105; /* vsm4rnds4_v4si */

        default:
          return -1;
        }

    case 197:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V64QImode:
          if (pattern61 (x2, 
E_V64QImode) != 0
              || !(
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10130; /* vpmultishiftqbv64qi */

        case E_V16QImode:
          if (pattern61 (x2, 
E_V16QImode) != 0
              || !(
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10132; /* vpmultishiftqbv16qi */

        case E_V32QImode:
          if (pattern61 (x2, 
E_V32QImode) != 0
              || !(
#line 30283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10134; /* vpmultishiftqbv32qi */

        default:
          return -1;
        }

    case 200:
      switch (pattern155 (x1))
        {
        case 0:
          if (!(
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10180; /* vgf2p8mulb_v64qi */

        case 1:
          if (!(
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI) && 
#line 635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 10182; /* vgf2p8mulb_v32qi */

        case 2:
          if (!
#line 30392 "../../src/gcc/config/i386/sse.md"
(TARGET_GFNI))
            return -1;
          return 10184; /* vgf2p8mulb_v16qi */

        default:
          return -1;
        }

    case 209:
      switch (pattern160 (x1))
        {
        case 0:
          if (!
#line 30868 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10312; /* vaesdec_v32qi */

        case 1:
          if (!(
#line 30868 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10313; /* vaesdec_v16qi */

        case 2:
          if (!(
#line 30868 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10314; /* vaesdec_v64qi */

        default:
          return -1;
        }

    case 210:
      switch (pattern160 (x1))
        {
        case 0:
          if (!
#line 30882 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10315; /* vaesdeclast_v32qi */

        case 1:
          if (!(
#line 30882 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10316; /* vaesdeclast_v16qi */

        case 2:
          if (!(
#line 30882 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10317; /* vaesdeclast_v64qi */

        default:
          return -1;
        }

    case 211:
      switch (pattern160 (x1))
        {
        case 0:
          if (!
#line 30896 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10318; /* vaesenc_v32qi */

        case 1:
          if (!(
#line 30896 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10319; /* vaesenc_v16qi */

        case 2:
          if (!(
#line 30896 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10320; /* vaesenc_v64qi */

        default:
          return -1;
        }

    case 212:
      switch (pattern160 (x1))
        {
        case 0:
          if (!
#line 30910 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES))
            return -1;
          return 10321; /* vaesenclast_v32qi */

        case 1:
          if (!(
#line 30910 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10322; /* vaesenclast_v16qi */

        case 2:
          if (!(
#line 30910 "../../src/gcc/config/i386/sse.md"
(TARGET_VAES) && 
#line 698 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 10323; /* vaesenclast_v64qi */

        default:
          return -1;
        }

    case 249:
      switch (pattern162 (x1))
        {
        case 0:
          if (!(
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10450; /* vcvt2ph2bf8v32hf */

        case 1:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10458; /* vcvt2ph2bf8v16hf */

        case 2:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10466; /* vcvt2ph2bf8v8hf */

        default:
          return -1;
        }

    case 250:
      switch (pattern162 (x1))
        {
        case 0:
          if (!(
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10452; /* vcvt2ph2bf8sv32hf */

        case 1:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10460; /* vcvt2ph2bf8sv16hf */

        case 2:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10468; /* vcvt2ph2bf8sv8hf */

        default:
          return -1;
        }

    case 251:
      switch (pattern162 (x1))
        {
        case 0:
          if (!(
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10454; /* vcvt2ph2hf8v32hf */

        case 1:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10462; /* vcvt2ph2hf8v16hf */

        case 2:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10470; /* vcvt2ph2hf8v8hf */

        default:
          return -1;
        }

    case 252:
      switch (pattern162 (x1))
        {
        case 0:
          if (!(
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10456; /* vcvt2ph2hf8sv32hf */

        case 1:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10464; /* vcvt2ph2hf8sv16hf */

        case 2:
          if (!
#line 31741 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10472; /* vcvt2ph2hf8sv8hf */

        default:
          return -1;
        }

    case 245:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10482; /* vcvtbiasph2bf8v32hf */

        case 1:
          if (!
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10490; /* vcvtbiasph2bf8v16hf */

        default:
          return -1;
        }

    case 246:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10484; /* vcvtbiasph2bf8sv32hf */

        case 1:
          if (!
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10492; /* vcvtbiasph2bf8sv16hf */

        default:
          return -1;
        }

    case 247:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10486; /* vcvtbiasph2hf8v32hf */

        case 1:
          if (!
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10494; /* vcvtbiasph2hf8v16hf */

        default:
          return -1;
        }

    case 248:
      switch (pattern164 (x1))
        {
        case 0:
          if (!(
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10488; /* vcvtbiasph2hf8sv32hf */

        case 1:
          if (!
#line 31830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10496; /* vcvtbiasph2hf8sv16hf */

        default:
          return -1;
        }

    case 258:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XVECEXP (x2, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x2, 0, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern61 (x2, 
E_V32BFmode) != 0
              || !(
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10591; /* avx10_2_scalefbf16_v32bf */

        case E_V16BFmode:
          if (pattern61 (x2, 
E_V16BFmode) != 0
              || !
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10593; /* avx10_2_scalefbf16_v16bf */

        case E_V8BFmode:
          if (pattern61 (x2, 
E_V8BFmode) != 0
              || !
#line 32097 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10595; /* avx10_2_scalefbf16_v8bf */

        default:
          return -1;
        }

    case 259:
      switch (pattern165 (x1))
        {
        case 0:
          if (!(
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10705; /* avx10_2_rndscalebf16_v32bf */

        case 1:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10711; /* avx10_2_rndscalebf16_v16bf */

        case 2:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10717; /* avx10_2_rndscalebf16_v8bf */

        default:
          return -1;
        }

    case 260:
      switch (pattern165 (x1))
        {
        case 0:
          if (!(
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10707; /* avx10_2_reducebf16_v32bf */

        case 1:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10713; /* avx10_2_reducebf16_v16bf */

        case 2:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10719; /* avx10_2_reducebf16_v8bf */

        default:
          return -1;
        }

    case 261:
      switch (pattern165 (x1))
        {
        case 0:
          if (!(
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10709; /* avx10_2_getmantbf16_v32bf */

        case 1:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10715; /* avx10_2_getmantbf16_v16bf */

        case 2:
          if (!
#line 32438 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10721; /* avx10_2_getmantbf16_v8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_288 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern930 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 8L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 9L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 10L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 11L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 12L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 13L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 14L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 15L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!nonimmediate_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || !register_operand (operands[1], E_V16SFmode)
              || !(
#line 12720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5359; /* vec_extract_hi_v16sf */

        case E_V8SImode:
          if (!nonimmediate_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_V16SImode)
              || !(
#line 12720 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5360; /* vec_extract_hi_v16si */

        case E_V8HImode:
          if (!nonimmediate_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_V16HImode)
              || !
#line 13108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5390; /* vec_extract_hi_v16hi */

        case E_V8HFmode:
          if (!nonimmediate_operand (operands[0], E_V8HFmode)
              || GET_MODE (x2) != E_V8HFmode
              || !register_operand (operands[1], E_V16HFmode)
              || !
#line 13108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5391; /* vec_extract_hi_v16hf */

        case E_V8BFmode:
          if (!nonimmediate_operand (operands[0], E_V8BFmode)
              || GET_MODE (x2) != E_V8BFmode
              || !register_operand (operands[1], E_V16BFmode)
              || !
#line 13108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5392; /* vec_extract_hi_v16bf */

        default:
          return -1;
        }

    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 1L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 2L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 3L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 4L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 5L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 6L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 7L)
        return -1;
      switch (pattern1533 (x2))
        {
        case 0:
          if (!(
#line 12825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5363; /* vec_extract_lo_v16sf */

        case 1:
          if (!(
#line 12825 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5364; /* vec_extract_lo_v16si */

        case 2:
          if (!
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5387; /* vec_extract_lo_v16hi */

        case 3:
          if (!
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5388; /* vec_extract_lo_v16hf */

        case 4:
          if (!
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5389; /* vec_extract_lo_v16bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_296 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern672 (x3) != 0
      || !nonimmediate_operand (operands[0], E_V32QImode)
      || GET_MODE (x2) != E_V32QImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (pattern1767 (x3) != 0)
        return -1;
      x5 = XVECEXP (x3, 0, 16);
      if (XWINT (x5, 0) != 16L)
        return -1;
      x6 = XVECEXP (x3, 0, 17);
      if (XWINT (x6, 0) != 17L)
        return -1;
      x7 = XVECEXP (x3, 0, 18);
      if (XWINT (x7, 0) != 18L)
        return -1;
      x8 = XVECEXP (x3, 0, 19);
      if (XWINT (x8, 0) != 19L)
        return -1;
      x9 = XVECEXP (x3, 0, 20);
      if (XWINT (x9, 0) != 20L)
        return -1;
      x10 = XVECEXP (x3, 0, 21);
      if (XWINT (x10, 0) != 21L)
        return -1;
      x11 = XVECEXP (x3, 0, 22);
      if (XWINT (x11, 0) != 22L)
        return -1;
      x12 = XVECEXP (x3, 0, 23);
      if (XWINT (x12, 0) != 23L
          || pattern1885 (x3) != 0)
        return -1;
      x13 = XVECEXP (x3, 0, 28);
      if (XWINT (x13, 0) != 28L)
        return -1;
      x14 = XVECEXP (x3, 0, 29);
      if (XWINT (x14, 0) != 29L)
        return -1;
      x15 = XVECEXP (x3, 0, 30);
      if (XWINT (x15, 0) != 30L)
        return -1;
      x16 = XVECEXP (x3, 0, 31);
      if (XWINT (x16, 0) != 31L
          || !nonimmediate_operand (operands[1], E_V64QImode)
          || !
#line 13140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return -1;
      return 5393; /* vec_extract_lo_v64qi */

    case 32L:
      x17 = XVECEXP (x3, 0, 1);
      if (XWINT (x17, 0) != 33L)
        return -1;
      x18 = XVECEXP (x3, 0, 2);
      if (XWINT (x18, 0) != 34L)
        return -1;
      x19 = XVECEXP (x3, 0, 3);
      if (XWINT (x19, 0) != 35L)
        return -1;
      x20 = XVECEXP (x3, 0, 4);
      if (XWINT (x20, 0) != 36L)
        return -1;
      x21 = XVECEXP (x3, 0, 5);
      if (XWINT (x21, 0) != 37L)
        return -1;
      x22 = XVECEXP (x3, 0, 6);
      if (XWINT (x22, 0) != 38L)
        return -1;
      x23 = XVECEXP (x3, 0, 7);
      if (XWINT (x23, 0) != 39L)
        return -1;
      x24 = XVECEXP (x3, 0, 8);
      if (XWINT (x24, 0) != 40L)
        return -1;
      x25 = XVECEXP (x3, 0, 9);
      if (XWINT (x25, 0) != 41L)
        return -1;
      x26 = XVECEXP (x3, 0, 10);
      if (XWINT (x26, 0) != 42L)
        return -1;
      x27 = XVECEXP (x3, 0, 11);
      if (XWINT (x27, 0) != 43L)
        return -1;
      x28 = XVECEXP (x3, 0, 12);
      if (XWINT (x28, 0) != 44L)
        return -1;
      x29 = XVECEXP (x3, 0, 13);
      if (XWINT (x29, 0) != 45L)
        return -1;
      x30 = XVECEXP (x3, 0, 14);
      if (XWINT (x30, 0) != 46L)
        return -1;
      x31 = XVECEXP (x3, 0, 15);
      if (XWINT (x31, 0) != 47L)
        return -1;
      x5 = XVECEXP (x3, 0, 16);
      if (XWINT (x5, 0) != 48L)
        return -1;
      x6 = XVECEXP (x3, 0, 17);
      if (XWINT (x6, 0) != 49L)
        return -1;
      x7 = XVECEXP (x3, 0, 18);
      if (XWINT (x7, 0) != 50L)
        return -1;
      x8 = XVECEXP (x3, 0, 19);
      if (XWINT (x8, 0) != 51L)
        return -1;
      x9 = XVECEXP (x3, 0, 20);
      if (XWINT (x9, 0) != 52L)
        return -1;
      x10 = XVECEXP (x3, 0, 21);
      if (XWINT (x10, 0) != 53L)
        return -1;
      x11 = XVECEXP (x3, 0, 22);
      if (XWINT (x11, 0) != 54L)
        return -1;
      x12 = XVECEXP (x3, 0, 23);
      if (XWINT (x12, 0) != 55L)
        return -1;
      x32 = XVECEXP (x3, 0, 24);
      if (XWINT (x32, 0) != 56L)
        return -1;
      x33 = XVECEXP (x3, 0, 25);
      if (XWINT (x33, 0) != 57L)
        return -1;
      x34 = XVECEXP (x3, 0, 26);
      if (XWINT (x34, 0) != 58L)
        return -1;
      x35 = XVECEXP (x3, 0, 27);
      if (XWINT (x35, 0) != 59L)
        return -1;
      x13 = XVECEXP (x3, 0, 28);
      if (XWINT (x13, 0) != 60L)
        return -1;
      x14 = XVECEXP (x3, 0, 29);
      if (XWINT (x14, 0) != 61L)
        return -1;
      x15 = XVECEXP (x3, 0, 30);
      if (XWINT (x15, 0) != 62L)
        return -1;
      x16 = XVECEXP (x3, 0, 31);
      if (XWINT (x16, 0) != 63L
          || !register_operand (operands[1], E_V64QImode)
          || !
#line 13189 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5394; /* vec_extract_hi_v64qi */

    default:
      return -1;
    }
}

 int
recog_305 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5533; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5560; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5587; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5614; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5641; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5668; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5695; /* *avx512f_vpternlogv16si_1 */

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
          return 5722; /* *avx512vl_vpternlogv8si_1 */

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
          return 5749; /* *avx512vl_vpternlogv4si_1 */

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
          return 5776; /* *avx512f_vpternlogv8di_1 */

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
          return 5803; /* *avx512vl_vpternlogv4di_1 */

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
          return 5830; /* *avx512vl_vpternlogv2di_1 */

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
          return 5536; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5563; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5590; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5617; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5644; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5671; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5698; /* *avx512f_vpternlogv16si_1 */

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
          return 5725; /* *avx512vl_vpternlogv8si_1 */

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
          return 5752; /* *avx512vl_vpternlogv4si_1 */

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
          return 5779; /* *avx512f_vpternlogv8di_1 */

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
          return 5806; /* *avx512vl_vpternlogv4di_1 */

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
          return 5833; /* *avx512vl_vpternlogv2di_1 */

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
          return 5539; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5566; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5593; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5620; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5647; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5674; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5701; /* *avx512f_vpternlogv16si_1 */

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
          return 5728; /* *avx512vl_vpternlogv8si_1 */

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
          return 5755; /* *avx512vl_vpternlogv4si_1 */

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
          return 5782; /* *avx512f_vpternlogv8di_1 */

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
          return 5809; /* *avx512vl_vpternlogv4di_1 */

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
          return 5836; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6823; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6832; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6841; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6850; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6859; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6868; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6877; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6886; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6895; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6904; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6913; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6922; /* *avx512vl_vpternlogv2di_3 */

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
          return 6181; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6208; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6235; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6262; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6289; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6316; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6343; /* *avx512f_vpternlogv16si_2 */

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
          return 6370; /* *avx512vl_vpternlogv8si_2 */

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
          return 6397; /* *avx512vl_vpternlogv4si_2 */

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
          return 6424; /* *avx512f_vpternlogv8di_2 */

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
          return 6451; /* *avx512vl_vpternlogv4di_2 */

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
          return 6478; /* *avx512vl_vpternlogv2di_2 */

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
          return 6184; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6211; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6238; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6265; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6292; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6319; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6346; /* *avx512f_vpternlogv16si_2 */

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
          return 6373; /* *avx512vl_vpternlogv8si_2 */

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
          return 6400; /* *avx512vl_vpternlogv4si_2 */

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
          return 6427; /* *avx512f_vpternlogv8di_2 */

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
          return 6454; /* *avx512vl_vpternlogv4di_2 */

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
          return 6481; /* *avx512vl_vpternlogv2di_2 */

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
          return 6187; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6214; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6241; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6268; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6295; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6322; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6349; /* *avx512f_vpternlogv16si_2 */

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
          return 6376; /* *avx512vl_vpternlogv8si_2 */

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
          return 6403; /* *avx512vl_vpternlogv4si_2 */

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
          return 6430; /* *avx512f_vpternlogv8di_2 */

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
          return 6457; /* *avx512vl_vpternlogv4di_2 */

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
          return 6484; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_314 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
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
              return 5847; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5874; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5901; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5928; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5955; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5982; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6009; /* *avx512f_vpternlogv16sf_1 */

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
              return 6036; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6063; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6090; /* *avx512f_vpternlogv8df_1 */

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
              return 6117; /* *avx512vl_vpternlogv4df_1 */

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
              return 6144; /* *avx512vl_vpternlogv2df_1 */

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
              return 5850; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5877; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5904; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5931; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5958; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5985; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6012; /* *avx512f_vpternlogv16sf_1 */

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
              return 6039; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6066; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6093; /* *avx512f_vpternlogv8df_1 */

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
              return 6120; /* *avx512vl_vpternlogv4df_1 */

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
              return 6147; /* *avx512vl_vpternlogv2df_1 */

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
              return 5853; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5880; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5907; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5934; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5961; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5988; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6015; /* *avx512f_vpternlogv16sf_1 */

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
              return 6042; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6069; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6096; /* *avx512f_vpternlogv8df_1 */

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
              return 6123; /* *avx512vl_vpternlogv4df_1 */

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
              return 6150; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6927; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6936; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6945; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6954; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6963; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6972; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6981; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6990; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6999; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7008; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7017; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7026; /* *avx512vl_vpternlogv2df_3 */

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
              return 6495; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6522; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6549; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6576; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6603; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6630; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6657; /* *avx512f_vpternlogv16sf_2 */

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
              return 6684; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6711; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6738; /* *avx512f_vpternlogv8df_2 */

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
              return 6765; /* *avx512vl_vpternlogv4df_2 */

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
              return 6792; /* *avx512vl_vpternlogv2df_2 */

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
              return 6498; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6525; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6552; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6579; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6606; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6633; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6660; /* *avx512f_vpternlogv16sf_2 */

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
              return 6687; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6714; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6741; /* *avx512f_vpternlogv8df_2 */

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
              return 6768; /* *avx512vl_vpternlogv4df_2 */

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
              return 6795; /* *avx512vl_vpternlogv2df_2 */

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
              return 6501; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6528; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6555; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6582; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6609; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6636; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6663; /* *avx512f_vpternlogv16sf_2 */

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
              return 6690; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6717; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6744; /* *avx512f_vpternlogv8df_2 */

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
              return 6771; /* *avx512vl_vpternlogv4df_2 */

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
              return 6798; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
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
              return 5856; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5883; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5910; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5937; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5964; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5991; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6018; /* *avx512f_vpternlogv16sf_1 */

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
              return 6045; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6072; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6099; /* *avx512f_vpternlogv8df_1 */

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
              return 6126; /* *avx512vl_vpternlogv4df_1 */

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
              return 6153; /* *avx512vl_vpternlogv2df_1 */

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
              return 5859; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5886; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5913; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5940; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5967; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5994; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6021; /* *avx512f_vpternlogv16sf_1 */

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
              return 6048; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6075; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6102; /* *avx512f_vpternlogv8df_1 */

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
              return 6129; /* *avx512vl_vpternlogv4df_1 */

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
              return 6156; /* *avx512vl_vpternlogv2df_1 */

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
              return 5862; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5889; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5916; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5943; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5970; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5997; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6024; /* *avx512f_vpternlogv16sf_1 */

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
              return 6051; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6078; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6105; /* *avx512f_vpternlogv8df_1 */

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
              return 6132; /* *avx512vl_vpternlogv4df_1 */

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
              return 6159; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6930; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6939; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6948; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6957; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6966; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6975; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6984; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6993; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 7002; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7011; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7020; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7029; /* *avx512vl_vpternlogv2df_3 */

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
              return 6504; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6531; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6558; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6585; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6612; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6639; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6666; /* *avx512f_vpternlogv16sf_2 */

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
              return 6693; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6720; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6747; /* *avx512f_vpternlogv8df_2 */

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
              return 6774; /* *avx512vl_vpternlogv4df_2 */

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
              return 6801; /* *avx512vl_vpternlogv2df_2 */

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
              return 6507; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6534; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6561; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6588; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6615; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6642; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6669; /* *avx512f_vpternlogv16sf_2 */

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
              return 6696; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6723; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6750; /* *avx512f_vpternlogv8df_2 */

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
              return 6777; /* *avx512vl_vpternlogv4df_2 */

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
              return 6804; /* *avx512vl_vpternlogv2df_2 */

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
              return 6510; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6537; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6564; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6591; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6618; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6645; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6672; /* *avx512f_vpternlogv16sf_2 */

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
              return 6699; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6726; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6753; /* *avx512f_vpternlogv8df_2 */

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
              return 6780; /* *avx512vl_vpternlogv4df_2 */

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
              return 6807; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_309 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_375 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  switch (pattern557 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 1);
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17
          || GET_MODE (x3) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 266; /* *adddi3_doubleword */
          if (!x86_64_general_operand (operands[2], E_DImode)
              || !(
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 285; /* *adddi_1 */

        case E_TImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern563 (x5, 
E_TImode) != 0
              || !(
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 267; /* *addti3_doubleword */

        case E_SImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern565 (x5) != 0
              || !
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 283; /* *addsi_1 */

        case E_HImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern564 (x5, 
E_HImode) != 0
              || !
#line 6813 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 298; /* *addhi_1 */

        case E_QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern564 (x5, 
E_QImode) != 0
              || !
#line 6870 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          return 300; /* *addqi_1 */

        case E_V2QImode:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern567 (x5, 
E_V2QImode) != 0
              || !
#line 3241 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size || TARGET_SSE2))
            return -1;
          return 2136; /* addv2qi3 */

        default:
          return -1;
        }

    case 1:
      x2 = XVECEXP (x1, 0, 1);
      if (XVECLEN (x2, 0) != 1)
        return -1;
      x6 = XVECEXP (x2, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (XINT (x2, 1))
        {
        case 110:
          x4 = XVECEXP (x1, 0, 0);
          x5 = XEXP (x4, 1);
          if (pattern210 (x5, 
E_V2SFmode) != 0
              || !
#line 746 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)))
            return -1;
          return 2052; /* *mmx_addv2sf3 */

        case 174:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern567 (x5, 
E_QImode) != 0
                  || !(
#line 2252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2078 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2597; /* kaddqi */

            case E_HImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern567 (x5, 
E_HImode) != 0
                  || !(
#line 2252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2078 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2598; /* kaddhi */

            case E_SImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern567 (x5, 
E_SImode) != 0
                  || !(
#line 2252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 2599; /* kaddsi */

            case E_DImode:
              x4 = XVECEXP (x1, 0, 0);
              x5 = XEXP (x4, 1);
              if (pattern567 (x5, 
E_DImode) != 0
                  || !(
#line 2252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return -1;
              return 2600; /* kadddi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (!
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 301; /* *addqi_1_slp */

    case 3:
      if (!
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
        return -1;
      return 302; /* *addhi_1_slp */

    default:
      return -1;
    }
}

 int
recog_382 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  if (pattern581 (x1, 
PLUS, 
E_CCZmode) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_CCZmode)
    return -1;
  x4 = XEXP (x3, 0);
  x5 = XVECEXP (x4, 0, 0);
  operands[0] = x5;
  x6 = XVECEXP (x4, 0, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 1);
  x9 = XEXP (x8, 1);
  operands[1] = x9;
  x10 = XEXP (x8, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x7, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_QImode:
      if (pattern1752 (x8, 
E_QImode) != 0
          || !
#line 778 "../../src/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11037; /* *atomic_fetch_add_cmpqi */

    case E_HImode:
      if (pattern1752 (x8, 
E_HImode) != 0
          || !
#line 778 "../../src/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11038; /* *atomic_fetch_add_cmphi */

    case E_SImode:
      if (pattern1752 (x8, 
E_SImode) != 0
          || !
#line 778 "../../src/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])))
        return -1;
      return 11039; /* *atomic_fetch_add_cmpsi */

    case E_DImode:
      if (pattern1752 (x8, 
E_DImode) != 0
          || !(
#line 778 "../../src/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 11040; /* *atomic_fetch_add_cmpdi */

    default:
      return -1;
    }
}

 int
recog_385 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x3, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x6;
      res = recog_381 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x6) != SUBREG)
        return -1;
      switch (pattern816 (x1))
        {
        case 0:
          if (!
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 782; /* *andqi_exthi_1_cc */

        case 1:
          if (!
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 785; /* *andqi_extsi_1_cc */

        case 2:
          if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 788; /* *andqi_extdi_1_cc */

        default:
          return -1;
        }

    case NOT:
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x10 = XEXP (x5, 1);
      operands[2] = x10;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (x5))
        {
        case E_SImode:
          if (pattern1427 (x6, 
E_SImode) != 0
              || !
#line 13386 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
            return -1;
          return 817; /* *andn_si_ccno */

        case E_DImode:
          if (pattern1427 (x6, 
E_DImode) != 0
              || !(
#line 13386 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 818; /* *andn_di_ccno */

        default:
          return -1;
        }

    case NEG:
      x7 = XEXP (x2, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17)
        return -1;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x10 = XEXP (x5, 1);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x8))
        {
        case SET:
          x12 = XEXP (x8, 1);
          if (GET_CODE (x12) != AND)
            return -1;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != NEG)
            return -1;
          x11 = XEXP (x8, 0);
          operands[0] = x11;
          switch (pattern1494 (x1))
            {
            case 0:
              if (!
#line 21790 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              return 1572; /* *bmi_blsi_si_cmp */

            case 1:
              if (!(
#line 21790 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1573; /* *bmi_blsi_di_cmp */

            default:
              return -1;
            }

        case CLOBBER:
          switch (pattern1237 (x1))
            {
            case 0:
              if (!
#line 21849 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)))
                return -1;
              return 1576; /* *bmi_blsi_si_ccno */

            case 1:
              if (!(
#line 21849 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_match_ccmode (insn, CCNOmode)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1577; /* *bmi_blsi_di_ccno */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      x14 = XEXP (x6, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || pattern815 (x2, 
E_CCZmode) != 0)
        return -1;
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x10 = XEXP (x5, 1);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x8))
        {
        case SET:
          x12 = XEXP (x8, 1);
          if (GET_CODE (x12) != AND)
            return -1;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != PLUS)
            return -1;
          x15 = XEXP (x13, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x11 = XEXP (x8, 0);
          operands[0] = x11;
          switch (pattern1494 (x1))
            {
            case 0:
              if (!
#line 21942 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1584; /* *bmi_blsr_si_cmp */

            case 1:
              if (!(
#line 21942 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1585; /* *bmi_blsr_di_cmp */

            default:
              return -1;
            }

        case CLOBBER:
          switch (pattern1237 (x1))
            {
            case 0:
              if (!
#line 21999 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1588; /* *bmi_blsr_si_ccz */

            case 1:
              if (!(
#line 21999 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1589; /* *bmi_blsr_di_ccz */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      switch (pattern363 (x1, 
AND))
        {
        case 0:
          return 11090; /* atomic_and_fetch_cmp_0qi_1 */

        case 1:
          return 11093; /* atomic_and_fetch_cmp_0hi_1 */

        case 2:
          return 11096; /* atomic_and_fetch_cmp_0si_1 */

        case 3:
          if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11099; /* atomic_and_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_390 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
      operands[2] = x4;
      res = recog_389 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || pattern817 (x4) != 0)
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern229 (x5, 
E_CCmode, 
17) != 0
          || GET_MODE (x3) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x8 = XEXP (x2, 0);
      switch (GET_CODE (x8))
        {
        case STRICT_LOW_PART:
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          if (!register_operand (operands[0], E_QImode))
            return -1;
          switch (pattern1798 ())
            {
            case 0:
              if (!
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 405; /* *subqi_exthi_1_slp */

            case 1:
              if (!
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 406; /* *subqi_extsi_1_slp */

            case 2:
              if (!(
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 407; /* *subqi_extdi_1_slp */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x8;
          if (!nonimmediate_operand (operands[0], E_QImode))
            return -1;
          switch (pattern1798 ())
            {
            case 0:
              return 416; /* *subqi_exthi_0 */

            case 1:
              return 417; /* *subqi_extsi_0 */

            case 2:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 418; /* *subqi_extdi_0 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern372 (x5) != 0)
        return -1;
      switch (pattern1162 (x2))
        {
        case 0:
          if (!(
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 382; /* *subdi3_doubleword_zext */

        case 1:
          if (!(
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 383; /* *subti3_doubleword_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern687 (x1))
        {
        case 0:
          if (pattern1564 (x3, 
E_QImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 491; /* *subqi3_carry_0 */

        case 1:
          if (pattern1564 (x3, 
E_HImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 492; /* *subhi3_carry_0 */

        case 2:
          if (pattern1564 (x3, 
E_SImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 493; /* *subsi3_carry_0 */

        case 3:
          if (pattern1564 (x3, 
E_DImode) != 0
              || !(
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 494; /* *subdi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern687 (x1))
        {
        case 0:
          if (pattern1565 (x3, 
E_QImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 495; /* *subqi3_carry_0r */

        case 1:
          if (pattern1565 (x3, 
E_HImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 496; /* *subhi3_carry_0r */

        case 2:
          if (pattern1565 (x3, 
E_SImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          return 497; /* *subsi3_carry_0r */

        case 3:
          if (pattern1565 (x3, 
E_DImode) != 0
              || !(
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 498; /* *subdi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern691 (x1))
        {
        case 0:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 582; /* *subqi3_eq_0 */

        case 1:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 583; /* *subhi3_eq_0 */

        case 2:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 584; /* *subsi3_eq_0 */

        case 3:
          if (!(
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 585; /* *subdi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern691 (x1))
        {
        case 0:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 586; /* *subqi3_ne_0 */

        case 1:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 587; /* *subhi3_ne_0 */

        case 2:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          return 588; /* *subsi3_ne_0 */

        case 3:
          if (!(
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 589; /* *subdi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_396 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case ASHIFT:
      return recog_395 (x1, insn, pnum_clobbers);

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
            return 726; /* *iorqi_1_slp */
          break;

        case 1:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return 729; /* *iorhi_1_slp */
          break;

        case 2:
          if (x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 819; /* *iordi3_doubleword */
          if (x86_64_general_operand (operands[2], E_DImode)
              && (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 832; /* *iordi_1 */
          if (const_int_operand (operands[2], E_DImode)
              && 
#line 13633 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)))
            return 838; /* *iordi_1_bts */
          break;

        case 3:
          if ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 821; /* *iorti3_doubleword */
          break;

        case 4:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands, TARGET_APX_NDD)
   && true))
            return 824; /* *iorhi_1 */
          break;

        case 5:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)
   && true))
            return 828; /* *iorsi_1 */
          break;

        case 6:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V4QImode, operands)))
            return 2284; /* *iorv4qi3 */
          break;

        case 7:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2QImode, operands)))
            return 2287; /* *iorv2qi3 */
          break;

        case 8:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (IOR, V2HImode, operands)))
            return 2290; /* *iorv2hi3 */
          break;

        case 9:
          if (
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2573; /* kiorqi */
          break;

        case 10:
          if (
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 2576; /* kiorhi */
          break;

        case 11:
          if ((
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2579; /* kiorsi */
          break;

        case 12:
          if ((
#line 2093 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return 2582; /* kiordi */
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
                return 732; /* *iorqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 735; /* *iorqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 738; /* *iorqi_extdi_1_slp */
              break;

            case 3:
              return 756; /* *iorqi_exthi_0 */

            case 4:
              return 759; /* *iorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 762; /* *iorqi_extdi_0 */
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
                    return 741; /* *iorqi_exthi_2_slp */
                  break;

                case 1:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    return 744; /* *iorqi_extsi_2_slp */
                  break;

                case 2:
                  if ((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 747; /* *iorqi_extdi_2_slp */
                  break;

                case 3:
                  return 765; /* *iorqi_ext2hi_0 */

                case 4:
                  return 768; /* *iorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return 771; /* *iorqi_ext2di_0 */
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
(ix86_binary_operator_ok (IOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      return 868; /* *iorqi_1 */

    case ZERO_EXTEND:
      if (pattern368 (x1) != 0
          || !
#line 13762 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
        return -1;
      return 865; /* *iorsi_1_zext_imm */

    case LSHIFTRT:
      if (pattern338 (x1) != 0)
        return -1;
      switch (pattern1047 (x3, 
ASHIFT))
        {
        case 0:
          x8 = XEXP (x3, 1);
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 0);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x13 = XEXP (x4, 1);
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x15 = XEXP (x10, 1);
                  x16 = XEXP (x15, 1);
                  x17 = XEXP (x16, 0);
                  if (rtx_equal_p (x17, operands[2])
                      && 
#line 16786 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && true))
                    return 1143; /* x86_64_shrd */
                }
            }
          operands[2] = x12;
          if (!register_operand (operands[0], E_DImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x13 = XEXP (x4, 1);
          x14 = XEXP (x13, 0);
          operands[3] = x14;
          x15 = XEXP (x10, 1);
          x16 = XEXP (x15, 1);
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[3])
              || !
#line 16807 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1145; /* x86_64_shrd_ndd */

        case 1:
          if (pattern1046 (x3, 
E_SImode, 
E_DImode) != 0)
            return -1;
          x8 = XEXP (x3, 1);
          x10 = XEXP (x8, 0);
          x11 = XEXP (x10, 0);
          x12 = XEXP (x11, 0);
          operands[1] = x12;
          if (nonimmediate_operand (operands[0], E_SImode))
            {
              x13 = XEXP (x4, 1);
              x14 = XEXP (x13, 0);
              operands[2] = x14;
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x15 = XEXP (x10, 1);
                  x16 = XEXP (x15, 1);
                  x17 = XEXP (x16, 0);
                  if (rtx_equal_p (x17, operands[2]))
                    return 1155; /* x86_shrd */
                }
            }
          operands[2] = x12;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x13 = XEXP (x4, 1);
          x14 = XEXP (x13, 0);
          operands[3] = x14;
          x15 = XEXP (x10, 1);
          x16 = XEXP (x15, 1);
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[3])
              || !
#line 17038 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1157; /* x86_shrd_ndd */

        case 2:
          x8 = XEXP (x3, 1);
          switch (GET_CODE (x8))
            {
            case SUBREG:
              switch (pattern1240 (x3, 
ASHIFT))
                {
                case 0:
                  x13 = XEXP (x4, 1);
                  operands[2] = x13;
                  if (pattern1677 (x3) == 0
                      && 
#line 16822 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                    return 1147; /* x86_64_shrd_1 */
                  operands[3] = x13;
                  if (pattern1678 (x3) != 0
                      || !
#line 16844 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1149; /* x86_64_shrd_ndd_1 */

                case 1:
                  x13 = XEXP (x4, 1);
                  operands[2] = x13;
                  if (pattern1679 (x3) == 0
                      && 
#line 17053 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && true))
                    return 1159; /* x86_shrd_1 */
                  operands[3] = x13;
                  if (pattern1680 (x3) != 0
                      || !
#line 17075 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && (INTVAL (operands[4]) == 32 - INTVAL (operands[3]))
   && true))
                    return -1;
                  return 1161; /* x86_shrd_ndd_1 */

                default:
                  return -1;
                }

            case ASHIFT:
              switch (pattern1242 (x3))
                {
                case 0:
                  if (!
#line 16916 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1151; /* *x86_64_shrd_shld_1_nozext */

                case 1:
                  if (!
#line 17147 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1163; /* *x86_shrd_shld_1_nozext */

                case 2:
                  x10 = XEXP (x8, 0);
                  operands[1] = x10;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      x13 = XEXP (x4, 1);
                      operands[2] = x13;
                      x6 = XEXP (x4, 0);
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x18 = XEXP (x8, 1);
                          x19 = XEXP (x18, 1);
                          if (rtx_equal_p (x19, operands[2])
                              && 
#line 16969 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1152; /* *x86_64_shrd_2 */
                        }
                    }
                  operands[2] = x10;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  x6 = XEXP (x4, 0);
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  x13 = XEXP (x4, 1);
                  operands[3] = x13;
                  x18 = XEXP (x8, 1);
                  x19 = XEXP (x18, 1);
                  if (!rtx_equal_p (x19, operands[2])
                      || !
#line 16990 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()))
                    return -1;
                  return 1153; /* *x86_64_shrd_ndd_2 */

                case 3:
                  x10 = XEXP (x8, 0);
                  operands[1] = x10;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      x13 = XEXP (x4, 1);
                      operands[2] = x13;
                      x6 = XEXP (x4, 0);
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x18 = XEXP (x8, 1);
                          x19 = XEXP (x18, 1);
                          if (rtx_equal_p (x19, operands[2])
                              && 
#line 17199 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1164; /* *x86_shrd_2 */
                        }
                    }
                  operands[2] = x10;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  x6 = XEXP (x4, 0);
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  x13 = XEXP (x4, 1);
                  operands[3] = x13;
                  x18 = XEXP (x8, 1);
                  x19 = XEXP (x18, 1);
                  if (!rtx_equal_p (x19, operands[3])
                      || !
#line 17220 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
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
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != PLUS)
        return -1;
      x20 = XEXP (x6, 1);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || pattern338 (x1) != 0)
        return -1;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_SImode
              || GET_MODE (x6) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22182 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
            return -1;
          return 1608; /* *tbm_blci_si */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode
              || GET_MODE (x6) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 22182 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1609; /* *tbm_blci_di */

        default:
          return -1;
        }

    case PLUS:
      x13 = XEXP (x4, 1);
      if (GET_CODE (x13) != CONST_INT
          || pattern345 (x1) != 0)
        return -1;
      switch (XWINT (x13, 0))
        {
        case 1L:
          switch (pattern1328 (x3))
            {
            case 0:
              if (!
#line 22222 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1614; /* *tbm_blcs_si */

            case 1:
              if (!(
#line 22222 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1615; /* *tbm_blcs_di */

            case 2:
              if (!
#line 22263 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1620; /* *tbm_t1mskc_si */

            case 3:
              if (!(
#line 22263 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1621; /* *tbm_t1mskc_di */

            default:
              return -1;
            }

        case -1L:
          switch (pattern1328 (x3))
            {
            case 0:
              if (!
#line 22235 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1616; /* *tbm_blsfill_si */

            case 1:
              if (!(
#line 22235 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1617; /* *tbm_blsfill_di */

            case 2:
              if (!
#line 22249 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                return -1;
              return 1618; /* *tbm_blsic_si */

            case 3:
              if (!(
#line 22249 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1619; /* *tbm_blsic_di */

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
recog_413 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case CLOBBER:
      switch (pattern703 (x1))
        {
        case 0:
          if (!
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          return 1534; /* clzsi2_lzcnt */

        case 1:
          if (!(
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1535; /* clzdi2_lzcnt */

        default:
          return -1;
        }

    case UNSPEC:
      switch (pattern704 (x1))
        {
        case 0:
          if (
#line 21529 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT))
            return 1536; /* *clzsi2_lzcnt_falsedep_nf */
          if (pnum_clobbers == NULL
              || !
#line 21542 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1538; /* *clzsi2_lzcnt_falsedep */

        case 1:
          if ((
#line 21529 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1537; /* *clzdi2_lzcnt_falsedep_nf */
          if (pnum_clobbers == NULL
              || !(
#line 21542 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1539; /* *clzdi2_lzcnt_falsedep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_416 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (GET_CODE (x4) != TRUNCATE)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != TRUNCATE)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != USE)
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  x9 = XEXP (x5, 0);
  operands[2] = x9;
  x10 = XEXP (x6, 0);
  operands[3] = x10;
  if (!nonimmediate_operand (operands[3], E_V16QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (pattern1334 (x3, 
E_V2DImode, 
E_V2SImode, 
E_V4SImode) != 0
          || !
#line 26510 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9033; /* xop_pperm_pack_v2di_v4si */

    case E_V8HImode:
      if (pattern1334 (x3, 
E_V4SImode, 
E_V4HImode, 
E_V8HImode) != 0
          || !
#line 26523 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9034; /* xop_pperm_pack_v4si_v8hi */

    case E_V16QImode:
      if (pattern1334 (x3, 
E_V8HImode, 
E_V8QImode, 
E_V16QImode) != 0
          || !
#line 26536 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
        return -1;
      return 9035; /* xop_pperm_pack_v8hi_v16qi */

    default:
      return -1;
    }
}

 int
recog_422 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (XINT (x3, 1))
        {
        case 106:
          if (pattern541 (x1) != 0)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != UNSPEC
              || XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 108
              || GET_MODE (x6) != E_DImode)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || !pop_operand (operands[1], E_TImode))
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 3941 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2 && TARGET_APX_PPX))
            return -1;
          return 164; /* pop2p_di */

        case 97:
          switch (pattern822 (x1))
            {
            case 0:
              if (!
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              return 1558; /* *tzcnt_si_falsedep */

            case 1:
              if (!((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1560; /* *tzcnt_di_falsedep */

            default:
              return -1;
            }

        case 96:
          switch (pattern822 (x1))
            {
            case 0:
              if (!
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              return 1559; /* *lzcnt_si_falsedep */

            case 1:
              if (!((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1561; /* *lzcnt_di_falsedep */

            default:
              return -1;
            }

        case 74:
          if (pattern823 (x1) != 0
              || !
#line 25238 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1740; /* frndintxf2_roundeven_i387 */

        case 75:
          if (pattern823 (x1) != 0
              || !
#line 25238 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1741; /* frndintxf2_floor_i387 */

        case 76:
          if (pattern823 (x1) != 0
              || !
#line 25238 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1742; /* frndintxf2_ceil_i387 */

        case 77:
          if (pattern823 (x1) != 0
              || !
#line 25238 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)))
            return -1;
          return 1743; /* frndintxf2_trunc_i387 */

        case 78:
          switch (pattern825 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 25356 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              *pnum_clobbers = 1;
              return 1750; /* fistdi2_floor */

            case 1:
              if (!
#line 25369 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1752; /* fisthi2_floor */

            case 2:
              if (!
#line 25369 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1754; /* fistsi2_floor */

            default:
              return -1;
            }

        case 79:
          switch (pattern825 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 25356 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              *pnum_clobbers = 1;
              return 1751; /* fistdi2_ceil */

            case 1:
              if (!
#line 25369 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1753; /* fisthi2_ceil */

            case 2:
              if (!
#line 25369 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
                return -1;
              return 1755; /* fistsi2_ceil */

            default:
              return -1;
            }

        case 92:
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != SET)
            return -1;
          x10 = XEXP (x8, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (pattern953 (x6, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1147 (x1))
            {
            case 0:
              if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1867; /* stack_protect_set_1_si_si */

            case 1:
              if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1869; /* stack_protect_set_1_si_di */

            case 2:
              if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
                return -1;
              return 1868; /* stack_protect_set_1_di_si */

            case 3:
              if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
                return -1;
              return 1870; /* stack_protect_set_1_di_di */

            default:
              return -1;
            }

        case 287:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != CLOBBER)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != CLOBBER
              || !nonimmediate_operand (operands[0], E_DImode)
              || !memory_operand (operands[1], E_DImode))
            return -1;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_DImode))
            return -1;
          x11 = XEXP (x6, 0);
          operands[3] = x11;
          if (!scratch_operand (operands[3], E_DFmode)
              || !
#line 196 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
            return -1;
          return 11017; /* atomic_loaddi_fpu */

        case 288:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x8) != CLOBBER)
            return -1;
          x6 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x6) != CLOBBER
              || !memory_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_DImode))
            return -1;
          x11 = XEXP (x6, 0);
          operands[3] = x11;
          if (!scratch_operand (operands[3], E_DFmode)
              || !
#line 295 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)))
            return -1;
          return 11022; /* atomic_storedi_fpu */

        default:
          return -1;
        }

    case 2:
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != SET)
        return -1;
      x10 = XEXP (x8, 1);
      if (GET_CODE (x10) != UNSPEC
          || XVECLEN (x10, 0) != 2
          || GET_MODE (x10) != E_XFmode)
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x6) != SET)
        return -1;
      x12 = XEXP (x6, 1);
      if (GET_CODE (x12) != UNSPEC
          || XVECLEN (x12, 0) != 2
          || XINT (x12, 1) != 90
          || GET_MODE (x12) != E_CCFPmode)
        return -1;
      x11 = XEXP (x6, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 18
          || GET_MODE (x11) != E_CCFPmode)
        return -1;
      x4 = XEXP (x2, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode)
          || GET_MODE (x3) != E_XFmode
          || pattern1420 (x1) != 0)
        return -1;
      x13 = XVECEXP (x12, 0, 0);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      x14 = XVECEXP (x12, 0, 1);
      if (!rtx_equal_p (x14, operands[3]))
        return -1;
      switch (XINT (x3, 1))
        {
        case 86:
          if (XINT (x10, 1) != 87
              || !
#line 23875 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1715; /* fpremxf4_i387 */

        case 88:
          if (XINT (x10, 1) != 89
              || !
#line 23947 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1716; /* fprem1xf4_i387 */

        default:
          return -1;
        }

    case 4:
      if (XINT (x3, 1) != 23)
        return -1;
      x5 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x5) != MEM
          || GET_MODE (x5) != E_BLKmode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER
          || pattern828 (x1) != 0)
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
          return 1793; /* *strlenqi_1 */

        case 1:
          if (!(
#line 26115 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1794; /* *strlenqi_1 */

        default:
          return -1;
        }

    case 5:
      if (XINT (x3, 1) != 131)
        return -1;
      if (GET_MODE (x3) == E_SImode
          && pattern709 (x1, 
131, 
5) == 0
          && pattern1727 (x1) == 0
          && 
#line 25855 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()))
        return 8981; /* sse4_2_pcmpestr */
      if (GET_MODE (x3) != E_CCmode
          || pattern710 (x1) != 0
          || !register_operand (operands[3], E_SImode))
        return -1;
      x15 = XVECEXP (x3, 0, 2);
      operands[4] = x15;
      if (!nonimmediate_operand (operands[4], E_V16QImode))
        return -1;
      x16 = XVECEXP (x3, 0, 3);
      operands[5] = x16;
      if (!register_operand (operands[5], E_SImode))
        return -1;
      x17 = XVECEXP (x3, 0, 4);
      operands[6] = x17;
      if (!const_0_to_255_operand (operands[6], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x9 = XEXP (x8, 0);
      operands[0] = x9;
      if (!scratch_operand (operands[0], E_V16QImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      if (!scratch_operand (operands[1], E_SImode)
          || !
#line 25958 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      return 8984; /* sse4_2_pcmpestr_cconly */

    case 3:
      if (XINT (x3, 1) != 132)
        return -1;
      if (GET_MODE (x3) == E_SImode
          && pattern709 (x1, 
132, 
3) == 0
          && pattern1728 (x1) == 0
          && 
#line 25992 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()))
        return 8985; /* sse4_2_pcmpistr */
      if (GET_MODE (x3) != E_CCmode
          || pattern710 (x1) != 0
          || !nonimmediate_operand (operands[3], E_V16QImode))
        return -1;
      x15 = XVECEXP (x3, 0, 2);
      operands[4] = x15;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      x9 = XEXP (x8, 0);
      operands[0] = x9;
      if (!scratch_operand (operands[0], E_V16QImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      if (!scratch_operand (operands[1], E_SImode)
          || !
#line 26083 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
        return -1;
      return 8988; /* sse4_2_pcmpistr_cconly */

    default:
      return -1;
    }
}

 rtx_insn *
split_1 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  switch (GET_CODE (operands[0]))
    {
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V1TImode:
          if (push_operand (operands[0], E_V1TImode)
              && register_operand (operands[1], E_V1TImode))
            {
              if (((
#line 2175 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 2177 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_3 (insn, operands);
              if (((
#line 2175 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STV) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 2177 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_4 (insn, operands);
            }
          break;

        case E_DImode:
          if (push_operand (operands[0], E_DImode))
            {
              if (general_gr_operand (operands[1], E_DImode)
                  && (
#line 2199 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_5 (insn, operands);
              if (immediate_operand (operands[1], E_DImode)
                  && 
#line 2232 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && epilogue_completed
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode)))
                return gen_split_7 (insn, operands);
              if (sse_reg_operand (operands[1], E_DImode))
                {
                  if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return gen_split_9 (insn, operands);
                  if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return gen_split_12 (insn, operands);
                }
            }
          break;

        case E_TImode:
          if (push_operand (operands[0], E_TImode))
            {
              if (general_gr_operand (operands[1], E_TImode)
                  && (
#line 2199 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_6 (insn, operands);
              if (sse_reg_operand (operands[1], E_TImode))
                {
                  if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && (((
#line 1202 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                    return gen_split_10 (insn, operands);
                  if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && (((
#line 1202 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                    return gen_split_13 (insn, operands);
                }
            }
          break;

        case E_SImode:
          if (push_operand (operands[0], E_SImode)
              && sse_reg_operand (operands[1], E_SImode))
            {
              if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_8 (insn, operands);
              if ((
#line 2269 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_11 (insn, operands);
            }
          break;

        case E_TFmode:
          if (push_operand (operands[0], E_TFmode)
              && sse_reg_operand (operands[1], E_TFmode))
            {
              if ((
#line 3779 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_31 (insn, operands);
              if ((
#line 3779 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_32 (insn, operands);
            }
          break;

        case E_XFmode:
          if (push_operand (operands[0], E_XFmode)
              && fp_register_operand (operands[1], E_XFmode))
            {
              if ((
#line 3814 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_33 (insn, operands);
              if ((
#line 3814 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_34 (insn, operands);
            }
          break;

        case E_DFmode:
          if (push_operand (operands[0], E_DFmode)
              && any_fp_register_operand (operands[1], E_DFmode))
            {
              if ((
#line 3848 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_35 (insn, operands);
              if ((
#line 3848 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_36 (insn, operands);
            }
          break;

        case E_SFmode:
          if (push_operand (operands[0], E_SFmode))
            {
              if (any_fp_register_operand (operands[1], E_SFmode))
                {
                  if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                    return gen_split_37 (insn, operands);
                  if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                    return gen_split_40 (insn, operands);
                }
              if (memory_operand (operands[1], E_SFmode)
                  && 
#line 4002 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && find_constant_src (insn)))
                return gen_split_43 (insn, operands);
            }
          break;

        case E_HFmode:
          if (push_operand (operands[0], E_HFmode)
              && any_fp_register_operand (operands[1], E_HFmode))
            {
              if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_38 (insn, operands);
              if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_41 (insn, operands);
            }
          break;

        case E_BFmode:
          if (push_operand (operands[0], E_BFmode)
              && any_fp_register_operand (operands[1], E_BFmode))
            {
              if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return gen_split_39 (insn, operands);
              if ((
#line 3979 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return gen_split_42 (insn, operands);
            }
          break;

        default:
          break;
        }
      break;

    case REG:
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (sse_reg_operand (operands[0], E_TImode)
              && general_reg_operand (operands[1], E_TImode)
              && 
#line 2564 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE4_1
   && reload_completed))
            return gen_split_14 (insn, operands);
          if (general_reg_operand (operands[0], E_TImode)
              && sse_reg_operand (operands[1], E_TImode)
              && (
#line 2755 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE4_1
   && reload_completed) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_16 (insn, operands);
          break;

        case E_DImode:
          if (general_reg_operand (operands[0], E_DImode)
              && sse_reg_operand (operands[1], E_DImode)
              && (
#line 2755 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE4_1
   && reload_completed) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return gen_split_15 (insn, operands);
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (nonimmediate_gr_operand (operands[0], E_DImode)
          && general_gr_operand (operands[1], E_DImode)
          && (
#line 2772 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return gen_split_17 (insn, operands);
      if (sse_reg_operand (operands[0], E_DImode)
          && general_reg_operand (operands[1], E_DImode)
          && 
#line 2779 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE4_1
   && reload_completed))
        return gen_split_19 (insn, operands);
      break;

    case E_TImode:
      if (nonimmediate_gr_operand (operands[0], E_TImode)
          && general_gr_operand (operands[1], E_TImode)
          && (
#line 2772 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return gen_split_18 (insn, operands);
      break;

    default:
      break;
    }
  if (push_operand (operands[0], E_VOIDmode)
      && general_gr_operand (operands[1], E_VOIDmode)
      && 
#line 4010 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)))
    return gen_split_44 (insn, operands);
  switch (GET_MODE (operands[0]))
    {
    case E_TFmode:
      if (nonimmediate_gr_operand (operands[0], E_TFmode)
          && general_gr_operand (operands[1], E_TFmode)
          && 
#line 4083 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        return gen_split_45 (insn, operands);
      break;

    case E_XFmode:
      if (nonimmediate_gr_operand (operands[0], E_XFmode)
          && general_gr_operand (operands[1], E_XFmode)
          && 
#line 4156 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        return gen_split_46 (insn, operands);
      break;

    case E_DFmode:
      if (nonimmediate_gr_operand (operands[0], E_DFmode)
          && general_gr_operand (operands[1], E_DFmode)
          && 
#line 4334 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_47 (insn, operands);
      break;

    default:
      break;
    }
  if (any_fp_register_operand (operands[0], E_VOIDmode)
      && memory_operand (operands[1], E_VOIDmode)
      && 
#line 4602 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && ix86_standard_x87sse_constant_load_p (insn, operands[0])))
    return gen_split_48 (insn, operands);
  if (fp_register_operand (operands[0], E_SFmode)
      && immediate_operand (operands[1], E_SFmode)
      && 
#line 4626 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return gen_split_50 (insn, operands);
  if (fp_register_operand (operands[0], E_DFmode)
      && immediate_operand (operands[1], E_DFmode)
      && 
#line 4626 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return gen_split_51 (insn, operands);
  if (!fp_register_operand (operands[0], E_XFmode)
      || !immediate_operand (operands[1], E_XFmode)
      || !
#line 4626 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9)))
    return NULL;
  return gen_split_52 (insn, operands);
}

 rtx_insn *
split_10 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  x5 = XEXP (x3, 1);
  switch (GET_CODE (x5))
    {
    case XOR:
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != CONST_INT)
        return NULL;
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case MINUS:
          if (GET_MODE (x7) != E_SImode)
            return NULL;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != CONST_INT
              || pattern1055 (x3, 
E_SImode) != 0)
            return NULL;
          x9 = XEXP (x7, 1);
          if (GET_MODE (x9) != E_SImode)
            return NULL;
          switch (XWINT (x8, 0))
            {
            case 63L:
              if (GET_CODE (x9) != SUBREG
                  || maybe_ne (SUBREG_BYTE (x9), 0))
                return NULL;
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != CLZ
                  || GET_MODE (x10) != E_DImode
                  || XWINT (x6, 0) != 63L)
                return NULL;
              x11 = XEXP (x10, 0);
              operands[1] = x11;
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !
#line 21358 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_880 (insn, operands);

            case 31L:
              if (GET_CODE (x9) != CLZ
                  || XWINT (x6, 0) != 31L)
                return NULL;
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21383 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_881 (insn, operands);

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          if (pattern832 (x7, 
SUBREG, 
63, 
E_DImode) != 0)
            return NULL;
          x8 = XEXP (x7, 0);
          x12 = XEXP (x8, 1);
          if (maybe_ne (SUBREG_BYTE (x12), 0)
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != CLZ
              || GET_MODE (x13) != E_DImode
              || XWINT (x6, 0) != 63L
              || pattern1055 (x3, 
E_DImode) != 0)
            return NULL;
          x14 = XEXP (x13, 0);
          operands[1] = x14;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 21409 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 63, SImode)
       == UINTVAL (operands[2]) - 63)))
            return NULL;
          return gen_split_882 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return NULL;
      x7 = XEXP (x5, 0);
      if (GET_CODE (x7) != XOR
          || pattern832 (x7, 
CLZ, 
31, 
E_SImode) != 0)
        return NULL;
      x8 = XEXP (x7, 0);
      x12 = XEXP (x8, 1);
      if (GET_MODE (x12) != E_SImode)
        return NULL;
      x9 = XEXP (x7, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !const_int_operand (operands[2], E_DImode))
        return NULL;
      x13 = XEXP (x12, 0);
      operands[1] = x13;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21438 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT
   && TARGET_64BIT
   && ix86_pre_reload_split ()
   && ((unsigned HOST_WIDE_INT)
       trunc_int_for_mode (UINTVAL (operands[2]) - 31, SImode)
       == UINTVAL (operands[2]) - 31)))
        return NULL;
      return gen_split_883 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_12 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
      operands[5] = x3;
      if (bt_comparison_operator (operands[5], E_VOIDmode))
        {
          res = split_3 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      x4 = XEXP (x3, 0);
      if (!ix86_comparison_operator (x4, E_VOIDmode))
        return NULL;
      operands[0] = x4;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return NULL;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x11 = XEXP (x8, 0);
      operands[1] = x11;
      switch (GET_CODE (x3))
        {
        case NE:
          return gen_split_866 (insn, operands);

        case EQ:
          return gen_split_867 (insn, operands);

        default:
          return NULL;
        }

    case GEU:
    case LTU:
      operands[1] = x3;
      if (!add_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != NOT)
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      switch (GET_MODE (x4))
        {
        case E_QImode:
          if (!register_operand (operands[2], E_QImode)
              || !nonimmediate_operand (operands[3], E_QImode))
            return NULL;
          return gen_split_861 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[2], E_HImode)
              || !nonimmediate_operand (operands[3], E_HImode))
            return NULL;
          return gen_split_862 (insn, operands);

        case E_SImode:
          if (!register_operand (operands[2], E_SImode)
              || !nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          return gen_split_863 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[2], E_DImode)
              || !nonimmediate_operand (operands[3], E_DImode)
              || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_864 (insn, operands);

        default:
          return NULL;
        }

    case GTU:
    case LEU:
      operands[1] = x3;
      if (!shr_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      x8 = XEXP (x2, 1);
      if (GET_CODE (x8) != LABEL_REF)
        return NULL;
      x9 = XEXP (x2, 2);
      if (GET_CODE (x9) != PC)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != PC)
        return NULL;
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], E_DImode))
        return NULL;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return NULL;
      x11 = XEXP (x8, 0);
      operands[0] = x11;
      if (!
#line 19729 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3]) + 1), 32, 63)))
        return NULL;
      return gen_split_865 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_16 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
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
      operands[2] = x4;
      x5 = XEXP (x2, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern563 (x3, 
E_DImode) == 0
                  && ((
#line 8069 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8071 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_168 (insn, operands);
              break;

            case E_TImode:
              if (pattern563 (x3, 
E_TImode) == 0
                  && ((
#line 8069 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8071 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_169 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case STRICT_LOW_PART:
          switch (pattern1325 (x2))
            {
            case 0:
              if ((
#line 8189 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8193 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return gen_split_172 (insn, operands);
              break;

            case 1:
              if ((
#line 8189 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8193 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return gen_split_173 (insn, operands);
              break;

            default:
              break;
            }
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || pattern817 (x4) != 0
          || GET_CODE (x5) != STRICT_LOW_PART)
        return NULL;
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode))
        return NULL;
      x7 = XEXP (x4, 0);
      x8 = XEXP (x7, 0);
      operands[2] = x8;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return NULL;
      switch (pattern1798 ())
        {
        case 0:
          if (!(
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8219 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_174 (insn, operands);

        case 1:
          if (!(
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8219 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_175 (insn, operands);

        case 2:
          if (!((
#line 8215 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8219 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_176 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern1162 (x2))
        {
        case 0:
          if (!((
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8105 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_170 (insn, operands);

        case 1:
          if (!((
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8105 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_171 (insn, operands);

        default:
          return NULL;
        }

    case EQ:
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern690 (x2))
        {
        case 0:
          if (!(
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_230 (insn, operands);

        case 1:
          if (!(
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_231 (insn, operands);

        case 2:
          if (!(
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10310 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_232 (insn, operands);

        case 3:
          if (!((
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10310 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_233 (insn, operands);

        default:
          return NULL;
        }

    case NE:
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern690 (x2))
        {
        case 0:
          if (!(
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_234 (insn, operands);

        case 1:
          if (!(
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_235 (insn, operands);

        case 2:
          if (!(
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10331 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_236 (insn, operands);

        case 3:
          if (!((
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10331 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_237 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_26 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      switch (pattern200 (x3))
        {
        case 0:
          x6 = XEXP (x3, 0);
          operands[0] = x6;
          x7 = XEXP (x4, 1);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              if (GET_CODE (x7) == SUBREG)
                {
                  switch (pattern1333 (x4))
                    {
                    case 0:
                      if (((
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15208 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_552 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15208 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_553 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              operands[2] = x7;
              if (register_operand (operands[2], E_QImode)
                  && register_operand (operands[0], E_SImode)
                  && GET_MODE (x4) == E_SImode
                  && nonimmediate_operand (operands[1], E_SImode)
                  && 
#line 15988 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return gen_split_572 (insn, operands);
              if (GET_CODE (x7) == SUBREG
                  && known_eq (SUBREG_BYTE (x7), 0)
                  && GET_MODE (x7) == E_QImode)
                {
                  switch (pattern1165 (x4, 
E_SImode))
                    {
                    case 0:
                      if ((
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17845 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_638 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17892 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_650 (insn, operands);
                      break;

                    case 2:
                      if ((
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17938 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_662 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              break;

            case CONST_INT:
              operands[2] = x7;
              if (const_0_to_3_operand (operands[2], E_VOIDmode))
                {
                  switch (GET_MODE (operands[0]))
                    {
                    case E_QImode:
                      if (general_reg_operand (operands[0], E_QImode)
                          && GET_MODE (x4) == E_QImode
                          && index_reg_operand (operands[1], E_QImode)
                          && 
#line 16283 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_577 (insn, operands);
                      break;

                    case E_HImode:
                      if (general_reg_operand (operands[0], E_HImode)
                          && GET_MODE (x4) == E_HImode
                          && index_reg_operand (operands[1], E_HImode)
                          && 
#line 16283 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_578 (insn, operands);
                      break;

                    case E_SImode:
                      if (general_reg_operand (operands[0], E_SImode)
                          && GET_MODE (x4) == E_SImode
                          && index_reg_operand (operands[1], E_SImode)
                          && 
#line 16283 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])))
                        return gen_split_579 (insn, operands);
                      break;

                    default:
                      break;
                    }
                }
              break;

            default:
              break;
            }
          operands[2] = x7;
          res = split_19 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (GET_CODE (x7) != SUBREG)
            return NULL;
          switch (pattern1166 (x3, 
E_DImode))
            {
            case 0:
              if (!((
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17845 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_641 (insn, operands);

            case 1:
              if (!((
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17892 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_653 (insn, operands);

            case 2:
              if (!((
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17938 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_665 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && ((
#line 15264 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15269 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_554 (insn, operands);
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode)
              || !((
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17870 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_647 (insn, operands);

        case 2:
          if (!((
#line 15264 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15269 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_555 (insn, operands);

        case 3:
          if (!(
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17870 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_644 (insn, operands);

        case 4:
          if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17916 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_656 (insn, operands);

        case 5:
          if (!((
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17916 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_659 (insn, operands);

        case 6:
          if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17968 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_668 (insn, operands);

        case 7:
          if (!((
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17968 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_671 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      switch (pattern379 (x3))
        {
        case 0:
          if (!((
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15368 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_558 (insn, operands);

        case 1:
          if (!((
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15368 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_560 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern379 (x3))
        {
        case 0:
          if (!((
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 15368 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_559 (insn, operands);

        case 1:
          if (!((
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 15368 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_561 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_33 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern404 (x1))
    {
    case 0:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_694 (insn, operands);

    case 1:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_696 (insn, operands);

    case 2:
      if (!(
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_698 (insn, operands);

    case 3:
      if (!((
#line 18182 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18187 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_700 (insn, operands);

    case 4:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_726 (insn, operands);

    case 5:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_728 (insn, operands);

    case 6:
      if (!(
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_730 (insn, operands);

    case 7:
      if (!((
#line 18253 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18257 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_732 (insn, operands);

    case 8:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_758 (insn, operands);

    case 9:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_760 (insn, operands);

    case 10:
      if (!(
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_762 (insn, operands);

    case 11:
      if (!((
#line 18322 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18326 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_764 (insn, operands);

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
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode)-1))
      == GET_MODE_BITSIZE (QImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_678 (insn, operands);
          break;

        case 1:
          if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode)-1))
      == GET_MODE_BITSIZE (HImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_680 (insn, operands);
          break;

        case 2:
          if ((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_682 (insn, operands);
          break;

        case 3:
          if (((
#line 18142 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18147 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_684 (insn, operands);
          break;

        case 4:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_710 (insn, operands);
          break;

        case 5:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_712 (insn, operands);
          break;

        case 6:
          if ((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_714 (insn, operands);
          break;

        case 7:
          if (((
#line 18217 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18221 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_716 (insn, operands);
          break;

        case 8:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_742 (insn, operands);
          break;

        case 9:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_744 (insn, operands);
          break;

        case 10:
          if ((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_746 (insn, operands);
          break;

        case 11:
          if (((
#line 18286 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18290 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_748 (insn, operands);
          break;

        case 12:
          x5 = XEXP (x4, 1);
          operands[2] = x5;
          switch (pattern1338 (x4))
            {
            case 0:
              if (
#line 18523 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)))
                return gen_split_782 (insn, operands);
              break;

            case 1:
              if ((
#line 18523 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_783 (insn, operands);
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
                return gen_split_794 (insn, operands);
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
          return gen_split_790 (insn, operands);

        case 1:
          if (!(
#line 18690 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 18701 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_792 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_43 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      operands[1] = x2;
      if (!compare_operator (operands[1], E_VOIDmode))
        return NULL;
      x6 = XEXP (x3, 0);
      operands[2] = x6;
      if (!aligned_operand (operands[2], E_HImode))
        return NULL;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_HImode)
          || !
#line 27711 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)))
        return NULL;
      return gen_split_985 (insn, operands);

    case UNSPEC:
      if (XVECLEN (x3, 0) != 1
          || XINT (x3, 1) != 49
          || GET_MODE (x3) != E_SImode
          || pattern44 (x1, 
E_CCZmode) != 0)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      if (!const_int_operand (operands[2], E_VOIDmode))
        return NULL;
      x8 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x8))
        {
        case EQ:
          x9 = XEXP (x8, 0);
          operands[0] = x9;
          x10 = XEXP (x8, 1);
          operands[1] = x10;
          switch (GET_MODE (x8))
            {
            case E_V32QImode:
              if (!vector_operand (operands[0], E_V32QImode)
                  || !const0_operand (operands[1], E_V32QImode)
                  || !(
#line 22413 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3459 (insn, operands);

            case E_V16QImode:
              if (!vector_operand (operands[0], E_V16QImode)
                  || !const0_operand (operands[1], E_V16QImode)
                  || !
#line 22413 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && (INTVAL (operands[2]) == (int) (0xffff))))
                return NULL;
              return gen_split_3460 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          switch (pattern1262 (x8))
            {
            case 0:
              if (!((
#line 22429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22431 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3461 (insn, operands);

            case 1:
              if (!(
#line 22429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff) && 
#line 22431 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3462 (insn, operands);

            case 2:
              if (!((
#line 22452 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22454 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3463 (insn, operands);

            case 3:
              if (!(
#line 22452 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))) && 
#line 22454 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3464 (insn, operands);

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
split_46 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT)
    return NULL;
  switch (pattern90 (x1))
    {
    case 0:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2SFmode))
        return NULL;
      x5 = XEXP (x3, 1);
      if (XVECLEN (x5, 0) != 1)
        return NULL;
      x6 = XEXP (x2, 1);
      x7 = XEXP (x6, 1);
      if (XVECLEN (x7, 0) != 1
          || !register_operand (operands[0], E_SFmode)
          || GET_MODE (x2) != E_SFmode
          || GET_MODE (x3) != E_SFmode)
        return NULL;
      x8 = XVECEXP (x5, 0, 0);
      operands[2] = x8;
      if (!const_0_to_1_operand (operands[2], E_SImode)
          || GET_MODE (x6) != E_SFmode)
        return NULL;
      x9 = XVECEXP (x7, 0, 0);
      operands[3] = x9;
      if (!const_0_to_1_operand (operands[3], E_SImode))
        return NULL;
      x10 = XEXP (x6, 0);
      if (!rtx_equal_p (x10, operands[1])
          || !(
#line 1012 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && INTVAL (operands[2]) != INTVAL (operands[3])
   && ix86_pre_reload_split ()) && 
#line 1016 "../../src/gcc/config/i386/mmx.md"
( 1)))
        return NULL;
      return gen_split_1028 (insn, operands);

    case 1:
      switch (pattern854 (x2))
        {
        case 0:
          if (!
#line 22633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3465 (insn, operands);

        case 1:
          if (!
#line 22720 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
            return NULL;
          return gen_split_3469 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_49 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x2, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      switch (pattern273 (x2))
        {
        case 0:
          x6 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x6) == CONST_INT)
            {
              switch (pattern978 (x2))
                {
                case 0:
                  if ((
#line 1691 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 1693 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1030 (insn, operands);
                  break;

                case 1:
                  if ((
#line 4991 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4996 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                    return gen_split_1113 (insn, operands);
                  break;

                case 2:
                  if ((
#line 1708 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 1710 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                    return gen_split_1031 (insn, operands);
                  break;

                case 3:
                  if ((
#line 4970 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4975 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
                    return gen_split_1112 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          x7 = XVECEXP (x3, 0, 0);
          operands[3] = x7;
          switch (pattern979 (x2))
            {
            case 0:
              if (!(
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1125 (insn, operands);

            case 1:
              if (!(
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1126 (insn, operands);

            case 2:
              if (!(
#line 6197 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 6199 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1127 (insn, operands);

            default:
              return NULL;
            }

        case 1:
          if (!(
#line 4850 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4855 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1106 (insn, operands);

        case 2:
          if (!(
#line 4890 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4895 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1108 (insn, operands);

        case 3:
          if (!(
#line 4871 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 4873 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1107 (insn, operands);

        case 4:
          if (!(
#line 4928 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4933 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1110 (insn, operands);

        case 5:
          if (!(
#line 4911 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2) && 
#line 4913 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1109 (insn, operands);

        case 6:
          if (!(
#line 4949 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4954 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
            return NULL;
          return gen_split_1111 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (XVECLEN (x3, 0))
        {
        case 1:
          res = split_48 (x1, insn);
          if (res != NULL_RTX)
            return res;
          break;

        case 2:
          x7 = XVECEXP (x3, 0, 0);
          if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 1])
            {
              x6 = XVECEXP (x3, 0, 1);
              if (x6 == const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  && memory_operand (operands[0], E_V2SImode)
                  && GET_MODE (x2) == E_V2SImode
                  && rtx_equal_p (x5, operands[0])
                  && 
#line 5633 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && (TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
                return gen_split_1117 (insn, operands);
            }
          break;

        default:
          break;
        }
      if (XVECLEN (x3, 0) != 1)
        return NULL;
      x7 = XVECEXP (x3, 0, 0);
      if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 0]
          && GET_MODE (x2) == E_DImode)
        {
          if (GET_CODE (x5) == SUBREG
              && known_eq (SUBREG_BYTE (x5), 0)
              && GET_MODE (x5) == E_V2DImode
              && register_operand (operands[0], E_DImode))
            {
              x8 = XEXP (x5, 0);
              switch (pattern1208 (x8))
                {
                case 0:
                  if (pshufb_truncv8hiv8qi_operand (operands[2], E_V16QImode)
                      && (
#line 15395 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 15397 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3185 (insn, operands);
                  if (pshufb_truncv4siv4hi_operand (operands[2], E_V16QImode)
                      && (
#line 15750 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15752 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3201 (insn, operands);
                  break;

                case 1:
                  if ((
#line 15991 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15993 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3211 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          operands[1] = x5;
          if (register_operand (operands[1], E_V2DImode))
            {
              if (general_reg_operand (operands[0], E_DImode)
                  && 
#line 21199 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && !TARGET_64BIT
   && reload_completed))
                return gen_split_3389 (insn, operands);
              if (nonimmediate_operand (operands[0], E_DImode)
                  && 
#line 21217 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
                return gen_split_3391 (insn, operands);
            }
        }
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode)
        return NULL;
      operands[1] = x5;
      if (!memory_operand (operands[1], E_V2DImode))
        return NULL;
      operands[2] = x7;
      if (!const_0_to_1_operand (operands[2], E_VOIDmode)
          || !
#line 21404 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_3397 (insn, operands);

    case UNSPEC:
      if (pattern274 (x2) != 0
          || !
#line 8435 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
        return NULL;
      return gen_split_1519 (insn, operands);

    case FIX:
      if (pattern276 (x2) != 0
          || !
#line 8499 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[0])))
        return NULL;
      return gen_split_1521 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_55 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 130
      || GET_MODE (x3) != E_CCZmode)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != AND)
    return NULL;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != NOT)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != AND)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != NOT)
    return NULL;
  x8 = XEXP (x2, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x9 = XEXP (x5, 0);
  operands[1] = x9;
  x10 = XEXP (x4, 1);
  operands[2] = x10;
  x11 = XEXP (x7, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return NULL;
  x12 = XEXP (x6, 1);
  if (!rtx_equal_p (x12, operands[2]))
    return NULL;
  x13 = XEXP (x1, 0);
  switch (GET_CODE (x13))
    {
    case REG:
    case SUBREG:
      operands[0] = x13;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!register_operand (operands[0], E_QImode))
            return NULL;
          switch (pattern1689 (x3, 
E_QImode))
            {
            case 0:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3606 (insn, operands);

            case 1:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3607 (insn, operands);

            case 2:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3608 (insn, operands);

            case 3:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3609 (insn, operands);

            case 4:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3610 (insn, operands);

            case 5:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3611 (insn, operands);

            case 6:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3612 (insn, operands);

            case 7:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3613 (insn, operands);

            case 8:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3614 (insn, operands);

            case 9:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3615 (insn, operands);

            case 10:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3616 (insn, operands);

            case 11:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3617 (insn, operands);

            case 12:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3618 (insn, operands);

            case 13:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3619 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode))
            return NULL;
          switch (pattern1689 (x3, 
E_HImode))
            {
            case 0:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3620 (insn, operands);

            case 1:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3621 (insn, operands);

            case 2:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3622 (insn, operands);

            case 3:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3623 (insn, operands);

            case 4:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3624 (insn, operands);

            case 5:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3625 (insn, operands);

            case 6:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3626 (insn, operands);

            case 7:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3627 (insn, operands);

            case 8:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3628 (insn, operands);

            case 9:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3629 (insn, operands);

            case 10:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3630 (insn, operands);

            case 11:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3631 (insn, operands);

            case 12:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3632 (insn, operands);

            case 13:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3633 (insn, operands);

            default:
              return NULL;
            }

        case E_SImode:
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          switch (pattern1689 (x3, 
E_SImode))
            {
            case 0:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3634 (insn, operands);

            case 1:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3635 (insn, operands);

            case 2:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3636 (insn, operands);

            case 3:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3637 (insn, operands);

            case 4:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3638 (insn, operands);

            case 5:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3639 (insn, operands);

            case 6:
              if (!
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return NULL;
              return gen_split_3640 (insn, operands);

            case 7:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3641 (insn, operands);

            case 8:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3642 (insn, operands);

            case 9:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3643 (insn, operands);

            case 10:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3644 (insn, operands);

            case 11:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3645 (insn, operands);

            case 12:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3646 (insn, operands);

            case 13:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return NULL;
              return gen_split_3647 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          switch (pattern1689 (x3, 
E_DImode))
            {
            case 0:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3648 (insn, operands);

            case 1:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3649 (insn, operands);

            case 2:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3650 (insn, operands);

            case 3:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3651 (insn, operands);

            case 4:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3652 (insn, operands);

            case 5:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3653 (insn, operands);

            case 6:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_3654 (insn, operands);

            case 7:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3655 (insn, operands);

            case 8:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3656 (insn, operands);

            case 9:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3657 (insn, operands);

            case 10:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3658 (insn, operands);

            case 11:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3659 (insn, operands);

            case 12:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3660 (insn, operands);

            case 13:
              if (!(
#line 25415 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && ((((((
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
                return NULL;
              return gen_split_3661 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      x14 = XEXP (x13, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_QImode))
        return NULL;
      switch (pattern1689 (x3, 
E_QImode))
        {
        case 0:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3662 (insn, operands);

        case 1:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3663 (insn, operands);

        case 2:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3664 (insn, operands);

        case 3:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3665 (insn, operands);

        case 4:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3666 (insn, operands);

        case 5:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3667 (insn, operands);

        case 6:
          if (!
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return NULL;
          return gen_split_3668 (insn, operands);

        case 7:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3669 (insn, operands);

        case 8:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3670 (insn, operands);

        case 9:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3671 (insn, operands);

        case 10:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3672 (insn, operands);

        case 11:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3673 (insn, operands);

        case 12:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3674 (insn, operands);

        case 13:
          if (!(
#line 25430 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3675 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_71 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_2002 (insn, operands);

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
          return gen_split_2029 (insn, operands);

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
          return gen_split_2056 (insn, operands);

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
          return gen_split_2083 (insn, operands);

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
          return gen_split_2110 (insn, operands);

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
          return gen_split_2137 (insn, operands);

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
          return gen_split_2164 (insn, operands);

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
          return gen_split_2191 (insn, operands);

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
          return gen_split_2218 (insn, operands);

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
          return gen_split_2245 (insn, operands);

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
          return gen_split_2272 (insn, operands);

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
          return gen_split_2299 (insn, operands);

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
          return gen_split_2005 (insn, operands);

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
          return gen_split_2032 (insn, operands);

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
          return gen_split_2059 (insn, operands);

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
          return gen_split_2086 (insn, operands);

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
          return gen_split_2113 (insn, operands);

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
          return gen_split_2140 (insn, operands);

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
          return gen_split_2167 (insn, operands);

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
          return gen_split_2194 (insn, operands);

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
          return gen_split_2221 (insn, operands);

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
          return gen_split_2248 (insn, operands);

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
          return gen_split_2275 (insn, operands);

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
          return gen_split_2302 (insn, operands);

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
          return gen_split_2008 (insn, operands);

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
          return gen_split_2035 (insn, operands);

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
          return gen_split_2062 (insn, operands);

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
          return gen_split_2089 (insn, operands);

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
          return gen_split_2116 (insn, operands);

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
          return gen_split_2143 (insn, operands);

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
          return gen_split_2170 (insn, operands);

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
          return gen_split_2197 (insn, operands);

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
          return gen_split_2224 (insn, operands);

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
          return gen_split_2251 (insn, operands);

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
          return gen_split_2278 (insn, operands);

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
          return gen_split_2305 (insn, operands);

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
          return gen_split_3070 (insn, operands);

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
          return gen_split_3079 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3088 (insn, operands);

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
          return gen_split_3097 (insn, operands);

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
          return gen_split_3106 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3115 (insn, operands);

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
          return gen_split_3124 (insn, operands);

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
          return gen_split_3133 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3142 (insn, operands);

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
          return gen_split_3151 (insn, operands);

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
          return gen_split_3160 (insn, operands);

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
          return gen_split_3169 (insn, operands);

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
          return gen_split_2650 (insn, operands);

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
          return gen_split_2677 (insn, operands);

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
          return gen_split_2704 (insn, operands);

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
          return gen_split_2731 (insn, operands);

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
          return gen_split_2758 (insn, operands);

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
          return gen_split_2785 (insn, operands);

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
          return gen_split_2812 (insn, operands);

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
          return gen_split_2839 (insn, operands);

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
          return gen_split_2866 (insn, operands);

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
          return gen_split_2893 (insn, operands);

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
          return gen_split_2920 (insn, operands);

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
          return gen_split_2947 (insn, operands);

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
          return gen_split_2653 (insn, operands);

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
          return gen_split_2680 (insn, operands);

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
          return gen_split_2707 (insn, operands);

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
          return gen_split_2734 (insn, operands);

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
          return gen_split_2761 (insn, operands);

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
          return gen_split_2788 (insn, operands);

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
          return gen_split_2815 (insn, operands);

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
          return gen_split_2842 (insn, operands);

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
          return gen_split_2869 (insn, operands);

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
          return gen_split_2896 (insn, operands);

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
          return gen_split_2923 (insn, operands);

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
          return gen_split_2950 (insn, operands);

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
          return gen_split_2656 (insn, operands);

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
          return gen_split_2683 (insn, operands);

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
          return gen_split_2710 (insn, operands);

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
          return gen_split_2737 (insn, operands);

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
          return gen_split_2764 (insn, operands);

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
          return gen_split_2791 (insn, operands);

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
          return gen_split_2818 (insn, operands);

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
          return gen_split_2845 (insn, operands);

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
          return gen_split_2872 (insn, operands);

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
          return gen_split_2899 (insn, operands);

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
          return gen_split_2926 (insn, operands);

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
          return gen_split_2953 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_79 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 1:
      if (XINT (x2, 1) != 177)
        return NULL;
      switch (pattern319 (x2))
        {
        case 0:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1156 (insn, operands);

        case 1:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1157 (insn, operands);

        case 2:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1158 (insn, operands);

        case 3:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1159 (insn, operands);

        case 4:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1160 (insn, operands);

        case 5:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1161 (insn, operands);

        case 6:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1162 (insn, operands);

        case 7:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1163 (insn, operands);

        case 8:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1164 (insn, operands);

        case 9:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1165 (insn, operands);

        case 10:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1166 (insn, operands);

        case 11:
          if (!((
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1635 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1167 (insn, operands);

        case 12:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1168 (insn, operands);

        case 13:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1169 (insn, operands);

        case 14:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1170 (insn, operands);

        case 15:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1171 (insn, operands);

        case 16:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1172 (insn, operands);

        case 17:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1173 (insn, operands);

        case 18:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1174 (insn, operands);

        case 19:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1175 (insn, operands);

        case 20:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1176 (insn, operands);

        case 21:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1177 (insn, operands);

        case 22:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1178 (insn, operands);

        case 23:
          if (!((
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1679 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1179 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      switch (XINT (x2, 1))
        {
        case 51:
          x3 = XVECEXP (x2, 0, 2);
          switch (GET_CODE (x3))
            {
            case LT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              switch (pattern657 (x2))
                {
                case 0:
                  if (((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3366 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1296 (insn, operands);
                  break;

                case 1:
                  if ((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 3366 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1297 (insn, operands);
                  break;

                case 2:
                  if (((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3366 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1298 (insn, operands);
                  break;

                case 3:
                  if (((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 3366 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_1299 (insn, operands);
                  break;

                case 4:
                  if (((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23596 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3473 (insn, operands);
                  break;

                case 5:
                  if ((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23596 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3474 (insn, operands);
                  break;

                case 6:
                  if (((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23596 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3475 (insn, operands);
                  break;

                case 7:
                  if (((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 23596 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3476 (insn, operands);
                  break;

                case 8:
                  if (((
#line 23924 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23926 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3501 (insn, operands);
                  break;

                case 9:
                  if ((
#line 23924 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23926 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3502 (insn, operands);
                  break;

                default:
                  break;
                }
              x5 = XEXP (x3, 0);
              if (GET_CODE (x5) != SUBREG)
                return NULL;
              switch (pattern659 (x2))
                {
                case 0:
                  if (!((
#line 23974 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23979 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3505 (insn, operands);

                case 1:
                  if (!(
#line 23974 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()) && 
#line 23979 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3506 (insn, operands);

                default:
                  return NULL;
                }

            case GT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              switch (pattern662 (x2))
                {
                case 0:
                  if (((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23622 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3477 (insn, operands);
                  break;

                case 1:
                  if ((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23622 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3478 (insn, operands);
                  break;

                case 2:
                  if (((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23622 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3479 (insn, operands);
                  break;

                case 3:
                  if (((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 23622 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return gen_split_3480 (insn, operands);
                  break;

                case 4:
                  if (((
#line 23948 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 23950 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3503 (insn, operands);
                  break;

                case 5:
                  if ((
#line 23948 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23950 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3504 (insn, operands);
                  break;

                default:
                  break;
                }
              x5 = XEXP (x3, 0);
              if (GET_CODE (x5) != SUBREG)
                return NULL;
              switch (pattern664 (x2))
                {
                case 0:
                  if (!((
#line 23996 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 24001 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3507 (insn, operands);

                case 1:
                  if (!(
#line 23996 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()) && 
#line 24001 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return NULL;
                  return gen_split_3508 (insn, operands);

                default:
                  return NULL;
                }

            case SUBREG:
              if (maybe_ne (SUBREG_BYTE (x3), 0))
                return NULL;
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              x5 = XEXP (x3, 0);
              switch (GET_CODE (x5))
                {
                case LT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  switch (pattern1226 (x2))
                    {
                    case 0:
                      if ((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23656 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3481 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23656 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3482 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23656 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3483 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23656 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3484 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x7) != SUBREG)
                    return NULL;
                  switch (pattern1227 (x2))
                    {
                    case 0:
                      if (!(
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23723 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3489 (insn, operands);

                    case 1:
                      if (!(
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23723 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3490 (insn, operands);

                    case 2:
                      if (!((
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23723 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3491 (insn, operands);

                    case 3:
                      if (!((
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23723 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3492 (insn, operands);

                    default:
                      return NULL;
                    }

                case GT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  switch (pattern1228 (x2))
                    {
                    case 0:
                      if ((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23688 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3485 (insn, operands);
                      break;

                    case 1:
                      if ((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 23688 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3486 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23688 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3487 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23688 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                        return gen_split_3488 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x7) != SUBREG)
                    return NULL;
                  switch (pattern1229 (x2))
                    {
                    case 0:
                      if (!(
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23749 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3493 (insn, operands);

                    case 1:
                      if (!(
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 23749 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3494 (insn, operands);

                    case 2:
                      if (!((
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23749 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3495 (insn, operands);

                    case 3:
                      if (!((
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 23749 "../../src/gcc/config/i386/sse.md"
( 1)))
                        return NULL;
                      return gen_split_3496 (insn, operands);

                    default:
                      return NULL;
                    }

                case NOT:
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  if (!register_operand (operands[3], E_VOIDmode))
                    return NULL;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V32QImode:
                      if (pattern1443 (x2, 
E_V32QImode) != 0
                          || !(
#line 23907 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                        return NULL;
                      return gen_split_3499 (insn, operands);

                    case E_V16QImode:
                      if (pattern1443 (x2, 
E_V16QImode) != 0
                          || !
#line 23907 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16))
                        return NULL;
                      return gen_split_3500 (insn, operands);

                    default:
                      return NULL;
                    }

                default:
                  return NULL;
                }

            case NOT:
              x4 = XVECEXP (x2, 0, 0);
              operands[1] = x4;
              x6 = XVECEXP (x2, 0, 1);
              operands[2] = x6;
              x5 = XEXP (x3, 0);
              operands[3] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_V32QImode:
                  if (pattern1184 (x2, 
E_V32QImode) != 0
                      || !(
#line 23894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return NULL;
                  return gen_split_3497 (insn, operands);

                case E_V16QImode:
                  if (pattern1184 (x2, 
E_V16QImode) != 0
                      || !
#line 23894 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return NULL;
                  return gen_split_3498 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case 217:
          switch (pattern593 (x2))
            {
            case 0:
              if (!((
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7241 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1512 (insn, operands);

            case 1:
              if (!((
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7241 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1513 (insn, operands);

            case 2:
              if (!((
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7241 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1514 (insn, operands);

            default:
              return NULL;
            }

        case 219:
          switch (pattern593 (x2))
            {
            case 0:
              if (!((
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7268 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1515 (insn, operands);

            case 1:
              if (!((
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7268 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1516 (insn, operands);

            case 2:
              if (!((
#line 7266 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7268 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1517 (insn, operands);

            default:
              return NULL;
            }

        case 155:
          x4 = XVECEXP (x2, 0, 0);
          if (GET_CODE (x4) != CONST_VECTOR)
            return NULL;
          switch (pattern494 (x2))
            {
            case 0:
              if (!(
#line 21611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512VBMI
   && ix86_pre_reload_split ()) && 
#line 21614 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3402 (insn, operands);

            case 1:
              if (!(
#line 21636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW
   && ix86_pre_reload_split ()) && 
#line 21639 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3403 (insn, operands);

            default:
              return NULL;
            }

        case 47:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x3 = XVECEXP (x2, 0, 2);
          operands[2] = x3;
          switch (pattern790 (x2))
            {
            case 0:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3742 (insn, operands);

            case 1:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3743 (insn, operands);

            case 2:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3744 (insn, operands);

            case 3:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3745 (insn, operands);

            case 4:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3746 (insn, operands);

            case 5:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3747 (insn, operands);

            case 6:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3748 (insn, operands);

            case 7:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3749 (insn, operands);

            case 8:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3750 (insn, operands);

            case 9:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3751 (insn, operands);

            case 10:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3752 (insn, operands);

            case 11:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3753 (insn, operands);

            case 12:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3754 (insn, operands);

            case 13:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3755 (insn, operands);

            case 14:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3756 (insn, operands);

            case 15:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3757 (insn, operands);

            case 16:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3758 (insn, operands);

            case 17:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3759 (insn, operands);

            case 18:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3760 (insn, operands);

            case 19:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3761 (insn, operands);

            case 20:
              if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3762 (insn, operands);

            case 21:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3763 (insn, operands);

            case 22:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3764 (insn, operands);

            case 23:
              if (!((
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 28791 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3765 (insn, operands);

            default:
              return NULL;
            }

        case 171:
          x4 = XVECEXP (x2, 0, 0);
          operands[1] = x4;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          x3 = XVECEXP (x2, 0, 2);
          operands[3] = x3;
          switch (pattern918 (x2))
            {
            case 0:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) >= 4)) && 
#line 1016 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3793 (insn, operands);

            case 1:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) >= 4)) && 
#line 1017 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3794 (insn, operands);

            case 2:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) >= 4)) && 
#line 1018 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3795 (insn, operands);

            case 3:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) >= 4)) && 
#line 1019 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3796 (insn, operands);

            case 4:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) >= 4)) && 
#line 1020 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3797 (insn, operands);

            case 5:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) >= 4)) && 
#line 1020 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3798 (insn, operands);

            case 6:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) >= 4)) && 
#line 1021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3799 (insn, operands);

            case 7:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) >= 4)) && 
#line 1021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3800 (insn, operands);

            case 8:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) >= 4)) && 
#line 1022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3801 (insn, operands);

            case 9:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) >= 4)) && 
#line 1022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3802 (insn, operands);

            case 10:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) >= 4)) && 
#line 1023 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3803 (insn, operands);

            case 11:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) >= 4)) && 
#line 1023 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3804 (insn, operands);

            case 12:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V64QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3805 (insn, operands);

            case 13:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3806 (insn, operands);

            case 14:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32QImode)) >= 4)) && 
#line 1024 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3807 (insn, operands);

            case 15:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V32HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3808 (insn, operands);

            case 16:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V16HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3809 (insn, operands);

            case 17:
              if (!((
#line 29759 "../../src/gcc/config/i386/sse.md"
(ix86_pre_reload_split ()
   && (TARGET_AVX512VBMI2 || GET_MODE_SIZE (GET_MODE_INNER (V8HImode)) >= 4)) && 
#line 1025 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 29762 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3810 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case 4:
      return split_56 (x1, insn);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_CODE (operands[0]))
    {
    case REG:
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern726 (x4, 
E_QImode))
            {
            case 0:
              if (pattern1342 (x4, 
E_QImode) != 0
                  || !
#line 3385 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_15 (insn, operands);

            case 1:
              if (XVECLEN (x4, 0) != 2)
                return NULL;
              x5 = XVECEXP (x4, 0, 0);
              if (GET_CODE (x5) != SET)
                return NULL;
              x6 = XEXP (x5, 1);
              if (GET_CODE (x6) != NEG
                  || pattern1346 (x4, 
E_QImode) != 0)
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_155 (insn, operands);

            default:
              return NULL;
            }

        case E_HImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern726 (x4, 
E_HImode))
            {
            case 0:
              if (pattern1342 (x4, 
E_HImode) != 0
                  || !
#line 3385 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_16 (insn, operands);

            case 1:
              if (XVECLEN (x4, 0) != 2)
                return NULL;
              x5 = XVECEXP (x4, 0, 0);
              if (GET_CODE (x5) != SET)
                return NULL;
              x6 = XEXP (x5, 1);
              if (GET_CODE (x6) == NEG
                  && pattern1346 (x4, 
E_HImode) == 0)
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_156 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (peep2_current_count < 4
                  || pattern1348 (x4, 
E_HImode) != 0
                  || !
#line 26491 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (1, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_203 (insn, operands);

            default:
              return NULL;
            }

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || !general_reg_operand (operands[1], E_SImode))
            return NULL;
          if (peep2_current_count >= 2)
            {
              x4 = PATTERN (peep2_next_insn (1));
              if (pattern1064 (x4, 
E_SImode) == 0
                  && 
#line 3385 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()))
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_17 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (!
#line 3418 "../../src/gcc/config/i386/i386.md"
(optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_27 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || !general_reg_operand (operands[1], E_DImode))
            return NULL;
          if (peep2_current_count >= 2)
            {
              x4 = PATTERN (peep2_next_insn (1));
              if (pattern1064 (x4, 
E_DImode) == 0
                  && (
#line 3385 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (3, operands[0])
   && optimize_insn_for_size_p ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 2;
                  res = gen_peephole2_18 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if ((
#line 3418 "../../src/gcc/config/i386/i386.md"
(optimize_size > 1
  && ((REGNO (operands[0]) == AX_REG)
      != (REGNO (operands[1]) == AX_REG))
  && optimize_insn_for_size_p ()
  && peep2_reg_dead_p (1, operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_28 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 2
              || peep2_current_count < 3
              || peep2_current_count < 4)
            return NULL;
          x4 = PATTERN (peep2_next_insn (1));
          if (GET_CODE (x4) != PARALLEL
              || XVECLEN (x4, 0) != 2)
            return NULL;
          x5 = XVECEXP (x4, 0, 0);
          if (GET_CODE (x5) != SET)
            return NULL;
          x6 = XEXP (x5, 1);
          if (GET_CODE (x6) != ASHIFTRT
              || GET_MODE (x6) != E_DImode)
            return NULL;
          x7 = XEXP (x6, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 63]
              || pattern1344 (x4) != 0)
            return NULL;
          x8 = PATTERN (peep2_next_insn (2));
          if (GET_CODE (x8) != SET)
            return NULL;
          x9 = XEXP (x8, 0);
          operands[2] = x9;
          if (!general_reg_operand (operands[2], E_DImode))
            return NULL;
          x10 = XEXP (x8, 1);
          if (!rtx_equal_p (x10, operands[1]))
            return NULL;
          x11 = PATTERN (peep2_next_insn (3));
          if (GET_CODE (x11) != SET)
            return NULL;
          x12 = XEXP (x11, 0);
          operands[3] = x12;
          if (!general_reg_operand (operands[3], E_DImode))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[0])
              || !
#line 5116 "../../src/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun) || TARGET_USE_CLTD)
   && REGNO (operands[2]) == AX_REG
   && REGNO (operands[3]) == DX_REG
   && peep2_reg_dead_p (4, operands[0])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[0])))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_53 (insn, operands);

        default:
          return NULL;
        }

    case SUBREG:
    case MEM:
      if (peep2_current_count < 2
          || peep2_current_count < 3)
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern959 (x4, 
E_SImode))
            {
            case 0:
              if (!(
#line 5039 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_49 (insn, operands);

            case 1:
              if (!(
#line 5057 "../../src/gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (4 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_51 (insn, operands);

            default:
              return NULL;
            }

        case E_DImode:
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern959 (x4, 
E_DImode))
            {
            case 0:
              if (!(
#line 5039 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 3;
              return gen_peephole2_50 (insn, operands);

            case 1:
              if (!(
#line 5057 "../../src/gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && REGNO (operands[1]) == AX_REG
   && REGNO (operands[2]) == DX_REG
   && INTVAL (operands[4]) == (8 * BITS_PER_UNIT - 1)
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_52 (insn, operands);

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
peephole2_11 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != IOR
      || GET_MODE (x3) != E_SImode)
    return NULL;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND
      || GET_MODE (x4) != E_SImode)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_INT
      || XWINT (x5, 0) != -65536L)
    return NULL;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != LSHIFTRT
      || GET_MODE (x6) != E_SImode)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != BSWAP
      || GET_MODE (x7) != E_SImode)
    return NULL;
  x8 = XEXP (x6, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return NULL;
  x9 = XEXP (x4, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return NULL;
  x10 = XEXP (x7, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return NULL;
  x11 = XEXP (x2, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return NULL;
  x12 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x12) != SET)
    return NULL;
  x13 = XEXP (x12, 0);
  operands[2] = x13;
  if (!general_reg_operand (operands[2], E_SImode))
    return NULL;
  x14 = XEXP (x12, 1);
  if (!rtx_equal_p (x14, operands[0])
      || !
#line 22671 "../../src/gcc/config/i386/i386.md"
(!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)
   && peep2_reg_dead_p(3, operands[0])))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_192 (insn, operands);
}

 rtx_insn *
peephole2_12 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (register_operand (operands[0], E_SImode))
    {
      res = peephole2_10 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    {
      x4 = XVECEXP (x3, 0, 0);
      if (GET_CODE (x4) == SET)
        {
          if (memory_operand (operands[1], E_SImode))
            {
              switch (pattern1194 (x3, 
E_SImode, 
E_DImode))
                {
                case 0:
                  if (
#line 8701 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_70 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 1:
                  if (
#line 9134 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_86 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 2:
                  if (
#line 9621 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_98 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 3:
                  if (
#line 9987 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_110 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 4:
                  if (
#line 8818 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_78 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 5:
                  if (
#line 8844 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_82 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 6:
                  if (
#line 9302 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_92 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  if (
#line 9328 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[5])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[5], operands[1])))
                    {
                      *pmatch_len_ = 3;
                      res = gen_peephole2_96 (insn, operands);
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
E_SImode) == 0
              && 
#line 14286 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[2])
   && !reg_mentioned_p (operands[0], operands[1])
   && !reg_mentioned_p (operands[2], operands[1])))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_151 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (general_reg_operand (operands[1], E_SImode))
            {
              x5 = XEXP (x4, 1);
              if (GET_CODE (x5) == NEG
                  && GET_MODE (x5) == E_SImode
                  && pattern1344 (x3) == 0)
                {
                  x6 = PATTERN (peep2_next_insn (2));
                  if (GET_CODE (x6) == SET
                      && pattern1345 (x6) == 0)
                    {
                      *pmatch_len_ = 2;
                      res = gen_peephole2_157 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (GET_CODE (x3) != SET)
    return NULL;
  if (register_operand (operands[1], E_SImode))
    {
      res = peephole2_11 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (!immediate_operand (operands[1], E_SImode))
    return NULL;
  switch (pattern960 (x3, 
E_DImode, 
E_SImode))
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
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_114 (insn, operands);

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
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_116 (insn, operands);

    case 2:
      x6 = PATTERN (peep2_next_insn (2));
      x7 = XVECEXP (x6, 0, 1);
      x8 = XEXP (x7, 0);
      if (!rtx_equal_p (x8, operands[2]))
        return NULL;
      x9 = XVECEXP (x6, 0, 0);
      x10 = XEXP (x9, 1);
      switch (GET_CODE (x10))
        {
        case SMUL_HIGHPART:
          if (pattern1781 (x10) != 0
              || !
#line 11246 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_118 (insn, operands);

        case UMUL_HIGHPART:
          if (pattern1781 (x10) != 0
              || !
#line 11246 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_119 (insn, operands);

        case ZERO_EXTEND:
          if (GET_MODE (x10) != E_DImode
              || !general_reg_operand (operands[4], E_DImode))
            return NULL;
          x11 = XEXP (x10, 0);
          if (GET_MODE (x11) != E_SImode)
            return NULL;
          switch (GET_CODE (x11))
            {
            case SMUL_HIGHPART:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[2]))
                return NULL;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[0])
                  || !
#line 11267 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[2]) != REGNO (operands[3])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_122 (insn, operands);

            case UMUL_HIGHPART:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[2]))
                return NULL;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[0])
                  || !
#line 11267 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && REGNO (operands[3]) != AX_REG
   && REGNO (operands[0]) != REGNO (operands[2])
   && REGNO (operands[2]) != REGNO (operands[3])
   && REGNO (operands[0]) != REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[0]))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_123 (insn, operands);

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
peephole2_19 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (!ix86_comparison_operator (x3, E_QImode))
    return NULL;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return NULL;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x2, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      if (!register_operand (operands[1], E_QImode))
        return NULL;
      operands[2] = x3;
      x7 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x7))
        {
        case SET:
          x8 = XEXP (x7, 1);
          if (GET_CODE (x8) != ZERO_EXTEND)
            return NULL;
          x9 = XEXP (x7, 0);
          operands[3] = x9;
          if (!any_QIreg_operand (operands[3], E_VOIDmode))
            return NULL;
          x10 = XEXP (x8, 0);
          if (!rtx_equal_p (x10, operands[1])
              || !
#line 19926 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_169 (insn, operands);

        case PARALLEL:
          if (XVECLEN (x7, 0) != 2)
            return NULL;
          x11 = XVECEXP (x7, 0, 0);
          if (GET_CODE (x11) != SET)
            return NULL;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != AND
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x12, 1);
          if (GET_CODE (x13) != CONST_INT
              || XWINT (x13, 0) != 255L
              || pattern1729 (x7, 
E_SImode) != 0)
            return NULL;
          x14 = XEXP (x12, 0);
          if (!rtx_equal_p (x14, operands[3])
              || !
#line 19998 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_172 (insn, operands);

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      if (peep2_current_count < 4)
        return NULL;
      x15 = XEXP (x6, 0);
      operands[5] = x15;
      if (!register_operand (operands[5], E_QImode))
        return NULL;
      operands[6] = x3;
      x7 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x7) != SET)
        return NULL;
      x8 = XEXP (x7, 1);
      if (!ix86_comparison_operator (x8, E_QImode))
        return NULL;
      operands[2] = x8;
      x10 = XEXP (x8, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17)
        return NULL;
      x16 = XEXP (x8, 1);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x9 = XEXP (x7, 0);
      operands[1] = x9;
      if (!register_operand (operands[1], E_QImode))
        return NULL;
      x17 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x17) != SET)
        return NULL;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != ZERO_EXTEND)
        return NULL;
      x19 = XEXP (x17, 0);
      operands[3] = x19;
      if (!any_QIreg_operand (operands[3], E_VOIDmode))
        return NULL;
      x20 = XEXP (x18, 0);
      if (!rtx_equal_p (x20, operands[1])
          || !
#line 20071 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[5])
   && ! reg_overlap_mentioned_p (operands[1], operands[5])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_175 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_23 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x2, 
CALL, 
2) != 0)
    return NULL;
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != MEM
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XVECEXP (x2, 0, 1);
  if (pattern1257 (x6) != 0)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 7
      || GET_MODE (x7) != E_SImode)
    return NULL;
  x8 = XEXP (x3, 0);
  operands[2] = x8;
  x9 = XEXP (x4, 1);
  operands[3] = x9;
  x10 = XEXP (x6, 1);
  x11 = XEXP (x10, 1);
  operands[4] = x11;
  if (!immediate_operand (operands[4], E_SImode))
    return NULL;
  x12 = XEXP (x5, 0);
  if (!rtx_equal_p (x12, operands[0])
      || !
#line 20469 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_188 (insn, operands);
}

 rtx_insn *
peephole2_25 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[1], E_SImode)
      || !register_operand (operands[0], E_SImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case PARALLEL:
      if (pattern842 (x2) != 0)
        return NULL;
      x3 = XVECEXP (x2, 0, 0);
      x4 = XEXP (x3, 1);
      switch (GET_CODE (x4))
        {
        case PLUS:
        case MINUS:
        case AND:
        case IOR:
        case XOR:
          if (peep2_current_count < 4)
            return NULL;
          operands[3] = x4;
          if (!plusminuslogic_operator (operands[3], E_SImode))
            return NULL;
          x5 = XVECEXP (x2, 0, 1);
          if (GET_CODE (x5) != CLOBBER)
            return NULL;
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return NULL;
          x7 = XEXP (x4, 1);
          operands[2] = x7;
          if (!x86_64_nonmemory_operand (operands[2], E_SImode))
            return NULL;
          x8 = XEXP (x4, 0);
          if (!rtx_equal_p (x8, operands[0]))
            return NULL;
          x9 = XEXP (x3, 0);
          if (!rtx_equal_p (x9, operands[0]))
            return NULL;
          x10 = PATTERN (peep2_next_insn (3));
          if (GET_CODE (x10) != SET)
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          x12 = XEXP (x11, 0);
          if (rtx_equal_p (x12, operands[1])
              && pattern1801 (x10) == 0
              && 
#line 28071 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_295 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 5
              || pattern1802 (x12, 
E_SImode) != 0
              || !
#line 28269 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 4;
          return gen_peephole2_317 (insn, operands);

        case COMPARE:
          if (pattern1258 (x2, 
E_SImode) != 0)
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          x12 = XEXP (x11, 0);
          if (rtx_equal_p (x12, operands[1])
              && 
#line 28107 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_299 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (peep2_current_count < 4
              || pattern1803 (x12, 
E_SImode) != 0
              || !
#line 28347 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (4, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && ix86_match_ccmode (peep2_next_insn (1),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 3;
          return gen_peephole2_323 (insn, operands);

        default:
          return NULL;
        }

    case SET:
      if (pattern843 (x2, 
E_SImode) != 0
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
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))))
        return NULL;
      *pmatch_len_ = 4;
      return gen_peephole2_327 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_34 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (!general_operand (operands[1], E_QImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 109
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x7 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != UNSPEC_VOLATILE
      || XVECLEN (x8, 0) != 1
      || XINT (x8, 1) != 109
      || GET_MODE (x8) != E_CCZmode)
    return NULL;
  x9 = XVECEXP (x8, 0, 0);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x10 = XEXP (x7, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCZmode)
    return NULL;
  x11 = XVECEXP (x3, 0, 0);
  x12 = XEXP (x11, 1);
  x13 = XVECEXP (x12, 0, 0);
  operands[2] = x13;
  if (!memory_operand (operands[2], E_QImode))
    return NULL;
  x14 = XVECEXP (x12, 0, 2);
  operands[3] = x14;
  if (!register_operand (operands[3], E_QImode)
      || pattern1692 (x3) != 0)
    return NULL;
  x15 = PATTERN (peep2_next_insn (2));
  if (pattern1536 (x15) != 0)
    return NULL;
  x16 = XEXP (x15, 1);
  x17 = XEXP (x16, 0);
  operands[5] = x17;
  if (!register_operand (operands[5], E_QImode))
    return NULL;
  x18 = XEXP (x16, 1);
  operands[6] = x18;
  if (!general_operand (operands[6], E_QImode)
      || !
#line 521 "../../src/gcc/config/i386/sync.md"
((rtx_equal_p (operands[0], operands[5])
    && rtx_equal_p (operands[1], operands[6]))
   || (rtx_equal_p (operands[0], operands[6])
       && rtx_equal_p (operands[1], operands[5]))))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_403 (insn, operands);
}

 rtx_insn *
peephole2_40 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (pattern229 (x2, 
E_CCmode, 
17) != 0)
    return NULL;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 1);
  switch (XWINT (x4, 0))
    {
    case 0L:
      res = peephole2_39 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case 1L:
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) == ZERO_EXTRACT
          && pattern1065 (x5) == 0
          && 
#line 19057 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
        {
          *pmatch_len_ = 0;
          res = gen_peephole2_165 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  x5 = XEXP (x3, 0);
  operands[0] = x5;
  x6 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x6, 
UNSPEC_VOLATILE, 
3) != 0)
    return NULL;
  x7 = XVECEXP (x6, 0, 1);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  if (pattern1536 (x8) != 0)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode))
        return NULL;
      operands[1] = x4;
      switch (pattern1805 (x6, 
E_SImode))
        {
        case 0:
          if (
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_407 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if (
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_409 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 2:
          if (
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_411 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 3:
          if ((
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_413 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (pattern1761 (x6, 
E_SImode) != 0
          || !
#line 754 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_421 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return NULL;
      operands[1] = x4;
      switch (pattern1805 (x6, 
E_DImode))
        {
        case 0:
          if ((
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_408 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_410 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 2:
          if ((
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_412 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 3:
          if ((
#line 557 "../../src/gcc/config/i386/sync.md"
(REGNO (operands[0]) == REGNO (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 2;
              res = gen_peephole2_414 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      operands[2] = x4;
      if (pattern1761 (x6, 
E_DImode) != 0
          || !(
#line 754 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_422 (insn, operands);

    case E_QImode:
      if (pattern1762 (x4, 
E_QImode) != 0
          || !
#line 754 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_419 (insn, operands);

    case E_HImode:
      if (pattern1762 (x4, 
E_HImode) != 0
          || !
#line 754 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_420 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_48 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  operands[1] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return NULL;
  x7 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (!rtx_equal_p (x8, operands[0]))
    return NULL;
  x9 = XEXP (x7, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return NULL;
  x10 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x10) != SET)
    return NULL;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != COMPARE)
    return NULL;
  x12 = XEXP (x11, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x13 = XEXP (x10, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 17)
    return NULL;
  x14 = XEXP (x11, 0);
  if (!rtx_equal_p (x14, operands[0]))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || !plusminuslogic_operator (operands[2], E_QImode)
          || !memory_operand (operands[1], E_QImode)
          || !
#line 28171 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_305 (insn, operands);

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !plusminuslogic_operator (operands[2], E_HImode)
          || !memory_operand (operands[1], E_HImode)
          || !
#line 28171 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_306 (insn, operands);

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !plusminuslogic_operator (operands[2], E_SImode)
          || !memory_operand (operands[1], E_SImode)
          || !
#line 28171 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_307 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !plusminuslogic_operator (operands[2], E_DImode)
          || !memory_operand (operands[1], E_DImode)
          || !(
#line 28171 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_308 (insn, operands);

    default:
      return NULL;
    }
}
