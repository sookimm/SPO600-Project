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
pattern5 (rtx x1, machine_mode i1)
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
pattern13 (rtx x1)
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
    case E_V2QImode:
      if (!memory_operand (operands[0], E_V2QImode)
          || GET_MODE (x3) != E_V2QImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 0;

    case E_V4QImode:
      res = pattern11 (x3, 
E_V4QImode);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_V8QImode:
      res = pattern12 (x3);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case E_V4HImode:
      res = pattern11 (x3, 
E_V4HImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V2HImode:
      if (!memory_operand (operands[0], E_V2HImode)
          || GET_MODE (x3) != E_V2HImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 8;

    case E_V2SImode:
      if (!memory_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern30 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V1TImode)
      || GET_MODE (x1) != E_V1TImode
      || !register_operand (operands[1], E_V1TImode)
      || !const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern35 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != COMPARE
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_BLKmode)
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_CODE (x5) != MEM
      || GET_MODE (x5) != E_BLKmode)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != USE)
    return -1;
  x8 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x8) != USE)
    return -1;
  x9 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x11) != CLOBBER)
    return -1;
  x12 = XEXP (x4, 0);
  operands[4] = x12;
  return 0;
}

int
pattern39 (rtx x1)
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
pattern43 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCCmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCCmode)
    return -1;
  switch (GET_MODE (x3))
    {
    case E_CCmode:
      return 0;

    case E_CCCmode:
      return 1;

    default:
      return -1;
    }
}

int
pattern51 (rtx x1)
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
    case E_V64QImode:
      return pattern25 (x1, 
E_V64QImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern25 (x1, 
E_V32QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern25 (x1, 
E_V16QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern25 (x1, 
E_V32HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern25 (x1, 
E_V16HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern25 (x1, 
E_V8HImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern61 (rtx x1, machine_mode i1)
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
pattern64 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], E_V4HImode)
      || !register_mmxmem_operand (operands[2], E_V4HImode))
    return -1;
  return 0;
}

int
pattern69 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case ASHIFT:
      if (GET_MODE (x2) != E_TImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != ZERO_EXTEND
          || GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 64]
          || !nonimmediate_operand (operands[0], E_TImode)
          || GET_MODE (x1) != E_TImode)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_MODE (x5) != E_TImode
          || !nonimmediate_operand (operands[1], E_TImode)
          || !const_scalar_int_operand (operands[3], E_TImode))
        return -1;
      x6 = XEXP (x3, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_DImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x1) != E_TImode)
            return -1;
          x5 = XEXP (x1, 0);
          if (GET_MODE (x5) != E_TImode
              || !nonimmediate_operand (operands[1], E_TImode)
              || !const_scalar_int_operand (operands[3], E_TImode)
              || GET_MODE (x2) != E_TImode
              || !nonimmediate_operand (operands[2], E_DImode))
            return -1;
          return 1;

        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x1) != E_DImode)
            return -1;
          x5 = XEXP (x1, 0);
          if (GET_MODE (x5) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !const_int_operand (operands[3], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[2], E_SImode))
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
pattern99 ()
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
pattern105 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern104 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern104 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern114 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_DImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern122 (rtx x1, machine_mode i1)
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

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!nonimmediate_operand (operands[1], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern130 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern141 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern145 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16HImode)
      || GET_MODE (x1) != E_V16HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], i1)
      || !nonimm_or_0_operand (operands[2], E_V16HImode)
      || !register_operand (operands[3], E_HImode))
    return -1;
  return 0;
}

int
pattern147 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern151 (rtx x1)
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
      return pattern150 (x3, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern150 (x3, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern150 (x3, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern150 (x3, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern150 (x3, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern150 (x3, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern150 (x3, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern150 (x3, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern150 (x3, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern163 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern169 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  return pattern168 (x2); /* [-1, 0] */
}

int
pattern174 (rtx x1)
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
    case E_V32HImode:
      return pattern170 (x3, 
E_V32HImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern170 (x3, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern170 (x3, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern170 (x3, 
E_V16HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern170 (x3, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern170 (x3, 
E_V4DImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern170 (x3, 
E_V8HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern170 (x3, 
E_V4SImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern170 (x3, 
E_V2DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern187 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i2))
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
pattern194 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != VEC_CONCAT)
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_CODE (x7) != PARALLEL)
    return -1;
  x8 = XEXP (x3, 0);
  operands[1] = x8;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  x11 = XEXP (x6, 1);
  if (!rtx_equal_p (x11, operands[2]))
    return -1;
  switch (XVECLEN (x4, 0))
    {
    case 16:
      return pattern186 (x1); /* [-1, 0] */

    case 8:
      x12 = XVECEXP (x4, 0, 0);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x13 = XVECEXP (x4, 0, 1);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x14 = XVECEXP (x4, 0, 2);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x15 = XVECEXP (x4, 0, 3);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x16 = XVECEXP (x4, 0, 4);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x17 = XVECEXP (x4, 0, 5);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x18 = XVECEXP (x4, 0, 6);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x4, 0, 7);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 14]
          || XVECLEN (x7, 0) != 8)
        return -1;
      x20 = XVECEXP (x7, 0, 0);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x21 = XVECEXP (x7, 0, 1);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x22 = XVECEXP (x7, 0, 2);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x23 = XVECEXP (x7, 0, 3);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x24 = XVECEXP (x7, 0, 4);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x25 = XVECEXP (x7, 0, 5);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x26 = XVECEXP (x7, 0, 6);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x27 = XVECEXP (x7, 0, 7);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 15]
          || pattern187 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern207 (rtx x1)
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
  if (!nonimmediate_operand (operands[2], E_QImode))
    return -1;
  return pattern203 (x1); /* [-1, 3] */
}

int
pattern211 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 110)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern210 (x5, 
E_V2SFmode); /* [-1, 0] */
}

int
pattern218 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UMOD)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  x9 = XEXP (x2, 0);
  operands[1] = x9;
  x10 = XEXP (x3, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = XEXP (x3, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      return 0;

    case CONST_INT:
      return 1;

    default:
      return -1;
    }
}

int
pattern227 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 38)
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
  return pattern226 (x1); /* [-1, 1] */
}

int
pattern240 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != PARALLEL)
    return -1;
  return 0;
}

int
pattern245 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x1, 2);
  operands[3] = x4;
  if (!register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern254 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!memory_operand (operands[0], E_HImode)
      || GET_MODE (x2) != E_HImode)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_V2DImode))
    return -1;
  return 0;
}

int
pattern260 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern266 (rtx x1)
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
  return pattern2 (x1); /* [-1, 1] */
}

int
pattern271 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern276 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (XVECLEN (x3, 0) != 2
      || pattern275 (x1, 
E_V4SFmode, 
E_V2SImode, 
1) != 0)
    return -1;
  return 0;
}

int
pattern282 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern281 (x1, pnum_clobbers); /* [-1, 4] */
}

int
pattern286 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (XWINT (x3, 0) != 1L)
    return -1;
  return pattern285 (x1); /* [-1, 2] */
}

int
pattern292 (rtx x1)
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
      return pattern291 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern291 (x1, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern299 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 1);
  operands[2] = x3;
  return pattern298 (x1); /* [-1, 2] */
}

int
pattern304 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
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
      return pattern303 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern303 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern303 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern316 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !float_vector_all_ones_operand (operands[1], i1)
      || !const0_operand (operands[2], i1)
      || !register_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern321 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          return 0;

        case E_V16SImode:
          return 1;

        case E_V8DImode:
          return 2;

        case E_V16HImode:
          return 3;

        case E_V8SImode:
          return 4;

        case E_V4DImode:
          return 5;

        case E_V8HImode:
          return 6;

        case E_V4SImode:
          return 7;

        case E_V2DImode:
          return 8;

        default:
          return -1;
        }

    case VEC_SELECT:
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != PARALLEL
          || XVECLEN (x3, 0) != 2)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x6 = XEXP (x2, 0);
      operands[1] = x6;
      if (!nonimmediate_operand (operands[1], E_V4SFmode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern329 (rtx x1)
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
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      return pattern328 (x1, 
E_V8HImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern328 (x1, 
E_V4SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern334 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !bcst_vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern337 (rtx x1)
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
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V4DImode:
      return pattern336 (x1, 
E_V4DImode); /* [-1, 0] */

    case E_V2DImode:
      if (pattern336 (x1, 
E_V2DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern341 (rtx x1, int *pnum_clobbers, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != i1
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x2, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  return 0;
}

int
pattern346 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern350 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (XVECLEN (x4, 0) != 3)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != UNSPEC
      || XVECLEN (x6, 0) != 3)
    return -1;
  return 0;
}

int
pattern354 (rtx x1)
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
  x6 = XEXP (x3, 1);
  operands[3] = x6;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x7 = XEXP (x2, 1);
  x8 = XEXP (x7, 0);
  operands[4] = x8;
  x9 = XEXP (x1, 1);
  switch (GET_CODE (x9))
    {
    case REG:
    case SUBREG:
      operands[1] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern352 (x1, 
E_DImode, 
E_SImode); /* [-1, 0] */

        case E_TImode:
          if (pattern352 (x1, 
E_TImode, 
E_DImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x10 = XEXP (x9, 0);
      operands[1] = x10;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern353 (x1, 
E_SImode, 
E_DImode) != 0)
            return -1;
          return 2;

        case E_TImode:
          if (pattern353 (x1, 
E_DImode, 
E_TImode) != 0)
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
pattern364 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      return 0;

    case UNSPEC_VOLATILE:
      res = pattern363 (x1, 
i1);
      if (res >= 0)
        return res + 1; /* [1, 4] */
      return -1;

    default:
      return -1;
    }
}

int
pattern370 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      return 0;

    case AND:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_QImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern369 (x1, 
E_SImode) != 0)
            return -1;
          return 1;

        case E_DImode:
          if (pattern369 (x1, 
E_DImode) != 0)
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
pattern384 (machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[3], i2)
      || !nonimmediate_operand (operands[4], i1)
      || !scratch_operand (operands[1], i1)
      || !scratch_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern391 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern390 (x1, 
E_HImode); /* [-1, 0] */

    case E_SImode:
      if (pattern390 (x1, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_DImode:
      if (pattern390 (x1, 
E_DImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern399 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern407 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!int_nonimmediate_operand (operands[1], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || GET_MODE (x2) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || GET_MODE (x2) != E_SImode)
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || GET_MODE (x2) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern419 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != ZERO_EXTRACT)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x3 = XEXP (x1, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern427 (rtx x1, machine_mode i1)
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
      || !register_no_SP_operand (operands[1], i1)
      || !register_operand (operands[3], i1)
      || !immediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern438 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_DImode
          || !nonimmediate_operand (operands[4], E_DImode)
          || !const_0_to_63_operand (operands[2], E_QImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode
          || !nonimmediate_operand (operands[1], E_DImode)
          || !const_0_to_63_operand (operands[3], E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !nonimmediate_operand (operands[4], E_SImode)
          || !const_0_to_31_operand (operands[2], E_QImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !const_0_to_31_operand (operands[3], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern456 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (!rtx_equal_p (x2, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern455 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern455 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern455 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern466 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern469 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[3], i2))
    return -1;
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern477 (rtx x1)
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
  if (!const_0_to_255_operand (operands[3], E_SImode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[4] = x6;
  x7 = XEXP (x1, 2);
  operands[5] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      return pattern476 (x1, 
E_V32HImode, 
E_SImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern476 (x1, 
E_V16SImode, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern476 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern476 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern476 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern476 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern476 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern476 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern476 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern493 (rtx x1, machine_mode i1)
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
pattern494 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  operands[1] = x2;
  x3 = XVECEXP (x1, 0, 2);
  operands[2] = x3;
  x4 = XVECEXP (x1, 0, 0);
  switch (XVECLEN (x4, 0))
    {
    case 16:
      if (GET_MODE (x4) != E_V16QImode)
        return -1;
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
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x13 = XVECEXP (x4, 0, 8);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x14 = XVECEXP (x4, 0, 9);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x15 = XVECEXP (x4, 0, 10);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
        return -1;
      x16 = XVECEXP (x4, 0, 11);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
        return -1;
      x17 = XVECEXP (x4, 0, 12);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
        return -1;
      x18 = XVECEXP (x4, 0, 13);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
        return -1;
      x19 = XVECEXP (x4, 0, 14);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
        return -1;
      x20 = XVECEXP (x4, 0, 15);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 23]
          || pattern493 (x1, 
E_V16QImode) != 0)
        return -1;
      return 0;

    case 8:
      if (GET_MODE (x4) != E_V8HImode)
        return -1;
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
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x10 = XVECEXP (x4, 0, 5);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x11 = XVECEXP (x4, 0, 6);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x12 = XVECEXP (x4, 0, 7);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 11]
          || pattern493 (x1, 
E_V8HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern527 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !permvar_truncate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern532 (rtx x1)
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
      return pattern530 (x1); /* [-1, 11] */

    case IOR:
      res = pattern530 (x1);
      if (res >= 0)
        return res + 12; /* [12, 23] */
      return -1;

    case XOR:
      res = pattern530 (x1);
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
        case E_V64QImode:
          if (pattern531 (x1, 
E_V64QImode) != 0)
            return -1;
          return 36;

        case E_V32QImode:
          if (pattern531 (x1, 
E_V32QImode) != 0)
            return -1;
          return 37;

        case E_V16QImode:
          if (pattern531 (x1, 
E_V16QImode) != 0)
            return -1;
          return 38;

        case E_V32HImode:
          if (pattern531 (x1, 
E_V32HImode) != 0)
            return -1;
          return 39;

        case E_V16HImode:
          if (pattern531 (x1, 
E_V16HImode) != 0)
            return -1;
          return 40;

        case E_V8HImode:
          if (pattern531 (x1, 
E_V8HImode) != 0)
            return -1;
          return 41;

        case E_V16SImode:
          if (pattern531 (x1, 
E_V16SImode) != 0)
            return -1;
          return 42;

        case E_V8SImode:
          if (pattern531 (x1, 
E_V8SImode) != 0)
            return -1;
          return 43;

        case E_V4SImode:
          if (pattern531 (x1, 
E_V4SImode) != 0)
            return -1;
          return 44;

        case E_V8DImode:
          if (pattern531 (x1, 
E_V8DImode) != 0)
            return -1;
          return 45;

        case E_V4DImode:
          if (pattern531 (x1, 
E_V4DImode) != 0)
            return -1;
          return 46;

        case E_V2DImode:
          if (pattern531 (x1, 
E_V2DImode) != 0)
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
pattern545 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_XFmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x9 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern555 (rtx x1)
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
      return pattern554 (x4, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XEXP (x1, 1);
      if (pattern554 (x4, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern560 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern565 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode
      || !nonimmediate_operand (operands[1], E_SImode)
      || !x86_64_general_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern571 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern576 (rtx x1)
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
  if (!const123_operand (operands[2], E_VOIDmode))
    return -1;
  return pattern428 (x1); /* [-1, 1] */
}

int
pattern581 (rtx x1, rtx_code i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern586 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
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
  x9 = XEXP (x2, 0);
  operands[2] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_HFmode:
      return pattern219 (x7, 
E_V8HFmode, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (GET_MODE (x7) != E_SFmode)
        return -1;
      return 1;

    case E_DFmode:
      if (GET_MODE (x7) != E_DFmode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern593 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  operands[1] = x3;
  return pattern592 (x1); /* [-1, 2] */
}

int
pattern598 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (!commutative_operator (x2, E_VOIDmode))
    return -1;
  operands[3] = x2;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!memory_operand (operands[2], E_VOIDmode))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = XEXP (x1, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  return 0;
}

int
pattern603 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_no_SP_operand (operands[1], i1)
      || !const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_int_operand (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern609 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x1) != E_V2SImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_V2HImode:
          if (!register_operand (operands[1], E_V4HImode))
            return -1;
          return 0;

        case E_V2QImode:
          if (!register_operand (operands[1], E_V4QImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V2HImode:
      if (pattern607 (x1, 
E_V4QImode, 
E_V2QImode, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern627 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern632 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
pattern638 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[3] = x3;
      return pattern637 (x1); /* [-1, 28] */

    case NEG:
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      return 29;

    default:
      return -1;
    }
}

int
pattern641 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern646 (rtx x1, machine_mode i1)
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
pattern651 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i3))
    return -1;
  return 0;
}

int
pattern656 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern662 (rtx x1)
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
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      return pattern660 (x1, 
E_V8SImode, 
E_V8SFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern660 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V4DFmode:
      if (pattern660 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
        return -1;
      return 2;

    case E_V2DFmode:
      if (pattern660 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
        return -1;
      return 3;

    case E_V32QImode:
      if (pattern661 (x1, 
E_V32QImode) != 0)
        return -1;
      return 4;

    case E_V16QImode:
      if (pattern661 (x1, 
E_V16QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern672 (rtx x1)
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
pattern709 (rtx x1, int i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != i2
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != i2
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x4, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 0);
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  return 0;
}

int
pattern716 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern721 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != SIGN_EXTEND)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != SIGN_EXTEND)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != i1)
    return -1;
  x8 = XEXP (x2, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCOmode)
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x9) != SET)
    return -1;
  x10 = XEXP (x9, 1);
  if (GET_CODE (x10) != i1
      || GET_MODE (x3) != E_CCOmode)
    return -1;
  x11 = XEXP (x5, 0);
  operands[1] = x11;
  x12 = XEXP (x9, 0);
  operands[0] = x12;
  x13 = XEXP (x7, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = XEXP (x10, 0);
  if (!rtx_equal_p (x14, operands[1]))
    return -1;
  x15 = XEXP (x4, 1);
  switch (GET_CODE (x15))
    {
    case SIGN_EXTEND:
      x16 = XEXP (x15, 0);
      operands[2] = x16;
      x17 = XEXP (x7, 1);
      if (!rtx_equal_p (x17, operands[2]))
        return -1;
      x18 = XEXP (x10, 1);
      if (!rtx_equal_p (x18, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_TImode:
          return pattern719 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

        case E_POImode:
          if (pattern719 (x1, 
E_TImode, 
E_POImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x15;
      x17 = XEXP (x7, 1);
      operands[2] = x17;
      x18 = XEXP (x10, 1);
      if (!rtx_equal_p (x18, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_TImode:
          if (pattern720 (x1, 
E_DImode, 
E_TImode) != 0)
            return -1;
          return 2;

        case E_POImode:
          if (pattern720 (x1, 
E_TImode, 
E_POImode) != 0)
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
pattern751 (rtx x1, machine_mode i1)
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
pattern757 (rtx x1)
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
          return pattern755 (x1, 
E_SImode); /* [-1, 0] */

        case E_DImode:
          if (pattern755 (x1, 
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
          if (pattern756 (x1, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_DImode:
          if (pattern756 (x1, 
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
pattern773 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern778 (rtx x1)
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
      return pattern777 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern777 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern777 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern788 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern799 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern806 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x1, 1);
  if (XVECLEN (x4, 0) < 1)
    return -1;
  operands[3] = x4;
  x5 = XVECEXP (x4, 0, 0);
  operands[4] = x5;
  if (!const_int_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32QImode:
      return pattern802 (x1, 
E_V32QImode, 
E_V64QImode); /* [-1, 0] */

    case E_V64QImode:
      if (pattern802 (x1, 
E_V64QImode, 
E_V128QImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern803 (x1, 
E_V16QImode, 
E_V32QImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern802 (x1, 
E_V32HImode, 
E_V64HImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern802 (x1, 
E_V16HImode, 
E_V32HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern803 (x1, 
E_V8HImode, 
E_V16HImode) != 0)
        return -1;
      return 5;

    case E_V16SImode:
      if (pattern804 (x1, 
E_V16SImode, 
E_V32SImode) != 0)
        return -1;
      return 6;

    case E_V8SImode:
      if (pattern804 (x1, 
E_V8SImode, 
E_V16SImode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x2) != E_V8SImode
          || !const0_operand (operands[2], E_V4SImode))
        return -1;
      return 8;

    case E_V8DImode:
      if (pattern805 (x1, 
E_V8DImode, 
E_V16DImode) != 0)
        return -1;
      return 9;

    case E_V4DImode:
      if (pattern805 (x1, 
E_V4DImode, 
E_V8DImode) != 0)
        return -1;
      return 10;

    case E_V2DImode:
      if (pattern805 (x1, 
E_V2DImode, 
E_V4DImode) != 0)
        return -1;
      return 11;

    case E_V32HFmode:
      if (pattern805 (x1, 
E_V32HFmode, 
E_V64HFmode) != 0)
        return -1;
      return 12;

    case E_V16HFmode:
      if (pattern805 (x1, 
E_V16HFmode, 
E_V32HFmode) != 0)
        return -1;
      return 13;

    case E_V8HFmode:
      if (pattern805 (x1, 
E_V8HFmode, 
E_V16HFmode) != 0)
        return -1;
      return 14;

    case E_V32BFmode:
      if (pattern805 (x1, 
E_V32BFmode, 
E_V64BFmode) != 0)
        return -1;
      return 15;

    case E_V16BFmode:
      if (pattern805 (x1, 
E_V16BFmode, 
E_V32BFmode) != 0)
        return -1;
      return 16;

    case E_V8BFmode:
      if (pattern805 (x1, 
E_V8BFmode, 
E_V16BFmode) != 0)
        return -1;
      return 17;

    case E_V16SFmode:
      if (pattern805 (x1, 
E_V16SFmode, 
E_V32SFmode) != 0)
        return -1;
      return 18;

    case E_V8SFmode:
      if (pattern805 (x1, 
E_V8SFmode, 
E_V16SFmode) != 0)
        return -1;
      return 19;

    case E_V4SFmode:
      if (pattern805 (x1, 
E_V4SFmode, 
E_V8SFmode) != 0)
        return -1;
      return 20;

    case E_V8DFmode:
      if (pattern805 (x1, 
E_V8DFmode, 
E_V16DFmode) != 0)
        return -1;
      return 21;

    case E_V4DFmode:
      if (pattern805 (x1, 
E_V4DFmode, 
E_V8DFmode) != 0)
        return -1;
      return 22;

    case E_V2DFmode:
      if (pattern805 (x1, 
E_V2DFmode, 
E_V4DFmode) != 0)
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern847 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !register_operand (operands[3], i1)
      || !nonmemory_operand (operands[4], i1)
      || !const0_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern851 (rtx x1, machine_mode i1)
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
      || !immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern855 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern859 (rtx x1)
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
      return pattern858 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern858 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern867 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern873 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern872 (x1, 
E_DImode, 
E_V64QImode); /* [-1, 0] */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[3], E_SImode))
        return -1;
      res = pattern869 ();
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern880 (rtx x1, machine_mode i1)
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
pattern889 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern896 (rtx x1, machine_mode i1)
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
      if (!nonimmediate_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern907 (rtx x1, int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != VEC_SELECT
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != i1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern912 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const48_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x2, 2);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[4] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern910 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern910 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V16SFmode:
          if (pattern910 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 2;

        case E_V8SFmode:
          if (pattern910 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 3;

        case E_V8DFmode:
          if (pattern910 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4DFmode:
          if (pattern910 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x7, 0) != 1L)
        return -1;
      operands[3] = x6;
      x8 = XEXP (x2, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern911 (x1, 
E_V8HFmode) != 0)
            return -1;
          return 6;

        case E_V4SFmode:
          if (pattern911 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern911 (x1, 
E_V2DFmode) != 0)
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
pattern932 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern935 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !vector_all_ones_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern941 (rtx x1, machine_mode i1)
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
      || !immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern948 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (XVECLEN (x4, 0))
    {
    case 1:
      if (XINT (x4, 1) != 19)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      return pattern946 (x3); /* [-1, 1] */

    case 4:
      if (XINT (x4, 1) != 22
          || GET_MODE (x4) != E_SImode)
        return -1;
      x6 = XVECEXP (x4, 0, 3);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 7
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 6
          || GET_MODE (x8) != E_SImode
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[3] = x5;
      if (!tls_modbase_operand (operands[3], E_VOIDmode))
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      operands[4] = x9;
      x10 = XVECEXP (x4, 0, 2);
      operands[2] = x10;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x11 = XVECEXP (x8, 0, 0);
      operands[1] = x11;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      return 2;

    case 3:
      if (XINT (x4, 1) != 22)
        return -1;
      x10 = XVECEXP (x4, 0, 2);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 7)
        return -1;
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != CONST)
        return -1;
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 6)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      if (!tls_modbase_operand (operands[2], E_VOIDmode))
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      operands[3] = x9;
      x11 = XVECEXP (x8, 0, 0);
      operands[1] = x11;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern947 (x3, 
E_SImode) != 0)
            return -1;
          return 3;

        case E_DImode:
          if (pattern947 (x3, 
E_DImode) != 0)
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
pattern977 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_BFmode)
      || GET_MODE (x1) != E_BFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V32BFmode:
      if (!nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 0;

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[1], E_V16BFmode))
        return -1;
      return 1;

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[1], E_V8BFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern980 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x1, 1);
  return pattern257 (x5, 
E_SImode, 
E_DImode); /* [-1, 1] */
}

int
pattern984 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8QImode:
      if (!register_operand (operands[1], E_V8QImode)
          || !const_0_to_7_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case E_V4QImode:
      if (!register_operand (operands[1], E_V4QImode)
          || !const_0_to_3_operand (operands[2], E_SImode))
        return -1;
      return 1;

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const_0_to_15_operand (operands[2], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern990 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !nonimm_or_0_operand (operands[1], E_V64QImode)
          || !nonimm_or_0_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V32QImode:
          if (!nonimm_or_0_operand (operands[1], E_V32QImode)
              || !nonimm_or_0_operand (operands[2], E_V32QImode))
            return -1;
          return 1;

        case E_V32HImode:
          if (!nonimm_or_0_operand (operands[1], E_V32HImode)
              || !nonimm_or_0_operand (operands[2], E_V32HImode))
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
pattern1002 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1011 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1020 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern1019 (x1, 
E_V16SFmode, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[1], E_V8SFmode))
            return -1;
          return 1;

        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V4SImode:
      if (pattern1019 (x1, 
E_V4DFmode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode))
            return -1;
          return 4;

        case E_V8SFmode:
          if (!register_operand (operands[1], E_V8SFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V4DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DFmode:
          if (!register_operand (operands[1], E_V4DFmode))
            return -1;
          return 6;

        case E_V4SFmode:
          if (!register_operand (operands[1], E_V4SFmode))
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
pattern1048 (rtx x1, machine_mode i1)
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
pattern1052 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2SFmode)
      || GET_MODE (x1) != E_V2SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SFmode
      || !register_operand (operands[1], E_V2SFmode)
      || !nonimmediate_operand (operands[2], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern1055 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !const_int_operand (operands[2], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1060 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode
      || !register_operand (operands[1], E_XFmode))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  return pattern547 (x5); /* [-1, 2] */
}

int
pattern1066 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1070 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[4] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      return pattern1069 (x1, 
E_HImode); /* [-1, 0] */

    case E_QImode:
      if (pattern1069 (x1, 
E_QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1077 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !ix86_carry_flag_operator (operands[2], i1)
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1086 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1085 (x2); /* [-1, 11] */
}

int
pattern1091 (rtx x1, machine_mode i1)
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
pattern1096 (rtx x1, machine_mode i1)
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
pattern1100 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1106 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1114 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1)
      || !avx2_pblendw_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern1121 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
      || !nonimmediate_operand (operands[2], i3))
    return -1;
  x4 = XEXP (x2, 1);
  return pattern1120 (x4, 
i1, 
i2, 
i3, 
i4); /* [-1, 0] */
}

int
pattern1127 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[3], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1134 (rtx x1, machine_mode i1)
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
pattern1139 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1149 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 0);
  operands[5] = x5;
  x6 = XVECEXP (x3, 0, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x7 = XVECEXP (x3, 0, 2);
  operands[3] = x7;
  x8 = XVECEXP (x3, 0, 3);
  operands[4] = x8;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 0);
  operands[1] = x10;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern1148 (x3, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1148 (x3, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1160 (rtx x1)
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
      return pattern1158 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1158 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern1159 (x1, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern1159 (x1, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1177 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x3;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
          || GET_MODE (x1) != E_QImode)
        return -1;
      x6 = XEXP (x3, 0);
      if (!int248_register_operand (x6, E_VOIDmode))
        return -1;
      return 0;

    default:
      return -1;
    }
}

int
pattern1189 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != MINUS)
    return -1;
  x7 = XEXP (x2, 0);
  if (GET_MODE (x7) != E_CCmode
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!memory_operand (operands[2], i1))
    return -1;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x6, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

int
pattern1198 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode
      || !ix86_comparison_operator (operands[1], E_VOIDmode)
      || !register_operand (operands[2], E_QImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern1202 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1207 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1215 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1222 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1232 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1236 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != i1
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != E_SImode)
    return -1;
  return 0;
}

int
pattern1241 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  if (!register_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1242 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
      operands[3] = x3;
      x4 = XEXP (x1, 0);
      x5 = XEXP (x4, 0);
      operands[4] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x2, 0);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || GET_MODE (x1) != E_DImode
              || GET_MODE (x4) != E_DImode
              || !nonimmediate_operand (operands[4], E_DImode)
              || !const_0_to_63_operand (operands[2], E_QImode)
              || GET_MODE (x2) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !const_0_to_63_operand (operands[3], E_QImode))
            return -1;
          return 0;

        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || GET_MODE (x1) != E_SImode
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[4], E_SImode)
              || !const_0_to_31_operand (operands[2], E_QImode)
              || GET_MODE (x2) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !const_0_to_31_operand (operands[3], E_QImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case MINUS:
      if (GET_MODE (x3) != E_QImode)
        return -1;
      x8 = XEXP (x3, 0);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x4 = XEXP (x1, 0);
      x6 = XEXP (x4, 1);
      if (!nonmemory_operand (x6, E_QImode))
        return -1;
      switch (XWINT (x8, 0))
        {
        case 64L:
          if (pattern1241 (x1, 
E_DImode) != 0)
            return -1;
          return 2;

        case 32L:
          if (pattern1241 (x1, 
E_SImode) != 0)
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
pattern1273 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1281 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1290 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  operands[5] = x3;
  if (!const_0_to_31_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SImode:
      return pattern1289 (x1, 
E_V8SFmode, 
E_V8SImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern1289 (x1, 
E_V4SFmode, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V4DImode:
      if (pattern1289 (x1, 
E_V4DFmode, 
E_V4DImode) != 0)
        return -1;
      return 2;

    case E_V2DImode:
      if (pattern1289 (x1, 
E_V2DFmode, 
E_V2DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1305 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern1304 (x1, 
E_HImode, 
E_V16SImode, 
E_V16SFmode); /* [-1, 0] */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_MODE (x3) != E_V8SImode
          || !nonimm_or_0_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[1], E_V8SFmode))
            return -1;
          return 1;

        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_V4SImode:
      if (pattern1304 (x1, 
E_QImode, 
E_V4SImode, 
E_V4DFmode) != 0)
        return -1;
      return 3;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_MODE (x3) != E_V8DImode
          || !nonimm_or_0_operand (operands[2], E_V8DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode))
            return -1;
          return 4;

        case E_V8SFmode:
          if (!register_operand (operands[1], E_V8SFmode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_MODE (x2) != E_V4DImode)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_MODE (x3) != E_V4DImode
          || !nonimm_or_0_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DFmode:
          if (!register_operand (operands[1], E_V4DFmode))
            return -1;
          return 6;

        case E_V4SFmode:
          if (!register_operand (operands[1], E_V4SFmode))
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
pattern1347 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[3] = x3;
  if (!general_gr_operand (operands[3], i1))
    return -1;
  x4 = PATTERN (peep2_next_insn (3));
  return pattern962 (x4, 
i1); /* [-1, 0] */
}

int
pattern1353 ()
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
pattern1360 (rtx x1)
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
pattern1370 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!nonimmediate_operand (operands[2], i2))
    return -1;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  if (!register_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x1, 1);
  operands[3] = x7;
  if (!nonimm_or_0_operand (operands[3], i1))
    return -1;
  x8 = XEXP (x1, 2);
  operands[4] = x8;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1384 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1393 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1404 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1411 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern1418 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x4 = XEXP (x1, 1);
  operands[3] = x4;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      return pattern1417 (x1); /* [-1, 2] */

    case IOR:
      res = pattern1417 (x1);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    case XOR:
      res = pattern1417 (x1);
      if (res >= 0)
        return res + 6; /* [6, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1431 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x7 = XEXP (x3, 1);
  operands[1] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern1430 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern1430 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1445 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vm_operator (operands[6], i1))
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
pattern1452 (rtx x1, machine_mode i1)
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
pattern1459 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1470 (rtx x1)
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
pattern1477 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8SImode)
      || GET_MODE (x1) != E_V8SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SImode
      || !nonimm_or_0_operand (operands[2], E_V8SImode)
      || !register_operand (operands[3], E_QImode))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 1;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1487 (machine_mode i1)
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
pattern1496 (rtx x1, machine_mode i1)
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
      || !const_int_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1506 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (maybe_ne (SUBREG_BYTE (x1), 0)
      || GET_MODE (x1) != E_QImode
      || !nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1164 (x2); /* [-1, 2] */
}

int
pattern1509 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  x5 = XEXP (x4, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[1] = x6;
  return 0;
}

int
pattern1518 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x3, 2);
      operands[4] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[5] = x6;
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
      operands[4] = x4;
      x5 = XEXP (x3, 2);
      operands[5] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[6] = x6;
      x7 = XEXP (x2, 1);
      if (!rtx_equal_p (x7, operands[1]))
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
pattern1540 (rtx x1, machine_mode i1)
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
pattern1546 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1550 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1558 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SFmode
      || !nonimmediate_operand (operands[1], E_V4SFmode))
    return -1;
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], E_V4SFmode))
    return -1;
  return 0;
}

int
pattern1569 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1579 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !x86_64_sext_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1582 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1590 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1589 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1600 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1610 (machine_mode i1)
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
pattern1618 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1626 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1633 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1643 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1652 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[4], i1))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_V8SImode:
      if (!register_operand (operands[3], E_V8SImode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[3], E_V8DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1661 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[3], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1671 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[5], i1)
      || !register_operand (operands[6], i3))
    return -1;
  return 0;
}

int
pattern1684 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != SUBREG
      || maybe_ne (SUBREG_BYTE (x3), 0)
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
      return pattern1043 (x1); /* [-1, 5] */

    default:
      return -1;
    }
}

int
pattern1694 ()
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
pattern1701 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V16SImode:
      if (!register_operand (operands[2], E_V16SImode)
          || !register_operand (operands[6], E_HImode)
          || !register_operand (operands[3], E_V16SFmode))
        return -1;
      return 0;

    case E_V8DImode:
      if (!register_operand (operands[2], E_V8DImode)
          || !register_operand (operands[6], E_QImode)
          || !register_operand (operands[3], E_V8SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1713 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1721 (machine_mode i1)
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

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1728 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
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
  if (!nonimmediate_operand (operands[3], E_V16QImode))
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  operands[4] = x6;
  if (!const_0_to_255_operand (operands[4], E_SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], E_V16QImode))
    return -1;
  x9 = XEXP (x7, 1);
  x10 = XVECEXP (x9, 0, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  x11 = XVECEXP (x9, 0, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return -1;
  x12 = XVECEXP (x9, 0, 2);
  if (!rtx_equal_p (x12, operands[4]))
    return -1;
  x13 = XVECEXP (x1, 0, 2);
  x14 = XEXP (x13, 1);
  x15 = XVECEXP (x14, 0, 0);
  if (!rtx_equal_p (x15, operands[2]))
    return -1;
  x16 = XVECEXP (x14, 0, 1);
  if (!rtx_equal_p (x16, operands[3]))
    return -1;
  x17 = XVECEXP (x14, 0, 2);
  if (!rtx_equal_p (x17, operands[4]))
    return -1;
  return 0;
}

int
pattern1747 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1746 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1746 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1761 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  if (!constm1_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 2
      || XINT (x3, 1) != 110
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PLUS
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 17
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XVECEXP (x3, 0, 0);
  operands[1] = x8;
  if (!memory_operand (operands[1], i1))
    return -1;
  x9 = XVECEXP (x3, 0, 1);
  operands[4] = x9;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x10 = XEXP (x2, 0);
  if (!rtx_equal_p (x10, operands[0]))
    return -1;
  x11 = XEXP (x5, 0);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  x12 = XEXP (x5, 1);
  if (!rtx_equal_p (x12, operands[0]))
    return -1;
  x13 = XEXP (x4, 0);
  if (!rtx_equal_p (x13, operands[1]))
    return -1;
  x14 = PATTERN (peep2_next_insn (2));
  x15 = XEXP (x14, 1);
  x16 = XEXP (x15, 1);
  operands[3] = x16;
  if (!const_int_operand (operands[3], i1))
    return -1;
  x17 = XEXP (x15, 0);
  if (!rtx_equal_p (x17, operands[0]))
    return -1;
  return 0;
}

int
pattern1782 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_DImode)
    return -1;
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      x2 = XEXP (x1, 0);
      operands[4] = x2;
      if (!nonimmediate_gr_operand (operands[4], E_SImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      x2 = XEXP (x1, 0);
      operands[4] = x2;
      if (!nonimmediate_gr_operand (operands[4], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1791 (machine_mode i1)
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
pattern1799 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1
      || !register_operand (operands[0], i1))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1813 (rtx x1, machine_mode i1)
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
pattern1821 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || pattern1547 (x1, 
E_V8SFmode, 
E_V16SFmode) != 0)
        return -1;
      return 0;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || pattern1547 (x1, 
E_V8SImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1828 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i4
      || !register_operand (operands[1], i3))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i4
      || !vector_operand (operands[2], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1835 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i2)
      || !register_operand (operands[4], i2))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1842 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 22);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 23);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 24);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 25);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 26);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1851 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 8);
  if (XWINT (x2, 0) != 12L)
    return -1;
  x3 = XVECEXP (x1, 0, 9);
  if (XWINT (x3, 0) != 28L)
    return -1;
  x4 = XVECEXP (x1, 0, 10);
  if (XWINT (x4, 0) != 13L)
    return -1;
  x5 = XVECEXP (x1, 0, 11);
  if (XWINT (x5, 0) != 29L)
    return -1;
  return 0;
}

int
pattern1857 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[5], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i2
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  return 0;
}

int
pattern1864 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 12);
  if (XWINT (x3, 0) != 14L)
    return -1;
  x4 = XVECEXP (x2, 0, 13);
  if (XWINT (x4, 0) != 30L)
    return -1;
  x5 = XVECEXP (x2, 0, 14);
  if (XWINT (x5, 0) != 15L)
    return -1;
  x6 = XVECEXP (x2, 0, 15);
  if (XWINT (x6, 0) != 31L)
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 1);
  operands[2] = x8;
  return 0;
}

int
pattern1868 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 12);
  if (XWINT (x4, 0) != 14L)
    return -1;
  x5 = XVECEXP (x3, 0, 13);
  if (XWINT (x5, 0) != 30L)
    return -1;
  x6 = XVECEXP (x3, 0, 14);
  if (XWINT (x6, 0) != 15L)
    return -1;
  x7 = XVECEXP (x3, 0, 15);
  if (XWINT (x7, 0) != 31L)
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
pattern1876 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !sext_operand (operands[2], i1)
      || pattern1875 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1883 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!nonimmediate_operand (operands[1], E_V8HImode))
    return -1;
  x7 = XEXP (x3, 1);
  x8 = XEXP (x7, 0);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  if (!nonimmediate_operand (operands[2], E_V8HImode))
    return -1;
  x10 = XEXP (x1, 1);
  operands[3] = x10;
  if (!register_operand (operands[3], E_V4SImode))
    return -1;
  x11 = XEXP (x2, 1);
  x12 = XEXP (x11, 0);
  x13 = XEXP (x12, 0);
  x14 = XEXP (x13, 0);
  if (!rtx_equal_p (x14, operands[1]))
    return -1;
  x15 = XEXP (x11, 1);
  x16 = XEXP (x15, 0);
  x17 = XEXP (x16, 0);
  if (!rtx_equal_p (x17, operands[2]))
    return -1;
  return 0;
}

 int
recog_5 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 17)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      return recog_4 (x1, insn, pnum_clobbers);

    case MINUS:
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x4, 0);
      operands[0] = x6;
      x7 = XEXP (x4, 1);
      operands[1] = x7;
      switch (GET_MODE (x4))
        {
        case E_QImode:
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 1600 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 17; /* *cmpqi_minus_1 */

        case E_HImode:
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 1600 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 18; /* *cmphi_minus_1 */

        case E_SImode:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || !x86_64_general_operand (operands[1], E_SImode)
              || !
#line 1600 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)))
            return -1;
          return 19; /* *cmpsi_minus_1 */

        case E_DImode:
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !x86_64_general_operand (operands[1], E_DImode)
              || !(
#line 1600 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 20; /* *cmpdi_minus_1 */

        default:
          return -1;
        }

    case NEG:
      if (GET_MODE (x4) != E_QImode
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_MODE (x6) != E_QImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_MODE (x5) != E_QImode)
        return -1;
      switch (GET_CODE (x6))
        {
        case LTU:
          x8 = XEXP (x6, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17
              || GET_MODE (x8) != E_CCCmode)
            return -1;
          x9 = XEXP (x6, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || GET_CODE (x5) != GEU)
            return -1;
          x10 = XEXP (x5, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 17
              || GET_MODE (x10) != E_CCCmode)
            return -1;
          x11 = XEXP (x5, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 64; /* *x86_cmc */

        case GEU:
          x8 = XEXP (x6, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17)
            return -1;
          x9 = XEXP (x6, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || GET_CODE (x5) != LTU)
            return -1;
          x10 = XEXP (x5, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 17)
            return -1;
          x11 = XEXP (x5, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (GET_MODE (x8))
            {
            case E_CCmode:
              if (GET_MODE (x10) != E_CCmode
                  || !
#line 9873 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 527; /* *setcc_qi_addqi3_cconly_overflow_1_cc */

            case E_CCCmode:
              if (GET_MODE (x10) != E_CCCmode
                  || !
#line 9873 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
                return -1;
              return 528; /* *setcc_qi_addqi3_cconly_overflow_1_ccc */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x3, 1);
      if (pattern415 (x5, 
E_CCmode, 
PLUS) != 0
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x11 = XEXP (x5, 1);
      switch (GET_CODE (x11))
        {
        case ZERO_EXTEND:
          x12 = XEXP (x11, 0);
          operands[2] = x12;
          switch (GET_MODE (x4))
            {
            case E_DImode:
              if (pattern1579 (x5, 
E_SImode, 
E_DImode) != 0
                  || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 517; /* subsi3_carry_ccc */

            case E_TImode:
              if (pattern1579 (x5, 
E_DImode, 
E_TImode) != 0
                  || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 518; /* subdi3_carry_ccc */

            default:
              return -1;
            }

        case CONST_INT:
        case CONST_WIDE_INT:
          operands[2] = x11;
          switch (GET_MODE (x4))
            {
            case E_DImode:
              if (pattern1580 (x5, 
E_DImode, 
E_SImode) != 0
                  || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 519; /* *subsi3_carry_ccc_1 */

            case E_TImode:
              if (pattern1580 (x5, 
E_TImode, 
E_DImode) != 0
                  || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 520; /* *subdi3_carry_ccc_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x5 = XEXP (x3, 1);
      if (!rtx_equal_p (x5, operands[1]))
        return -1;
      switch (pattern47 (x4))
        {
        case 0:
          if (!
#line 9931 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 534; /* *addqi3_cconly_overflow_1 */

        case 1:
          if (!
#line 9931 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 535; /* *addhi3_cconly_overflow_1 */

        case 2:
          if (!
#line 9931 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 536; /* *addsi3_cconly_overflow_1 */

        case 3:
          if (!(
#line 9931 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 537; /* *adddi3_cconly_overflow_1 */

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[0] = x6;
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode)
            return -1;
          x7 = XEXP (x4, 1);
          operands[1] = x7;
          if (!general_operand (operands[1], E_TImode)
              || !
#line 12190 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_pre_reload_split ()))
            return -1;
          return 693; /* *testti_doubleword */

        case NOT:
          switch (pattern845 (x4))
            {
            case 0:
              if (!
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 697; /* *testqi_not */

            case 1:
              if (!
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 698; /* *testhi_not */

            case 2:
              if (!
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))))
                return -1;
              return 699; /* *testsi_not */

            case 3:
              if (register_operand (operands[0], E_DImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_DImode)
                  && (
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 700; /* *testdi_not */
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 12338 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 701; /* *testdi_not_doubleword */

            case 4:
              if (!(
#line 12338 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 702; /* *testti_not_doubleword */

            default:
              return -1;
            }

        case PLUS:
          if (pnum_clobbers == NULL)
            return -1;
          x9 = XEXP (x6, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          switch (pattern754 (x4))
            {
            case 0:
              if (!
#line 21999 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1588; /* *bmi_blsr_si_ccz */

            case 1:
              if (!(
#line 21999 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1589; /* *bmi_blsr_di_ccz */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x4, 0) != 0L)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != ZERO_EXTRACT)
        return -1;
      x11 = XEXP (x5, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || GET_MODE (x2) != E_CCCmode
          || GET_MODE (x3) != E_CCCmode)
        return -1;
      x10 = XEXP (x5, 0);
      operands[0] = x10;
      x13 = XEXP (x5, 2);
      operands[1] = x13;
      if (nonmemory_operand (operands[1], E_QImode))
        {
          switch (GET_MODE (x5))
            {
            case E_SImode:
              if (nonimmediate_operand (operands[0], E_SImode))
                return 1416; /* *btsi */
              break;

            case E_DImode:
              if (nonimmediate_operand (operands[0], E_DImode)
                  && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 1417; /* *btdi */
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
      switch (pattern1449 (x5))
        {
        case 0:
          if (!
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1418; /* *btsi_mask */

        case 1:
          if (!
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1420; /* *btsi_mask */

        case 2:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1422; /* *btsi_mask */

        case 3:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1419; /* *btdi_mask */

        case 4:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1421; /* *btdi_mask */

        case 5:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1423; /* *btdi_mask */

        default:
          return -1;
        }

    case UNSPEC:
      if (GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 2:
          if (pnum_clobbers == NULL
              || XINT (x4, 1) != 98)
            return -1;
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XVECEXP (x4, 0, 0);
          operands[1] = x15;
          x16 = XVECEXP (x4, 0, 1);
          operands[2] = x16;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !register_operand (operands[2], E_SImode)
                  || !
#line 21748 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                return -1;
              *pnum_clobbers = 1;
              return 1568; /* *bmi_bextr_si_ccz */

            case E_DImode:
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !register_operand (operands[2], E_DImode)
                  || !(
#line 21748 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1569; /* *bmi_bextr_di_ccz */

            default:
              return -1;
            }

        case 1:
          if (XINT (x4, 1) != 49
              || GET_MODE (x4) != E_SImode)
            return -1;
          x15 = XVECEXP (x4, 0, 0);
          if (GET_CODE (x15) != VEC_MERGE)
            return -1;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          if (!const_int_operand (operands[2], E_VOIDmode))
            return -1;
          switch (pattern1262 (x15))
            {
            case 0:
              if (!(
#line 22429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffffffff) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8579; /* *pmovsk_mask_cmp_v32qi_avx512 */

            case 1:
              if (!
#line 22429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && UINTVAL (operands[2]) <= 0xffff))
                return -1;
              return 8580; /* *pmovsk_mask_cmp_v16qi_avx512 */

            case 2:
              if (!(
#line 22452 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffffffff))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 8581; /* *pmovsk_ptest_v32qi_avx512 */

            case 3:
              if (!
#line 22452 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && (INTVAL (operands[2]) == (int) (0xffff))))
                return -1;
              return 8582; /* *pmovsk_ptest_v16qi_avx512 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != NE
          || GET_MODE (x6) != E_QImode)
        return -1;
      x9 = XEXP (x6, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != ZERO_EXTRACT)
        return -1;
      x17 = XEXP (x7, 1);
      if (GET_CODE (x17) != UMIN
          || GET_MODE (x17) != E_QImode)
        return -1;
      x18 = XEXP (x7, 2);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XEXP (x4, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CCZmode
          || GET_MODE (x3) != E_CCZmode)
        return -1;
      x8 = XEXP (x6, 0);
      operands[2] = x8;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x20 = XEXP (x7, 0);
      operands[1] = x20;
      x21 = XEXP (x17, 1);
      operands[3] = x21;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x22 = XEXP (x17, 0);
      if (!rtx_equal_p (x22, operands[2]))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_SImode:
          if (GET_MODE (x7) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22055 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          *pnum_clobbers = 1;
          return 1592; /* *bmi2_bzhi_si3_1_ccz */

        case E_DImode:
          if (GET_MODE (x7) != E_DImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !(
#line 22055 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1593; /* *bmi2_bzhi_di3_1_ccz */

        default:
          return -1;
        }

    case VEC_SELECT:
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != PARALLEL
          || XVECLEN (x7, 0) != 1)
        return -1;
      x23 = XVECEXP (x7, 0, 0);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x3, 1);
      if (pattern247 (x5) != 0
          || GET_MODE (x2) != E_CCFPmode
          || GET_MODE (x3) != E_CCFPmode)
        return -1;
      x6 = XEXP (x4, 0);
      operands[0] = x6;
      x10 = XEXP (x5, 0);
      operands[1] = x10;
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
          return 3682; /* avx512fp16_comi */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x5) != E_SFmode
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode))
            return -1;
          return 3686; /* sse_comi */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x5) != E_DFmode
              || !nonimmediate_operand (operands[1], E_V2DFmode)
              || !
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode))
            return -1;
          return 3690; /* sse2_comi */

        case E_BFmode:
          if (!register_operand (operands[0], E_V8BFmode)
              || GET_MODE (x5) != E_BFmode
              || !nonimmediate_operand (operands[1], E_V8BFmode)
              || !
#line 4888 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 3694; /* avx10_2_comisbf16_v8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_25 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x6;
          switch (pattern69 (x2))
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
              return 145; /* *insvti_highpart_1 */

            case 1:
              if (!
#line 3726 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && CONST_WIDE_INT_P (operands[3])
   && CONST_WIDE_INT_NUNITS (operands[3]) == 2
   && CONST_WIDE_INT_ELT (operands[3], 0) == 0
   && CONST_WIDE_INT_ELT (operands[3], 1) == -1))
                return -1;
              return 148; /* *insvti_lowpart_1 */

            case 2:
              if (!
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll))
                return -1;
              return 151; /* *insvdi_lowpart_1 */

            default:
              return -1;
            }

        case XOR:
          if (pnum_clobbers == NULL
              || GET_MODE (x6) != E_HImode
              || !register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          x7 = XEXP (x6, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_HImode))
            return -1;
          x8 = XEXP (x6, 1);
          operands[2] = x8;
          if (!nonimmediate_operand (operands[2], E_HImode)
              || !nonimmediate_operand (operands[3], E_HImode))
            return -1;
          x9 = XEXP (x2, 1);
          if (!rtx_equal_p (x9, operands[1])
              || !
#line 13684 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 840; /* *xor2andn */

        default:
          return -1;
        }

    case ASHIFT:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x6 = XEXP (x3, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          switch (pattern606 (x2))
            {
            case 0:
              if (!
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 373; /* *leaqi_general_4 */

            case 1:
              if (!
#line 8015 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < (HOST_WIDE_INT_1U << INTVAL (operands[2])))))
                return -1;
              return 375; /* *leahi_general_4 */

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
              return 933; /* *concatditi3_5 */

            case 3:
              if (!(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 897; /* *concatditi3_1 */

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
              return 912; /* *concatditi3_3 */

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
              return 942; /* *concatditi3_6 */

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
              return 915; /* *concatditi3_3 */

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
              return 945; /* *concatditi3_6 */

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
              return 727; /* *xorqi_1_slp */
            }
          break;

        case 1:
          if (
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 730; /* *xorhi_1_slp */
            }
          break;

        case 2:
          if ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 822; /* *xorti3_doubleword */
            }
          break;

        case 3:
          if (
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 825; /* *xorhi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 13585 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 826; /* *xorhi_1 */
            }
          break;

        case 4:
          if (
#line 1357 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return 2079; /* xorv2sf3 */
          break;

        case 5:
          if (
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2113; /* xorv2bf3 */
          break;

        case 6:
          if ((
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2116; /* xorv4bf3 */
          break;

        case 7:
          if (
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return 2119; /* xorv2hf3 */
          break;

        case 8:
          if ((
#line 2582 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return 2122; /* xorv4hf3 */
          break;

        case 9:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V8QImode, operands)))
            return 2276; /* *mmx_xorv8qi3 */
          break;

        case 10:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V4HImode, operands)))
            return 2279; /* *mmx_xorv4hi3 */
          break;

        case 11:
          if (
#line 4687 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (XOR, V2SImode, operands)))
            return 2282; /* *mmx_xorv2si3 */
          break;

        case 12:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V4QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2285; /* *xorv4qi3 */
            }
          break;

        case 13:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2QImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2288; /* *xorv2qi3 */
            }
          break;

        case 14:
          if (
#line 4713 "../../src/gcc/config/i386/mmx.md"
(ix86_binary_operator_ok (XOR, V2HImode, operands)))
            {
              *pnum_clobbers = 1;
              return 2291; /* *xorv2hi3 */
            }
          break;

        case 15:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3787; /* xorbf3 */
          break;

        case 16:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3790; /* xorhf3 */
          break;

        case 17:
          if (
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 3793; /* xorsf3 */
          break;

        case 18:
          if ((
#line 5662 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1352 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2)))
            return 3796; /* xordf3 */
          break;

        case 19:
          if (
#line 5736 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 3799; /* *xortf3 */
          break;

        default:
          break;
        }
      if (pnum_clobbers != NULL
          && pattern77 (x2) == 0)
        {
          x6 = XEXP (x3, 0);
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (pattern1265 (x1))
            {
            case 0:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 733; /* *xorqi_exthi_1_slp */
                }
              break;

            case 1:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 736; /* *xorqi_extsi_1_slp */
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
                  return 739; /* *xorqi_extdi_1_slp */
                }
              break;

            case 3:
              *pnum_clobbers = 1;
              return 757; /* *xorqi_exthi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 760; /* *xorqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                {
                  *pnum_clobbers = 1;
                  return 763; /* *xorqi_extdi_0 */
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
                      return 742; /* *xorqi_exthi_2_slp */
                    }
                  break;

                case 1:
                  if (
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                    {
                      *pnum_clobbers = 1;
                      return 745; /* *xorqi_extsi_2_slp */
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
                      return 748; /* *xorqi_extdi_2_slp */
                    }
                  break;

                case 3:
                  *pnum_clobbers = 1;
                  return 766; /* *xorqi_ext2hi_0 */

                case 4:
                  *pnum_clobbers = 1;
                  return 769; /* *xorqi_ext2si_0 */

                case 5:
                  if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    {
                      *pnum_clobbers = 1;
                      return 772; /* *xorqi_ext2di_0 */
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
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 869; /* *xorqi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 13775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 870; /* *xorqi_1 */

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
          return 903; /* *concatditi3_2 */

        case 1:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 924; /* *concatditi3_4 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 927; /* *concatditi3_4 */

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
          return 951; /* *concatditi3_7 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_42 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x4 = XEXP (x2, 1);
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
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          if (pnum_clobbers != NULL
              && GET_CODE (x4) == SUBREG
              && pattern421 (x1, 
E_TImode) == 0
              && (
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1053; /* *ashlti3_doubleword_mask */
            }
          operands[2] = x4;
          switch (pattern256 (x1, pnum_clobbers))
            {
            case 0:
              switch (GET_MODE (operands[0]))
                {
                case E_TImode:
                  if (pnum_clobbers == NULL
                      || !register_operand (operands[0], E_TImode)
                      || GET_MODE (x2) != E_TImode
                      || !reg_or_pm1_operand (operands[1], E_TImode)
                      || !nonmemory_operand (operands[2], E_QImode)
                      || !
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1057; /* ashlti3_doubleword */

                case E_HImode:
                  if (pattern623 (x2, 
E_HImode) != 0)
                    return -1;
                  if (
#line 16095 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1104; /* *ashlhi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16095 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1105; /* *ashlhi3_1 */

                case E_QImode:
                  if (pattern623 (x2, 
E_QImode) != 0)
                    return -1;
                  if (
#line 16154 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                    return 1106; /* *ashlqi3_1_nf */
                  if (pnum_clobbers == NULL
                      || !
#line 16154 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands, TARGET_APX_NDD)
   && true))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1107; /* *ashlqi3_1 */

                case E_V4HImode:
                  if (pattern738 (x2, 
E_V4HImode, 
E_DImode) != 0
                      || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2202; /* mmx_ashlv4hi3 */

                case E_V2SImode:
                  if (pattern738 (x2, 
E_V2SImode, 
E_DImode) != 0
                      || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2204; /* mmx_ashlv2si3 */

                case E_V1DImode:
                  if (pattern738 (x2, 
E_V1DImode, 
E_DImode) != 0
                      || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                    return -1;
                  return 2206; /* mmx_ashlv1di3 */

                case E_V1SImode:
                  if (pattern738 (x2, 
E_V1SImode, 
E_DImode) != 0
                      || !
#line 3928 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2208; /* mmx_ashlv1si3 */

                case E_V2HImode:
                  if (pattern738 (x2, 
E_V2HImode, 
E_DImode) != 0
                      || !
#line 3945 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                    return -1;
                  return 2210; /* ashlv2hi3 */

                case E_V2QImode:
                  if (pnum_clobbers == NULL
                      || pattern738 (x2, 
E_V2QImode, 
E_QImode) != 0
                      || !
#line 4007 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
                    return -1;
                  *pnum_clobbers = 1;
                  return 2214; /* ashlv2qi3 */

                default:
                  return -1;
                }

            case 1:
              if (!
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1108; /* *ashlqi3_1_slp */

            case 2:
              if (!
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 1109; /* *ashlhi3_1_slp */

            default:
              return -1;
            }

        case AND:
          if (pattern0 (x1, pnum_clobbers) != 0
              || !(
#line 15264 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1055; /* *ashlti3_doubleword_mask_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pattern42 (x1, pnum_clobbers) != 0
          || !(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1060; /* *ashlti3_doubleword_highpart */

    case ZERO_EXTEND:
      if (pattern42 (x1, pnum_clobbers) != 0
          || !(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 8 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 8 * BITS_PER_UNIT * 2) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1061; /* *ashlti3_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_50 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LTU:
      switch (pattern43 (x1))
        {
        case 0:
          if (
#line 9893 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
            return 530; /* *setcc_qi_negqi_ccc_1_cc */
          break;

        case 1:
          if (
#line 9893 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()))
            return 531; /* *setcc_qi_negqi_ccc_1_ccc */
          break;

        default:
          break;
        }
      break;

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
      res = recog_48 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG
      && REGNO (x3) == 17)
    {
      res = recog_49 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  switch (GET_CODE (operands[1]))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      operands[2] = x3;
      x5 = XEXP (x2, 1);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern745 (
E_V8QImode) != 0
              || !
#line 4218 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2235; /* *xop_maskcmp_unsv8qi3 */

        case E_V4HImode:
          if (pattern745 (
E_V4HImode) != 0
              || !
#line 4218 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2236; /* *xop_maskcmp_unsv4hi3 */

        case E_V2SImode:
          if (pattern745 (
E_V2SImode) != 0
              || !
#line 4218 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2237; /* *xop_maskcmp_unsv2si3 */

        case E_V4QImode:
          if (pattern745 (
E_V4QImode) != 0
              || !
#line 4228 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2238; /* *xop_maskcmp_unsv4qi3 */

        case E_V2QImode:
          if (pattern745 (
E_V2QImode) != 0
              || !
#line 4228 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2239; /* *xop_maskcmp_unsv2qi3 */

        case E_V2HImode:
          if (pattern745 (
E_V2HImode) != 0
              || !
#line 4228 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
            return -1;
          return 2240; /* *xop_maskcmp_unsv2hi3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_58 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      res = recog_53 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MINUS:
      res = recog_56 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case MULT:
      res = recog_57 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case DIV:
      if (GET_MODE (x2) == E_HFmode)
        {
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          if (register_operand (operands[0], E_HFmode))
            {
              x4 = XEXP (x2, 0);
              operands[1] = x4;
              if (nonimmediate_operand (operands[1], E_HFmode))
                {
                  x5 = XEXP (x2, 1);
                  operands[2] = x5;
                  if (nonimmediate_operand (operands[2], E_HFmode)
                      && 
#line 23445 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return 1679; /* *divhf */
                }
            }
        }
      break;

    default:
      break;
    }
  operands[3] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !binary_fp_operator (operands[3], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !register_operand (operands[2], E_XFmode))
                return -1;
              if (
#line 23397 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])))
                return 1673; /* *fop_xf_comm_i387 */
              if (!
#line 23495 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3])))
                return -1;
              return 1682; /* *fop_xf_1_i387 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || !binary_fp_operator (operands[3], E_SFmode)
                  || !nonimmediate_operand (operands[2], E_SFmode))
                return -1;
              if (nonimmediate_operand (operands[1], E_SFmode)
                  && 
#line 23411 "../../src/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 1674; /* *fop_sf_comm */
              if (!x87nonimm_ssenomem_operand (operands[1], E_SFmode)
                  || !
#line 23511 "../../src/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (SFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 1683; /* *fop_sf_1 */

            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || !binary_fp_operator (operands[3], E_DFmode)
                  || !nonimmediate_operand (operands[2], E_DFmode))
                return -1;
              if (nonimmediate_operand (operands[1], E_DFmode)
                  && 
#line 23411 "../../src/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 1675; /* *fop_df_comm */
              if (!x87nonimm_ssenomem_operand (operands[1], E_DFmode)
                  || !
#line 23511 "../../src/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_80387 && X87_ENABLE_ARITH (DFmode)))
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 1684; /* *fop_df_1 */

            default:
              return -1;
            }

        case FLOAT:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              switch (pattern857 (x5, 
E_SFmode))
                {
                case 0:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1691; /* *fop_sf_3_i387 */

                case 1:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1694; /* *fop_sf_3_i387 */

                default:
                  return -1;
                }

            case E_DFmode:
              switch (pattern857 (x5, 
E_DFmode))
                {
                case 0:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1692; /* *fop_df_3_i387 */

                case 1:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1695; /* *fop_df_3_i387 */

                default:
                  return -1;
                }

            case E_XFmode:
              switch (pattern857 (x5, 
E_XFmode))
                {
                case 0:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1693; /* *fop_xf_3_i387 */

                case 1:
                  if (!
#line 23567 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 1696; /* *fop_xf_3_i387 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (pattern746 ())
            {
            case 0:
              if (!register_operand (operands[1], E_XFmode)
                  || GET_MODE (x5) != E_XFmode)
                return -1;
              switch (GET_MODE (operands[2]))
                {
                case E_SFmode:
                  if (!nonimmediate_operand (operands[2], E_SFmode)
                      || !
#line 23623 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1700; /* *fop_xf_5_i387 */

                case E_DFmode:
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 23623 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1701; /* *fop_xf_5_i387 */

                default:
                  return -1;
                }

            case 1:
              if (!register_operand (operands[1], E_DFmode)
                  || GET_MODE (x5) != E_DFmode
                  || !nonimmediate_operand (operands[2], E_SFmode)
                  || !
#line 23640 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1702; /* *fop_df_5_i387 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          switch (pattern747 (x4, 
E_SFmode))
            {
            case 0:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1685; /* *fop_sf_2_i387 */

            case 1:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1688; /* *fop_sf_2_i387 */

            default:
              return -1;
            }

        case E_DFmode:
          switch (pattern747 (x4, 
E_DFmode))
            {
            case 0:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1686; /* *fop_df_2_i387 */

            case 1:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1689; /* *fop_df_2_i387 */

            default:
              return -1;
            }

        case E_XFmode:
          switch (pattern747 (x4, 
E_XFmode))
            {
            case 0:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, HImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1687; /* *fop_xf_2_i387 */

            case 1:
              if (!
#line 23546 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, SImode)
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                return -1;
              return 1690; /* *fop_xf_2_i387 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[2] = x5;
          switch (pattern746 ())
            {
            case 0:
              if (GET_MODE (x4) != E_XFmode
                  || !register_operand (operands[2], E_XFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!nonimmediate_operand (operands[1], E_SFmode)
                      || !
#line 23588 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1697; /* *fop_xf_4_i387 */

                case E_DFmode:
                  if (!nonimmediate_operand (operands[1], E_DFmode)
                      || !
#line 23588 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1698; /* *fop_xf_4_i387 */

                default:
                  return -1;
                }

            case 1:
              if (GET_MODE (x4) != E_DFmode
                  || !nonimmediate_operand (operands[1], E_SFmode)
                  || !register_operand (operands[2], E_DFmode)
                  || !
#line 23605 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1699; /* *fop_df_4_i387 */

            default:
              return -1;
            }

        case FLOAT_EXTEND:
          x6 = XEXP (x5, 0);
          operands[2] = x6;
          switch (pattern746 ())
            {
            case 0:
              if (GET_MODE (x4) != E_XFmode
                  || GET_MODE (x5) != E_XFmode)
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!register_operand (operands[1], E_SFmode)
                      || !nonimmediate_operand (operands[2], E_SFmode)
                      || !
#line 23659 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1703; /* *fop_xf_6_i387 */

                case E_DFmode:
                  if (!register_operand (operands[1], E_DFmode)
                      || !nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 23659 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                    return -1;
                  return 1704; /* *fop_xf_6_i387 */

                default:
                  return -1;
                }

            case 1:
              if (pattern855 (x2, 
E_SFmode, 
E_DFmode) != 0
                  || !
#line 23677 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
                return -1;
              return 1705; /* *fop_df_6_i387 */

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
recog_72 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern108 (x2, pnum_clobbers))
        {
        case 0:
          if (
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 710; /* *andqi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 711; /* *andqi_1_zextsi */

        case 1:
          if (
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 714; /* *andhi_1_zextsi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 715; /* *andhi_1_zextsi */

        case 2:
          if (
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 712; /* *andqi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 713; /* *andqi_1_zextdi */

        case 3:
          if (
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 716; /* *andhi_1_zextdi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 717; /* *andhi_1_zextdi */

        case 4:
          if (!
#line 12656 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 718; /* *andsi_1_zext */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || pattern436 (x4) != 0)
        return -1;
      x5 = XEXP (x4, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XEXP (x4, 0);
      x7 = XEXP (x6, 1);
      operands[2] = x7;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x8 = XEXP (x3, 1);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 22100 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      *pnum_clobbers = 1;
      return 1598; /* *bmi2_bzhi_zero_extendsidi_4 */

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2)
        return -1;
      x9 = XVECEXP (x4, 0, 0);
      operands[1] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      x8 = XEXP (x3, 1);
      operands[3] = x8;
      switch (XINT (x4, 1))
        {
        case 158:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern1080 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8197; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8200; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8206; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8203; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8209; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8215; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8212; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8218; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8221; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8224; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8227; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8230; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern1080 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8198; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8201; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8207; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8204; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8210; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8216; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8213; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8219; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8222; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8225; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8228; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8231; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 159:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern1080 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8269; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8272; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8278; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8275; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8281; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8287; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8284; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8290; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8293; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8296; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8299; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8302; /* *avx512vl_testnmv2di3_zext_mask */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern1080 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (DImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8270; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8273; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (SImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
                    return -1;
                  return 8279; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8276; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8282; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (HImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8288; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW))))
                    return -1;
                  return 8285; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8291; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8294; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 8297; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8300; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (4
       > GET_MODE_SIZE (QImode))) && ((
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 8303; /* *avx512vl_testnmv2di3_zext_mask */

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
recog_94 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !general_operand (operands[1], E_DImode))
        return -1;
      if ((
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 995; /* *absdi2_doubleword */
        }
      if (!(
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1002; /* *absdi2_1 */

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !general_operand (operands[1], E_SImode)
          || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1001; /* *abssi2_1 */

    default:
      return -1;
    }
}

 int
recog_96 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern118 (x3, pnum_clobbers))
        {
        case 0:
          if (pnum_clobbers != NULL
              && pattern621 (x3) == 0
              && (
#line 15203 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1052; /* *ashldi3_doubleword_mask */
            }
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          res = recog_95 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern622 (x3))
            {
            case 0:
              if (!
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 1247; /* *ashldi3_mask */

            case 2:
              if (!
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 1259; /* *ashldi3_add */

            case 4:
              if (!
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
            {
              *pnum_clobbers = 1;
              return 1054; /* *ashldi3_doubleword_mask_1 */
            }
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
          *pnum_clobbers = 1;
          return 1253; /* *ashldi3_mask_1 */

        case 2:
          if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1250; /* *ashlsi3_mask_1 */

        case 3:
          if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1262; /* *ashlsi3_add_1 */

        case 4:
          if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1265; /* *ashldi3_add_1 */

        case 5:
          if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1274; /* *ashlsi3_sub_1 */

        case 6:
          if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1277; /* *ashldi3_sub_1 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (pattern119 (x3, pnum_clobbers) != 0
          || !(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1058; /* *ashldi3_doubleword_highpart */

    case ZERO_EXTEND:
      if (pattern119 (x3, pnum_clobbers) != 0
          || !(
#line 15365 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 4 * BITS_PER_UNIT
   && INTVAL (operands[2]) < 4 * BITS_PER_UNIT * 2) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1059; /* *ashldi3_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_105 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (XWINT (x3, 0) == 1L)
    {
      res = recog_104 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  operands[2] = x3;
  if (!const_0_to_255_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  if (!const_0_to_255_operand (operands[3], E_QImode))
    return -1;
  switch (pattern126 (x2))
    {
    case 0:
      if (!
#line 22152 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
        return -1;
      *pnum_clobbers = 1;
      return 1604; /* tbm_bextri_si */

    case 1:
      if (!(
#line 22152 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1605; /* tbm_bextri_di */

    default:
      return -1;
    }
}

 int
recog_107 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[1] = x4;
      switch (GET_MODE (operands[1]))
        {
        case E_DFmode:
          if (register_operand (operands[1], E_DFmode)
              && 
#line 25481 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
            return 1759; /* movmsk_df */
          break;

        case E_V8QImode:
          if (register_operand (operands[1], E_V8QImode)
              && 
#line 6823 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return 2384; /* mmx_pmovmskb */
          break;

        case E_V8SFmode:
          if (register_operand (operands[1], E_V8SFmode)
              && (
#line 21946 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8512; /* avx_movmskps256 */
          break;

        case E_V4SFmode:
          if (register_operand (operands[1], E_V4SFmode)
              && 
#line 21946 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8513; /* sse_movmskps */
          break;

        case E_V4DFmode:
          if (register_operand (operands[1], E_V4DFmode)
              && (
#line 21946 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8514; /* avx_movmskpd256 */
          break;

        case E_V2DFmode:
          if (register_operand (operands[1], E_V2DFmode)
              && (
#line 21946 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8515; /* sse2_movmskpd */
          break;

        case E_V32QImode:
          if (register_operand (operands[1], E_V32QImode)
              && (
#line 22096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8560; /* avx2_pmovmskb */
          break;

        case E_V16QImode:
          if (register_operand (operands[1], E_V16QImode)
              && 
#line 22096 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8561; /* sse2_pmovmskb */
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
        case VEC_MERGE:
          switch (pattern1092 (x4))
            {
            case 0:
              if (!(
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8528; /* *avx_movmskps256_lt_avx512 */

            case 1:
              if (!
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 8529; /* *sse_movmskps_lt_avx512 */

            case 2:
              if (!(
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8530; /* *avx_movmskpd256_lt_avx512 */

            case 3:
              if (!(
#line 21997 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8531; /* *sse2_movmskpd_lt_avx512 */

            default:
              return -1;
            }

        case ASHIFTRT:
          switch (pattern1093 (x4))
            {
            case 0:
              if (!(
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8548; /* *avx_movmskps256_shift */

            case 1:
              if (!
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 8549; /* *sse_movmskps_shift */

            case 2:
              if (!(
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8550; /* *avx_movmskpd256_shift */

            case 3:
              if (!(
#line 22060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8551; /* *sse2_movmskpd_shift */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LT:
      switch (pattern763 (x4))
        {
        case 0:
          if (!(
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8524; /* *avx_movmskps256_lt */

        case 1:
          if (!
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8525; /* *sse_movmskps_lt */

        case 2:
          if (!(
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 8526; /* *avx_movmskpd256_lt */

        case 3:
          if (!(
#line 21973 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8527; /* *sse2_movmskpd_lt */

        case 4:
          if (!(
#line 22225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8566; /* *avx2_pmovmskb_lt */

        case 5:
          if (!
#line 22225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8567; /* *sse2_pmovmskb_lt */

        default:
          return -1;
        }

    case VEC_MERGE:
      switch (pattern765 (x4))
        {
        case 0:
          if (!(
#line 22253 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8568; /* *avx2_pmovmskb_lt_avx512 */

        case 1:
          if (!
#line 22253 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8569; /* *sse2_pmovmskb_lt_avx512 */

        case 2:
          if (!
#line 22381 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 8577; /* *pmovsk_kmask_v16qi_avx512 */

        case 3:
          if (!
#line 22395 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 8578; /* *pmovsk_mask_v32qi_avx512 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_121 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SImode:
      if (pattern992 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2449; /* *avx512f_loadv16si_mask */

    case E_V8SImode:
      if (pattern992 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2450; /* *avx512vl_loadv8si_mask */

    case E_V4SImode:
      if (pattern992 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2451; /* *avx512vl_loadv4si_mask */

    case E_V8DImode:
      if (pattern992 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2452; /* *avx512f_loadv8di_mask */

    case E_V4DImode:
      if (pattern992 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2453; /* *avx512vl_loadv4di_mask */

    case E_V2DImode:
      if (pattern992 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2454; /* *avx512vl_loadv2di_mask */

    case E_V16SFmode:
      if (pattern992 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2455; /* *avx512f_loadv16sf_mask */

    case E_V8SFmode:
      if (pattern992 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2456; /* *avx512vl_loadv8sf_mask */

    case E_V4SFmode:
      if (pattern992 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2457; /* *avx512vl_loadv4sf_mask */

    case E_V8DFmode:
      if (pattern992 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2458; /* *avx512f_loadv8df_mask */

    case E_V4DFmode:
      if (pattern992 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2459; /* *avx512vl_loadv4df_mask */

    case E_V2DFmode:
      if (pattern992 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 1607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2460; /* *avx512vl_loadv2df_mask */

    case E_V64QImode:
      if (pattern992 (x2, 
E_V64QImode, 
E_DImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2473; /* *avx512bw_loadv64qi_mask */

    case E_V16QImode:
      if (pattern992 (x2, 
E_V16QImode, 
E_HImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2474; /* *avx512vl_loadv16qi_mask */

    case E_V32QImode:
      if (pattern992 (x2, 
E_V32QImode, 
E_SImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2475; /* *avx512vl_loadv32qi_mask */

    case E_V32HImode:
      if (pattern992 (x2, 
E_V32HImode, 
E_SImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2476; /* *avx512bw_loadv32hi_mask */

    case E_V16HImode:
      if (pattern992 (x2, 
E_V16HImode, 
E_HImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2477; /* *avx512vl_loadv16hi_mask */

    case E_V8HImode:
      if (pattern992 (x2, 
E_V8HImode, 
E_QImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2478; /* *avx512vl_loadv8hi_mask */

    case E_V32HFmode:
      if (pattern992 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2479; /* *avx512bw_loadv32hf_mask */

    case E_V16HFmode:
      if (pattern992 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2480; /* *avx512vl_loadv16hf_mask */

    case E_V8HFmode:
      if (pattern992 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2481; /* *avx512fp16_loadv8hf_mask */

    case E_V32BFmode:
      if (pattern992 (x2, 
E_V32BFmode, 
E_SImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2482; /* *avx512bw_loadv32bf_mask */

    case E_V16BFmode:
      if (pattern992 (x2, 
E_V16BFmode, 
E_HImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2483; /* *avx512vl_loadv16bf_mask */

    case E_V8BFmode:
      if (pattern992 (x2, 
E_V8BFmode, 
E_QImode) != 0
          || !(
#line 1666 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2484; /* *avx512vl_loadv8bf_mask */

    default:
      return -1;
    }
}

 int
recog_126 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (pattern992 (x2, 
E_V64QImode, 
E_DImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 514 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10990; /* avx10_2_vmovrsbv64qi_mask */

    case E_V32QImode:
      if (pattern992 (x2, 
E_V32QImode, 
E_SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10992; /* avx10_2_vmovrsbv32qi_mask */

    case E_V16QImode:
      if (pattern992 (x2, 
E_V16QImode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10994; /* avx10_2_vmovrsbv16qi_mask */

    case E_V32HImode:
      if (pattern992 (x2, 
E_V32HImode, 
E_SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 515 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10996; /* avx10_2_vmovrswv32hi_mask */

    case E_V16HImode:
      if (pattern992 (x2, 
E_V16HImode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 10998; /* avx10_2_vmovrswv16hi_mask */

    case E_V8HImode:
      if (pattern992 (x2, 
E_V8HImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11000; /* avx10_2_vmovrswv8hi_mask */

    case E_V16SImode:
      if (pattern992 (x2, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 516 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 11002; /* avx10_2_vmovrsdv16si_mask */

    case E_V8SImode:
      if (pattern992 (x2, 
E_V8SImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11004; /* avx10_2_vmovrsdv8si_mask */

    case E_V4SImode:
      if (pattern992 (x2, 
E_V4SImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11006; /* avx10_2_vmovrsdv4si_mask */

    case E_V8DImode:
      if (pattern992 (x2, 
E_V8DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS) && 
#line 517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 11008; /* avx10_2_vmovrsqv8di_mask */

    case E_V4DImode:
      if (pattern992 (x2, 
E_V4DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11010; /* avx10_2_vmovrsqv4di_mask */

    case E_V2DImode:
      if (pattern992 (x2, 
E_V2DImode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32673 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && TARGET_MOVRS)))
        return -1;
      return 11012; /* avx10_2_vmovrsqv2di_mask */

    default:
      return -1;
    }
}

 int
recog_133 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      x7 = XEXP (x2, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1366 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4095; /* fma_fmaddsub_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1366 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4099; /* fma_fmaddsub_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1366 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4103; /* fma_fmaddsub_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1366 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4105; /* fma_fmaddsub_v16sf_maskz_1 */

            case E_V8SFmode:
              if (pattern1366 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4109; /* fma_fmaddsub_v8sf_maskz_1 */

            case E_V4SFmode:
              if (pattern1366 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4113; /* fma_fmaddsub_v4sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1366 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4115; /* fma_fmaddsub_v8df_maskz_1 */

            case E_V4DFmode:
              if (pattern1366 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4119; /* fma_fmaddsub_v4df_maskz_1 */

            case E_V2DFmode:
              if (pattern1366 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 6421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4123; /* fma_fmaddsub_v2df_maskz_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1276 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V32HFmode)
                  && vector_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 4124; /* avx512bw_fmaddsub_v32hf_mask */
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4139; /* avx512bw_fmaddsub_v32hf_mask3 */

            case E_V16HFmode:
              if (pattern1276 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16HFmode)
                  && vector_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4126; /* avx512vl_fmaddsub_v16hf_mask */
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4141; /* avx512vl_fmaddsub_v16hf_mask3 */

            case E_V8HFmode:
              if (pattern1276 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8HFmode)
                  && vector_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4128; /* avx512fp16_fmaddsub_v8hf_mask */
              if (!nonimmediate_operand (operands[1], E_V8HFmode)
                  || !nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4143; /* avx512fp16_fmaddsub_v8hf_mask3 */

            case E_V16SFmode:
              if (pattern1276 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16SFmode)
                  && vector_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4129; /* avx512f_fmaddsub_v16sf_mask */
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4144; /* avx512f_fmaddsub_v16sf_mask3 */

            case E_V8SFmode:
              if (pattern1276 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8SFmode)
                  && vector_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4131; /* avx512vl_fmaddsub_v8sf_mask */
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4146; /* avx512vl_fmaddsub_v8sf_mask3 */

            case E_V4SFmode:
              if (pattern1276 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4SFmode)
                  && vector_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4133; /* avx512vl_fmaddsub_v4sf_mask */
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4148; /* avx512vl_fmaddsub_v4sf_mask3 */

            case E_V8DFmode:
              if (pattern1276 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8DFmode)
                  && vector_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4134; /* avx512f_fmaddsub_v8df_mask */
              if (!nonimmediate_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4149; /* avx512f_fmaddsub_v8df_mask3 */

            case E_V4DFmode:
              if (pattern1276 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4DFmode)
                  && vector_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4136; /* avx512vl_fmaddsub_v4df_mask */
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4151; /* avx512vl_fmaddsub_v4df_mask3 */

            case E_V2DFmode:
              if (pattern1276 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V2DFmode)
                  && vector_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4138; /* avx512vl_fmaddsub_v2df_mask */
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6458 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4153; /* avx512vl_fmaddsub_v2df_mask3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[3] = x9;
      x7 = XEXP (x2, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1367 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4159; /* fma_fmsubadd_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1367 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4163; /* fma_fmsubadd_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1367 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4167; /* fma_fmsubadd_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1367 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4169; /* fma_fmsubadd_v16sf_maskz_1 */

            case E_V8SFmode:
              if (pattern1367 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4173; /* fma_fmsubadd_v8sf_maskz_1 */

            case E_V4SFmode:
              if (pattern1367 (x2, 
E_V4SFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4177; /* fma_fmsubadd_v4sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1367 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4179; /* fma_fmsubadd_v8df_maskz_1 */

            case E_V4DFmode:
              if (pattern1367 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4183; /* fma_fmsubadd_v4df_maskz_1 */

            case E_V2DFmode:
              if (pattern1367 (x2, 
E_V2DFmode, 
E_QImode) != 0
                  || !(
#line 6491 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4187; /* fma_fmsubadd_v2df_maskz_1 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x2, 2);
          operands[4] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1277 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 4188; /* avx512bw_fmsubadd_v32hf_mask */
              if (!nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4206; /* avx512bw_fmsubadd_v32hf_mask3 */

            case E_V16HFmode:
              if (pattern1277 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4190; /* avx512vl_fmsubadd_v16hf_mask */
              if (!nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4208; /* avx512vl_fmsubadd_v16hf_mask3 */

            case E_V8HFmode:
              if (pattern1277 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 4192; /* avx512fp16_fmsubadd_v8hf_mask */
              if (!nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4210; /* avx512fp16_fmsubadd_v8hf_mask3 */

            case E_V16SFmode:
              if (pattern1277 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4194; /* avx512f_fmsubadd_v16sf_mask */
              if (!nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4212; /* avx512f_fmsubadd_v16sf_mask3 */

            case E_V8SFmode:
              if (pattern1277 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4196; /* avx512vl_fmsubadd_v8sf_mask */
              if (!nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4214; /* avx512vl_fmsubadd_v8sf_mask3 */

            case E_V4SFmode:
              if (pattern1277 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4198; /* avx512vl_fmsubadd_v4sf_mask */
              if (!nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4216; /* avx512vl_fmsubadd_v4sf_mask3 */

            case E_V8DFmode:
              if (pattern1277 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 4200; /* avx512f_fmsubadd_v8df_mask */
              if (!nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4218; /* avx512f_fmsubadd_v8df_mask3 */

            case E_V4DFmode:
              if (pattern1277 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4202; /* avx512vl_fmsubadd_v4df_mask */
              if (!nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4220; /* avx512vl_fmsubadd_v4df_mask3 */

            case E_V2DFmode:
              if (pattern1277 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (vector_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 4204; /* avx512vl_fmsubadd_v2df_mask */
              if (!nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4222; /* avx512vl_fmsubadd_v2df_mask3 */

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
recog_156 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      x4 = XEXP (x2, 2);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          return recog_155 (x1, insn, pnum_clobbers);

        case CONST_INT:
          if (XWINT (x4, 0) == 1L)
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DImode:
                  if (GET_MODE (x2) == E_V2DImode)
                    {
                      x5 = XEXP (x2, 0);
                      if (nonimmediate_operand (x5, E_V2DImode))
                        {
                          operands[1] = x5;
                          if (register_operand (operands[0], E_V2DImode))
                            {
                              operands[2] = x3;
                              if (const0_operand (operands[2], E_V2DImode)
                                  && 
#line 1857 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 2556; /* *sse2_movq128_v2di_1 */
                            }
                          operands[2] = x5;
                          if (nonimmediate_operand (operands[0], E_V2DImode))
                            {
                              operands[1] = x3;
                              if (nonimmediate_operand (operands[1], E_V2DImode)
                                  && 
#line 14859 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 7220; /* sse2_movsd_v2di */
                            }
                        }
                    }
                  break;

                case E_V2DFmode:
                  if (GET_MODE (x2) == E_V2DFmode)
                    {
                      x5 = XEXP (x2, 0);
                      if (nonimmediate_operand (x5, E_V2DFmode))
                        {
                          operands[1] = x5;
                          if (register_operand (operands[0], E_V2DFmode))
                            {
                              operands[2] = x3;
                              if (const0_operand (operands[2], E_V2DFmode)
                                  && 
#line 1857 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 2557; /* *sse2_movq128_v2df_1 */
                            }
                          operands[2] = x5;
                          if (nonimmediate_operand (operands[0], E_V2DFmode))
                            {
                              operands[1] = x3;
                              if (nonimmediate_operand (operands[1], E_V2DFmode)
                                  && 
#line 14859 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                                return 7221; /* sse2_movsd_v2df */
                            }
                        }
                    }
                  break;

                case E_V4SImode:
                  if (pattern890 (x2, 
E_V4SImode) == 0
                      && 
#line 11710 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return 5284; /* sse_movss_v4si */
                  break;

                case E_V4SFmode:
                  if (pattern890 (x2, 
E_V4SFmode) == 0
                      && 
#line 11710 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return 5285; /* sse_movss_v4sf */
                  break;

                case E_V8HImode:
                  if (pattern890 (x2, 
E_V8HImode) == 0
                      && 
#line 12128 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HImode))))
                    return 5323; /* avx512fp16_movv8hi */
                  break;

                case E_V8HFmode:
                  if (pattern890 (x2, 
E_V8HFmode) == 0
                      && 
#line 12128 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8HFmode))))
                    return 5324; /* avx512fp16_movv8hf */
                  break;

                case E_V8BFmode:
                  if (pattern890 (x2, 
E_V8BFmode) == 0
                      && 
#line 12128 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16
  || (TARGET_AVX10_2_256 && const0_operand (operands[1], V8BFmode))))
                    return 5325; /* avx512fp16_movv8bf */
                  break;

                default:
                  break;
                }
            }
          operands[3] = x4;
          x5 = XEXP (x2, 0);
          operands[2] = x5;
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V8SFmode:
              if (pattern1112 (x2, 
E_V8SFmode) != 0
                  || !(
#line 23509 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8683; /* avx_blendps256 */

            case E_V4SFmode:
              if (pattern1113 (x2, 
E_V4SFmode) != 0
                  || !
#line 23509 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8684; /* sse4_1_blendps */

            case E_V4DFmode:
              if (pattern1113 (x2, 
E_V4DFmode) != 0
                  || !(
#line 23509 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8685; /* avx_blendpd256 */

            case E_V2DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x2) != E_V2DFmode
                  || !vector_operand (operands[2], E_V2DFmode)
                  || !register_operand (operands[1], E_V2DFmode)
                  || !const_0_to_3_operand (operands[3], E_SImode)
                  || !(
#line 23509 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8686; /* sse4_1_blendpd */

            case E_V8HImode:
              if (pattern1112 (x2, 
E_V8HImode) != 0
                  || !
#line 24014 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8748; /* sse4_1_pblendw */

            case E_V8HFmode:
              if (pattern1112 (x2, 
E_V8HFmode) != 0
                  || !
#line 24014 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8749; /* sse4_1_pblendph */

            case E_V8BFmode:
              if (pattern1112 (x2, 
E_V8BFmode) != 0
                  || !
#line 24014 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8750; /* sse4_1_pblendbf */

            case E_V16HImode:
              if (pattern1114 (x2, 
E_V16HImode) != 0
                  || !
#line 24087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8751; /* *avx2_pblendw */

            case E_V16HFmode:
              if (pattern1114 (x2, 
E_V16HFmode) != 0
                  || !
#line 24087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8752; /* *avx2_pblendph */

            case E_V16BFmode:
              if (pattern1114 (x2, 
E_V16BFmode) != 0
                  || !
#line 24087 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8753; /* *avx2_pblendbf */

            case E_V8SImode:
              if (pattern1115 (x2, 
E_V8SImode) != 0
                  || !
#line 24105 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8754; /* avx2_pblenddv8si */

            case E_V4SImode:
              if (pattern1115 (x2, 
E_V4SImode) != 0
                  || !
#line 24105 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 8755; /* avx2_pblenddv4si */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x4, 0) != 3
              || XINT (x4, 1) != 59)
            return -1;
          x5 = XEXP (x2, 0);
          operands[1] = x5;
          switch (pattern1012 (x2))
            {
            case 0:
              x6 = XVECEXP (x4, 0, 0);
              operands[3] = x6;
              switch (pattern1464 (x2))
                {
                case 0:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return 3054; /* *minmaxv32hf3_1 */
                  break;

                case 1:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return 3055; /* *minmaxv16hf3_1 */
                  break;

                case 2:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return 3056; /* *minmaxv8hf3_1 */
                  break;

                case 3:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return 3057; /* *minmaxv16sf3_1 */
                  break;

                case 4:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3058; /* *minmaxv8sf3_1 */
                  break;

                case 5:
                  if (
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)))
                    return 3059; /* *minmaxv4sf3_1 */
                  break;

                case 6:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                    return 3060; /* *minmaxv8df3_1 */
                  break;

                case 7:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3061; /* *minmaxv4df3_1 */
                  break;

                case 8:
                  if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 3062; /* *minmaxv2df3_1 */
                  break;

                case 9:
                  if ((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3257; /* *avx_cmpv8sf3_lt */
                  break;

                case 10:
                  if (
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3258; /* *avx_cmpv4sf3_lt */
                  break;

                case 11:
                  if ((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3259; /* *avx_cmpv4df3_lt */
                  break;

                case 12:
                  if ((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 3260; /* *avx_cmpv2df3_lt */
                  break;

                case 13:
                  if (
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3261; /* *avx_cmpv4si3_ltint */
                  break;

                case 14:
                  if (
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return 3262; /* *avx_cmpv2di3_ltint */
                  break;

                case 15:
                  if ((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3263; /* *avx_cmpv8si3_ltint */
                  break;

                case 16:
                  if ((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 3264; /* *avx_cmpv4di3_ltint */
                  break;

                case 17:
                  if ((
#line 18040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return 7910; /* *avx2_pcmpv32qi3_3 */
                  break;

                case 18:
                  if (
#line 18040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))))
                    return 7911; /* *avx2_pcmpv16qi3_3 */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x6) != SUBREG)
                return -1;
              switch (pattern1467 (x2))
                {
                case 0:
                  if (!
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return -1;
                  return 3265; /* *avx_cmpv4si3_ltint_not */

                case 1:
                  if (!
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))))
                    return -1;
                  return 3266; /* *avx_cmpv2di3_ltint_not */

                case 2:
                  if (!(
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 3267; /* *avx_cmpv8si3_ltint_not */

                case 3:
                  if (!(
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 3268; /* *avx_cmpv4di3_ltint_not */

                case 4:
                  if (!(
#line 18069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7912; /* *avx2_pcmpv32qi3_4 */

                case 5:
                  if (!
#line 18069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))))
                    return -1;
                  return 7913; /* *avx2_pcmpv16qi3_4 */

                default:
                  return -1;
                }

            case 1:
              if (!(
#line 18101 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return -1;
              return 7914; /* *avx2_pcmpv32qi3_5 */

            case 2:
              if (!
#line 18101 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))))
                return -1;
              return 7915; /* *avx2_pcmpv16qi3_5 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x5 = XEXP (x2, 0);
      operands[1] = x5;
      x7 = XEXP (x3, 0);
      operands[2] = x7;
      x4 = XEXP (x2, 2);
      operands[3] = x4;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1116 (x2, 
E_V2DFmode, 
E_V8DFmode) != 0
              || !(
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12406 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
            return -1;
          return 8393; /* *avx512dq_vinsertf64x2_1 */

        case E_V8DImode:
          if (pattern1116 (x2, 
E_V2DImode, 
E_V8DImode) != 0
              || !(
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_EVEX512)))
            return -1;
          return 8395; /* *avx512dq_vinserti64x2_1 */

        case E_V16SFmode:
          if (pattern1116 (x2, 
E_V4SFmode, 
E_V16SFmode) != 0
              || !(
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8397; /* *avx512f_vinsertf32x4_1 */

        case E_V16SImode:
          if (pattern1116 (x2, 
E_V4SImode, 
E_V16SImode) != 0
              || !(
#line 20052 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 12408 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8399; /* *avx512f_vinserti32x4_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_168 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 1);
  operands[3] = x5;
  x6 = XVECEXP (x4, 0, 2);
  operands[4] = x6;
  x7 = XVECEXP (x4, 0, 3);
  operands[5] = x7;
  x8 = XEXP (x2, 1);
  operands[6] = x8;
  x9 = XEXP (x2, 2);
  operands[7] = x9;
  if (!register_operand (operands[7], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || GET_MODE (x3) != E_V4SFmode
          || pattern1667 (
E_V16SFmode) != 0
          || !nonimm_or_0_operand (operands[6], E_V4SFmode)
          || !(
#line 12511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[6]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5345; /* avx512f_vextractf32x4_1_mask */

    case E_V4SImode:
      if (GET_MODE (x2) != E_V4SImode
          || GET_MODE (x3) != E_V4SImode
          || !nonimm_or_0_operand (operands[6], E_V4SImode))
        return -1;
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && pattern1667 (
E_V16SImode) == 0
          && (
#line 12511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[6]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 5346; /* avx512f_vextracti32x4_1_mask */
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || pattern1697 () != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20703 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
        return -1;
      return 8446; /* sse2_pshufd_1_mask */

    case E_V4DImode:
      if (pattern755 (x2, 
E_V4DImode) != 0
          || pattern1697 () != 0
          || !nonimm_or_0_operand (operands[6], E_V4DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 27564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9174; /* avx2_permv4di_1_mask */

    default:
      return -1;
    }
}

 int
recog_172 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[6] = x5;
  res = recog_171 (x1, insn, pnum_clobbers);
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
      || pattern1302 (x2, 
E_V8HImode) != 0
      || pattern900 (x4) != 0)
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
#line 20859 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512BW && TARGET_AVX512VL)))
    return -1;
  return 8452; /* sse2_pshuflw_1_mask */
}

 int
recog_176 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  res = recog_175 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x5, 0) != 0L)
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || pattern1303 (x4, 
11, 
10, 
9, 
8) != 0
      || pattern755 (x2, 
E_V16HImode) != 0
      || pattern1548 (x4) != 0)
    return -1;
  x9 = XVECEXP (x4, 0, 12);
  operands[6] = x9;
  if (!const_12_to_15_operand (operands[6], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x4, 0, 13);
  operands[7] = x10;
  if (!const_12_to_15_operand (operands[7], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x4, 0, 14);
  operands[8] = x11;
  if (!const_12_to_15_operand (operands[8], E_VOIDmode))
    return -1;
  x12 = XVECEXP (x4, 0, 15);
  operands[9] = x12;
  if (!const_12_to_15_operand (operands[9], E_VOIDmode))
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
#line 20950 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512BW && TARGET_AVX512VL
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))))
    return -1;
  return 8456; /* avx2_pshufhw_1_mask */
}

 int
recog_182 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      switch (pattern638 (x2))
        {
        case 0:
          if (pattern1373 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3807; /* fma_fmadd_v32hf_maskz_1 */

        case 1:
          if (pattern1373 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3811; /* fma_fmadd_v16hf_maskz_1 */

        case 2:
          if (pattern1373 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3815; /* fma_fmadd_v8hf_maskz_1 */

        case 3:
          if (pattern1373 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3819; /* fma_fmadd_v16sf_maskz_1 */

        case 4:
          if (pattern1373 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3823; /* fma_fmadd_v8sf_maskz_1 */

        case 5:
          if (pattern1373 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3827; /* fma_fmadd_v4sf_maskz_1 */

        case 6:
          if (pattern1373 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3830; /* fma_fmadd_v8df_maskz_1 */

        case 7:
          if (pattern1373 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3834; /* fma_fmadd_v4df_maskz_1 */

        case 8:
          if (pattern1373 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3838; /* fma_fmadd_v2df_maskz_1 */

        case 9:
          if (pattern1375 (x2, 
E_SImode, 
E_V32BFmode) != 0
              || !(
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10634; /* avx10_2_fmaddbf16_v32bf_maskz_1 */

        case 10:
          if (pattern1375 (x2, 
E_HImode, 
E_V16BFmode) != 0
              || !
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10636; /* avx10_2_fmaddbf16_v16bf_maskz_1 */

        case 11:
          if (pattern1375 (x2, 
E_QImode, 
E_V8BFmode) != 0
              || !
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10638; /* avx10_2_fmaddbf16_v8bf_maskz_1 */

        case 12:
          if (pattern1376 (x2, 
E_V4SFmode) != 0
              || !
#line 6955 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4))
            return -1;
          return 4320; /* *fma4i_vmfmadd_v4sf */

        case 13:
          if (pattern1376 (x2, 
E_V2DFmode) != 0
              || !(
#line 6955 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4321; /* *fma4i_vmfmadd_v2df */

        case 14:
          if (pattern1292 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && vector_operand (operands[3], E_V32HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return 3839; /* avx512bw_fmadd_v32hf_mask */
            }
          if (!vector_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3854; /* avx512bw_fmadd_v32hf_mask3 */

        case 15:
          if (pattern1292 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && vector_operand (operands[3], E_V16HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3841; /* avx512vl_fmadd_v16hf_mask */
            }
          if (!vector_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3856; /* avx512vl_fmadd_v16hf_mask3 */

        case 16:
          if (pattern1292 (x2, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8HFmode)
              && vector_operand (operands[3], E_V8HFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return 3843; /* avx512fp16_fmadd_v8hf_mask */
            }
          if (!vector_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3858; /* avx512fp16_fmadd_v8hf_mask3 */

        case 17:
          if (pattern1292 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && vector_operand (operands[3], E_V16SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3844; /* avx512f_fmadd_v16sf_mask */
            }
          if (!vector_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3859; /* avx512f_fmadd_v16sf_mask3 */

        case 18:
          if (pattern1292 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && vector_operand (operands[3], E_V8SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3846; /* avx512vl_fmadd_v8sf_mask */
            }
          if (!vector_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3861; /* avx512vl_fmadd_v8sf_mask3 */

        case 19:
          if (pattern1292 (x2, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && vector_operand (operands[3], E_V4SFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3848; /* avx512vl_fmadd_v4sf_mask */
            }
          if (!vector_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3863; /* avx512vl_fmadd_v4sf_mask3 */

        case 20:
          if (pattern1292 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && vector_operand (operands[3], E_V8DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 3849; /* avx512f_fmadd_v8df_mask */
            }
          if (!vector_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3864; /* avx512f_fmadd_v8df_mask3 */

        case 21:
          if (pattern1292 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && vector_operand (operands[3], E_V4DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3851; /* avx512vl_fmadd_v4df_mask */
            }
          if (!vector_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3866; /* avx512vl_fmadd_v4df_mask3 */

        case 22:
          if (pattern1292 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && vector_operand (operands[3], E_V2DFmode))
            {
              x6 = XEXP (x2, 1);
              if (rtx_equal_p (x6, operands[1])
                  && (
#line 5983 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 3853; /* avx512vl_fmadd_v2df_mask */
            }
          if (!vector_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode))
            return -1;
          x6 = XEXP (x2, 1);
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 6000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3868; /* avx512vl_fmadd_v2df_mask3 */

        case 23:
          if (pattern1293 (x2, 
E_SImode, 
E_V32BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && (
#line 32166 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return 10639; /* avx10_2_fmaddbf16_v32bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !(
#line 32183 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10642; /* avx10_2_fmaddbf16_v32bf_mask3 */

        case 24:
          if (pattern1293 (x2, 
E_HImode, 
E_V16BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && 
#line 32166 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10640; /* avx10_2_fmaddbf16_v16bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !
#line 32183 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10643; /* avx10_2_fmaddbf16_v16bf_mask3 */

        case 25:
          if (pattern1293 (x2, 
E_QImode, 
E_V8BFmode) != 0)
            return -1;
          x6 = XEXP (x2, 1);
          if (rtx_equal_p (x6, operands[1])
              && 
#line 32166 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10641; /* avx10_2_fmaddbf16_v8bf_mask */
          if (!rtx_equal_p (x6, operands[3])
              || !
#line 32183 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10644; /* avx10_2_fmaddbf16_v8bf_mask3 */

        case 26:
          if (pattern1377 (x2, 
E_V8HFmode) != 0
              || !(
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4224; /* *fmai_fmadd_v8hf */

        case 27:
          if (pattern1377 (x2, 
E_V4SFmode) != 0
              || !
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
            return -1;
          return 4226; /* *fmai_fmadd_v4sf */

        case 28:
          if (pattern1377 (x2, 
E_V2DFmode) != 0
              || !(
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4228; /* *fmai_fmadd_v2df */

        case 29:
          return recog_158 (x1, insn, pnum_clobbers);

        default:
          return -1;
        }

    case NEG:
      return recog_160 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_191 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  operands[3] = x5;
  x6 = XEXP (x2, 2);
  operands[4] = x6;
  x7 = XEXP (x3, 0);
  switch (GET_CODE (x7))
    {
    case NOT:
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1014 (x2, 
E_V8SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16)) && 
#line 428 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3700; /* avx_andnotv8sf3_mask */

        case E_V4SFmode:
          if (pattern1014 (x2, 
E_V4SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 32 != 16))))
            return -1;
          return 3702; /* sse_andnotv4sf3_mask */

        case E_V4DFmode:
          if (pattern1014 (x2, 
E_V4DFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 3704; /* avx_andnotv4df3_mask */

        case E_V2DFmode:
          if (pattern1014 (x2, 
E_V2DFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL
   && (!true || 64 != 16)) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3706; /* sse2_andnotv2df3_mask */

        case E_V16SFmode:
          if (pattern1015 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!true || 32 != 16)) && 
#line 493 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3710; /* avx512f_andnotv16sf3_mask */

        case E_V8DFmode:
          if (pattern1015 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!true || 64 != 16)) && 
#line 494 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3712; /* avx512f_andnotv8df3_mask */

        case E_V16SImode:
          if (pattern1015 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8002; /* *andnotv16si3_mask */

        case E_V8SImode:
          if (pattern1015 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8003; /* *andnotv8si3_mask */

        case E_V4SImode:
          if (pattern1015 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8004; /* *andnotv4si3_mask */

        case E_V8DImode:
          if (pattern1015 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8005; /* *andnotv8di3_mask */

        case E_V4DImode:
          if (pattern1015 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8006; /* *andnotv4di3_mask */

        case E_V2DImode:
          if (pattern1015 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 18693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8007; /* *andnotv2di3_mask */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[1] = x7;
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
          return 3726; /* *andv8sf3_mask */

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
          return 3732; /* *andv4sf3_mask */

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
          return 3738; /* *andv4df3_mask */

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
          return 3744; /* *andv2df3_mask */

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
          return 3756; /* *andv16sf3_mask */

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
          return 3762; /* *andv8df3_mask */

        case E_V16SImode:
          if (pattern485 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V16SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8009; /* *andv16si3_mask */

        case E_V8SImode:
          if (pattern485 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 807 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8015; /* *andv8si3_mask */

        case E_V4SImode:
          if (pattern485 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4SImode, operands))))
            return -1;
          return 8021; /* *andv4si3_mask */

        case E_V8DImode:
          if (pattern485 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V8DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 8027; /* *andv8di3_mask */

        case E_V4DImode:
          if (pattern485 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 808 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 8033; /* *andv4di3_mask */

        case E_V2DImode:
          if (pattern485 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 18744 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL)
   && ix86_binary_operator_ok (AND, V2DImode, operands))))
            return -1;
          return 8039; /* *andv2di3_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_200 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern888 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2912; /* avx512fp16_sqrtv32hf2_mask */

        case E_V16HFmode:
          if (pattern888 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2916; /* avx512fp16_sqrtv16hf2_mask */

        case E_V8HFmode:
          if (pattern888 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2919; /* avx512fp16_sqrtv8hf2_mask */

        case E_V16SFmode:
          if (pattern888 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2922; /* avx512f_sqrtv16sf2_mask */

        case E_V8SFmode:
          if (pattern888 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2926; /* avx_sqrtv8sf2_mask */

        case E_V4SFmode:
          if (pattern888 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2929; /* sse_sqrtv4sf2_mask */

        case E_V8DFmode:
          if (pattern888 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2932; /* avx512f_sqrtv8df2_mask */

        case E_V4DFmode:
          if (pattern888 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2936; /* avx_sqrtv4df2_mask */

        case E_V2DFmode:
          if (pattern888 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2939; /* sse2_sqrtv2df2_mask */

        case E_V32BFmode:
          if (pattern144 (x2, 
E_V32BFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10688; /* avx10_2_sqrtbf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern144 (x2, 
E_V16BFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10690; /* avx10_2_sqrtbf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern144 (x2, 
E_V8BFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10692; /* avx10_2_sqrtbf16_v8bf_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern889 (x2, 
E_V8HFmode) != 0
              || !(
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2940; /* avx512fp16_vmsqrtv8hf2 */

        case E_V4SFmode:
          if (pattern889 (x2, 
E_V4SFmode) != 0
              || !
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2944; /* sse_vmsqrtv4sf2 */

        case E_V2DFmode:
          if (pattern889 (x2, 
E_V2DFmode) != 0
              || !(
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2948; /* sse2_vmsqrtv2df2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_208 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x2) != E_V32HFmode
          || !vector_operand (operands[1], E_V32HFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 7041; /* avx512bw_getexpv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x2) != E_V16HFmode
          || !vector_operand (operands[1], E_V16HFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7045; /* avx512vl_getexpv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || !vector_operand (operands[1], E_V8HFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7049; /* avx512fp16_getexpv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !vector_operand (operands[1], E_V16SFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7051; /* avx512f_getexpv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7055; /* avx512vl_getexpv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !vector_operand (operands[1], E_V4SFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7059; /* avx512vl_getexpv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !vector_operand (operands[1], E_V8DFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7061; /* avx512f_getexpv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7065; /* avx512vl_getexpv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !vector_operand (operands[1], E_V2DFmode)
          || !(
#line 14044 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7069; /* avx512vl_getexpv2df */

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x2) != E_V32BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode)
          || !(
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10699; /* avx10_2_getexpbf16_v32bf */

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x2) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V16BFmode)
          || !
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10701; /* avx10_2_getexpbf16_v16bf */

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x2) != E_V8BFmode
          || !nonimmediate_operand (operands[1], E_V8BFmode)
          || !
#line 32418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10703; /* avx10_2_getexpbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_216 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern319 (x2))
    {
    case 0:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2461; /* *avx512f_loadv16si */

    case 1:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2462; /* *avx512vl_loadv8si */

    case 2:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2463; /* *avx512vl_loadv4si */

    case 3:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2464; /* *avx512f_loadv8di */

    case 4:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2465; /* *avx512vl_loadv4di */

    case 5:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2466; /* *avx512vl_loadv2di */

    case 6:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2467; /* *avx512f_loadv16sf */

    case 7:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2468; /* *avx512vl_loadv8sf */

    case 8:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2469; /* *avx512vl_loadv4sf */

    case 9:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2470; /* *avx512f_loadv8df */

    case 10:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2471; /* *avx512vl_loadv4df */

    case 11:
      if (!(
#line 1633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2472; /* *avx512vl_loadv2df */

    case 12:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2485; /* *avx512bw_loadv64qi */

    case 13:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2486; /* *avx512vl_loadv16qi */

    case 14:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2487; /* *avx512vl_loadv32qi */

    case 15:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2488; /* *avx512bw_loadv32hi */

    case 16:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2489; /* *avx512vl_loadv16hi */

    case 17:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2490; /* *avx512vl_loadv8hi */

    case 18:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2491; /* *avx512bw_loadv32hf */

    case 19:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2492; /* *avx512vl_loadv16hf */

    case 20:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2493; /* *avx512fp16_loadv8hf */

    case 21:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2494; /* *avx512bw_loadv32bf */

    case 22:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2495; /* *avx512vl_loadv16bf */

    case 23:
      if (!(
#line 1677 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2496; /* *avx512vl_loadv8bf */

    default:
      return -1;
    }
}

 int
recog_226 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const48_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XEXP (x4, 2);
      operands[3] = x8;
      operands[4] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8DFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[1], E_V8HFmode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4717; /* avx512fp16_float_extend_phv8df2_mask_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
                return -1;
              return 5193; /* avx512f_cvtps2pd512_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern651 (x2, 
E_V16SFmode, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4721; /* avx512fp16_float_extend_phv16sf2_mask_round */

        case E_V8SFmode:
          if (pattern651 (x2, 
E_V8SFmode, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4725; /* avx512fp16_float_extend_phv8sf2_mask_round */

        case E_V4DFmode:
          if (pattern651 (x2, 
E_V4DFmode, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
          return 5197; /* avx_cvtps2pd256_mask_round */

        default:
          return -1;
        }

    case VEC_SELECT:
      x9 = XEXP (x6, 1);
      if (GET_CODE (x9) != PARALLEL)
        return -1;
      switch (XVECLEN (x9, 0))
        {
        case 4:
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
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || pattern1404 (x2, 
E_V4HFmode, 
E_V4DFmode) != 0)
            return -1;
          x14 = XEXP (x6, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x7 = XEXP (x4, 1);
          operands[2] = x7;
          if (!nonimm_or_0_operand (operands[2], E_V4DFmode))
            return -1;
          x8 = XEXP (x4, 2);
          operands[3] = x8;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          operands[4] = x3;
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
										       || V4DFmode == V16HFmode)))))))
            return -1;
          return 4729; /* avx512fp16_float_extend_phv4df2_mask_round */

        case 2:
          x10 = XVECEXP (x9, 0, 0);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XVECEXP (x9, 0, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XEXP (x4, 2);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1404 (x2, 
E_V2SFmode, 
E_V2DFmode) != 0)
            return -1;
          x14 = XEXP (x6, 0);
          operands[2] = x14;
          if (!register_operand (operands[2], E_V4SFmode))
            return -1;
          x7 = XEXP (x4, 1);
          operands[1] = x7;
          if (!register_operand (operands[1], E_V2DFmode))
            return -1;
          operands[3] = x3;
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 5174; /* sse2_cvtss2sd_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_228 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern648 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
          return 2686; /* *addv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
          return 2694; /* *addv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2702; /* *addv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
          return 2710; /* *addv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
          return 2718; /* *addv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2726; /* *addv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
          return 2734; /* *addv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
          return 2742; /* *addv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2750; /* *addv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2762; /* avx512fp16_vmaddv8hf3_round */

        case 10:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2770; /* sse_vmaddv4sf3_round */

        case 11:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2778; /* sse2_vmaddv2df3_round */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern648 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
          return 2690; /* *subv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
          return 2698; /* *subv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2706; /* *subv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
          return 2714; /* *subv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
          return 2722; /* *subv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2730; /* *subv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
          return 2738; /* *subv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
          return 2746; /* *subv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2754; /* *subv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2766; /* avx512fp16_vmsubv8hf3_round */

        case 10:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2774; /* sse_vmsubv4sf3_round */

        case 11:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2782; /* sse2_vmsubv2df3_round */

        default:
          return -1;
        }

    case VEC_MERGE:
      return recog_222 (x1, insn, pnum_clobbers);

    case MULT:
      switch (pattern648 (x2))
        {
        case 0:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
          return 2788; /* *mulv32hf3_mask_round */

        case 1:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
          return 2792; /* *mulv16hf3_mask_round */

        case 2:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V8HFmode == V16SFmode
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
            return -1;
          return 2796; /* *mulv8hf3_mask_round */

        case 3:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
          return 2800; /* *mulv16sf3_mask_round */

        case 4:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
          return 2804; /* *mulv8sf3_mask_round */

        case 5:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V4SFmode == V16SFmode
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
								       || V4SFmode == V16HFmode)))))))
            return -1;
          return 2808; /* *mulv4sf3_mask_round */

        case 6:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
          return 2812; /* *mulv8df3_mask_round */

        case 7:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
          return 2816; /* *mulv4df3_mask_round */

        case 8:
          if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2749 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && ((V2DFmode == V16SFmode
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
(TARGET_SSE2)))))
            return -1;
          return 2820; /* *mulv2df3_mask_round */

        case 9:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 2828; /* avx512fp16_vmmulv8hf3_round */

        case 10:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 2836; /* sse_vmmulv4sf3_round */

        case 11:
          if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2844; /* sse2_vmmulv2df3_round */

        default:
          return -1;
        }

    case DIV:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x7, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          switch (pattern647 (x2))
            {
            case 0:
              if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2832; /* avx512fp16_vmdivv8hf3_round */

            case 1:
              if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2840; /* sse_vmdivv4sf3_round */

            case 2:
              if (!(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2848; /* sse2_vmdivv2df3_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          switch (pattern649 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
              return 2854; /* avx512fp16_divv32hf3_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
              return 2858; /* avx512fp16_divv16hf3_mask_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
              return 2864; /* avx512f_divv16sf3_mask_round */

            case 3:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
              return 2868; /* avx_divv8sf3_mask_round */

            case 4:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
              return 2874; /* avx512f_divv8df3_mask_round */

            case 5:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
              return 2878; /* avx_divv4df3_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x7 = XVECEXP (x2, 0, 1);
      if (!const_4_or_8_to_11_operand (x7, E_SImode))
        return -1;
      x8 = XEXP (x3, 2);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[3] = x8;
          operands[4] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1401 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
              return 2913; /* avx512fp16_sqrtv32hf2_mask_round */

            case E_V16HFmode:
              if (pattern1401 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
              return 2917; /* avx512fp16_sqrtv16hf2_mask_round */

            case E_V16SFmode:
              if (pattern1401 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
              return 2923; /* avx512f_sqrtv16sf2_mask_round */

            case E_V8SFmode:
              if (pattern1401 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
              return 2927; /* avx_sqrtv8sf2_mask_round */

            case E_V8DFmode:
              if (pattern1401 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
              return 2933; /* avx512f_sqrtv8df2_mask_round */

            case E_V4DFmode:
              if (pattern1401 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3064 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
              return 2937; /* avx_sqrtv4df2_mask_round */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x8, 0) != 1L)
            return -1;
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (pattern1402 (x2, 
E_V8HFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 2941; /* avx512fp16_vmsqrtv8hf2_round */

            case E_V4SFmode:
              if (pattern1402 (x2, 
E_V4SFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
                return -1;
              return 2945; /* sse_vmsqrtv4sf2_round */

            case E_V2DFmode:
              if (pattern1402 (x2, 
E_V2DFmode) != 0
                  || !(
#line 444 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3082 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 2949; /* sse2_vmsqrtv2df2_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      return recog_225 (x1, insn, pnum_clobbers);

    case SMAX:
      switch (pattern650 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 2997; /* *smaxv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3005; /* *smaxv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3017; /* *smaxv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3025; /* *smaxv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3037; /* *smaxv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3045; /* *smaxv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3135; /* *avx512fp16_vmsmaxv8hf3_round */

        case 7:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3143; /* *sse_vmsmaxv4sf3_round */

        case 8:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3151; /* *sse2_vmsmaxv2df3_round */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern650 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3001; /* *sminv32hf3_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3009; /* *sminv16hf3_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3021; /* *sminv16sf3_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3029; /* *sminv8sf3_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3041; /* *sminv8df3_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
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
          return 3049; /* *sminv4df3_mask_round */

        case 6:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3139; /* *avx512fp16_vmsminv8hf3_round */

        case 7:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE)))
            return -1;
          return 3147; /* *sse_vmsminv4sf3_round */

        case 8:
          if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 3155; /* *sse2_vmsminv2df3_round */

        default:
          return -1;
        }

    case UNSPEC:
      return recog_224 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_223 (x1, insn, pnum_clobbers);

    case FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1306 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4489; /* avx512fp16_vcvtw2ph_v16hi_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4513; /* avx512fp16_vcvtdq2ph_v16si_mask_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern651 (x2, 
E_V32HFmode, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4497; /* avx512fp16_vcvtw2ph_v32hi_mask_round */

        case E_V8HFmode:
          switch (pattern1307 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4505; /* avx512fp16_vcvtdq2ph_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4521; /* avx512fp16_vcvtqq2ph_v8di_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern651 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
(TARGET_AVX512F && TARGET_EVEX512)))))
            return -1;
          return 4818; /* floatv16siv16sf2_mask_round */

        case E_V8SFmode:
          switch (pattern1308 (x2))
            {
            case 0:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8650 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
(TARGET_AVX)))))
                return -1;
              return 4822; /* floatv8siv8sf2_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4976; /* floatv8div8sf2_mask_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1309 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4956; /* floatv8div8df2_mask_round */

        case E_V4DFmode:
          if (pattern1309 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4964; /* floatv4div4df2_mask_round */

        case E_V4SFmode:
          if (pattern1309 (x2, 
E_V4SFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4984; /* floatv4div4sf2_mask_round */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HFmode:
          switch (pattern1306 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4493; /* avx512fp16_vcvtuw2ph_v16hi_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4517; /* avx512fp16_vcvtudq2ph_v16si_mask_round */

            default:
              return -1;
            }

        case E_V32HFmode:
          if (pattern651 (x2, 
E_V32HFmode, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4501; /* avx512fp16_vcvtuw2ph_v32hi_mask_round */

        case E_V8HFmode:
          switch (pattern1307 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4509; /* avx512fp16_vcvtudq2ph_v8si_mask_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4525; /* avx512fp16_vcvtuqq2ph_v8di_mask_round */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern1309 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4828; /* floatunsv16siv16sf2_mask_round */

        case E_V8SFmode:
          switch (pattern1308 (x2))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4832; /* floatunsv8siv8sf2_mask_round */

            case 1:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4980; /* floatunsv8div8sf2_mask_round */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (pattern1309 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4960; /* floatunsv8div8df2_mask_round */

        case E_V4DFmode:
          if (pattern1309 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4968; /* floatunsv4div4df2_mask_round */

        case E_V4SFmode:
          if (pattern1309 (x2, 
E_V4SFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4988; /* floatunsv4div4sf2_mask_round */

        default:
          return -1;
        }

    case FIX:
      switch (pattern653 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4617; /* avx512fp16_fix_truncv16hi2_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4625; /* avx512fp16_fix_truncv32hi2_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4633; /* avx512fp16_fix_truncv8si2_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5039; /* fix_truncv8dfv8si2_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4641; /* avx512fp16_fix_truncv16si2_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4886; /* fix_truncv16sfv16si2_mask_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4649; /* avx512fp16_fix_truncv8di2_mask_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 5084; /* fix_truncv8dfv8di2_mask_round */

        case 8:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 5092; /* fix_truncv4dfv4di2_mask_round */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern653 (x2))
        {
        case 0:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4621; /* avx512fp16_fixuns_truncv16hi2_mask_round */

        case 1:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4629; /* avx512fp16_fixuns_truncv32hi2_mask_round */

        case 2:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 4637; /* avx512fp16_fixuns_truncv8si2_mask_round */

        case 3:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5043; /* fixuns_truncv8dfv8si2_mask_round */

        case 4:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4645; /* avx512fp16_fixuns_truncv16si2_mask_round */

        case 5:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 4890; /* fixuns_truncv16sfv16si2_mask_round */

        case 6:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4653; /* avx512fp16_fixuns_truncv8di2_mask_round */

        case 7:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 5088; /* fixuns_truncv8dfv8di2_mask_round */

        case 8:
          if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
            return -1;
          return 5096; /* fixuns_truncv4dfv4di2_mask_round */

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      return recog_226 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      x8 = XEXP (x3, 2);
      operands[3] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[4] = x7;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1310 (x2, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                return -1;
              return 4743; /* avx512fp16_vcvtpd2ph_v8df_mask_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                return -1;
              return 4751; /* avx512fp16_vcvtps2ph_v8sf_mask_round */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern651 (x2, 
E_V16HFmode, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
            return -1;
          return 4747; /* avx512fp16_vcvtps2ph_v16sf_mask_round */

        case E_V8SFmode:
          if (pattern651 (x2, 
E_V8SFmode, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 5181; /* avx512f_cvtpd2ps512_mask_round */

        case E_V4SFmode:
          if (pattern651 (x2, 
E_V4SFmode, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!true || TARGET_AVX10_2_256)))))
            return -1;
          return 5185; /* avx_cvtpd2ps256_mask_round */

        default:
          return -1;
        }

    case VEC_CONCAT:
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != FLOAT_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != FLOAT_TRUNCATE)
        return -1;
      x10 = XEXP (x5, 0);
      operands[2] = x10;
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      x9 = XEXP (x3, 1);
      operands[3] = x9;
      x8 = XEXP (x3, 2);
      operands[4] = x8;
      x7 = XVECEXP (x2, 0, 1);
      operands[5] = x7;
      if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1519 (x2, 
E_SImode, 
E_V32HFmode, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31719 "../../src/gcc/config/i386/sse.md"
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
          return 10443; /* avx10_2_cvt2ps2phx_v32hf_mask_round */

        case E_V16HFmode:
          if (pattern1519 (x2, 
E_HImode, 
E_V16HFmode, 
E_V8SFmode, 
E_V8HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31719 "../../src/gcc/config/i386/sse.md"
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
          return 10447; /* avx10_2_cvt2ps2phx_v16hf_mask_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_283 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern672 (x3) != 0)
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 8L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 40L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 41L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 10L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 42L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 11L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 43L
          || pattern1882 (x3) != 0)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 24L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 56L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 25L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 57L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 26L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 58L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 27L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 59L
          || pattern1888 (x3) != 0
          || pattern1414 (x2, 
E_V32QImode, 
E_V64QImode) != 0
          || !
#line 19465 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8325; /* avx2_interleave_highv32qi */

    case 0L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 32L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 1L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 33L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 2L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 34L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 3L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 35L)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 16L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 48L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 17L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 49L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 18L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 50L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 19L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 51L)
        return -1;
      x22 = XVECEXP (x3, 0, 8);
      switch (XWINT (x22, 0))
        {
        case 4L:
          x23 = XVECEXP (x3, 0, 9);
          if (XWINT (x23, 0) != 36L)
            return -1;
          x24 = XVECEXP (x3, 0, 10);
          if (XWINT (x24, 0) != 5L)
            return -1;
          x25 = XVECEXP (x3, 0, 11);
          if (XWINT (x25, 0) != 37L)
            return -1;
          x26 = XVECEXP (x3, 0, 12);
          if (XWINT (x26, 0) != 6L)
            return -1;
          x27 = XVECEXP (x3, 0, 13);
          if (XWINT (x27, 0) != 38L)
            return -1;
          x28 = XVECEXP (x3, 0, 14);
          if (XWINT (x28, 0) != 7L)
            return -1;
          x29 = XVECEXP (x3, 0, 15);
          if (XWINT (x29, 0) != 39L)
            return -1;
          x30 = XVECEXP (x3, 0, 24);
          if (XWINT (x30, 0) != 20L)
            return -1;
          x31 = XVECEXP (x3, 0, 25);
          if (XWINT (x31, 0) != 52L)
            return -1;
          x32 = XVECEXP (x3, 0, 26);
          if (XWINT (x32, 0) != 21L)
            return -1;
          x33 = XVECEXP (x3, 0, 27);
          if (XWINT (x33, 0) != 53L)
            return -1;
          x34 = XVECEXP (x3, 0, 28);
          if (XWINT (x34, 0) != 22L)
            return -1;
          x35 = XVECEXP (x3, 0, 29);
          if (XWINT (x35, 0) != 54L)
            return -1;
          x36 = XVECEXP (x3, 0, 30);
          if (XWINT (x36, 0) != 23L)
            return -1;
          x37 = XVECEXP (x3, 0, 31);
          if (XWINT (x37, 0) != 55L
              || pattern1414 (x2, 
E_V32QImode, 
E_V64QImode) != 0
              || !
#line 19561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8331; /* avx2_interleave_lowv32qi */

        case 8L:
          x23 = XVECEXP (x3, 0, 9);
          if (XWINT (x23, 0) != 40L)
            return -1;
          x24 = XVECEXP (x3, 0, 10);
          if (XWINT (x24, 0) != 9L)
            return -1;
          x25 = XVECEXP (x3, 0, 11);
          if (XWINT (x25, 0) != 41L)
            return -1;
          x26 = XVECEXP (x3, 0, 12);
          if (XWINT (x26, 0) != 10L)
            return -1;
          x27 = XVECEXP (x3, 0, 13);
          if (XWINT (x27, 0) != 42L)
            return -1;
          x28 = XVECEXP (x3, 0, 14);
          if (XWINT (x28, 0) != 11L)
            return -1;
          x29 = XVECEXP (x3, 0, 15);
          if (XWINT (x29, 0) != 43L)
            return -1;
          x30 = XVECEXP (x3, 0, 24);
          if (XWINT (x30, 0) != 24L)
            return -1;
          x31 = XVECEXP (x3, 0, 25);
          if (XWINT (x31, 0) != 56L)
            return -1;
          x32 = XVECEXP (x3, 0, 26);
          if (XWINT (x32, 0) != 25L)
            return -1;
          x33 = XVECEXP (x3, 0, 27);
          if (XWINT (x33, 0) != 57L)
            return -1;
          x34 = XVECEXP (x3, 0, 28);
          if (XWINT (x34, 0) != 26L)
            return -1;
          x35 = XVECEXP (x3, 0, 29);
          if (XWINT (x35, 0) != 58L)
            return -1;
          x36 = XVECEXP (x3, 0, 30);
          if (XWINT (x36, 0) != 27L)
            return -1;
          x37 = XVECEXP (x3, 0, 31);
          if (XWINT (x37, 0) != 59L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern1414 (x2, 
E_V32HImode, 
E_V64HImode) != 0
                  || !(
#line 19681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8353; /* *avx512bw_interleave_lowv32hi */

            case E_V32HFmode:
              if (pattern1414 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
                  || !(
#line 19681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8355; /* *avx512bw_interleave_lowv32hf */

            case E_V32BFmode:
              if (pattern1414 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
                  || !(
#line 19681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 8357; /* *avx512bw_interleave_lowv32bf */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 36L)
        return -1;
      x8 = XVECEXP (x3, 0, 2);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x9 = XVECEXP (x3, 0, 3);
      if (XWINT (x9, 0) != 37L)
        return -1;
      x10 = XVECEXP (x3, 0, 4);
      if (XWINT (x10, 0) != 6L)
        return -1;
      x11 = XVECEXP (x3, 0, 5);
      if (XWINT (x11, 0) != 38L)
        return -1;
      x12 = XVECEXP (x3, 0, 6);
      if (XWINT (x12, 0) != 7L)
        return -1;
      x13 = XVECEXP (x3, 0, 7);
      if (XWINT (x13, 0) != 39L
          || pattern1882 (x3) != 0)
        return -1;
      x14 = XVECEXP (x3, 0, 16);
      if (XWINT (x14, 0) != 20L)
        return -1;
      x15 = XVECEXP (x3, 0, 17);
      if (XWINT (x15, 0) != 52L)
        return -1;
      x16 = XVECEXP (x3, 0, 18);
      if (XWINT (x16, 0) != 21L)
        return -1;
      x17 = XVECEXP (x3, 0, 19);
      if (XWINT (x17, 0) != 53L)
        return -1;
      x18 = XVECEXP (x3, 0, 20);
      if (XWINT (x18, 0) != 22L)
        return -1;
      x19 = XVECEXP (x3, 0, 21);
      if (XWINT (x19, 0) != 54L)
        return -1;
      x20 = XVECEXP (x3, 0, 22);
      if (XWINT (x20, 0) != 23L)
        return -1;
      x21 = XVECEXP (x3, 0, 23);
      if (XWINT (x21, 0) != 55L
          || pattern1888 (x3) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HImode:
          if (pattern1414 (x2, 
E_V32HImode, 
E_V64HImode) != 0
              || !(
#line 19613 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8335; /* avx512bw_interleave_highv32hi */

        case E_V32HFmode:
          if (pattern1414 (x2, 
E_V32HFmode, 
E_V64HFmode) != 0
              || !(
#line 19613 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8337; /* avx512bw_interleave_highv32hf */

        case E_V32BFmode:
          if (pattern1414 (x2, 
E_V32BFmode, 
E_V64BFmode) != 0
              || !(
#line 19613 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8339; /* avx512bw_interleave_highv32bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_299 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  switch (XVECLEN (x4, 0))
    {
    case 1:
      x6 = XVECEXP (x4, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SFmode:
              if (register_operand (operands[1], E_V4SFmode)
                  && (
#line 11726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 440 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 5286; /* avx2_vec_dupv8sf */
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9203; /* avx512vl_vec_dupv8sf */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !
#line 11738 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 5288; /* avx2_vec_dupv8sf_1 */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          if (register_operand (operands[1], E_V4SFmode)
              && 
#line 11726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 5287; /* avx2_vec_dupv4sf */
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9205; /* avx512vl_vec_dupv4sf */

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x2) != E_V16SFmode
              || GET_MODE (x3) != E_SFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !(
#line 11750 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 487 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5289; /* avx512f_vec_dupv16sf_1 */

            case E_V4SFmode:
              if (!nonimmediate_operand (operands[1], E_V4SFmode)
                  || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9201; /* avx512f_vec_dupv16sf */

            default:
              return -1;
            }

        case E_V8DFmode:
          if (!register_operand (operands[0], E_V8DFmode)
              || GET_MODE (x2) != E_V8DFmode
              || GET_MODE (x3) != E_DFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !(
#line 11750 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 487 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5290; /* avx512f_vec_dupv8df_1 */

            case E_V2DFmode:
              if (!nonimmediate_operand (operands[1], E_V2DFmode)
                  || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9207; /* avx512f_vec_dupv8df */

            default:
              return -1;
            }

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 577 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9094; /* avx2_pbroadcastv16si */
              if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9189; /* avx512f_vec_dupv16si */

            case E_V16SImode:
              if (!nonimmediate_operand (operands[1], E_V16SImode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 976 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9183; /* avx512f_vec_dupv16si_1 */

            default:
              return -1;
            }

        case E_V8DImode:
          if (!register_operand (operands[0], E_V8DImode)
              || GET_MODE (x2) != E_V8DImode
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return 9095; /* avx2_pbroadcastv8di */
              if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9195; /* avx512f_vec_dupv8di */

            case E_V8DImode:
              if (!nonimmediate_operand (operands[1], E_V8DImode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 976 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9184; /* avx512f_vec_dupv8di_1 */

            default:
              return -1;
            }

        case E_V64QImode:
          if (!register_operand (operands[0], E_V64QImode)
              || GET_MODE (x2) != E_V64QImode
              || GET_MODE (x3) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 579 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9096; /* avx2_pbroadcastv64qi */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9213; /* avx512bw_vec_dupv64qi */

            case E_V64QImode:
              if (!nonimmediate_operand (operands[1], E_V64QImode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9186; /* avx512bw_vec_dupv64qi_1 */

            default:
              return -1;
            }

        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x2) != E_V32QImode
              || GET_MODE (x3) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!nonimmediate_operand (operands[1], E_V16QImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 579 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9097; /* avx2_pbroadcastv32qi */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9217; /* avx512vl_vec_dupv32qi */

            case E_V32QImode:
              if (!nonimmediate_operand (operands[1], E_V32QImode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9112; /* avx2_pbroadcastv32qi_1 */

            default:
              return -1;
            }

        case E_V16QImode:
          if (pattern932 (x2, 
E_V16QImode, 
E_QImode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9098; /* avx2_pbroadcastv16qi */
          if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9215; /* avx512vl_vec_dupv16qi */

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x2) != E_V32HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 580 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9099; /* avx2_pbroadcastv32hi */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9219; /* avx512bw_vec_dupv32hi */

            case E_V32HImode:
              if (!nonimmediate_operand (operands[1], E_V32HImode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 977 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9185; /* avx512bw_vec_dupv32hi_1 */

            default:
              return -1;
            }

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || GET_MODE (x3) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!nonimmediate_operand (operands[1], E_V8HImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 580 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9100; /* avx2_pbroadcastv16hi */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9221; /* avx512vl_vec_dupv16hi */

            case E_V16HImode:
              if (!nonimmediate_operand (operands[1], E_V16HImode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9113; /* avx2_pbroadcastv16hi_1 */

            default:
              return -1;
            }

        case E_V8HImode:
          if (pattern932 (x2, 
E_V8HImode, 
E_HImode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9101; /* avx2_pbroadcastv8hi */
          if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9223; /* avx512vl_vec_dupv8hi */

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4SImode:
              if (!nonimmediate_operand (operands[1], E_V4SImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9102; /* avx2_pbroadcastv8si */
              if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9191; /* avx512vl_vec_dupv8si */

            case E_V8SImode:
              if (!nonimmediate_operand (operands[1], E_V8SImode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9114; /* avx2_pbroadcastv8si_1 */

            default:
              return -1;
            }

        case E_V4SImode:
          if (pattern932 (x2, 
E_V4SImode, 
E_SImode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9103; /* avx2_pbroadcastv4si */
          if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9193; /* avx512vl_vec_dupv4si */

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2DImode:
              if (!nonimmediate_operand (operands[1], E_V2DImode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 582 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9104; /* avx2_pbroadcastv4di */
              if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9197; /* avx512vl_vec_dupv4di */

            case E_V4DImode:
              if (!nonimmediate_operand (operands[1], E_V4DImode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9115; /* avx2_pbroadcastv4di_1 */

            default:
              return -1;
            }

        case E_V2DImode:
          if (pattern932 (x2, 
E_V2DImode, 
E_DImode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9105; /* avx2_pbroadcastv2di */
          if (!(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9199; /* avx512vl_vec_dupv2di */

        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x2) != E_V32HFmode
              || GET_MODE (x3) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 583 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9106; /* avx2_pbroadcastv32hf */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9225; /* avx512bw_vec_dupv32hf */

            case E_V32HFmode:
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 979 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9187; /* avx512bw_vec_dupv32hf_1 */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || GET_MODE (x3) != E_HFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!nonimmediate_operand (operands[1], E_V8HFmode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 583 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9107; /* avx2_pbroadcastv16hf */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9227; /* avx512vl_vec_dupv16hf */

            case E_V16HFmode:
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9116; /* avx2_pbroadcastv16hf_1 */

            default:
              return -1;
            }

        case E_V8HFmode:
          if (pattern932 (x2, 
E_V8HFmode, 
E_HFmode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9108; /* avx2_pbroadcastv8hf */
          if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9229; /* avx512fp16_vec_dupv8hf */

        case E_V32BFmode:
          if (!register_operand (operands[0], E_V32BFmode)
              || GET_MODE (x2) != E_V32BFmode
              || GET_MODE (x3) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8BFmode:
              if (!nonimmediate_operand (operands[1], E_V8BFmode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 584 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9109; /* avx2_pbroadcastv32bf */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 9231; /* avx512bw_vec_dupv32bf */

            case E_V32BFmode:
              if (!nonimmediate_operand (operands[1], E_V32BFmode)
                  || !(
#line 27712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 980 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 9188; /* avx512bw_vec_dupv32bf_1 */

            default:
              return -1;
            }

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || GET_MODE (x3) != E_BFmode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8BFmode:
              if (!nonimmediate_operand (operands[1], E_V8BFmode))
                return -1;
              if ((
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 584 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return 9110; /* avx2_pbroadcastv16bf */
              if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 9233; /* avx512vl_vec_dupv16bf */

            case E_V16BFmode:
              if (!nonimmediate_operand (operands[1], E_V16BFmode)
                  || !
#line 27309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return -1;
              return 9117; /* avx2_pbroadcastv16bf_1 */

            default:
              return -1;
            }

        case E_V8BFmode:
          if (pattern932 (x2, 
E_V8BFmode, 
E_BFmode) != 0)
            return -1;
          if (
#line 27295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9111; /* avx2_pbroadcastv8bf */
          if (!(
#line 27745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9235; /* avx512vl_vec_dupv8bf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || GET_MODE (x3) != E_DFmode)
            return -1;
          if (register_operand (operands[1], E_V2DFmode)
              && 
#line 27700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9182; /* avx2_vec_dupv4df */
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9209; /* avx512vl_vec_dupv4df */

        case E_V2DFmode:
          if (pattern932 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 27726 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9211; /* avx512vl_vec_dupv2df */

        default:
          return -1;
        }

    case 2:
      x6 = XVECEXP (x4, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XVECEXP (x4, 0, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern928 (x2, 
E_V4SImode, 
E_V2SImode, 
E_V16SImode) != 0
              || !(
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9323; /* *avx512dq_broadcastv16si */

        case E_V8SImode:
          if (pattern928 (x2, 
E_V4SImode, 
E_V2SImode, 
E_V8SImode) != 0
              || !(
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9325; /* *avx512dq_broadcastv8si */

        case E_V4SImode:
          if (pattern932 (x2, 
E_V4SImode, 
E_V2SImode) != 0
              || !(
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28035 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9327; /* *avx512dq_broadcastv4si */

        case E_V16SFmode:
          if (pattern928 (x2, 
E_V4SFmode, 
E_V2SFmode, 
E_V16SFmode) != 0
              || !(
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28036 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9329; /* *avx512dq_broadcastv16sf */

        case E_V8SFmode:
          if (pattern928 (x2, 
E_V4SFmode, 
E_V2SFmode, 
E_V8SFmode) != 0
              || !(
#line 28051 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 28036 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9331; /* *avx512dq_broadcastv8sf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_310 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5866; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5893; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5920; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5947; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5974; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6001; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6028; /* *avx512f_vpternlogv16sf_1 */

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
          return 6055; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6082; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6109; /* *avx512f_vpternlogv8df_1 */

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
          return 6136; /* *avx512vl_vpternlogv4df_1 */

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
          return 6163; /* *avx512vl_vpternlogv2df_1 */

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
          return 5869; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5896; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5923; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5950; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5977; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6004; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6031; /* *avx512f_vpternlogv16sf_1 */

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
          return 6058; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6085; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6112; /* *avx512f_vpternlogv8df_1 */

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
          return 6139; /* *avx512vl_vpternlogv4df_1 */

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
          return 6166; /* *avx512vl_vpternlogv2df_1 */

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
          return 5872; /* *avx512bw_vpternlogv32hf_1 */

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
          return 5899; /* *avx512vl_vpternlogv16hf_1 */

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
          return 5926; /* *avx512fp16_vpternlogv8hf_1 */

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
          return 5953; /* *avx512bw_vpternlogv32bf_1 */

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
          return 5980; /* *avx512vl_vpternlogv16bf_1 */

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
          return 6007; /* *avx512vl_vpternlogv8bf_1 */

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
          return 6034; /* *avx512f_vpternlogv16sf_1 */

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
          return 6061; /* *avx512vl_vpternlogv8sf_1 */

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
          return 6088; /* *avx512vl_vpternlogv4sf_1 */

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
          return 6115; /* *avx512f_vpternlogv8df_1 */

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
          return 6142; /* *avx512vl_vpternlogv4df_1 */

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
          return 6169; /* *avx512vl_vpternlogv2df_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6934; /* *avx512bw_vpternlogv32hf_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6943; /* *avx512vl_vpternlogv16hf_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6952; /* *avx512fp16_vpternlogv8hf_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6961; /* *avx512bw_vpternlogv32bf_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6970; /* *avx512vl_vpternlogv16bf_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6979; /* *avx512vl_vpternlogv8bf_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6988; /* *avx512f_vpternlogv16sf_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6997; /* *avx512vl_vpternlogv8sf_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 7006; /* *avx512vl_vpternlogv4sf_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7015; /* *avx512f_vpternlogv8df_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7024; /* *avx512vl_vpternlogv4df_3 */

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 7033; /* *avx512vl_vpternlogv2df_3 */

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
          return 6514; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6541; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6568; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6595; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6622; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6649; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6676; /* *avx512f_vpternlogv16sf_2 */

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
          return 6703; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6730; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6757; /* *avx512f_vpternlogv8df_2 */

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
          return 6784; /* *avx512vl_vpternlogv4df_2 */

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
          return 6811; /* *avx512vl_vpternlogv2df_2 */

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
          return 6517; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6544; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6571; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6598; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6625; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6652; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6679; /* *avx512f_vpternlogv16sf_2 */

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
          return 6706; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6733; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6760; /* *avx512f_vpternlogv8df_2 */

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
          return 6787; /* *avx512vl_vpternlogv4df_2 */

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
          return 6814; /* *avx512vl_vpternlogv2df_2 */

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
          return 6520; /* *avx512bw_vpternlogv32hf_2 */

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
          return 6547; /* *avx512vl_vpternlogv16hf_2 */

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
          return 6574; /* *avx512fp16_vpternlogv8hf_2 */

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
          return 6601; /* *avx512bw_vpternlogv32bf_2 */

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
          return 6628; /* *avx512vl_vpternlogv16bf_2 */

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
          return 6655; /* *avx512vl_vpternlogv8bf_2 */

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
          return 6682; /* *avx512f_vpternlogv16sf_2 */

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
          return 6709; /* *avx512vl_vpternlogv8sf_2 */

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
          return 6736; /* *avx512vl_vpternlogv4sf_2 */

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
          return 6763; /* *avx512f_vpternlogv8df_2 */

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
          return 6790; /* *avx512vl_vpternlogv4df_2 */

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
          return 6817; /* *avx512vl_vpternlogv2df_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_321 (rtx x1 ATTRIBUTE_UNUSED,
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
    case UNSPEC:
      return recog_184 (x1, insn, pnum_clobbers);

    case VEC_MERGE:
      return recog_181 (x1, insn, pnum_clobbers);

    case PLUS:
      return recog_204 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_192 (x1, insn, pnum_clobbers);

    case VEC_DUPLICATE:
      return recog_179 (x1, insn, pnum_clobbers);

    case MULT:
      return recog_186 (x1, insn, pnum_clobbers);

    case DIV:
      return recog_203 (x1, insn, pnum_clobbers);

    case SQRT:
      return recog_200 (x1, insn, pnum_clobbers);

    case SMAX:
      return recog_197 (x1, insn, pnum_clobbers);

    case SMIN:
      return recog_198 (x1, insn, pnum_clobbers);

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      return recog_178 (x1, insn, pnum_clobbers);

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
      operands[3] = x4;
      x5 = XEXP (x3, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      x8 = XEXP (x3, 1);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1013 (x3, 
E_V4SFmode) != 0
              || !
#line 4365 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 3279; /* sse_vmmaskcmpv4sf3 */

        case E_V2DFmode:
          if (pattern1013 (x3, 
E_V2DFmode) != 0
              || !(
#line 4365 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3280; /* sse2_vmmaskcmpv2df3 */

        default:
          return -1;
        }

    case AND:
      return recog_191 (x1, insn, pnum_clobbers);

    case IOR:
      return recog_205 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_196 (x1, insn, pnum_clobbers);

    case FMA:
      return recog_182 (x1, insn, pnum_clobbers);

    case FLOAT:
      return recog_202 (x1, insn, pnum_clobbers);

    case UNSIGNED_FLOAT:
      return recog_201 (x1, insn, pnum_clobbers);

    case FIX:
      return recog_195 (x1, insn, pnum_clobbers);

    case UNSIGNED_FIX:
      return recog_199 (x1, insn, pnum_clobbers);

    case FLOAT_EXTEND:
      return recog_189 (x1, insn, pnum_clobbers);

    case FLOAT_TRUNCATE:
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern773 (x3, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8DFmode:
              if (!vector_operand (operands[1], E_V8DFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4742; /* avx512fp16_vcvtpd2ph_v8df_mask */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4750; /* avx512fp16_vcvtps2ph_v8sf_mask */

            default:
              return -1;
            }

        case E_V16HFmode:
          if (pattern774 (x3, 
E_V16HFmode, 
E_HImode, 
E_V16SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4746; /* avx512fp16_vcvtps2ph_v16sf_mask */

        case E_V8SFmode:
          if (pattern774 (x3, 
E_V8SFmode, 
E_QImode, 
E_V8DFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5180; /* avx512f_cvtpd2ps512_mask */

        case E_V4SFmode:
          if (pattern774 (x3, 
E_V4SFmode, 
E_QImode, 
E_V4DFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5184; /* avx_cvtpd2ps256_mask */

        case E_V16BFmode:
          if (pattern147 (x3, 
E_V16BFmode, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31180 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31108 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10351; /* avx512f_cvtneps2bf16_v16sf_mask */

        case E_V8BFmode:
          if (pattern147 (x3, 
E_V8BFmode, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31180 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 31108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10353; /* avx512f_cvtneps2bf16_v8sf_mask */

        default:
          return -1;
        }

    case VEC_SELECT:
      return recog_180 (x1, insn, pnum_clobbers);

    case SS_TRUNCATE:
      switch (pattern138 (x3))
        {
        case 0:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7244; /* avx512f_ss_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7280; /* avx512vl_ss_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7247; /* avx512f_ss_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7250; /* avx512f_ss_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7253; /* avx512f_ss_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7277; /* avx512vl_ss_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15220 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7260; /* avx512bw_ss_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7274; /* avx512vl_ss_truncatev4div4si2_mask */

        default:
          return -1;
        }

    case TRUNCATE:
      return recog_190 (x1, insn, pnum_clobbers);

    case US_TRUNCATE:
      switch (pattern138 (x3))
        {
        case 0:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7246; /* avx512f_us_truncatev16siv16qi2_mask */

        case 1:
          if (!(
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7282; /* avx512vl_us_truncatev16hiv16qi2_mask */

        case 2:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7249; /* avx512f_us_truncatev16siv16hi2_mask */

        case 3:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7252; /* avx512f_us_truncatev8div8si2_mask */

        case 4:
          if (!
#line 15148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7255; /* avx512f_us_truncatev8div8hi2_mask */

        case 5:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7279; /* avx512vl_us_truncatev8siv8hi2_mask */

        case 6:
          if (!
#line 15220 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7262; /* avx512bw_us_truncatev32hiv32qi2_mask */

        case 7:
          if (!
#line 15320 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7276; /* avx512vl_us_truncatev4div4si2_mask */

        default:
          return -1;
        }

    case SS_PLUS:
      switch (pattern139 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7515; /* *avx512bw_ssaddv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7523; /* *avx2_ssaddv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))))
            return -1;
          return 7531; /* *sse2_ssaddv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7539; /* *avx512bw_ssaddv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7547; /* *avx2_ssaddv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))))
            return -1;
          return 7555; /* *sse2_ssaddv8hi3_mask */

        default:
          return -1;
        }

    case US_PLUS:
      switch (pattern139 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7517; /* *avx512bw_usaddv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7525; /* *avx2_usaddv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))))
            return -1;
          return 7533; /* *sse2_usaddv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7541; /* *avx512bw_usaddv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7549; /* *avx2_usaddv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))))
            return -1;
          return 7557; /* *sse2_usaddv8hi3_mask */

        default:
          return -1;
        }

    case SS_MINUS:
      switch (pattern139 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7519; /* *avx512bw_sssubv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7527; /* *avx2_sssubv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))))
            return -1;
          return 7535; /* *sse2_sssubv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7543; /* *avx512bw_sssubv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7551; /* *avx2_sssubv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))))
            return -1;
          return 7559; /* *sse2_sssubv8hi3_mask */

        default:
          return -1;
        }

    case US_MINUS:
      switch (pattern139 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V64QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7521; /* *avx512bw_ussubv64qi3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7529; /* *avx2_ussubv32qi3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))))
            return -1;
          return 7537; /* *sse2_ussubv16qi3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (64 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V32HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
            return -1;
          return 7545; /* *avx512bw_ussubv32hi3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (32 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))))
            return -1;
          return 7553; /* *avx2_ussubv16hi3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 16331 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && (16 == 64 || TARGET_AVX512VL) && TARGET_AVX512BW
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))))
            return -1;
          return 7561; /* *sse2_ussubv8hi3_mask */

        default:
          return -1;
        }

    case ASHIFTRT:
      return recog_185 (x1, insn, pnum_clobbers);

    case ASHIFT:
      return recog_188 (x1, insn, pnum_clobbers);

    case LSHIFTRT:
      return recog_187 (x1, insn, pnum_clobbers);

    case ROTATE:
      switch (pattern142 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7715; /* avx512f_rolvv16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7719; /* avx512vl_rolvv8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7723; /* avx512vl_rolvv4si_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7727; /* avx512f_rolvv8di_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7731; /* avx512vl_rolvv4di_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7735; /* avx512vl_rolvv2di_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7739; /* avx512f_rolv16si_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7743; /* avx512vl_rolv8si_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7747; /* avx512vl_rolv4si_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7751; /* avx512f_rolv8di_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7755; /* avx512vl_rolv4di_mask */

        case 11:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7759; /* avx512vl_rolv2di_mask */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern142 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7717; /* avx512f_rorvv16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7721; /* avx512vl_rorvv8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7725; /* avx512vl_rorvv4si_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7729; /* avx512f_rorvv8di_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7733; /* avx512vl_rorvv4di_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7737; /* avx512vl_rorvv2di_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7741; /* avx512f_rorv16si_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7745; /* avx512vl_rorv8si_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7749; /* avx512vl_rorv4si_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7753; /* avx512f_rorv8di_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7757; /* avx512vl_rorv4di_mask */

        case 11:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17662 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7761; /* avx512vl_rorv2di_mask */

        default:
          return -1;
        }

    case UMAX:
      switch (pattern143 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7779; /* *avx512f_umaxv16si3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7787; /* *avx512f_umaxv8si3_mask */

        case 2:
          if (nonimmediate_operand (operands[1], E_V4SImode)
              && nonimmediate_operand (operands[2], E_V4SImode)
              && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7795; /* *avx512f_umaxv4si3_mask */
          if (!vector_operand (operands[1], E_V4SImode)
              || !vector_operand (operands[2], E_V4SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7885; /* *sse4_1_umaxv4si3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7803; /* *avx512f_umaxv8di3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7811; /* *avx512f_umaxv4di3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7819; /* *avx512f_umaxv2di3_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7827; /* *avx512bw_umaxv64qi3_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7835; /* *avx512bw_umaxv16qi3_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7843; /* *avx512bw_umaxv32qi3_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7851; /* *avx512bw_umaxv32hi3_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7859; /* *avx512bw_umaxv16hi3_mask */

        case 11:
          if (nonimmediate_operand (operands[1], E_V8HImode)
              && nonimmediate_operand (operands[2], E_V8HImode)
              && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7867; /* *avx512bw_umaxv8hi3_mask */
          if (!vector_operand (operands[1], E_V8HImode)
              || !vector_operand (operands[2], E_V8HImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7881; /* *sse4_1_umaxv8hi3_mask */

        default:
          return -1;
        }

    case UMIN:
      switch (pattern143 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7781; /* *avx512f_uminv16si3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7789; /* *avx512f_uminv8si3_mask */

        case 2:
          if (nonimmediate_operand (operands[1], E_V4SImode)
              && nonimmediate_operand (operands[2], E_V4SImode)
              && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7797; /* *avx512f_uminv4si3_mask */
          if (!vector_operand (operands[1], E_V4SImode)
              || !vector_operand (operands[2], E_V4SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7887; /* *sse4_1_uminv4si3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7805; /* *avx512f_uminv8di3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7813; /* *avx512f_uminv4di3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7821; /* *avx512f_uminv2di3_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7829; /* *avx512bw_uminv64qi3_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7837; /* *avx512bw_uminv16qi3_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7845; /* *avx512bw_uminv32qi3_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7853; /* *avx512bw_uminv32hi3_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7861; /* *avx512bw_uminv16hi3_mask */

        case 11:
          if (nonimmediate_operand (operands[1], E_V8HImode)
              && nonimmediate_operand (operands[2], E_V8HImode)
              && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return 7869; /* *avx512bw_uminv8hi3_mask */
          if (!vector_operand (operands[1], E_V8HImode)
              || !vector_operand (operands[2], E_V8HImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
            return -1;
          return 7883; /* *sse4_1_uminv8hi3_mask */

        default:
          return -1;
        }

    case VEC_CONCAT:
      return recog_183 (x1, insn, pnum_clobbers);

    case ABS:
      switch (pattern146 (x3))
        {
        case 0:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8663; /* absv16si2_mask */

        case 1:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8664; /* absv8si2_mask */

        case 2:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8665; /* absv4si2_mask */

        case 3:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8666; /* absv8di2_mask */

        case 4:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8667; /* absv4di2_mask */

        case 5:
          if (!(
#line 23380 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8668; /* absv2di2_mask */

        case 6:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8669; /* absv64qi2_mask */

        case 7:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8670; /* absv16qi2_mask */

        case 8:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8671; /* absv32qi2_mask */

        case 9:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8672; /* absv32hi2_mask */

        case 10:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8673; /* absv16hi2_mask */

        case 11:
          if (!(
#line 23393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 8674; /* absv8hi2_mask */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      return recog_194 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      return recog_193 (x1, insn, pnum_clobbers);

    case CLZ:
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x8 = XEXP (x3, 1);
      operands[2] = x8;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern144 (x3, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10064; /* clzv16si2_mask */

        case E_V8SImode:
          if (pattern144 (x3, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10066; /* clzv8si2_mask */

        case E_V4SImode:
          if (pattern144 (x3, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10068; /* clzv4si2_mask */

        case E_V8DImode:
          if (pattern144 (x3, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10070; /* clzv8di2_mask */

        case E_V4DImode:
          if (pattern144 (x3, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10072; /* clzv4di2_mask */

        case E_V2DImode:
          if (pattern144 (x3, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29948 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10074; /* clzv2di2_mask */

        default:
          return -1;
        }

    case POPCOUNT:
      switch (pattern146 (x3))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10137; /* vpopcountv16si_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10139; /* vpopcountv8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10141; /* vpopcountv4si_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10143; /* vpopcountv8di_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10145; /* vpopcountv4di_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10147; /* vpopcountv2di_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10157; /* vpopcountv64qi_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10159; /* vpopcountv16qi_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10161; /* vpopcountv32qi_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10163; /* vpopcountv32hi_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10165; /* vpopcountv16hi_mask */

        case 11:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10167; /* vpopcountv8hi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_336 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4610; /* avx512fp16_fix_truncv8hi2 */

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
      return 4614; /* avx512fp16_fix_truncv16hi2 */

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
      return 4622; /* avx512fp16_fix_truncv32hi2 */

    case 3:
      if (!register_operand (operands[0], E_V8SImode))
        return -1;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!vector_operand (operands[1], E_V8HFmode)
              || !(
#line 7878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4630; /* avx512fp16_fix_truncv8si2 */

        case E_V8SFmode:
          if (!nonimmediate_operand (operands[1], E_V8SFmode)
              || !
#line 8806 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 4895; /* fix_truncv8sfv8si2 */

        case E_V8DFmode:
          if (!vector_operand (operands[1], E_V8DFmode)
              || !
#line 9581 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5036; /* fix_truncv8dfv8si2 */

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
          return 4638; /* avx512fp16_fix_truncv16si2 */

        case 1:
          if (!
#line 8786 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4883; /* fix_truncv16sfv16si2 */

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
          return 4646; /* avx512fp16_fix_truncv8di2 */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5081; /* fix_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5137; /* fix_truncv8sfv8di2 */

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
          return 4674; /* *avx512fp16_fix_truncv4si2_load */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8836 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 4899; /* fix_truncv4sfv4si2 */

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 9671 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX || (TARGET_AVX512VL && TARGET_AVX512F)))
            return -1;
          return 5053; /* fix_truncv4dfv4si2 */

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
          return 4678; /* *avx512fp16_fix_truncv4di2_load */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5089; /* fix_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5141; /* fix_truncv4sfv4di2 */

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
          return 4690; /* *avx512fp16_fix_truncv2di2_load */

        case 1:
          if (!(
#line 9712 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5097; /* fix_truncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4666; /* avx512fp16_fix_truncv4si2 */

    case 10:
      if (!
#line 7918 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4670; /* avx512fp16_fix_truncv4di2 */

    case 11:
      if (!
#line 7968 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))
        return -1;
      return 4686; /* avx512fp16_fix_truncv2di2 */

    case 12:
      if (!
#line 9778 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 5149; /* avx512dq_fix_truncv2sfv2di2 */

    default:
      return -1;
    }
}

 int
recog_343 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  switch (pattern34 (x1))
    {
    case 0:
      if (!
#line 24130 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
        return -1;
      return 8757; /* avx2_sign_extendv16qiv16hi2 */

    case 1:
      if (!
#line 24184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
        return -1;
      return 8765; /* avx512bw_sign_extendv32qiv32hi2 */

    case 2:
      if (!
#line 24254 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1))
        return -1;
      return 8777; /* *sse4_1_sign_extendv8qiv8hi2_1 */

    case 3:
      if (!
#line 24379 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8789; /* *avx512f_sign_extendv16qiv16si2 */

    case 4:
      if (!
#line 24522 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8817; /* avx512f_sign_extendv16hiv16si2 */

    case 5:
      if (!
#line 24411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8797; /* *avx2_sign_extendv8qiv8si2_1 */

    case 6:
      if (!
#line 24575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8825; /* avx2_sign_extendv8hiv8si2 */

    case 7:
      if (!
#line 24472 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8809; /* *sse4_1_sign_extendv4qiv4si2_1 */

    case 8:
      if (!
#line 24645 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8837; /* *sse4_1_sign_extendv4hiv4si2_1 */

    case 9:
      if (!
#line 24776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8853; /* *avx512f_sign_extendv8qiv8di2_1 */

    case 10:
      if (!
#line 24947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8884; /* avx512f_sign_extendv8hiv8di2 */

    case 11:
      if (!
#line 25084 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 8912; /* avx512f_sign_extendv8siv8di2 */

    case 12:
      if (!
#line 24834 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8865; /* *avx2_sign_extendv4qiv4di2_1 */

    case 13:
      if (!
#line 24977 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8892; /* *avx2_sign_extendv4hiv4di2_1 */

    case 14:
      if (!
#line 25135 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 8918; /* avx2_sign_extendv4siv4di2 */

    case 15:
      if (!
#line 24896 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8877; /* *sse4_1_sign_extendv2qiv2di2_1 */

    case 16:
      if (!
#line 25035 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8904; /* *sse4_1_sign_extendv2hiv2di2_1 */

    case 17:
      if (!
#line 25201 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
        return -1;
      return 8928; /* *sse4_1_sign_extendv2siv2di2_1 */

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
            return 8773; /* sse4_1_sign_extendv8qiv8hi2 */
          break;

        case 1:
          if (
#line 24400 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8793; /* avx2_sign_extendv8qiv8si2 */
          break;

        case 2:
          if (
#line 24766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return 8849; /* avx512f_sign_extendv8qiv8di2 */
          break;

        case 3:
          if (
#line 24460 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8805; /* sse4_1_sign_extendv4qiv4si2 */
          break;

        case 4:
          if (
#line 24633 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8833; /* sse4_1_sign_extendv4hiv4si2 */
          break;

        case 5:
          if (
#line 24823 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8861; /* avx2_sign_extendv4qiv4di2 */
          break;

        case 6:
          if (
#line 24966 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return 8888; /* avx2_sign_extendv4hiv4di2 */
          break;

        case 7:
          if (
#line 24884 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8873; /* sse4_1_sign_extendv2qiv2di2 */
          break;

        case 8:
          if (
#line 25023 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8900; /* sse4_1_sign_extendv2hiv2di2 */
          break;

        case 9:
          if (
#line 25189 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1))
            return 8924; /* sse4_1_sign_extendv2siv2di2 */
          break;

        default:
          break;
        }
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
        return -1;
      switch (pattern680 (x2))
        {
        case 0:
          if (!
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8781; /* *sse4_1_sign_extendv8qiv8hi2_2 */

        case 1:
          if (!
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8801; /* *avx2_sign_extendv8qiv8si2_2 */

        case 2:
          if (!
#line 24794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 8857; /* *avx512f_sign_extendv8qiv8di2_2 */

        case 3:
          if (!
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8841; /* *sse4_1_sign_extendv4hiv4si2_2 */

        case 4:
          if (!
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8896; /* *avx2_sign_extendv4hiv4di2_2 */

        case 5:
          if (!
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8932; /* *sse4_1_sign_extendv2siv2di2_2 */

        case 6:
          if (!
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8813; /* *sse4_1_sign_extendv4qiv4si2_2 */

        case 7:
          if (!
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8869; /* *avx2_sign_extendv4qiv4di2_2 */

        case 8:
          if (!
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()))
            return -1;
          return 8908; /* *sse4_1_sign_extendv2hiv2di2_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_350 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern513 (x3, 
E_V32HFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 2851; /* avx512fp16_divv32hf3 */

    case E_V16HFmode:
      if (pattern513 (x3, 
E_V16HFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2855; /* avx512fp16_divv16hf3 */

    case E_V8HFmode:
      if (pattern513 (x3, 
E_V8HFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 2859; /* avx512fp16_divv8hf3 */

    case E_V16SFmode:
      if (pattern513 (x3, 
E_V16SFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2861; /* avx512f_divv16sf3 */

    case E_V8SFmode:
      if (pattern513 (x3, 
E_V8SFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2865; /* avx_divv8sf3 */

    case E_V4SFmode:
      if (pattern513 (x3, 
E_V4SFmode) != 0
          || !
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1))
        return -1;
      return 2869; /* sse_divv4sf3 */

    case E_V8DFmode:
      if (pattern513 (x3, 
E_V8DFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2871; /* avx512f_divv8df3 */

    case E_V4DFmode:
      if (pattern513 (x3, 
E_V4DFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2875; /* avx_divv4df3 */

    case E_V2DFmode:
      if (pattern513 (x3, 
E_V2DFmode) != 0
          || !(
#line 2898 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1 && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2879; /* sse2_divv2df3 */

    case E_V32BFmode:
      if (pattern14 (x3, 
E_V32BFmode) != 0
          || !(
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10615; /* avx10_2_divbf16_v32bf */

    case E_V16BFmode:
      if (pattern14 (x3, 
E_V16BFmode) != 0
          || !
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10623; /* avx10_2_divbf16_v16bf */

    case E_V8BFmode:
      if (pattern14 (x3, 
E_V8BFmode) != 0
          || !
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10631; /* avx10_2_divbf16_v8bf */

    default:
      return -1;
    }
}

 int
recog_356 (rtx x1 ATTRIBUTE_UNUSED,
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
  x4 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x4))
    {
    case CLOBBER:
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case MEM:
          if (GET_MODE (x6) != E_BLKmode)
            return -1;
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != SCRATCH)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (push_operand (operands[0], E_SImode)
                  && general_no_elim_operand (operands[1], E_SImode)
                  && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
                return 74; /* *pushsi2_prologue */
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !pop_operand (operands[1], E_SImode)
                  || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
                return -1;
              return 78; /* *popsi1_epilogue */

            case E_DImode:
              if (push_operand (operands[0], E_DImode)
                  && general_no_elim_operand (operands[1], E_DImode)
                  && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
                return 75; /* *pushdi2_prologue */
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !pop_operand (operands[1], E_DImode)
                  || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
                return -1;
              return 79; /* *popdi1_epilogue */

            default:
              return -1;
            }

        case REG:
          if (REGNO (x6) != 17
              || GET_MODE (x6) != E_CCmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (const0_operand (operands[1], E_SImode))
                {
                  if (register_operand (operands[0], E_SImode)
                      && 
#line 2424 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                    return 84; /* *movsi_xor */
                  if (memory_operand (operands[0], E_SImode)
                      && 
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                    return 87; /* *movsi_and */
                }
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !constm1_operand (operands[1], E_SImode)
                  || !
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 90; /* *movsi_or */

            case E_DImode:
              if (const0_operand (operands[1], E_DImode))
                {
                  if (register_operand (operands[0], E_DImode)
                      && (
#line 2424 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 85; /* *movdi_xor */
                  if (memory_operand (operands[0], E_DImode)
                      && (
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 88; /* *movdi_and */
                }
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !constm1_operand (operands[1], E_DImode)
                  || !(
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 91; /* *movdi_or */

            case E_HImode:
              if (memory_operand (operands[0], E_HImode)
                  && const0_operand (operands[1], E_HImode)
                  && 
#line 2434 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return 86; /* *movhi_and */
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || !constm1_operand (operands[1], E_HImode)
                  || !
#line 2444 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return -1;
              return 89; /* *movhi_or */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SET:
      x8 = XEXP (x4, 1);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          if (!rtx_equal_p (x8, operands[0]))
            return -1;
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          x6 = XEXP (x4, 0);
          if (!rtx_equal_p (x6, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 107; /* swapsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !register_operand (operands[1], E_DImode)
                  || !
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 108; /* swapdi */

            case E_QImode:
              if (!register_operand (operands[0], E_QImode)
                  || !register_operand (operands[1], E_QImode))
                return -1;
              return 109; /* *swapqi */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || !register_operand (operands[1], E_HImode))
                return -1;
              return 110; /* *swaphi */

            case E_XFmode:
              if (!register_operand (operands[0], E_XFmode)
                  || !register_operand (operands[1], E_XFmode)
                  || !
#line 4644 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 173; /* *swapxf */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x8, 0) != 1
              || XINT (x8, 1) != 72
              || GET_MODE (x8) != E_XFmode
              || !register_operand (operands[0], E_SFmode))
            return -1;
          x5 = XEXP (x2, 1);
          operands[3] = x5;
          if (!const1_operand (operands[3], E_SFmode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_XFmode))
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          operands[2] = x9;
          if (!register_operand (operands[2], E_XFmode)
              || !
#line 24085 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
            return -1;
          return 1720; /* fptanxf4_i387 */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 108
          || GET_MODE (x4) != E_DImode)
        return -1;
      x10 = XVECEXP (x4, 0, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 1);
      operands[1] = x5;
      if (register_operand (operands[1], E_DImode)
          && push_operand (operands[0], E_DImode)
          && 
#line 3910 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return 161; /* pushp_di */
      if (!pop_operand (operands[1], E_DImode)
          || !register_operand (operands[0], E_DImode)
          || !
#line 3918 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_PPX))
        return -1;
      return 162; /* popp_di */

    default:
      return -1;
    }
}

 int
recog_368 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (pattern338 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !general_operand (operands[2], E_QImode)
              || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 287; /* *addqi_1_zexthi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !general_operand (operands[2], E_QImode)
                  || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 289; /* *addqi_1_zextsi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 293; /* *addhi_1_zextsi */

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
                  || !general_operand (operands[2], E_QImode)
                  || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 291; /* *addqi_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode)
                  || !
#line 6715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 295; /* *addhi_1_zextdi */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !
#line 6760 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 296; /* addsi_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      x7 = XEXP (x5, 0);
      switch (GET_CODE (x7))
        {
        case LTU:
        case UNLT:
          operands[3] = x7;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17)
            return -1;
          x9 = XEXP (x7, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x5, 1);
          operands[1] = x10;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (pattern1151 (x3))
            {
            case 0:
              if (pattern1750 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 465; /* *addqi3_carry_zexthi */

            case 1:
              if (pattern1750 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 466; /* *addqi3_carry_zextsi */

            case 2:
              if (pattern1750 (x5, 
E_HImode) != 0
                  || !
#line 8914 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 468; /* *addhi3_carry_zextsi */

            case 3:
              if (pattern1750 (x5, 
E_QImode) != 0
                  || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 467; /* *addqi3_carry_zextdi */

            case 4:
              if (pattern1750 (x5, 
E_HImode) != 0
                  || !
#line 8914 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 469; /* *addhi3_carry_zextdi */

            case 5:
              if (pattern1750 (x5, 
E_SImode) != 0
                  || !
#line 8933 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 470; /* *addsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern1152 (x3))
        {
        case 0:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 471; /* *addqi3_carry_zexthi_0 */

        case 1:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 472; /* *addqi3_carry_zextsi_0 */

        case 2:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 474; /* *addhi3_carry_zextsi_0 */

        case 3:
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 473; /* *addqi3_carry_zextdi_0 */

        case 4:
          if (!ix86_carry_flag_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 8966 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 475; /* *addhi3_carry_zextdi_0 */

        case 5:
          if (!ix86_carry_flag_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 8980 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 476; /* *addsi3_carry_zext_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern1152 (x3))
        {
        case 0:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 477; /* *addqi3_carry_zexthi_0r */

        case 1:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 478; /* *addqi3_carry_zextsi_0r */

        case 2:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 480; /* *addhi3_carry_zextsi_0r */

        case 3:
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || !nonimmediate_operand (operands[1], E_QImode)
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 479; /* *addqi3_carry_zextdi_0r */

        case 4:
          if (!ix86_carry_flag_unset_operator (operands[2], E_HImode)
              || !nonimmediate_operand (operands[1], E_HImode)
              || !
#line 9011 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          return 481; /* *addhi3_carry_zextdi_0r */

        case 5:
          if (!ix86_carry_flag_unset_operator (operands[2], E_SImode)
              || !nonimmediate_operand (operands[1], E_SImode)
              || !
#line 9025 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 482; /* *addsi3_carry_zext_0r */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern1153 (x5) != 0
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || GET_MODE (x4) != E_SImode)
        return -1;
      x6 = XEXP (x4, 1);
      operands[1] = x6;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 23231 "../../src/gcc/config/i386/i386.md"
(TARGET_X32))
        return -1;
      return 1663; /* *add_tp_x32_zext */

    default:
      return -1;
    }
}

 int
recog_370 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
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
      if (pattern338 (x1) != 0)
        return -1;
      switch (pattern1150 (x3))
        {
        case 0:
          if (!
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 178; /* zero_extendqisi2_and */

        case 1:
          if (!
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 179; /* zero_extendhisi2_and */

        case 2:
          if (!
#line 4893 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            return -1;
          return 182; /* zero_extendqihi2_and */

        default:
          return -1;
        }

    case PLUS:
      return recog_368 (x1, insn, pnum_clobbers);

    case MINUS:
      return recog_369 (x1, insn, pnum_clobbers);

    case MULT:
      if (pattern339 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !immediate_operand (operands[2], E_HImode)
              || !
#line 10643 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
            return -1;
          return 597; /* *imulhisizu */

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !immediate_operand (operands[2], E_HImode)
                  || !
#line 10643 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_ZU && true))
                return -1;
              return 599; /* *imulhidizu */

            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !
#line 10655 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              return 601; /* *mulsi3_1_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case DIV:
      if (pattern340 (x1, pnum_clobbers, 
MOD) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x9, 1);
      if (!rtx_equal_p (x11, operands[3])
          || !
#line 11684 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 655; /* *divmodsi4_zext_1 */

    case UDIV:
      if (pattern340 (x1, pnum_clobbers, 
UMOD) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      switch (pattern1621 (x9))
        {
        case 0:
          if (!
#line 11719 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 656; /* *udivmodsi4_zext_1 */

        case 1:
          if (!
#line 11741 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          *pnum_clobbers = 1;
          return 657; /* *udivmodsi4_pow2_zext_1 */

        default:
          return -1;
        }

    case MOD:
      if (pattern341 (x1, pnum_clobbers, 
DIV) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      x10 = XEXP (x9, 0);
      if (!rtx_equal_p (x10, operands[2]))
        return -1;
      x11 = XEXP (x9, 1);
      if (!rtx_equal_p (x11, operands[3])
          || !
#line 11767 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      *pnum_clobbers = 1;
      return 658; /* *divmodsi4_zext_2 */

    case UMOD:
      if (pattern341 (x1, pnum_clobbers, 
UDIV) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[3] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x9 = XEXP (x7, 1);
      switch (pattern1621 (x9))
        {
        case 0:
          if (!
#line 11803 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 659; /* *udivmodsi4_zext_2 */

        case 1:
          if (!
#line 11825 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)))
            return -1;
          *pnum_clobbers = 1;
          return 660; /* *udivmodsi4_pow2_zext_2 */

        default:
          return -1;
        }

    case AND:
      if (pattern338 (x1) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          switch (pattern343 (x3))
            {
            case 0:
              if (!
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 709; /* *andqi_1_zexthi */

            case 1:
              if (!
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 711; /* *andqi_1_zextsi */

            case 2:
              if (!
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 715; /* *andhi_1_zextsi */

            case 3:
              if (!
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 713; /* *andqi_1_zextdi */

            case 4:
              if (!
#line 12640 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 717; /* *andhi_1_zextdi */

            case 5:
              if (!
#line 12656 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 718; /* *andsi_1_zext */

            default:
              return -1;
            }

        case PLUS:
          if (pattern693 (x5) != 0
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode)
            return -1;
          x12 = XEXP (x5, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          if (!register_operand (operands[2], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 22100 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
            return -1;
          return 1598; /* *bmi2_bzhi_zero_extendsidi_4 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern344 (x1))
        {
        case 0:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 844; /* *iorqi_1_zexthi */

        case 1:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 848; /* *iorqi_1_zextsi */

        case 2:
          if (!
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 856; /* *iorhi_1_zextsi */

        case 3:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 852; /* *iorqi_1_zextdi */

        case 4:
          if (!
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 860; /* *iorhi_1_zextdi */

        case 5:
          if (!
#line 13745 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 863; /* *iorsi_1_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern344 (x1))
        {
        case 0:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 846; /* *xorqi_1_zexthi */

        case 1:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 850; /* *xorqi_1_zextsi */

        case 2:
          if (!
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 858; /* *xorhi_1_zextsi */

        case 3:
          if (!
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 854; /* *xorqi_1_zextdi */

        case 4:
          if (!
#line 13729 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 862; /* *xorhi_1_zextdi */

        case 5:
          if (!
#line 13745 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 864; /* *xorsi_1_zext */

        default:
          return -1;
        }

    case NEG:
      if (pattern345 (x1) != 0)
        return -1;
      switch (pattern347 (x3))
        {
        case 0:
          if (!
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 963; /* *negqi_1_zexthi */

        case 1:
          if (!
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 965; /* *negqi_1_zextsi */

        case 2:
          if (!
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 969; /* *neghi_1_zextsi */

        case 3:
          if (!
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 967; /* *negqi_1_zextdi */

        case 4:
          if (!
#line 14370 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 971; /* *neghi_1_zextdi */

        case 5:
          if (!
#line 14381 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 972; /* *negsi_1_zext */

        default:
          return -1;
        }

    case ASHIFT:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1094; /* *ashlqi3_1_zexthi */

        case 1:
          if (!
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1096; /* *ashlqi3_1_zextsi */

        case 2:
          if (!
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1100; /* *ashlhi3_1_zextsi */

        case 3:
          if (!
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1098; /* *ashlqi3_1_zextdi */

        case 4:
          if (!
#line 16019 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1102; /* *ashlhi3_1_zextdi */

        case 5:
          if (!
#line 16031 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1103; /* *ashlsi3_1_zext */

        default:
          return -1;
        }

    case ASHIFTRT:
      if (pattern339 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode)
            return -1;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[1], E_SImode))
                return -1;
              if (const_int_operand (operands[2], E_QImode)
                  && 
#line 17266 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return 1170; /* *ashrsi3_cvt_zext */
              if (!nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17478 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1207; /* *ashrsi3_1_zext */

            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1197; /* *ashrqi3_1_zextdi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !nonmemory_operand (operands[2], E_QImode)
                  || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1205; /* *ashrhi3_1_zextdi */

            default:
              return -1;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode
              || !nonimmediate_operand (operands[1], E_QImode)
              || !nonmemory_operand (operands[2], E_QImode)
              || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1189; /* *ashrqi3_1_zexthi */

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1193; /* *ashrqi3_1_zextsi */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1201; /* *ashrhi3_1_zextsi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LSHIFTRT:
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x7))
        {
        case CLOBBER:
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != REG
              || REGNO (x8) != 17
              || GET_MODE (x8) != E_CCmode)
            return -1;
          switch (pattern348 (x3))
            {
            case 0:
              if (!
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1187; /* *lshrqi3_1_zexthi */

            case 1:
              if (!
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1191; /* *lshrqi3_1_zextsi */

            case 2:
              if (!
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1199; /* *lshrhi3_1_zextsi */

            case 3:
              if (!
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1195; /* *lshrqi3_1_zextdi */

            case 4:
              if (!
#line 17466 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
                return -1;
              return 1203; /* *lshrhi3_1_zextdi */

            case 5:
              if (!
#line 17478 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1206; /* *lshrsi3_1_zext */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x7, 0) != 1
              || XINT (x7, 1) != 174)
            return -1;
          x15 = XVECEXP (x7, 0, 0);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern1232 (x3, 
E_SImode, 
E_DImode) != 0
              || !const_0_to_31_operand (operands[2], E_VOIDmode)
              || !
#line 2306 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
            return -1;
          return 2609; /* *klshrsi3_1_zext */

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1352; /* *rotlqi3_1_zexthi */

        case 1:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1356; /* *rotlqi3_1_zextsi */

        case 2:
          if (!
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1364; /* *rotlhi3_1_zextsi */

        case 3:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1360; /* *rotlqi3_1_zextdi */

        case 4:
          if (!
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1368; /* *rotlhi3_1_zextdi */

        case 5:
          if (!
#line 18593 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)))
            return -1;
          return 1371; /* *rotlsi3_1_zext */

        default:
          return -1;
        }

    case ROTATERT:
      switch (pattern349 (x1))
        {
        case 0:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1354; /* *rotrqi3_1_zexthi */

        case 1:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1358; /* *rotrqi3_1_zextsi */

        case 2:
          if (!
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1366; /* *rotrhi3_1_zextsi */

        case 3:
          if (!
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1362; /* *rotrqi3_1_zextdi */

        case 4:
          if (!
#line 18581 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1370; /* *rotrhi3_1_zextdi */

        case 5:
          if (!
#line 18593 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)))
            return -1;
          return 1372; /* *rotrsi3_1_zext */

        default:
          return -1;
        }

    case CTZ:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      switch (pattern937 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 21161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1521; /* *ctzsidi2_uext */

        case 1:
          if (!
#line 21201 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1523; /* *ctzsidi2_uext_falsedep */

        default:
          return -1;
        }

    case CLZ:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      switch (pattern553 (x1, pnum_clobbers))
        {
        case 0:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21596 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
            return -1;
          return 1543; /* *clzsi2_lzcnt_zext_2 */

        case 1:
          x7 = XVECEXP (x1, 0, 1);
          x15 = XVECEXP (x7, 0, 0);
          switch (pattern1422 (x15))
            {
            case 0:
              if (!
#line 21621 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
                return -1;
              *pnum_clobbers = 1;
              return 1544; /* *clzsi2_lzcnt_zext_2_falsedep */

            case 1:
              if (!(
#line 21621 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1545; /* *clzsi2_lzcnt_zext_2_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case POPCOUNT:
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      switch (pattern553 (x1, pnum_clobbers))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern346 (x3, 
E_SImode, 
E_DImode) != 0
                  || !
#line 22433 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              return 1634; /* *popcountsi2_zext_2 */

            case E_SImode:
              if (pattern346 (x3, 
E_HImode, 
E_SImode) != 0
                  || !
#line 22499 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
                return -1;
              return 1637; /* *popcounthi2_2 */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode))
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          x15 = XVECEXP (x7, 0, 0);
          operands[2] = x15;
          if (!register_operand (operands[2], E_DImode)
              || !
#line 22464 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1635; /* *popcountsi2_zext_2_falsedep */

        default:
          return -1;
        }

    case NOT:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (pattern381 (x7, 
174, 
0) != 0)
        return -1;
      x14 = XEXP (x2, 0);
      operands[0] = x14;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 2229 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
        return -1;
      return 2596; /* *knotsi_1_zext */

    case UNSPEC:
      return recog_367 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_395 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case ZERO_EXTEND:
      x7 = XEXP (x5, 1);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XEXP (x4, 1);
      if (GET_CODE (x8) != ZERO_EXTEND)
        return -1;
      x9 = XEXP (x6, 0);
      switch (GET_CODE (x9))
        {
        case TRUNCATE:
          if (GET_MODE (x9) != E_QImode)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MOD
              || GET_MODE (x10) != E_HImode
              || XWINT (x7, 0) != 8L)
            return -1;
          x11 = XEXP (x8, 0);
          if (GET_CODE (x11) != TRUNCATE
              || GET_MODE (x11) != E_QImode)
            return -1;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != DIV
              || GET_MODE (x12) != E_HImode)
            return -1;
          x13 = XVECEXP (x1, 0, 1);
          if (pattern229 (x13, 
E_CCmode, 
17) != 0
              || !register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || GET_MODE (x5) != E_HImode
              || GET_MODE (x6) != E_HImode)
            return -1;
          x14 = XEXP (x10, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_HImode))
            return -1;
          x15 = XEXP (x10, 1);
          if (GET_MODE (x15) != E_HImode
              || GET_MODE (x8) != E_HImode)
            return -1;
          x16 = XEXP (x12, 1);
          if (GET_MODE (x16) != E_HImode)
            return -1;
          x17 = XEXP (x12, 0);
          if (!rtx_equal_p (x17, operands[1]))
            return -1;
          switch (GET_CODE (x15))
            {
            case SIGN_EXTEND:
              if (GET_CODE (x16) != SIGN_EXTEND)
                return -1;
              x18 = XEXP (x15, 0);
              operands[2] = x18;
              if (!nonimmediate_operand (operands[2], E_QImode))
                return -1;
              x19 = XEXP (x16, 0);
              if (!rtx_equal_p (x19, operands[2])
                  || !
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                return -1;
              return 679; /* divmodhiqi3 */

            case ZERO_EXTEND:
              if (GET_CODE (x16) != ZERO_EXTEND)
                return -1;
              x18 = XEXP (x15, 0);
              operands[2] = x18;
              if (!nonimmediate_operand (operands[2], E_QImode))
                return -1;
              x19 = XEXP (x16, 0);
              if (!rtx_equal_p (x19, operands[2])
                  || !
#line 12017 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && true))
                return -1;
              return 681; /* udivmodhiqi3 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[1] = x9;
          x13 = XVECEXP (x1, 0, 1);
          if (pattern381 (x13, 
174, 
0) != 0)
            return -1;
          x11 = XEXP (x8, 0);
          operands[2] = x11;
          switch (XWINT (x7, 0))
            {
            case 8L:
              if (pattern1569 (x4, 
E_QImode, 
E_HImode) != 0
                  || !
#line 2536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                return -1;
              return 2650; /* kunpckhi */

            case 16L:
              if (pattern1569 (x4, 
E_HImode, 
E_SImode) != 0
                  || !
#line 2550 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2651; /* kunpcksi */

            case 32L:
              if (pattern1569 (x4, 
E_SImode, 
E_DImode) != 0
                  || !
#line 2562 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2652; /* kunpckdi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      x13 = XVECEXP (x1, 0, 1);
      if (pattern229 (x13, 
E_CCmode, 
17) != 0)
        return -1;
      switch (pattern1047 (x4, 
LSHIFTRT))
        {
        case 0:
          x8 = XEXP (x4, 1);
          x11 = XEXP (x8, 0);
          x12 = XEXP (x11, 0);
          x17 = XEXP (x12, 0);
          operands[1] = x17;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x7 = XEXP (x5, 1);
              x20 = XEXP (x7, 0);
              operands[2] = x20;
              if (rtx_equal_p (x6, operands[0]))
                {
                  x21 = XEXP (x11, 1);
                  x22 = XEXP (x21, 1);
                  x23 = XEXP (x22, 0);
                  if (rtx_equal_p (x23, operands[2])
                      && 
#line 15401 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && true))
                    return 1063; /* x86_64_shld */
                }
            }
          operands[2] = x17;
          if (!register_operand (operands[0], E_DImode))
            return -1;
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return -1;
          x7 = XEXP (x5, 1);
          x20 = XEXP (x7, 0);
          operands[3] = x20;
          x21 = XEXP (x11, 1);
          x22 = XEXP (x21, 1);
          x23 = XEXP (x22, 0);
          if (!rtx_equal_p (x23, operands[3])
              || !
#line 15422 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1065; /* x86_64_shld_ndd */

        case 1:
          if (!nonimmediate_operand (operands[0], E_SImode)
              || pattern1046 (x4, 
E_SImode, 
E_DImode) != 0)
            return -1;
          x8 = XEXP (x4, 1);
          x11 = XEXP (x8, 0);
          x12 = XEXP (x11, 0);
          x17 = XEXP (x12, 0);
          operands[1] = x17;
          x7 = XEXP (x5, 1);
          x20 = XEXP (x7, 0);
          operands[2] = x20;
          if (rtx_equal_p (x6, operands[0]))
            {
              x21 = XEXP (x11, 1);
              x22 = XEXP (x21, 1);
              x23 = XEXP (x22, 0);
              if (rtx_equal_p (x23, operands[2]))
                return 1075; /* x86_shld */
            }
          operands[2] = x17;
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          operands[3] = x20;
          x21 = XEXP (x11, 1);
          x22 = XEXP (x21, 1);
          x23 = XEXP (x22, 0);
          if (!rtx_equal_p (x23, operands[3])
              || !
#line 15653 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
            return -1;
          return 1077; /* x86_shld_ndd */

        case 2:
          x8 = XEXP (x4, 1);
          switch (GET_CODE (x8))
            {
            case SUBREG:
              switch (pattern1240 (x4, 
LSHIFTRT))
                {
                case 0:
                  x7 = XEXP (x5, 1);
                  operands[2] = x7;
                  if (pattern1677 (x4) == 0
                      && 
#line 15437 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && true))
                    return 1067; /* x86_64_shld_1 */
                  operands[3] = x7;
                  if (pattern1678 (x4) != 0
                      || !
#line 15459 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && INTVAL (operands[4]) == 64 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1069; /* x86_64_shld_ndd_1 */

                case 1:
                  x7 = XEXP (x5, 1);
                  operands[2] = x7;
                  if (pattern1679 (x4) == 0
                      && 
#line 15669 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
  && true))
                    return 1079; /* x86_shld_1 */
                  operands[3] = x7;
                  if (pattern1680 (x4) != 0
                      || !
#line 15691 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD 
   && INTVAL (operands[4]) == 32 - INTVAL (operands[3])
   && true))
                    return -1;
                  return 1081; /* x86_shld_ndd_1 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              switch (pattern1242 (x4))
                {
                case 0:
                  if (!
#line 15531 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1071; /* *x86_64_shld_shrd_1_nozext */

                case 1:
                  if (!
#line 15763 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1083; /* *x86_shld_shrd_1_nozext */

                case 2:
                  x11 = XEXP (x8, 0);
                  operands[1] = x11;
                  if (nonimmediate_operand (operands[0], E_DImode))
                    {
                      x7 = XEXP (x5, 1);
                      operands[2] = x7;
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x24 = XEXP (x8, 1);
                          x25 = XEXP (x24, 1);
                          if (rtx_equal_p (x25, operands[2])
                              && 
#line 15584 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1072; /* *x86_64_shld_2 */
                        }
                    }
                  operands[2] = x11;
                  if (!register_operand (operands[0], E_DImode))
                    return -1;
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_DImode))
                    return -1;
                  x7 = XEXP (x5, 1);
                  operands[3] = x7;
                  x24 = XEXP (x8, 1);
                  x25 = XEXP (x24, 1);
                  if (!rtx_equal_p (x25, operands[3])
                      || !
#line 15605 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1073; /* *x86_64_shld_ndd_2 */

                case 3:
                  x11 = XEXP (x8, 0);
                  operands[1] = x11;
                  if (nonimmediate_operand (operands[0], E_SImode))
                    {
                      x7 = XEXP (x5, 1);
                      operands[2] = x7;
                      if (rtx_equal_p (x6, operands[0]))
                        {
                          x24 = XEXP (x8, 1);
                          x25 = XEXP (x24, 1);
                          if (rtx_equal_p (x25, operands[2])
                              && 
#line 15815 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()))
                            return 1084; /* *x86_shld_2 */
                        }
                    }
                  operands[2] = x11;
                  if (!register_operand (operands[0], E_SImode))
                    return -1;
                  operands[1] = x6;
                  if (!nonimmediate_operand (operands[1], E_SImode))
                    return -1;
                  x7 = XEXP (x5, 1);
                  operands[3] = x7;
                  x24 = XEXP (x8, 1);
                  x25 = XEXP (x24, 1);
                  if (!rtx_equal_p (x25, operands[3])
                      || !
#line 15836 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()))
                    return -1;
                  return 1085; /* *x86_shld_ndd_2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x6, 0) != 1L)
        return -1;
      x13 = XVECEXP (x1, 0, 1);
      if (pattern229 (x13, 
E_CCmode, 
17) != 0)
        return -1;
      switch (pattern370 (x4))
        {
        case 0:
          x7 = XEXP (x5, 1);
          operands[2] = x7;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x4))
                {
                case 0:
                  if (
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1391; /* *btssi */
                  break;

                case 1:
                  if ((
#line 18805 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1393; /* *btsdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x7) != SUBREG)
            return -1;
          switch (pattern1329 (x4))
            {
            case 0:
              if (!
#line 18824 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
          return 1401; /* *btsdi_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_406 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_DImode)
            return -1;
          if (register_operand (operands[0], E_DImode)
              && register_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return 1131; /* ashrdi3_doubleword */
          if (!nonimmediate_operand (operands[0], E_DImode)
              || !nonimmediate_operand (operands[1], E_DImode))
            return -1;
          if (const_int_operand (operands[2], E_QImode)
              && (
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (DImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1169; /* ashrdi3_cvt */
          if (!nonmemory_operand (operands[2], E_QImode)
              || !(
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1178; /* *ashrdi3_1 */

        case E_TImode:
          x4 = XEXP (x2, 1);
          if (pattern1250 (x4, 
E_TImode) != 0
              || !
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1133; /* ashrti3_doubleword */

        case E_SImode:
          x4 = XEXP (x2, 1);
          if (pattern1497 (x4, 
E_SImode) != 0
              || !
#line 17323 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1176; /* *ashrsi3_1 */

        case E_QImode:
          x4 = XEXP (x2, 1);
          if (pattern1497 (x4, 
E_QImode) != 0
              || !
#line 17532 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1209; /* *ashrqi3_1 */

        case E_HImode:
          x4 = XEXP (x2, 1);
          if (pattern1497 (x4, 
E_HImode) != 0
              || !
#line 17532 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          return 1211; /* *ashrhi3_1 */

        case E_V2QImode:
          x4 = XEXP (x2, 1);
          if (pattern1250 (x4, 
E_V2QImode) != 0
              || !
#line 4007 "../../src/gcc/config/i386/mmx.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size))
            return -1;
          return 2216; /* ashrv2qi3 */

        default:
          return -1;
        }

    case STRICT_LOW_PART:
      switch (pattern1251 (x2))
        {
        case 0:
          if (!
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1217; /* *ashrqi3_1_slp */

        case 1:
          if (!
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1219; /* *ashrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_409 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (pattern821 (x3) != 0)
    return -1;
  x4 = XEXP (x2, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x6, 1);
  operands[2] = x9;
  x10 = XEXP (x3, 1);
  operands[3] = x10;
  if (!immediate_operand (operands[3], E_SImode))
    return -1;
  if (call_insn_operand (operands[1], E_SImode)
      && 
#line 20433 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn)))
    return 1483; /* *call_value_pop */
  if (!sibcall_insn_operand (operands[1], E_SImode)
      || !
#line 20444 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn)))
    return -1;
  return 1484; /* *sibcall_value_pop */
}

 int
recog_410 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  x6 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x6))
    {
    case UNSPEC:
      res = recog_408 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case SET:
      res = recog_409 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x7 = XEXP (x4, 0);
  if (GET_CODE (x7) != PLUS
      || GET_MODE (x7) != E_DImode
      || GET_CODE (x6) != UNSPEC
      || GET_MODE (x3) != E_DImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (!register_operand (x8, E_DImode))
    return -1;
  x9 = XEXP (x7, 1);
  if (!immediate_operand (x9, E_DImode)
      || GET_MODE (x6) != E_DImode)
    return -1;
  switch (XVECLEN (x6, 0))
    {
    case 2:
      if (XINT (x6, 1) != 20)
        return -1;
      x10 = XVECEXP (x6, 0, 1);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 7
          || GET_MODE (x10) != E_DImode)
        return -1;
      operands[2] = x8;
      operands[3] = x9;
      x11 = XEXP (x3, 1);
      operands[4] = x11;
      x12 = XVECEXP (x6, 0, 0);
      operands[1] = x12;
      if (!tls_symbolic_operand (operands[1], E_VOIDmode)
          || !
#line 23017 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[3]) == CONST
   && GET_CODE (XEXP (operands[3], 0)) == UNSPEC
   && XINT (XEXP (operands[3], 0), 1) == UNSPEC_PLTOFF))
        return -1;
      return 1652; /* *tls_global_dynamic_64_largepic */

    case 1:
      if (XINT (x6, 1) != 21)
        return -1;
      x12 = XVECEXP (x6, 0, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 7
          || GET_MODE (x12) != E_DImode)
        return -1;
      operands[1] = x8;
      operands[2] = x9;
      x11 = XEXP (x3, 1);
      operands[3] = x11;
      if (!
#line 23111 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_cmodel == CM_LARGE_PIC && !TARGET_PECOFF
   && GET_CODE (operands[2]) == CONST
   && GET_CODE (XEXP (operands[2], 0)) == UNSPEC
   && XINT (XEXP (operands[2], 0), 1) == UNSPEC_PLTOFF))
        return -1;
      return 1656; /* *tls_local_dynamic_base_64_largepic */

    default:
      return -1;
    }
}

 int
recog_419 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  operands[1] = x4;
  x5 = XVECEXP (x1, 0, 1);
  x6 = XVECEXP (x5, 0, 0);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (register_operand (operands[0], E_V64QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V64QImode)
          && register_operand (operands[2], E_V64QImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2422; /* *vmovv64qi_constm1_pternlog_false_dep */
      break;

    case E_V32QImode:
      if (register_operand (operands[0], E_V32QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V32QImode)
          && register_operand (operands[2], E_V32QImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2423; /* *vmovv32qi_constm1_pternlog_false_dep */
      break;

    case E_V16QImode:
      if (register_operand (operands[0], E_V16QImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16QImode)
          && register_operand (operands[2], E_V16QImode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2424; /* *vmovv16qi_constm1_pternlog_false_dep */
      break;

    case E_V32HImode:
      if (register_operand (operands[0], E_V32HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V32HImode)
          && register_operand (operands[2], E_V32HImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2425; /* *vmovv32hi_constm1_pternlog_false_dep */
      break;

    case E_V16HImode:
      if (register_operand (operands[0], E_V16HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16HImode)
          && register_operand (operands[2], E_V16HImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2426; /* *vmovv16hi_constm1_pternlog_false_dep */
      break;

    case E_V8HImode:
      if (register_operand (operands[0], E_V8HImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8HImode)
          && register_operand (operands[2], E_V8HImode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2427; /* *vmovv8hi_constm1_pternlog_false_dep */
      break;

    case E_V16SImode:
      if (register_operand (operands[0], E_V16SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V16SImode)
          && register_operand (operands[2], E_V16SImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2428; /* *vmovv16si_constm1_pternlog_false_dep */
      break;

    case E_V8SImode:
      if (register_operand (operands[0], E_V8SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8SImode)
          && register_operand (operands[2], E_V8SImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2429; /* *vmovv8si_constm1_pternlog_false_dep */
      break;

    case E_V4SImode:
      if (register_operand (operands[0], E_V4SImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4SImode)
          && register_operand (operands[2], E_V4SImode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2430; /* *vmovv4si_constm1_pternlog_false_dep */
      break;

    case E_V8DImode:
      if (register_operand (operands[0], E_V8DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V8DImode)
          && register_operand (operands[2], E_V8DImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2431; /* *vmovv8di_constm1_pternlog_false_dep */
      break;

    case E_V4DImode:
      if (register_operand (operands[0], E_V4DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4DImode)
          && register_operand (operands[2], E_V4DImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2432; /* *vmovv4di_constm1_pternlog_false_dep */
      break;

    case E_V2DImode:
      if (register_operand (operands[0], E_V2DImode)
          && int_float_vector_all_ones_operand (operands[1], E_V2DImode)
          && register_operand (operands[2], E_V2DImode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2433; /* *vmovv2di_constm1_pternlog_false_dep */
      break;

    case E_V4TImode:
      if (register_operand (operands[0], E_V4TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V4TImode)
          && register_operand (operands[2], E_V4TImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2434; /* *vmovv4ti_constm1_pternlog_false_dep */
      break;

    case E_V2TImode:
      if (register_operand (operands[0], E_V2TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V2TImode)
          && register_operand (operands[2], E_V2TImode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2435; /* *vmovv2ti_constm1_pternlog_false_dep */
      break;

    case E_V1TImode:
      if (register_operand (operands[0], E_V1TImode)
          && int_float_vector_all_ones_operand (operands[1], E_V1TImode)
          && register_operand (operands[2], E_V1TImode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2436; /* *vmovv1ti_constm1_pternlog_false_dep */
      break;

    case E_V32HFmode:
      if (register_operand (operands[0], E_V32HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V32HFmode)
          && register_operand (operands[2], E_V32HFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2437; /* *vmovv32hf_constm1_pternlog_false_dep */
      break;

    case E_V16HFmode:
      if (register_operand (operands[0], E_V16HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16HFmode)
          && register_operand (operands[2], E_V16HFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2438; /* *vmovv16hf_constm1_pternlog_false_dep */
      break;

    case E_V8HFmode:
      if (register_operand (operands[0], E_V8HFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8HFmode)
          && register_operand (operands[2], E_V8HFmode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2439; /* *vmovv8hf_constm1_pternlog_false_dep */
      break;

    case E_V32BFmode:
      if (register_operand (operands[0], E_V32BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V32BFmode)
          && register_operand (operands[2], E_V32BFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2440; /* *vmovv32bf_constm1_pternlog_false_dep */
      break;

    case E_V16BFmode:
      if (register_operand (operands[0], E_V16BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16BFmode)
          && register_operand (operands[2], E_V16BFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2441; /* *vmovv16bf_constm1_pternlog_false_dep */
      break;

    case E_V8BFmode:
      if (register_operand (operands[0], E_V8BFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8BFmode)
          && register_operand (operands[2], E_V8BFmode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2442; /* *vmovv8bf_constm1_pternlog_false_dep */
      break;

    case E_V16SFmode:
      if (register_operand (operands[0], E_V16SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V16SFmode)
          && register_operand (operands[2], E_V16SFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2443; /* *vmovv16sf_constm1_pternlog_false_dep */
      break;

    case E_V8SFmode:
      if (register_operand (operands[0], E_V8SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8SFmode)
          && register_operand (operands[2], E_V8SFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2444; /* *vmovv8sf_constm1_pternlog_false_dep */
      break;

    case E_V4SFmode:
      if (register_operand (operands[0], E_V4SFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V4SFmode)
          && register_operand (operands[2], E_V4SFmode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2445; /* *vmovv4sf_constm1_pternlog_false_dep */
      break;

    case E_V8DFmode:
      if (register_operand (operands[0], E_V8DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V8DFmode)
          && register_operand (operands[2], E_V8DFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 64 == 64) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2446; /* *vmovv8df_constm1_pternlog_false_dep */
      break;

    case E_V4DFmode:
      if (register_operand (operands[0], E_V4DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V4DFmode)
          && register_operand (operands[2], E_V4DFmode)
          && (
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 32 == 64) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2447; /* *vmovv4df_constm1_pternlog_false_dep */
      break;

    case E_V2DFmode:
      if (register_operand (operands[0], E_V2DFmode)
          && int_float_vector_all_ones_operand (operands[1], E_V2DFmode)
          && register_operand (operands[2], E_V2DFmode)
          && 
#line 1571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL || 16 == 64))
        return 2448; /* *vmovv2df_constm1_pternlog_false_dep */
      break;

    default:
      break;
    }
  switch (GET_CODE (x4))
    {
    case VEC_MERGE:
      x7 = XEXP (x4, 0);
      operands[2] = x7;
      x8 = XEXP (x4, 1);
      operands[3] = x8;
      x9 = XEXP (x4, 2);
      operands[1] = x9;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1335 (x4, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5236; /* *avx512f_cvtmask2dv16si_pternlog_false_dep */

        case E_V8SImode:
          if (pattern1335 (x4, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5237; /* *avx512vl_cvtmask2dv8si_pternlog_false_dep */

        case E_V4SImode:
          if (pattern1335 (x4, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5238; /* *avx512vl_cvtmask2dv4si_pternlog_false_dep */

        case E_V8DImode:
          if (pattern1335 (x4, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5239; /* *avx512f_cvtmask2qv8di_pternlog_false_dep */

        case E_V4DImode:
          if (pattern1335 (x4, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5240; /* *avx512vl_cvtmask2qv4di_pternlog_false_dep */

        case E_V2DImode:
          if (pattern1335 (x4, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 10374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5241; /* *avx512vl_cvtmask2qv2di_pternlog_false_dep */

        default:
          return -1;
        }

    case XOR:
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x8 = XEXP (x4, 1);
      operands[2] = x8;
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1248 (x4, 
E_V16SImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7978; /* *one_cmplv16si2_pternlog_false_dep */

        case E_V8DImode:
          if (pattern1248 (x4, 
E_V8DImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7979; /* *one_cmplv8di2_pternlog_false_dep */

        case E_V64QImode:
          if (pattern1248 (x4, 
E_V64QImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7980; /* *one_cmplv64qi2_pternlog_false_dep */

        case E_V32QImode:
          if (pattern1248 (x4, 
E_V32QImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7981; /* *one_cmplv32qi2_pternlog_false_dep */

        case E_V16QImode:
          if (pattern1248 (x4, 
E_V16QImode) != 0
              || !
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7982; /* *one_cmplv16qi2_pternlog_false_dep */

        case E_V32HImode:
          if (pattern1248 (x4, 
E_V32HImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7983; /* *one_cmplv32hi2_pternlog_false_dep */

        case E_V16HImode:
          if (pattern1248 (x4, 
E_V16HImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7984; /* *one_cmplv16hi2_pternlog_false_dep */

        case E_V8HImode:
          if (pattern1248 (x4, 
E_V8HImode) != 0
              || !
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7985; /* *one_cmplv8hi2_pternlog_false_dep */

        case E_V8SImode:
          if (pattern1248 (x4, 
E_V8SImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7986; /* *one_cmplv8si2_pternlog_false_dep */

        case E_V4SImode:
          if (pattern1248 (x4, 
E_V4SImode) != 0
              || !
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7987; /* *one_cmplv4si2_pternlog_false_dep */

        case E_V4DImode:
          if (pattern1248 (x4, 
E_V4DImode) != 0
              || !(
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL || TARGET_EVEX512)) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 7988; /* *one_cmplv4di2_pternlog_false_dep */

        case E_V2DImode:
          if (pattern1248 (x4, 
E_V2DImode) != 0
              || !
#line 18439 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL || TARGET_EVEX512)))
            return -1;
          return 7989; /* *one_cmplv2di2_pternlog_false_dep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 rtx_insn *
split_5 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x3;
      if (pattern44 (x1, 
E_CCZmode) != 0)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[1] = x4;
      switch (pattern844 ())
        {
        case 0:
          if (!((
#line 1682 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 1684 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_1 (insn, operands);

        case 1:
          if (!((
#line 1682 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 1684 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_2 (insn, operands);

        default:
          return NULL;
        }

    case NEG:
      if (GET_MODE (x3) != E_QImode)
        return NULL;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != GEU
          || GET_MODE (x5) != E_QImode)
        return NULL;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return NULL;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != LTU
          || GET_MODE (x4) != E_QImode)
        return NULL;
      x8 = XEXP (x4, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17)
        return NULL;
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern44 (x1, 
E_CCCmode) != 0)
        return NULL;
      switch (GET_MODE (x6))
        {
        case E_CCmode:
          if (GET_MODE (x8) != E_CCmode
              || !(
#line 9873 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9875 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_193 (insn, operands);

        case E_CCCmode:
          if (GET_MODE (x8) != E_CCCmode
              || !(
#line 9873 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9875 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_194 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != REG)
        return NULL;
      x5 = XEXP (x3, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[0] = x5;
          if (register_operand (operands[0], E_TImode)
              && REGNO (x10) == 17
              && GET_MODE (x10) == E_CCZmode
              && GET_MODE (x2) == E_CCZmode
              && GET_MODE (x3) == E_TImode)
            {
              x11 = XEXP (x3, 1);
              operands[1] = x11;
              if (general_operand (operands[1], E_TImode)
                  && (
#line 12190 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 12193 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_271 (insn, operands);
            }
          operands[2] = x5;
          operands[0] = x10;
          if (!flags_reg_operand (operands[0], E_VOIDmode))
            return NULL;
          operands[1] = x2;
          if (!compare_operator (operands[1], E_VOIDmode))
            return NULL;
          x11 = XEXP (x3, 1);
          operands[3] = x11;
          if (!const_int_operand (operands[3], E_VOIDmode))
            return NULL;
          if (QIreg_operand (operands[2], E_VOIDmode)
              && 
#line 12361 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8))))))
            return gen_split_281 (insn, operands);
          if (!nonimmediate_operand (operands[2], E_VOIDmode)
              || !
#line 12387 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127)))))
            return NULL;
          return gen_split_282 (insn, operands);

        case NOT:
          if (REGNO (x10) != 17
              || GET_MODE (x10) != E_CCZmode
              || GET_MODE (x2) != E_CCZmode)
            return NULL;
          switch (pattern845 (x3))
            {
            case 0:
              if (!(
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_275 (insn, operands);

            case 1:
              if (!(
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_276 (insn, operands);

            case 2:
              if (!(
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 12323 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_277 (insn, operands);

            case 3:
              if (register_operand (operands[0], E_DImode)
                  && x86_64_szext_nonmemory_operand (operands[1], E_DImode)
                  && ((
#line 12320 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()
   && (!TARGET_BMI || !REG_P (operands[1]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12323 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_278 (insn, operands);
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !((
#line 12338 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 12340 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_279 (insn, operands);

            case 4:
              if (!((
#line 12338 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12340 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_280 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      switch (pattern46 (x1))
        {
        case 0:
          if (!(
#line 12212 "../../src/gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (HImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (HImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 12254 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_272 (insn, operands);

        case 1:
          if (!(
#line 12212 "../../src/gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (SImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (SImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 12254 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_273 (insn, operands);

        case 2:
          if (!((
#line 12212 "../../src/gcc/config/i386/i386.md"
(/* Ensure that resulting mask is zero or sign extended operand.  */
   INTVAL (operands[4]) >= 0
   && ((INTVAL (operands[3]) > 0
	&& INTVAL (operands[3]) + INTVAL (operands[4]) <= 32)
       || (DImode == DImode
	   && INTVAL (operands[3]) > 32
	   && INTVAL (operands[3]) + INTVAL (operands[4]) == 64))
   && ix86_match_ccmode (insn,
			 /* If zero_extract mode precision is the same
			    as len, the SF of the zero_extract
			    comparison will be the most significant
			    extracted bit, but this could be matched
			    after splitting only for pos 0 len all bits
			    trivial extractions.  Require CCZmode.  */
			 (GET_MODE_PRECISION (DImode)
			  == INTVAL (operands[3]))
			 /* Otherwise, require CCZmode if we'd use a mask
			    with the most significant bit set and can't
			    widen it to wider mode.  *testdi_1 also
			    requires CCZmode if the mask has bit
			    31 set and all bits above it clear.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     >= 32)
			 /* We can't widen also if val is not a REG.  */
			 || (INTVAL (operands[3]) + INTVAL (operands[4])
			     == GET_MODE_PRECISION (GET_MODE (operands[2]))
			     && !register_operand (operands[2],
						   GET_MODE (operands[2])))
			 /* And we shouldn't widen if
			    TARGET_PARTIAL_REG_STALL.  */
			 || (TARGET_PARTIAL_REG_STALL
			     && (INTVAL (operands[3]) + INTVAL (operands[4])
				 >= (paradoxical_subreg_p (operands[2])
				     && (GET_MODE_CLASS
					  (GET_MODE (SUBREG_REG (operands[2])))
					 == MODE_INT)
				     ? GET_MODE_PRECISION
					 (GET_MODE (SUBREG_REG (operands[2])))
				     : GET_MODE_PRECISION
					 (GET_MODE (operands[2])))))
			 ? CCZmode : CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12254 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_274 (insn, operands);

        default:
          return NULL;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 0L)
        return NULL;
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != ZERO_EXTRACT)
        return NULL;
      x9 = XEXP (x4, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return NULL;
      x12 = XEXP (x4, 2);
      if (GET_CODE (x12) != SUBREG
          || maybe_ne (SUBREG_BYTE (x12), 0)
          || GET_MODE (x12) != E_QImode)
        return NULL;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != AND)
        return NULL;
      x10 = XEXP (x1, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || GET_MODE (x10) != E_CCCmode
          || GET_MODE (x2) != E_CCCmode)
        return NULL;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      switch (pattern1449 (x4))
        {
        case 0:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_814 (insn, operands);

        case 1:
          if (!(
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_816 (insn, operands);

        case 2:
          if (!((
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_818 (insn, operands);

        case 3:
          if (!((
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_815 (insn, operands);

        case 4:
          if (!((
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_817 (insn, operands);

        case 5:
          if (!((
#line 19166 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19171 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_819 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_14 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  switch (GET_CODE (x5))
    {
    case SIGN_EXTRACT:
      x7 = XEXP (x5, 2);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      switch (pattern1489 (x5))
        {
        case 0:
          return gen_split_20 (insn, operands);

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return NULL;
          return gen_split_21 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTRACT:
      x8 = XEXP (x4, 0);
      if (GET_CODE (x8) == SUBREG)
        {
          switch (pattern1317 (x4))
            {
            case 0:
              if ((
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19326 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_836 (insn, operands);
              break;

            case 1:
              if (((
#line 19324 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19326 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_837 (insn, operands);
              break;

            default:
              break;
            }
        }
      x7 = XEXP (x5, 2);
      if (GET_CODE (x7) != SUBREG)
        return NULL;
      switch (pattern1319 (x4))
        {
        case 0:
          if (!(
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19410 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_844 (insn, operands);

        case 1:
          if (!((
#line 19405 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19410 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_845 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_18 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return NULL;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode
          || GET_MODE (x4) != E_DImode)
        return NULL;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      if (!x86_64_zext_immediate_operand (operands[2], E_DImode)
          || !
#line 12598 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return NULL;
      return gen_split_286 (insn, operands);

    case SIGN_EXTRACT:
    case ZERO_EXTRACT:
      operands[3] = x5;
      x8 = XEXP (x5, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return NULL;
      x9 = XEXP (x5, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
          || GET_MODE (x3) != E_QImode
          || GET_MODE (x4) != E_QImode)
        return NULL;
      x10 = XEXP (x5, 0);
      if (!int248_register_operand (x10, E_VOIDmode))
        return NULL;
      operands[2] = x10;
      switch (pattern1683 (x2))
        {
        case 0:
          if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_293 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_296 (insn, operands);
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
            return gen_split_299 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x10;
      switch (pattern1684 (x2))
        {
        case 0:
          if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_302 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_305 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_308 (insn, operands);

        case 3:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_322 (insn, operands);

        case 4:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_325 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_328 (insn, operands);

        default:
          return NULL;
        }

    case ROTATE:
      if (GET_MODE (x5) != E_SImode)
        return NULL;
      x10 = XEXP (x5, 0);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
        return NULL;
      switch (pattern1431 (x2))
        {
        case 0:
          if (!(
#line 18942 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18944 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_808 (insn, operands);

        case 1:
          if (!(
#line 18942 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18944 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_809 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_25 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x5;
      res = split_15 (x1, insn);
      if (res != NULL_RTX)
        return res;
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
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6999 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_116 (insn, operands);
          break;

        case 1:
          if ((
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6999 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_117 (insn, operands);
          break;

        case 2:
          if (((
#line 6995 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6999 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_118 (insn, operands);
          break;

        default:
          break;
        }
      operands[1] = x7;
      switch (pattern1684 (x3))
        {
        case 0:
          if (!(
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7030 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_119 (insn, operands);

        case 1:
          if (!(
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 7030 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_120 (insn, operands);

        case 2:
          if (!((
#line 7028 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7030 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_121 (insn, operands);

        case 3:
          if (!
#line 7483 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_134 (insn, operands);

        case 4:
          if (!
#line 7483 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_135 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 7483 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_136 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      switch (pattern940 (x3))
        {
        case 0:
          if (!((
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6513 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_100 (insn, operands);

        case 1:
          if (!((
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6513 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_101 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case ASHIFT:
          switch (pattern1154 (x4))
            {
            case 0:
              if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_102 (insn, operands);

            case 1:
              if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_105 (insn, operands);

            case 2:
              if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_108 (insn, operands);

            case 3:
              if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_111 (insn, operands);

            default:
              return NULL;
            }

        case EQ:
          switch (pattern1157 (x4))
            {
            case 0:
              if (!(
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_202 (insn, operands);

            case 1:
              if (!(
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_203 (insn, operands);

            case 2:
              if (!(
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10139 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_204 (insn, operands);

            case 3:
              if (!((
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10139 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_205 (insn, operands);

            default:
              return NULL;
            }

        case NE:
          switch (pattern1160 (x4))
            {
            case 0:
              if (!(
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_206 (insn, operands);

            case 1:
              if (!(
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_207 (insn, operands);

            case 2:
              if (!(
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10163 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_208 (insn, operands);

            case 3:
              if (!((
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10163 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_209 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      switch (pattern1056 (x3))
        {
        case 0:
          if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_103 (insn, operands);

        case 1:
          if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_106 (insn, operands);

        case 2:
          if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_109 (insn, operands);

        case 3:
          if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_112 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern1056 (x3))
        {
        case 0:
          if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_104 (insn, operands);

        case 1:
          if (!((
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6544 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_107 (insn, operands);

        case 2:
          if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_110 (insn, operands);

        case 3:
          if (!((
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6575 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_113 (insn, operands);

        default:
          return NULL;
        }

    case EQ:
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern359 (x3))
        {
        case 0:
          if (!(
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_210 (insn, operands);

        case 1:
          if (!(
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_211 (insn, operands);

        case 2:
          if (!(
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10186 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_212 (insn, operands);

        case 3:
          if (!((
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10186 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_213 (insn, operands);

        default:
          return NULL;
        }

    case NE:
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      switch (pattern359 (x3))
        {
        case 0:
          if (!(
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, QImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_214 (insn, operands);

        case 1:
          if (!(
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, HImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_215 (insn, operands);

        case 2:
          if (!(
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()) && 
#line 10207 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_216 (insn, operands);

        case 3:
          if (!((
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10207 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_217 (insn, operands);

        default:
          return NULL;
        }

    case MINUS:
      switch (pattern944 (x3))
        {
        case 0:
          if (!(
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_222 (insn, operands);

        case 1:
          if (!(
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_223 (insn, operands);

        case 2:
          if (!(
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10258 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_224 (insn, operands);

        case 3:
          if (!((
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10258 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_225 (insn, operands);

        case 4:
          if (!(
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (QImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_226 (insn, operands);

        case 5:
          if (!(
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (HImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_227 (insn, operands);

        case 6:
          if (!(
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10287 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_228 (insn, operands);

        case 7:
          if (!((
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10287 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_229 (insn, operands);

        default:
          return NULL;
        }

    case UNSPEC:
      switch (pattern948 (x3))
        {
        case 0:
          if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return NULL;
          return gen_split_920 (insn, operands);

        case 1:
          if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return NULL;
          return gen_split_921 (insn, operands);

        case 2:
          if (!(
#line 23306 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 23308 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_923 (insn, operands);

        case 3:
          if (!((
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)) && 
#line 23367 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_924 (insn, operands);

        case 4:
          if (!((
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)) && 
#line 23367 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_925 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_38 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
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
      operands[1] = x5;
      x6 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x6))
        {
        case CLOBBER:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 17
              || GET_MODE (x7) != E_CCmode)
            return NULL;
          if (register_operand (operands[0], E_VOIDmode)
              && register_operand (operands[1], E_VOIDmode)
              && 
#line 27730 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
            return gen_split_986 (insn, operands);
          if (GET_MODE (x4) != E_V2QImode)
            return NULL;
          if (general_reg_operand (operands[0], E_V2QImode)
              && general_reg_operand (operands[1], E_V2QImode)
              && 
#line 3152 "../../src/gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
            return gen_split_1046 (insn, operands);
          if (!sse_reg_operand (operands[0], E_V2QImode)
              || !sse_reg_operand (operands[1], E_V2QImode)
              || !
#line 3179 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_1047 (insn, operands);

        case USE:
          switch (pattern834 (x1))
            {
            case 0:
              if (!(
#line 683 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 685 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1026 (insn, operands);

            case 1:
              if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1035 (insn, operands);

            case 2:
              if (!((
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1037 (insn, operands);

            case 3:
              if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1039 (insn, operands);

            case 4:
              if (!((
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1041 (insn, operands);

            case 5:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1258 (insn, operands);

            case 6:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1260 (insn, operands);

            case 7:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1262 (insn, operands);

            case 8:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1264 (insn, operands);

            case 9:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1266 (insn, operands);

            case 10:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1268 (insn, operands);

            case 11:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1270 (insn, operands);

            case 12:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1272 (insn, operands);

            case 13:
              if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1274 (insn, operands);

            case 14:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1276 (insn, operands);

            case 15:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1278 (insn, operands);

            case 16:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1280 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LTU:
    case UNLT:
      operands[1] = x5;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return NULL;
      x8 = XEXP (x5, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17)
        return NULL;
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern229 (x6, 
E_CCmode, 
17) != 0
          || !general_reg_operand (operands[0], E_VOIDmode)
          || !
#line 27760 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode && TARGET_PROMOTE_QImode))))
        return NULL;
      return gen_split_988 (insn, operands);

    case ABS:
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != USE)
        return NULL;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (pattern1052 (x4) != 0
              || !(
#line 700 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 702 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1027 (insn, operands);

        case E_V2BFmode:
          if (pattern1053 (x4, 
E_V2BFmode) != 0
              || !(
#line 2256 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2258 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1042 (insn, operands);

        case E_V4BFmode:
          if (pattern1053 (x4, 
E_V4BFmode) != 0
              || !((
#line 2256 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2258 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1043 (insn, operands);

        case E_V2HFmode:
          if (pattern1053 (x4, 
E_V2HFmode) != 0
              || !(
#line 2256 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2258 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1044 (insn, operands);

        case E_V4HFmode:
          if (pattern1053 (x4, 
E_V4HFmode) != 0
              || !((
#line 2256 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2258 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
            return NULL;
          return gen_split_1045 (insn, operands);

        case E_V16SFmode:
          if (pattern1050 (x4, 
E_V16SFmode) != 0
              || !((
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1281 (insn, operands);

        case E_V8SFmode:
          if (pattern1050 (x4, 
E_V8SFmode) != 0
              || !((
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1282 (insn, operands);

        case E_V4SFmode:
          if (pattern1050 (x4, 
E_V4SFmode) != 0
              || !(
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1283 (insn, operands);

        case E_V8DFmode:
          if (pattern1050 (x4, 
E_V8DFmode) != 0
              || !((
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1284 (insn, operands);

        case E_V4DFmode:
          if (pattern1050 (x4, 
E_V4DFmode) != 0
              || !((
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1285 (insn, operands);

        case E_V2DFmode:
          if (pattern1050 (x4, 
E_V2DFmode) != 0
              || !((
#line 2610 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2612 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_1286 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_50 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
    case LT:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XEXP (x3, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HImode:
          if (pattern934 (x3, 
E_V4HImode) != 0
              || !
#line 3912 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1054 (insn, operands);

        case E_V2SImode:
          if (pattern934 (x3, 
E_V2SImode) != 0
              || !
#line 3912 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1055 (insn, operands);

        case E_V1DImode:
          if (pattern934 (x3, 
E_V1DImode) != 0
              || !
#line 3912 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1056 (insn, operands);

        case E_V2HImode:
          if (pattern934 (x3, 
E_V2HImode) != 0
              || !
#line 3975 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_1058 (insn, operands);

        default:
          return NULL;
        }

    case REG:
      switch (pattern236 (x3))
        {
        case 0:
          if (!
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1183 (insn, operands);

        case 1:
          if (!
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
            return NULL;
          return gen_split_1186 (insn, operands);

        case 2:
          if (!(
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1189 (insn, operands);

        case 3:
          if (!(
#line 2114 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return NULL;
          return gen_split_1192 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_51 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != SS_TRUNCATE)
    return NULL;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != SS_TRUNCATE)
    return NULL;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (pattern270 (x2))
    {
    case 0:
      if (!(
#line 4771 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4776 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
        return NULL;
      return gen_split_1102 (insn, operands);

    case 1:
      if (!(
#line 4812 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE) && 
#line 4817 "../../src/gcc/config/i386/mmx.md"
( reload_completed
   && SSE_REGNO_P (REGNO (operands[0])))))
        return NULL;
      return gen_split_1104 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_52 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_DUPLICATE)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[1] = x6;
  x7 = XEXP (x2, 2);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_SImode))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V4HFmode:
      if (pattern1061 (x2, 
E_V4HFmode, 
E_HFmode) != 0
          || !
#line 5331 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HFmode))))
        return NULL;
      return gen_split_1114 (insn, operands);

    case E_V4BFmode:
      if (pattern1061 (x2, 
E_V4BFmode, 
E_BFmode) != 0
          || !
#line 5331 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4BFmode))))
        return NULL;
      return gen_split_1115 (insn, operands);

    case E_V4HImode:
      if (pattern1061 (x2, 
E_V4HImode, 
E_HImode) != 0
          || !
#line 5331 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
        return NULL;
      return gen_split_1116 (insn, operands);

    case E_V2HFmode:
      if (pattern1061 (x2, 
E_V2HFmode, 
E_HFmode) != 0
          || !
#line 5996 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HFmode))))
        return NULL;
      return gen_split_1122 (insn, operands);

    case E_V2BFmode:
      if (pattern1061 (x2, 
E_V2BFmode, 
E_BFmode) != 0
          || !
#line 5996 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2BFmode))))
        return NULL;
      return gen_split_1123 (insn, operands);

    case E_V2HImode:
      if (pattern1061 (x2, 
E_V2HImode, 
E_HImode) != 0
          || !
#line 5996 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
        return NULL;
      return gen_split_1124 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_54 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 49
      || GET_MODE (x3) != E_SImode)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_DImode))
    return NULL;
  x5 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x5))
    {
    case LT:
      switch (pattern991 (x5))
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
          return gen_split_3412 (insn, operands);

        case 1:
          if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3414 (insn, operands);

        case 2:
          if (!((
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3416 (insn, operands);

        case 3:
          if (!((
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22018 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3418 (insn, operands);

        case 4:
          if (!(
#line 22328 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22330 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3454 (insn, operands);

        default:
          return NULL;
        }

    case SUBREG:
      switch (pattern1082 (x5))
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
          return gen_split_3420 (insn, operands);

        case 1:
          if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3422 (insn, operands);

        case 2:
          if (!((
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3424 (insn, operands);

        case 3:
          if (!((
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22043 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3426 (insn, operands);

        case 4:
          if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3432 (insn, operands);

        case 5:
          if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3434 (insn, operands);

        case 6:
          if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3436 (insn, operands);

        case 7:
          if (!((
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 22082 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
            return NULL;
          return gen_split_3438 (insn, operands);

        default:
          return NULL;
        }

    case VEC_MERGE:
      switch (pattern983 (x5))
        {
        case 0:
          if (!((
#line 22357 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 22359 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3455 (insn, operands);

        case 1:
          if (!(
#line 22357 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 22359 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3456 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_57 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 59)
    return NULL;
  switch (pattern1012 (x2))
    {
    case 0:
      x5 = XVECEXP (x4, 0, 0);
      operands[3] = x5;
      switch (pattern1464 (x2))
        {
        case 0:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1287 (insn, operands);
          break;

        case 1:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1288 (insn, operands);
          break;

        case 2:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1289 (insn, operands);
          break;

        case 3:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1290 (insn, operands);
          break;

        case 4:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1291 (insn, operands);
          break;

        case 5:
          if ((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1292 (insn, operands);
          break;

        case 6:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1293 (insn, operands);
          break;

        case 7:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1294 (insn, operands);
          break;

        case 8:
          if (((
#line 3328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))
   && (INTVAL (operands[5]) == 1 || INTVAL (operands[5]) == 14)) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 3335 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1295 (insn, operands);
          break;

        case 9:
          if (((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4217 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1332 (insn, operands);
          break;

        case 10:
          if ((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4217 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1333 (insn, operands);
          break;

        case 11:
          if (((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4217 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1334 (insn, operands);
          break;

        case 12:
          if (((
#line 4213 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4217 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1335 (insn, operands);
          break;

        case 13:
          if ((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4246 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1336 (insn, operands);
          break;

        case 14:
          if ((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4246 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1337 (insn, operands);
          break;

        case 15:
          if (((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4246 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1338 (insn, operands);
          break;

        case 16:
          if (((
#line 4242 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4246 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1339 (insn, operands);
          break;

        case 17:
          if (((
#line 18040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18045 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3290 (insn, operands);
          break;

        case 18:
          if ((
#line 18040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[2]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[1])))) && 
#line 18045 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3291 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return NULL;
      switch (pattern1467 (x2))
        {
        case 0:
          if (!(
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1340 (insn, operands);

        case 1:
          if (!(
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 4281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1341 (insn, operands);

        case 2:
          if (!((
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1342 (insn, operands);

        case 3:
          if (!((
#line 4277 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* not LT or GE 0 */
  && ((INTVAL (operands[5]) == 1) || (INTVAL (operands[5]) == 5))) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1343 (insn, operands);

        case 4:
          if (!((
#line 18069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18076 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3292 (insn, operands);

        case 5:
          if (!(
#line 18069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
  && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 18076 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3293 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (!((
#line 18101 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 18106 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3294 (insn, operands);

    case 2:
      if (!(
#line 18101 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
  /* LT or GE 0 */
  && ((INTVAL (operands[5]) == 1 && !MEM_P (operands[1]))
      || (INTVAL (operands[5]) == 5 && !MEM_P (operands[2])))) && 
#line 18106 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3295 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_68 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1661 (insn, operands);

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
          return gen_split_1688 (insn, operands);

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
          return gen_split_1715 (insn, operands);

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
          return gen_split_1742 (insn, operands);

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
          return gen_split_1769 (insn, operands);

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
          return gen_split_1796 (insn, operands);

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
          return gen_split_1823 (insn, operands);

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
          return gen_split_1850 (insn, operands);

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
          return gen_split_1877 (insn, operands);

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
          return gen_split_1904 (insn, operands);

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
          return gen_split_1931 (insn, operands);

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
          return gen_split_1958 (insn, operands);

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
          return gen_split_1664 (insn, operands);

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
          return gen_split_1691 (insn, operands);

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
          return gen_split_1718 (insn, operands);

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
          return gen_split_1745 (insn, operands);

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
          return gen_split_1772 (insn, operands);

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
          return gen_split_1799 (insn, operands);

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
          return gen_split_1826 (insn, operands);

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
          return gen_split_1853 (insn, operands);

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
          return gen_split_1880 (insn, operands);

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
          return gen_split_1907 (insn, operands);

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
          return gen_split_1934 (insn, operands);

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
          return gen_split_1961 (insn, operands);

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
          return gen_split_1667 (insn, operands);

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
          return gen_split_1694 (insn, operands);

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
          return gen_split_1721 (insn, operands);

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
          return gen_split_1748 (insn, operands);

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
          return gen_split_1775 (insn, operands);

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
          return gen_split_1802 (insn, operands);

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
          return gen_split_1829 (insn, operands);

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
          return gen_split_1856 (insn, operands);

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
          return gen_split_1883 (insn, operands);

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
          return gen_split_1910 (insn, operands);

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
          return gen_split_1937 (insn, operands);

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
          return gen_split_1964 (insn, operands);

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
          return gen_split_2957 (insn, operands);

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
          return gen_split_2966 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2975 (insn, operands);

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
          return gen_split_2984 (insn, operands);

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
          return gen_split_2993 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3002 (insn, operands);

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
          return gen_split_3011 (insn, operands);

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
          return gen_split_3020 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3029 (insn, operands);

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
          return gen_split_3038 (insn, operands);

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
          return gen_split_3047 (insn, operands);

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3056 (insn, operands);

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
          return gen_split_2309 (insn, operands);

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
          return gen_split_2336 (insn, operands);

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
          return gen_split_2363 (insn, operands);

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
          return gen_split_2390 (insn, operands);

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
          return gen_split_2417 (insn, operands);

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
          return gen_split_2444 (insn, operands);

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
          return gen_split_2471 (insn, operands);

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
          return gen_split_2498 (insn, operands);

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
          return gen_split_2525 (insn, operands);

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
          return gen_split_2552 (insn, operands);

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
          return gen_split_2579 (insn, operands);

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
          return gen_split_2606 (insn, operands);

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
          return gen_split_2312 (insn, operands);

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
          return gen_split_2339 (insn, operands);

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
          return gen_split_2366 (insn, operands);

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
          return gen_split_2393 (insn, operands);

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
          return gen_split_2420 (insn, operands);

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
          return gen_split_2447 (insn, operands);

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
          return gen_split_2474 (insn, operands);

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
          return gen_split_2501 (insn, operands);

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
          return gen_split_2528 (insn, operands);

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
          return gen_split_2555 (insn, operands);

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
          return gen_split_2582 (insn, operands);

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
          return gen_split_2609 (insn, operands);

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
        case E_V64QImode:
          if (pattern1187 (x2, 
E_V64QImode) != 0
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
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2315 (insn, operands);

        case E_V32QImode:
          if (pattern1002 (x2, 
E_V32QImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V32QImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V32QImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V32QImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V32QImode)
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
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_2342 (insn, operands);
            }
          if (!register_operand (operands[1], E_V32QImode)
              || !register_operand (operands[2], E_V32QImode)
              || !nonimmediate_operand (operands[3], E_V32QImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3692 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3708 (insn, operands);

        case E_V16QImode:
          if (pattern1002 (x2, 
E_V16QImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16QImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16QImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16QImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16QImode)
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
                return gen_split_2369 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16QImode)
              || !register_operand (operands[2], E_V16QImode)
              || !nonimmediate_operand (operands[3], E_V16QImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3693 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3709 (insn, operands);

        case E_V32HImode:
          if (pattern1187 (x2, 
E_V32HImode) != 0
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
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2396 (insn, operands);

        case E_V16HImode:
          if (pattern1002 (x2, 
E_V16HImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V16HImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V16HImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V16HImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V16HImode)
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
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_2423 (insn, operands);
            }
          if (!register_operand (operands[1], E_V16HImode)
              || !register_operand (operands[2], E_V16HImode)
              || !nonimmediate_operand (operands[3], E_V16HImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3694 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3710 (insn, operands);

        case E_V8HImode:
          if (pattern1002 (x2, 
E_V8HImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8HImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8HImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8HImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8HImode)
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
                return gen_split_2450 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8HImode)
              || !register_operand (operands[2], E_V8HImode)
              || !nonimmediate_operand (operands[3], E_V8HImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3695 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3711 (insn, operands);

        case E_V16SImode:
          if (pattern1187 (x2, 
E_V16SImode) != 0
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
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2477 (insn, operands);

        case E_V8SImode:
          if (pattern1002 (x2, 
E_V8SImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V8SImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V8SImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V8SImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V8SImode)
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
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_2504 (insn, operands);
            }
          if (!register_operand (operands[1], E_V8SImode)
              || !register_operand (operands[2], E_V8SImode)
              || !nonimmediate_operand (operands[3], E_V8SImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3696 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3712 (insn, operands);

        case E_V4SImode:
          if (pattern1002 (x2, 
E_V4SImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4SImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4SImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4SImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4SImode)
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
                return gen_split_2531 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4SImode)
              || !register_operand (operands[2], E_V4SImode)
              || !nonimmediate_operand (operands[3], E_V4SImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3697 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3713 (insn, operands);

        case E_V8DImode:
          if (pattern1187 (x2, 
E_V8DImode) != 0
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
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2558 (insn, operands);

        case E_V4DImode:
          if (pattern1002 (x2, 
E_V4DImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V4DImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V4DImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V4DImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V4DImode)
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
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13887 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_2585 (insn, operands);
            }
          if (!register_operand (operands[1], E_V4DImode)
              || !register_operand (operands[2], E_V4DImode)
              || !nonimmediate_operand (operands[3], E_V4DImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3698 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3714 (insn, operands);

        case E_V2DImode:
          if (pattern1002 (x2, 
E_V2DImode) != 0)
            return NULL;
          if (regmem_or_bitnot_regmem_operand (operands[1], E_V2DImode)
              && regmem_or_bitnot_regmem_operand (operands[2], E_V2DImode)
              && regmem_or_bitnot_regmem_operand (operands[3], E_V2DImode))
            {
              x8 = XEXP (x2, 1);
              operands[4] = x8;
              if (regmem_or_bitnot_regmem_operand (operands[4], E_V2DImode)
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
                return gen_split_2612 (insn, operands);
            }
          if (!register_operand (operands[1], E_V2DImode)
              || !register_operand (operands[2], E_V2DImode)
              || !nonimmediate_operand (operands[3], E_V2DImode))
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3699 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3715 (insn, operands);

        case E_V2TImode:
          if (pattern1188 (x2, 
E_V2TImode) != 0)
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3700 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3716 (insn, operands);

        case E_V1TImode:
          if (pattern1188 (x2, 
E_V1TImode) != 0)
            return NULL;
          x8 = XEXP (x2, 1);
          if (rtx_equal_p (x8, operands[1])
              && 
#line 26238 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return gen_split_3701 (insn, operands);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 26250 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return NULL;
          return gen_split_3717 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_81 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V64QImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1129 (insn, operands);
      if (!ternlog_operand (operands[1], E_V64QImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1635 (insn, operands);

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V32QImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1130 (insn, operands);
      if (!ternlog_operand (operands[1], E_V32QImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1636 (insn, operands);

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16QImode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1131 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16QImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1637 (insn, operands);

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V32HImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1132 (insn, operands);
      if (!ternlog_operand (operands[1], E_V32HImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1638 (insn, operands);

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16HImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1133 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16HImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1639 (insn, operands);

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8HImode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1134 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8HImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1640 (insn, operands);

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V16SImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1135 (insn, operands);
      if (!ternlog_operand (operands[1], E_V16SImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1641 (insn, operands);

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8SImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1136 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8SImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1642 (insn, operands);

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4SImode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1137 (insn, operands);
      if (!ternlog_operand (operands[1], E_V4SImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1643 (insn, operands);

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V8DImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return gen_split_1138 (insn, operands);
      if (!ternlog_operand (operands[1], E_V8DImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1644 (insn, operands);

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4DImode)
          && (
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return gen_split_1139 (insn, operands);
      if (!ternlog_operand (operands[1], E_V4DImode)
          || !((
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1645 (insn, operands);

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V2DImode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1140 (insn, operands);
      if (!ternlog_operand (operands[1], E_V2DImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13764 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_1646 (insn, operands);

    case E_V4TImode:
      if (!register_operand (operands[0], E_V4TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V4TImode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1141 (insn, operands);

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V2TImode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1142 (insn, operands);

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !int_float_vector_all_ones_operand (operands[1], E_V1TImode)
          || !
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1143 (insn, operands);

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V32HFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1144 (insn, operands);

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16HFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1145 (insn, operands);

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8HFmode)
          || !
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1146 (insn, operands);

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V32BFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1147 (insn, operands);

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16BFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1148 (insn, operands);

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8BFmode)
          || !
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_1149 (insn, operands);

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V16SFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1150 (insn, operands);

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8SFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1151 (insn, operands);

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V4SFmode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1152 (insn, operands);
      if (!zero_extended_scalar_load_operand (operands[1], E_V4SFmode)
          || !
#line 1912 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed))
        return NULL;
      return gen_split_1181 (insn, operands);

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V8DFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (64 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return NULL;
      return gen_split_1153 (insn, operands);

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !int_float_vector_all_ones_operand (operands[1], E_V4DFmode)
          || !(
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (32 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return NULL;
      return gen_split_1154 (insn, operands);

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode))
        return NULL;
      if (int_float_vector_all_ones_operand (operands[1], E_V2DFmode)
          && 
#line 1558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed
  && (16 == 64 || EXT_REX_SSE_REG_P (operands[0]))
  && optimize_insn_for_speed_p ()))
        return gen_split_1155 (insn, operands);
      if (!zero_extended_scalar_load_operand (operands[1], E_V2DFmode)
          || !
#line 1926 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
        return NULL;
      return gen_split_1182 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_85 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 2:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case UNSPEC:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != CLOBBER)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          switch (XVECLEN (x3, 0))
            {
            case 1:
              x6 = XVECEXP (x3, 0, 0);
              operands[1] = x6;
              switch (XINT (x3, 1))
                {
                case 74:
                  if (pattern1059 (x1) != 0
                      || !(
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25216 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_927 (insn, operands);

                case 75:
                  if (pattern1059 (x1) != 0
                      || !(
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25216 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_928 (insn, operands);

                case 76:
                  if (pattern1059 (x1) != 0
                      || !(
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25216 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_929 (insn, operands);

                case 77:
                  if (pattern1059 (x1) != 0
                      || !(
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()) && 
#line 25216 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_930 (insn, operands);

                case 78:
                  switch (pattern1060 (x1))
                    {
                    case 0:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_931 (insn, operands);

                    case 1:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_933 (insn, operands);

                    case 2:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_935 (insn, operands);

                    default:
                      return NULL;
                    }

                case 79:
                  switch (pattern1060 (x1))
                    {
                    case 0:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_932 (insn, operands);

                    case 1:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_934 (insn, operands);

                    case 2:
                      if (!(
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()) && 
#line 25333 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_936 (insn, operands);

                    default:
                      return NULL;
                    }

                case 118:
                  if (GET_MODE (x3) != E_V4SImode
                      || !register_operand (operands[0], E_V4SImode)
                      || !nonimmediate_operand (operands[1], E_DImode))
                    return NULL;
                  x7 = XEXP (x4, 0);
                  operands[2] = x7;
                  if (!scratch_operand (operands[2], E_V4SImode)
                      || !(
#line 1877 "../../src/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 1879 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                    return NULL;
                  return gen_split_1180 (insn, operands);

                default:
                  return NULL;
                }

            case 3:
              if (XINT (x3, 1) != 52
                  || GET_MODE (x3) != E_V8QImode
                  || pattern936 (x1) != 0
                  || !
#line 23168 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && reload_completed
   && SSE_REGNO_P (REGNO (operands[0]))))
                return NULL;
              return gen_split_3471 (insn, operands);

            default:
              return NULL;
            }

        case SMAX:
          switch (pattern213 (x1))
            {
            case 0:
              if (((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_959 (insn, operands);
              if (!((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_979 (insn, operands);

            case 1:
              if (!((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_963 (insn, operands);

            case 2:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_967 (insn, operands);

            case 3:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_971 (insn, operands);

            case 4:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_975 (insn, operands);

            default:
              return NULL;
            }

        case SMIN:
          switch (pattern213 (x1))
            {
            case 0:
              if (((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_960 (insn, operands);
              if (!((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_980 (insn, operands);

            case 1:
              if (!((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_964 (insn, operands);

            case 2:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_968 (insn, operands);

            case 3:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_972 (insn, operands);

            case 4:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_976 (insn, operands);

            default:
              return NULL;
            }

        case UMAX:
          switch (pattern213 (x1))
            {
            case 0:
              if (((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_961 (insn, operands);
              if (!((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_981 (insn, operands);

            case 1:
              if (!((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_965 (insn, operands);

            case 2:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_969 (insn, operands);

            case 3:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_973 (insn, operands);

            case 4:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_977 (insn, operands);

            default:
              return NULL;
            }

        case UMIN:
          switch (pattern213 (x1))
            {
            case 0:
              if (((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_962 (insn, operands);
              if (!((
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_982 (insn, operands);

            case 1:
              if (!((
#line 26900 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 26903 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_966 (insn, operands);

            case 2:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_970 (insn, operands);

            case 3:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_974 (insn, operands);

            case 4:
              if (!(
#line 26958 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 26962 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_978 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
        case MINUS:
        case MULT:
        case AND:
        case IOR:
        case XOR:
        case ASHIFT:
          return split_36 (x1, insn);

        case COMPARE:
          operands[2] = x3;
          if (!compare_operator (operands[2], E_VOIDmode))
            return NULL;
          x8 = XEXP (x3, 0);
          if (GET_CODE (x8) != AND)
            return NULL;
          x9 = XEXP (x3, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET)
            return NULL;
          x10 = XEXP (x4, 1);
          if (GET_CODE (x10) != AND)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          if (!flags_reg_operand (operands[0], E_VOIDmode))
            return NULL;
          x11 = XEXP (x8, 0);
          operands[3] = x11;
          if (!aligned_operand (operands[3], E_VOIDmode))
            return NULL;
          x12 = XEXP (x8, 1);
          operands[4] = x12;
          if (!const_int_operand (operands[4], E_VOIDmode))
            return NULL;
          x7 = XEXP (x4, 0);
          operands[1] = x7;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x13 = XEXP (x10, 0);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          x14 = XEXP (x10, 1);
          if (!rtx_equal_p (x14, operands[4])
              || !
#line 27682 "../../src/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)))
            return NULL;
          return gen_split_984 (insn, operands);

        case NEG:
          return split_38 (x1, insn);

        case ABS:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != USE)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          switch (pattern834 (x1))
            {
            case 0:
              if (!(
#line 683 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE) && 
#line 685 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1025 (insn, operands);

            case 1:
              if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1034 (insn, operands);

            case 2:
              if (!((
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1036 (insn, operands);

            case 3:
              if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1038 (insn, operands);

            case 4:
              if (!((
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)) && 
#line 2241 "../../src/gcc/config/i386/mmx.md"
( reload_completed)))
                return NULL;
              return gen_split_1040 (insn, operands);

            case 5:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1257 (insn, operands);

            case 6:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1259 (insn, operands);

            case 7:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1261 (insn, operands);

            case 8:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1263 (insn, operands);

            case 9:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1265 (insn, operands);

            case 10:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1267 (insn, operands);

            case 11:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1269 (insn, operands);

            case 12:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1271 (insn, operands);

            case 13:
              if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1273 (insn, operands);

            case 14:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1275 (insn, operands);

            case 15:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1277 (insn, operands);

            case 16:
              if (!((
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 2587 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1279 (insn, operands);

            default:
              return NULL;
            }

        case LSHIFTRT:
          x4 = XVECEXP (x1, 0, 1);
          if (pattern372 (x4) != 0)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          x9 = XEXP (x3, 1);
          operands[2] = x9;
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
              return gen_split_1060 (insn, operands);

            case E_QImode:
              if (pattern1340 (x3, 
E_QImode) != 0
                  || !
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1225 (insn, operands);

            case E_HImode:
              if (pattern1340 (x3, 
E_HImode) != 0
                  || !
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed))
                return NULL;
              return gen_split_1227 (insn, operands);

            case E_SImode:
              if (pattern1340 (x3, 
E_SImode) != 0
                  || !(
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1229 (insn, operands);

            case E_DImode:
              if (pattern1340 (x3, 
E_DImode) != 0
                  || !(
#line 2292 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && reload_completed) && 
#line 2074 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
                return NULL;
              return gen_split_1231 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFTRT:
          if (GET_MODE (x3) != E_V2QImode)
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (pattern351 (x4) != 0)
            return NULL;
          x5 = XEXP (x2, 0);
          operands[0] = x5;
          if (!register_operand (operands[0], E_V2QImode))
            return NULL;
          x8 = XEXP (x3, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V2QImode))
            return NULL;
          x9 = XEXP (x3, 1);
          operands[2] = x9;
          if (!nonmemory_operand (operands[2], E_QImode)
              || !
#line 4009 "../../src/gcc/config/i386/mmx.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed))
            return NULL;
          return gen_split_1061 (insn, operands);

        case ZERO_EXTEND:
          return split_37 (x1, insn);

        case NE:
        case EQ:
          operands[1] = x3;
          switch (pattern559 (x1))
            {
            case 0:
              if (!((
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2385 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1233 (insn, operands);

            case 1:
              if (!(
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2385 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1234 (insn, operands);

            case 2:
              if (!(
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2385 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1235 (insn, operands);

            case 3:
              if (!((
#line 2383 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2385 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1236 (insn, operands);

            default:
              return NULL;
            }

        case IF_THEN_ELSE:
          x8 = XEXP (x3, 0);
          if (!bt_comparison_operator (x8, E_VOIDmode))
            return NULL;
          x12 = XEXP (x8, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return NULL;
          x4 = XVECEXP (x1, 0, 1);
          if (pattern229 (x4, 
E_CCmode, 
17) != 0)
            return NULL;
          switch (pattern1183 (x2))
            {
            case 0:
              if (!((
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2420 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1237 (insn, operands);

            case 1:
              if (!(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2420 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1238 (insn, operands);

            case 2:
              if (!(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 2420 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1239 (insn, operands);

            case 3:
              if (!((
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2420 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1240 (insn, operands);

            case 4:
              if (!((
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2456 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1241 (insn, operands);

            case 5:
              if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 2456 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1242 (insn, operands);

            case 6:
              if (!((
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2456 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1243 (insn, operands);

            case 7:
              if (!((
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2456 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1244 (insn, operands);

            case 8:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1245 (insn, operands);

            case 9:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1248 (insn, operands);

            case 10:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1251 (insn, operands);

            case 11:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1254 (insn, operands);

            case 12:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1246 (insn, operands);

            case 13:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1249 (insn, operands);

            case 14:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1252 (insn, operands);

            case 15:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1255 (insn, operands);

            case 16:
              if (!((
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
(TARGET_64BIT))) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1247 (insn, operands);

            case 17:
              if (!((
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1250 (insn, operands);

            case 18:
              if (!((
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
(TARGET_64BIT))) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1253 (insn, operands);

            case 19:
              if (!((
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
(TARGET_64BIT))) && 
#line 2500 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_1256 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          if (pattern214 (x1) != 0
              || !
#line 8380 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed
   && SSE_REG_P (operands[2])))
            return NULL;
          return gen_split_1518 (insn, operands);

        default:
          return NULL;
        }

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != UNSPEC)
        return NULL;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      switch (XVECLEN (x3, 0))
        {
        case 5:
          if (pattern723 (x1, 
131, 
5) != 0
              || pattern1727 (x1) != 0
              || !(
#line 25855 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && 
#line 25858 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3690 (insn, operands);

        case 3:
          if (pattern723 (x1, 
132, 
3) != 0
              || pattern1728 (x1) != 0
              || !(
#line 25992 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && ix86_pre_reload_split ()) && 
#line 25995 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3691 (insn, operands);

        case 1:
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != CLOBBER)
            return NULL;
          x15 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x15) != CLOBBER
              || GET_MODE (x3) != E_DImode)
            return NULL;
          x6 = XVECEXP (x3, 0, 0);
          operands[1] = x6;
          x7 = XEXP (x4, 0);
          operands[2] = x7;
          if (!memory_operand (operands[2], E_DImode))
            return NULL;
          x16 = XEXP (x15, 0);
          operands[3] = x16;
          if (!scratch_operand (operands[3], E_DFmode))
            return NULL;
          switch (XINT (x3, 1))
            {
            case 287:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !memory_operand (operands[1], E_DImode)
                  || !(
#line 196 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 198 "../../src/gcc/config/i386/sync.md"
( reload_completed)))
                return NULL;
              return gen_split_3819 (insn, operands);

            case 288:
              if (!memory_operand (operands[0], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 295 "../../src/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 297 "../../src/gcc/config/i386/sync.md"
( reload_completed)))
                return NULL;
              return gen_split_3820 (insn, operands);

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
peephole2_14 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  res = peephole2_12 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count < 2)
    return NULL;
  if (peep2_current_count >= 3
      && peep2_current_count >= 4)
    {
      if (general_reg_operand (x2, E_SImode))
        {
          res = peephole2_13 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      if (peep2_current_count >= 5
          && pattern597 (x1, 
E_SImode) == 0
          && 
#line 27072 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
        {
          *pmatch_len_ = 4;
          res = gen_peephole2_223 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  operands[3] = x2;
  if (peep2_current_count >= 3)
    {
      x3 = XEXP (x1, 1);
      if (pattern410 (x3, 
E_SImode) == 0
          && 
#line 27090 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
        {
          *pmatch_len_ = 2;
          res = gen_peephole2_225 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[3], E_SImode))
    {
      x3 = XEXP (x1, 1);
      switch (pattern411 (x3, 
E_SImode))
        {
        case 0:
          if ((
#line 27515 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_239 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 27515 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[2]) == word_mode
   && peep2_reg_dead_p (0, operands[3])
   && peep2_reg_dead_p (2, operands[2])
   && !reg_mentioned_p (operands[3], operands[0])
   && !reg_mentioned_p (operands[3], operands[1])) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_241 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
    }
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  operands[2] = x2;
  if (memory_operand (operands[2], E_SImode))
    {
      x3 = XEXP (x1, 1);
      operands[0] = x3;
      if (general_reg_operand (operands[0], E_SImode))
        {
          x5 = XEXP (x4, 1);
          if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              x6 = XEXP (x4, 0);
              operands[1] = x6;
              if (memory_operand (operands[1], E_SImode)
                  && 
#line 27105 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INSN_UID (peep2_next_insn (0)) == ix86_last_zero_store_uid))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_227 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
        }
    }
  operands[0] = x2;
  if (!general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!x86_64_general_operand (operands[1], E_SImode))
    return NULL;
  x6 = XEXP (x4, 0);
  operands[2] = x6;
  if (!general_reg_operand (operands[2], E_SImode))
    return NULL;
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !
#line 27122 "../../src/gcc/config/i386/i386.md"
(peep2_reg_dead_p (2, operands[0])))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_231 (insn, operands);
}

 rtx_insn *
peephole2_17 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 0);
  if (!general_reg_operand (x3, E_DImode))
    return NULL;
  operands[8] = x3;
  switch (pattern961 (x1, 
E_DImode, 
E_TImode))
    {
    case 0:
      if ((
#line 9660 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !reg_overlap_mentioned_p (operands[6], operands[9])
   && (rtx_equal_p (operands[6], operands[0])
       ? (rtx_equal_p (operands[7], operands[1])
	  && rtx_equal_p (operands[8], operands[2]))
       : (rtx_equal_p (operands[8], operands[0])
	  && rtx_equal_p (operands[9], operands[1])
	  && rtx_equal_p (operands[6], operands[2])))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_101 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    case 1:
      if ((
#line 9715 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (6, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[2], operands[1])
   && !reg_overlap_mentioned_p (operands[6], operands[9])
   && !reg_overlap_mentioned_p (operands[0], operands[10])
   && !reg_overlap_mentioned_p (operands[10], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[11])
   && !reg_overlap_mentioned_p (operands[11], operands[1])
   && (rtx_equal_p (operands[6], operands[0])
       ? (rtx_equal_p (operands[7], operands[1])
	  && rtx_equal_p (operands[8], operands[2]))
       : (rtx_equal_p (operands[8], operands[0])
	  && rtx_equal_p (operands[9], operands[1])
	  && rtx_equal_p (operands[6], operands[2])))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 5;
          res = gen_peephole2_103 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  if (pattern964 (x1, 
E_DImode) != 0
      || !(
#line 26525 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return NULL;
  *pmatch_len_ = 3;
  return gen_peephole2_208 (insn, operands);
}

 rtx_insn *
peephole2_21 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (!binary_fp_operator (x3, E_VOIDmode))
    return NULL;
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return NULL;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
      if (!rtx_equal_p (x5, operands[0]))
        return NULL;
      x6 = XEXP (x3, 1);
      operands[3] = x6;
      if (!memory_operand (operands[3], E_VOIDmode)
          || !
#line 26833 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_211 (insn, operands);

    case SUBREG:
    case MEM:
      operands[3] = x5;
      if (!memory_operand (operands[3], E_VOIDmode))
        return NULL;
      x6 = XEXP (x3, 1);
      if (!rtx_equal_p (x6, operands[0])
          || !
#line 26855 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_212 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_22 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 3)
    {
      res = peephole2_20 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (fp_register_operand (operands[1], E_VOIDmode)
      && fp_register_operand (operands[0], E_VOIDmode))
    {
      res = peephole2_21 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (general_reg_operand (operands[1], E_QImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_QImode) == 0
          && 
#line 27980 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (QImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_279 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[1], E_HImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_HImode) == 0
          && 
#line 27980 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (HImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_280 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (general_reg_operand (operands[1], E_DImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x4, 
E_DImode) == 0
          && (
#line 27980 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (DImode != QImode
       || any_QIreg_operand (operands[1], QImode))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_282 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count < 3
      || peep2_current_count < 4)
    return NULL;
  if (memory_operand (operands[1], E_QImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern728 (x4, 
E_QImode) == 0)
        {
          x5 = PATTERN (peep2_next_insn (2));
          x6 = XEXP (x5, 0);
          if (rtx_equal_p (x6, operands[1]))
            {
              x7 = PATTERN (peep2_next_insn (3));
              if (pattern1801 (x7) == 0
                  && 
#line 28071 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                {
                  *pmatch_len_ = 3;
                  res = gen_peephole2_293 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (peep2_current_count >= 5
              && pattern1802 (x6, 
E_QImode) == 0
              && 
#line 28269 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 4;
              res = gen_peephole2_315 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (memory_operand (operands[1], E_HImode))
    {
      x4 = PATTERN (peep2_next_insn (1));
      if (pattern728 (x4, 
E_HImode) == 0)
        {
          x5 = PATTERN (peep2_next_insn (2));
          x6 = XEXP (x5, 0);
          if (rtx_equal_p (x6, operands[1]))
            {
              x7 = PATTERN (peep2_next_insn (3));
              if (pattern1801 (x7) == 0
                  && 
#line 28071 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
                {
                  *pmatch_len_ = 3;
                  res = gen_peephole2_294 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          if (peep2_current_count >= 5
              && pattern1802 (x6, 
E_HImode) == 0
              && 
#line 28269 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)))
            {
              *pmatch_len_ = 4;
              res = gen_peephole2_316 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (!memory_operand (operands[1], E_DImode)
      || !register_operand (operands[0], E_DImode))
    return NULL;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return NULL;
  x8 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x8) != SET)
    return NULL;
  x9 = XEXP (x8, 1);
  if (!plusminuslogic_operator (x9, E_DImode))
    return NULL;
  operands[3] = x9;
  x10 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x10) != CLOBBER)
    return NULL;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17
      || GET_MODE (x11) != E_CCmode)
    return NULL;
  x12 = XEXP (x9, 1);
  operands[2] = x12;
  if (!x86_64_nonmemory_operand (operands[2], E_DImode)
      || pattern727 (x8) != 0)
    return NULL;
  x5 = PATTERN (peep2_next_insn (2));
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, operands[1]))
    {
      x7 = PATTERN (peep2_next_insn (3));
      if (pattern1801 (x7) == 0
          && (
#line 28071 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_296 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count < 5
      || pattern1802 (x6, 
E_DImode) != 0
      || !(
#line 28269 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (5, operands[4])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && !reg_overlap_mentioned_p (operands[4], operands[1])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (4),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
    return NULL;
  *pmatch_len_ = 4;
  return gen_peephole2_318 (insn, operands);
}

 rtx_insn *
peephole2_35 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!register_operand (operands[0], E_QImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (pattern413 (x3, 
UNSPEC_VOLATILE, 
3) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 1);
  if (XVECLEN (x5, 0) == 4
      && XINT (x5, 1) == 109
      && GET_MODE (x5) == E_QImode)
    {
      res = peephole2_34 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != 110
      || GET_MODE (x5) != E_QImode)
    return NULL;
  x6 = XEXP (x1, 1);
  operands[2] = x6;
  if (!const_int_operand (operands[2], E_QImode))
    return NULL;
  x7 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != PLUS
      || GET_MODE (x8) != E_QImode
      || pattern1509 (x3) != 0
      || !memory_operand (operands[1], E_QImode)
      || pattern1691 (x3) != 0)
    return NULL;
  x9 = PATTERN (peep2_next_insn (2));
  x10 = XEXP (x9, 1);
  x11 = XEXP (x10, 1);
  operands[3] = x11;
  if (!const_int_operand (operands[3], E_QImode))
    return NULL;
  x12 = XEXP (x10, 0);
  if (!rtx_equal_p (x12, operands[0])
      || !
#line 724 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_415 (insn, operands);
}

 rtx_insn *
peephole2_42 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_CCCmode)
    return NULL;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != E_CCCmode)
    return NULL;
  x7 = XEXP (x6, 1);
  if (!rtx_equal_p (x7, operands[0]))
    return NULL;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return NULL;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[1]))
    return NULL;
  x10 = XEXP (x6, 0);
  switch (GET_MODE (x10))
    {
    case E_QImode:
      if (!general_reg_operand (operands[0], E_QImode)
          || !memory_operand (operands[1], E_QImode)
          || GET_MODE (x3) != E_QImode
          || !
#line 9968 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_104 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[0], E_HImode)
          || !memory_operand (operands[1], E_HImode)
          || GET_MODE (x3) != E_HImode
          || !
#line 9968 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_105 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !
#line 9968 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_106 (insn, operands);

    case E_DImode:
      if (!general_reg_operand (operands[0], E_DImode)
          || !memory_operand (operands[1], E_DImode)
          || GET_MODE (x3) != E_DImode
          || !(
#line 9968 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_107 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_44 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UMUL_HIGHPART)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  x9 = XEXP (x2, 0);
  operands[1] = x9;
  x10 = XEXP (x3, 0);
  if (!rtx_equal_p (x10, operands[2]))
    return NULL;
  x11 = XEXP (x3, 1);
  if (!rtx_equal_p (x11, operands[3]))
    return NULL;
  x12 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x12) != SET)
    return NULL;
  x13 = XEXP (x12, 0);
  operands[4] = x13;
  x14 = XEXP (x12, 1);
  operands[5] = x14;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (pattern1578 (x1, 
E_SImode) != 0
          || !(
#line 10970 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_112 (insn, operands);

    case E_DImode:
      if (pattern1578 (x1, 
E_DImode) != 0
          || !(
#line 10970 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2
   && ((REGNO (operands[5]) == REGNO (operands[0])
        && REGNO (operands[1]) != REGNO (operands[4]))
       || (REGNO (operands[5]) == REGNO (operands[1])
	   && REGNO (operands[0]) != REGNO (operands[4])))
   && peep2_reg_dead_p (2, operands[5])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_113 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_47 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!arith_or_logical_operator (operands[3], E_QImode))
        return NULL;
      if (register_operand (operands[0], E_QImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_QImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27950 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_271 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_QImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27963 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_275 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_QImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (nonmemory_operand (operands[1], E_QImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 28038 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_285 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!nonmemory_operand (operands[1], E_QImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 28052 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_289 (insn, operands);

    case E_HImode:
      if (!arith_or_logical_operator (operands[3], E_HImode))
        return NULL;
      if (register_operand (operands[0], E_HImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_HImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27950 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_272 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_HImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27963 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_276 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_HImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (nonmemory_operand (operands[1], E_HImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 28038 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_286 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!nonmemory_operand (operands[1], E_HImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 28052 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_290 (insn, operands);

    case E_SImode:
      if (!arith_or_logical_operator (operands[3], E_SImode))
        return NULL;
      if (register_operand (operands[0], E_SImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_SImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && 
#line 27950 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_273 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_SImode)
              && rtx_equal_p (x5, operands[0])
              && 
#line 27963 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_277 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_SImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (x86_64_nonmemory_operand (operands[1], E_SImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && 
#line 28038 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_287 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!x86_64_nonmemory_operand (operands[1], E_SImode)
          || !rtx_equal_p (x5, operands[0])
          || !
#line 28052 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_291 (insn, operands);

    case E_DImode:
      if (!arith_or_logical_operator (operands[3], E_DImode))
        return NULL;
      if (register_operand (operands[0], E_DImode))
        {
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 1);
          operands[1] = x5;
          if (memory_operand (operands[1], E_DImode))
            {
              x6 = XEXP (x4, 0);
              if (rtx_equal_p (x6, operands[0])
                  && (
#line 27950 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_274 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
            }
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (memory_operand (operands[1], E_DImode)
              && rtx_equal_p (x5, operands[0])
              && (
#line 27963 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_278 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (!memory_operand (operands[0], E_DImode))
        return NULL;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      operands[1] = x5;
      if (x86_64_nonmemory_operand (operands[1], E_DImode))
        {
          x6 = XEXP (x4, 0);
          if (rtx_equal_p (x6, operands[0])
              && (
#line 28038 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_288 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      if (!x86_64_nonmemory_operand (operands[1], E_DImode)
          || !rtx_equal_p (x5, operands[0])
          || !(
#line 28052 "../../src/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_292 (insn, operands);

    default:
      return NULL;
    }
}
