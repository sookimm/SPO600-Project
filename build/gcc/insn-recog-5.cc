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
pattern4 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  switch (GET_CODE (x4))
    {
    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      return pattern3 (x2); /* [-1, 1] */

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern3 (x2);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XEXP (x4, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x7 = XEXP (x4, 1);
      operands[2] = x7;
      if (!nonimmediate_operand (operands[2], E_QImode))
        return -1;
      res = pattern2 (x2);
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
pattern33 (rtx x1)
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
    case E_V32QImode:
      return pattern5 (x3, 
E_V32QImode); /* [-1, 0] */

    case E_V16HImode:
      if (pattern5 (x3, 
E_V16HImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      if (pattern5 (x3, 
E_V8SImode) != 0)
        return -1;
      return 2;

    case E_V16SImode:
      if (pattern5 (x3, 
E_V16SImode) != 0)
        return -1;
      return 3;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode)
        return -1;
      return 4;

    case E_V8DImode:
      if (pattern5 (x3, 
E_V8DImode) != 0)
        return -1;
      return 5;

    case E_V4DImode:
      if (pattern5 (x3, 
E_V4DImode) != 0)
        return -1;
      return 6;

    case E_V2DImode:
      if (pattern5 (x3, 
E_V2DImode) != 0)
        return -1;
      return 7;

    case E_V64QImode:
      if (pattern5 (x3, 
E_V64QImode) != 0)
        return -1;
      return 8;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode)
        return -1;
      return 9;

    case E_V32HImode:
      if (pattern5 (x3, 
E_V32HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern42 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  return pattern41 (x2, 
E_DImode, 
E_TImode); /* [-1, 0] */
}

int
pattern46 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!flags_reg_operand (operands[0], E_VOIDmode))
    return -1;
  operands[1] = x2;
  if (!compare_operator (operands[1], E_VOIDmode))
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[2] = x6;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x7 = XEXP (x5, 1);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  x8 = XEXP (x5, 2);
  operands[4] = x8;
  if (!const_int_operand (operands[4], E_QImode))
    return -1;
  switch (GET_MODE (x5))
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
}

int
pattern57 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != i1)
    return -1;
  return 0;
}

int
pattern62 (rtx x1)
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
    case E_HFmode:
      return pattern61 (x3, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (pattern61 (x3, 
E_SFmode) != 0)
        return -1;
      return 1;

    case E_DFmode:
      if (pattern61 (x3, 
E_DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern70 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  return pattern69 (x1); /* [-1, 2] */
}

int
pattern74 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern79 (rtx x1)
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
  if (!x86_64_general_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern86 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ASHIFT
      || GET_MODE (x4) != E_TImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ZERO_EXTEND
      || GET_MODE (x5) != E_TImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != ZERO_EXTEND
      || GET_MODE (x6) != E_TImode)
    return -1;
  x7 = XEXP (x1, 0);
  operands[0] = x7;
  return pattern85 (x2, 
E_TImode, 
E_DImode); /* [-1, 1] */
}

int
pattern94 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCCmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCCmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  return 0;
}

int
pattern103 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
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
pattern109 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !nonmemory_operand (operands[2], E_QImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !nonmemory_operand (operands[2], E_QImode))
        return -1;
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

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern129 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern137 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern144 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern146 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  operands[3] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern144 (x1, 
E_V16SImode, 
E_HImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern144 (x1, 
E_V8SImode, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern144 (x1, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      if (pattern144 (x1, 
E_V8DImode, 
E_QImode) != 0)
        return -1;
      return 3;

    case E_V4DImode:
      if (pattern144 (x1, 
E_V4DImode, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_V2DImode:
      if (pattern144 (x1, 
E_V2DImode, 
E_QImode) != 0)
        return -1;
      return 5;

    case E_V64QImode:
      if (pattern144 (x1, 
E_V64QImode, 
E_DImode) != 0)
        return -1;
      return 6;

    case E_V16QImode:
      if (pattern144 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 7;

    case E_V32QImode:
      if (pattern144 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 8;

    case E_V32HImode:
      if (pattern144 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 9;

    case E_V16HImode:
      if (pattern145 (x1, 
E_V16HImode) != 0)
        return -1;
      return 10;

    case E_V8HImode:
      if (pattern144 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern160 (rtx x1)
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
      return pattern150 (x3, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern150 (x3, 
E_V16QImode) != 0)
        return -1;
      return 1;

    case E_V64QImode:
      if (pattern150 (x3, 
E_V64QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern170 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern176 (rtx x1)
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
    case E_V8SImode:
      return pattern170 (x3, 
E_V8SImode); /* [-1, 0] */

    case E_V4SImode:
      if (pattern170 (x3, 
E_V4SImode) != 0)
        return -1;
      return 1;

    case E_V16SImode:
      if (pattern170 (x3, 
E_V16SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern184 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      x4 = XVECEXP (x2, 0, 1);
      operands[2] = x4;
      x5 = XEXP (x1, 1);
      operands[3] = x5;
      switch (XINT (x2, 1))
        {
        case 221:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              return pattern182 (x1, 
E_V32HFmode); /* [-1, 0] */

            case E_V16HFmode:
              if (pattern182 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 1;

            case E_V8HFmode:
              if (pattern182 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 2;

            default:
              return -1;
            }

        case 222:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern182 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 3;

            case E_V16HFmode:
              if (pattern182 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 4;

            case E_V8HFmode:
              if (pattern182 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 5;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 3:
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      x4 = XVECEXP (x2, 0, 1);
      operands[2] = x4;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      x5 = XEXP (x1, 1);
      operands[4] = x5;
      switch (XINT (x2, 1))
        {
        case 217:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern183 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 6;

            case E_V16HFmode:
              if (pattern183 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 7;

            case E_V8HFmode:
              if (pattern183 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 8;

            default:
              return -1;
            }

        case 219:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern183 (x1, 
E_V32HFmode) != 0)
                return -1;
              return 9;

            case E_V16HFmode:
              if (pattern183 (x1, 
E_V16HFmode) != 0)
                return -1;
              return 10;

            case E_V8HFmode:
              if (pattern183 (x1, 
E_V8HFmode) != 0)
                return -1;
              return 11;

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
pattern199 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
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
      return 0;

    case AND:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern195 (x2);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case PLUS:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern197 (x2);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    case MINUS:
      if (GET_MODE (x5) != E_QImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != CLOBBER)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      res = pattern198 (x2);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern217 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != MOD)
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
  switch (GET_CODE (operands[2]))
    {
    case REG:
    case SUBREG:
      return 0;

    case CONST_INT:
      return 1;

    default:
      return -1;
    }
}

int
pattern225 (rtx x1, machine_mode i1)
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
pattern233 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern239 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V1TImode
      || !register_operand (operands[0], E_V1TImode))
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_V1TImode))
    return -1;
  x3 = XEXP (x1, 1);
  operands[2] = x3;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern246 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  if (!register_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  if (!register_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 2);
  operands[2] = x4;
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern258 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || GET_MODE (x2) != i2)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x6 = XEXP (x1, 1);
  return pattern257 (x6, 
i1, 
i2); /* [-1, 1] */
}

int
pattern264 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  return pattern39 (x4); /* [-1, 1] */
}

int
pattern268 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      return pattern2 (x3); /* [-1, 1] */

    case STRICT_LOW_PART:
      res = pattern264 (x1, pnum_clobbers);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern279 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
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
  return pattern278 (x1); /* [-1, 4] */
}

int
pattern285 (rtx x1)
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
      res = pattern284 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    default:
      return -1;
    }
}

int
pattern296 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (!ix86_comparison_operator (x2, E_QImode))
    return -1;
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern302 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern311 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i3
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i3
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern319 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || !memory_operand (operands[1], E_V16SImode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !memory_operand (operands[1], E_V8SImode))
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || !memory_operand (operands[1], E_V4SImode))
        return -1;
      return 2;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode
          || !memory_operand (operands[1], E_V8DImode))
        return -1;
      return 3;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode
          || !memory_operand (operands[1], E_V4DImode))
        return -1;
      return 4;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || !memory_operand (operands[1], E_V2DImode))
        return -1;
      return 5;

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x1) != E_V16SFmode
          || !memory_operand (operands[1], E_V16SFmode))
        return -1;
      return 6;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x1) != E_V8SFmode
          || !memory_operand (operands[1], E_V8SFmode))
        return -1;
      return 7;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x1) != E_V4SFmode
          || !memory_operand (operands[1], E_V4SFmode))
        return -1;
      return 8;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x1) != E_V8DFmode
          || !memory_operand (operands[1], E_V8DFmode))
        return -1;
      return 9;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x1) != E_V4DFmode
          || !memory_operand (operands[1], E_V4DFmode))
        return -1;
      return 10;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x1) != E_V2DFmode
          || !memory_operand (operands[1], E_V2DFmode))
        return -1;
      return 11;

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x1) != E_V64QImode
          || !memory_operand (operands[1], E_V64QImode))
        return -1;
      return 12;

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !memory_operand (operands[1], E_V16QImode))
        return -1;
      return 13;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !memory_operand (operands[1], E_V32QImode))
        return -1;
      return 14;

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || !memory_operand (operands[1], E_V32HImode))
        return -1;
      return 15;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !memory_operand (operands[1], E_V16HImode))
        return -1;
      return 16;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !memory_operand (operands[1], E_V8HImode))
        return -1;
      return 17;

    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x1) != E_V32HFmode
          || !memory_operand (operands[1], E_V32HFmode))
        return -1;
      return 18;

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x1) != E_V16HFmode
          || !memory_operand (operands[1], E_V16HFmode))
        return -1;
      return 19;

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || !memory_operand (operands[1], E_V8HFmode))
        return -1;
      return 20;

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || GET_MODE (x1) != E_V32BFmode
          || !memory_operand (operands[1], E_V32BFmode))
        return -1;
      return 21;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || GET_MODE (x1) != E_V16BFmode
          || !memory_operand (operands[1], E_V16BFmode))
        return -1;
      return 22;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || GET_MODE (x1) != E_V8BFmode
          || !memory_operand (operands[1], E_V8BFmode))
        return -1;
      return 23;

    default:
      return -1;
    }
}

int
pattern358 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !x86_64_general_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern363 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (XVECLEN (x5, 0) != 2
      || XINT (x5, 1) != 110)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCNOmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != SET)
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != i1)
    return -1;
  return pattern362 (x1, 
E_CCNOmode); /* [-1, 3] */
}

int
pattern369 (rtx x1, machine_mode i1)
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
pattern373 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != ZERO_EXTRACT
      || GET_MODE (x6) != E_DImode)
    return -1;
  x7 = XEXP (x6, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x6, 0);
  operands[0] = x10;
  if (!nonimmediate_operand (operands[0], E_DImode))
    return -1;
  x11 = XEXP (x6, 2);
  operands[1] = x11;
  if (!const_0_to_63_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern387 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x8 = XEXP (x2, 0);
  operands[2] = x8;
  if (!memory_operand (operands[2], E_DImode))
    return -1;
  x9 = XEXP (x3, 0);
  operands[3] = x9;
  if (!scratch_operand (operands[3], E_V4SImode))
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[4] = x11;
  if (!scratch_operand (operands[4], E_V4SImode))
    return -1;
  return pattern386 (x6); /* [-1, 2] */
}

int
pattern401 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const_scalar_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern408 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 147)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 147)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern414 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 7)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7)
    return -1;
  return 0;
}

int
pattern418 (rtx x1)
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
    case E_HImode:
      return pattern416 (x1); /* [-1, 1] */

    case E_QImode:
      if (pattern417 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern425 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !immediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern435 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != i1
      || GET_MODE (x3) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  return 0;
}

int
pattern445 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (maybe_ne (SUBREG_BYTE (x3), 0)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case AND:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case PLUS:
      x6 = XEXP (x5, 0);
      operands[2] = x6;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[3] = x7;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    case MINUS:
      x6 = XEXP (x5, 0);
      operands[3] = x6;
      if (!const_int_operand (operands[3], E_VOIDmode))
        return -1;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      if (!int248_register_operand (operands[2], E_VOIDmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern465 (rtx x1)
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
    case E_V32QImode:
      return pattern464 (x1, 
E_SImode, 
E_V32QImode, 
E_V32HFmode, 
E_V64QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern464 (x1, 
E_HImode, 
E_V16QImode, 
E_V16HFmode, 
E_V32QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern473 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern480 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern479 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern485 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern490 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern491 (rtx x1, machine_mode i1)
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

    default:
      return -1;
    }
}

int
pattern495 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const0_operand (operands[4], E_V4HFmode))
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
}

int
pattern501 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V2SImode)
    return -1;
  switch (GET_CODE (x2))
    {
    case VEC_SELECT:
      x3 = XEXP (x2, 1);
      if (GET_CODE (x3) != PARALLEL
          || XVECLEN (x3, 0) != 2)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x2, 0);
      operands[2] = x6;
      if (!nonimm_or_0_operand (operands[2], E_V4SImode))
        return -1;
      x7 = XEXP (x1, 2);
      operands[3] = x7;
      return 0;

    case CONST_VECTOR:
      if (XVECLEN (x2, 0) != 2)
        return -1;
      x8 = XVECEXP (x2, 0, 0);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x1, 2);
      operands[2] = x7;
      return 1;

    default:
      return -1;
    }
}

int
pattern512 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST_VECTOR
      || XVECLEN (x2, 0) != 8
      || GET_MODE (x2) != E_V8QImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x2, 0, 2);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x2, 0, 3);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XVECEXP (x2, 0, 4);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XVECEXP (x2, 0, 5);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XVECEXP (x2, 0, 6);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XVECEXP (x2, 0, 7);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode)
    return -1;
  x11 = XEXP (x1, 0);
  if (GET_MODE (x11) != E_V8QImode)
    return -1;
  return 0;
}

int
pattern524 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (XVECLEN (x2, 0) < 1)
    return -1;
  operands[4] = x2;
  if (!pmovzx_parallel (operands[4], E_VOIDmode))
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XEXP (x3, 1);
  operands[3] = x7;
  x8 = XVECEXP (x2, 0, 0);
  operands[5] = x8;
  if (!const_int_operand (operands[5], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern523 (x1, 
E_V16SImode, 
E_V8SImode, 
E_V32SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern523 (x1, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || GET_MODE (x3) != E_V8SImode
          || GET_MODE (x4) != E_V4SImode
          || !vector_operand (operands[1], E_V2SImode)
          || !const0_operand (operands[2], E_V2SImode)
          || !const0_operand (operands[3], E_V4SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern538 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x1) != E_V8DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern540 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 8:
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || GET_MODE (x2) != E_V8QImode
          || !register_operand (operands[1], E_V16QImode))
        return -1;
      return pattern538 (x1); /* [-1, 2] */

    case 4:
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
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          res = pattern539 (x1, 
E_V4SImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case E_V4DImode:
          res = pattern539 (x1, 
E_V4DImode);
          if (res >= 0)
            return res + 5; /* [5, 6] */
          return -1;

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      switch (GET_MODE (x2))
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
pattern568 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 174)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      return pattern567 (x5, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern567 (x5, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern567 (x5, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (pattern567 (x5, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern582 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!int248_register_operand (operands[0], E_VOIDmode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  switch (GET_MODE (operands[3]))
    {
    case E_HImode:
      if (!extract_operator (operands[3], E_HImode)
          || GET_MODE (x2) != E_HImode
          || GET_MODE (x4) != E_HImode)
        return -1;
      return 0;

    case E_SImode:
      if (!extract_operator (operands[3], E_SImode)
          || GET_MODE (x2) != E_SImode
          || GET_MODE (x4) != E_SImode)
        return -1;
      return 1;

    case E_DImode:
      if (!extract_operator (operands[3], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x4) != E_DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern591 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x2) != i1
      || !bcst_vector_operand (operands[2], i2)
      || !vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern596 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_V2DImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != UNSPEC
      || XVECLEN (x3, 0) != 1
      || XINT (x3, 1) != 119
      || GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_V2DImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 119
      || GET_MODE (x5) != E_V16QImode)
    return -1;
  return 0;
}

int
pattern604 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !const_int_operand (operands[2], E_QImode)
      || !const_scalar_int_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern610 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern613 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern620 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern619 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern619 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern631 (rtx x1)
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
    case E_V16QImode:
      return pattern630 (x1, 
E_V16QImode, 
E_HImode, 
E_V16HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern630 (x1, 
E_V32QImode, 
E_SImode, 
E_V32HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern637 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x2;
      x3 = XEXP (x1, 2);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              return 0;

            case E_V16HFmode:
              return 1;

            case E_V8HFmode:
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

            case E_V32BFmode:
              return 9;

            case E_V16BFmode:
              return 10;

            case E_V8BFmode:
              return 11;

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x3, 0) != 1L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              return 12;

            case E_V2DFmode:
              return 13;

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      res = pattern636 (x1);
      if (res >= 0)
        return res + 14; /* [14, 28] */
      return -1;

    default:
      return -1;
    }
}

int
pattern654 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern658 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern663 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !vector_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !vector_all_ones_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern668 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != CONST_VECTOR
      || XVECLEN (x3, 0) != 2
      || GET_MODE (x3) != E_V2SImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_V4SImode)
      || GET_MODE (x1) != E_V4SImode
      || !nonimmediate_operand (operands[1], E_V2DFmode))
    return -1;
  return 0;
}

int
pattern677 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != i1)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_MODE (x6) != i2)
    return -1;
  return 0;
}

int
pattern686 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XEXP (x3, 1);
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
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x3) != E_QImode)
    return -1;
  x10 = XEXP (x4, 0);
  operands[1] = x10;
  x11 = XEXP (x4, 2);
  operands[2] = x11;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (x4))
    {
    case E_SImode:
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern700 (rtx x1)
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

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern711 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 0);
  operands[2] = x9;
  if (!scratch_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern719 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || pattern718 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern727 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = XEXP (x1, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  x5 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x7) != SET)
    return -1;
  return 0;
}

int
pattern733 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern737 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != EQ)
    return -1;
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  x5 = XEXP (x3, 1);
  operands[4] = x5;
  x6 = XEXP (x2, 1);
  operands[5] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      return pattern736 (x1, 
E_V8QImode); /* [-1, 0] */

    case E_V4QImode:
      if (pattern736 (x1, 
E_V4QImode) != 0)
        return -1;
      return 1;

    case E_V2QImode:
      if (pattern736 (x1, 
E_V2QImode) != 0)
        return -1;
      return 2;

    case E_V2HImode:
      if (pattern736 (x1, 
E_V2HImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern749 (rtx x1, machine_mode i1)
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
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern758 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern765 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      if (XVECLEN (x2, 0) != 3
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
          return pattern764 (x2, 
E_V32QImode, 
E_SImode); /* [-1, 0] */

        case E_V16QImode:
          if (pattern764 (x2, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[1] = x2;
      x4 = XEXP (x1, 0);
      operands[2] = x4;
      x5 = XEXP (x1, 1);
      operands[3] = x5;
      switch (GET_MODE (x1))
        {
        case E_V16QImode:
          if (!vector_all_ones_operand (operands[2], E_V16QImode)
              || !const0_operand (operands[3], E_V16QImode)
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 2;

        case E_V32QImode:
          if (!vector_all_ones_operand (operands[2], E_V32QImode)
              || !const0_operand (operands[3], E_V32QImode)
              || !register_operand (operands[1], E_SImode))
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
pattern791 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern810 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 1);
  if (GET_MODE (x5) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern819 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
    return -1;
  x7 = XEXP (x2, 0);
  operands[0] = x7;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode
      || GET_MODE (x4) != E_DImode)
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  return pattern818 (x9, pnum_clobbers); /* [-1, 1] */
}

int
pattern826 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x10 = XEXP (x8, 1);
  operands[2] = x10;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  x11 = XEXP (x2, 0);
  operands[3] = x11;
  if (!scratch_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern836 (rtx x1, int i1, int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern845 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x1, 1);
  operands[1] = x4;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (GET_MODE (x2) != E_QImode
          || !register_operand (operands[0], E_QImode)
          || !nonmemory_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (GET_MODE (x2) != E_HImode
          || !register_operand (operands[0], E_HImode)
          || !nonmemory_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (GET_MODE (x2) != E_SImode
          || !register_operand (operands[0], E_SImode)
          || !x86_64_szext_nonmemory_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (GET_MODE (x2) != E_DImode)
        return -1;
      return 3;

    case E_TImode:
      if (GET_MODE (x2) != E_TImode
          || !nonimmediate_operand (operands[0], E_TImode)
          || !nonimmediate_operand (operands[1], E_TImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern857 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !binary_fp_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[2], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern866 (rtx x1, machine_mode i1)
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
      || !bcst_vector_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern875 (rtx x1)
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
  if (!const_4_or_8_to_11_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern874 (x1, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern874 (x1, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern888 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], i2))
    return -1;
  return 0;
}

int
pattern895 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V16SImode)
      || GET_MODE (x1) != E_V16SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V16SImode
      || !nonimm_or_0_operand (operands[2], E_V16SImode)
      || !register_operand (operands[3], E_HImode))
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
pattern905 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x6 = XVECEXP (x4, 0, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode
      || GET_MODE (x2) != E_V2DImode
      || GET_MODE (x3) != i2)
    return -1;
  x7 = XEXP (x3, 0);
  if (GET_MODE (x7) != i1
      || !nonimm_or_0_operand (operands[2], E_V2DImode))
    return -1;
  return 0;
}

int
pattern913 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimm_or_0_operand (operands[3], i3))
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern922 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8QImode
      || !register_operand (operands[0], E_V16QImode)
      || GET_MODE (x1) != E_V16QImode
      || !register_operand (operands[1], E_V16QImode)
      || !nonimmediate_operand (operands[2], E_V8HFmode)
      || !const0_operand (operands[3], E_V8QImode))
    return -1;
  return 0;
}

int
pattern924 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern927 (rtx x1, machine_mode i1)
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
  x3 = XEXP (x1, 2);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern934 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[2], i1)
      || !const1_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern940 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 1);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern939 (x3, 
E_DImode, 
E_SImode); /* [-1, 0] */

    case E_TImode:
      if (pattern939 (x3, 
E_TImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern947 (rtx x1, machine_mode i1)
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
pattern957 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern965 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || !register_operand (operands[1], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !register_operand (operands[1], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern971 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_HImode
          || !register_operand (operands[3], E_HImode))
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
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_QImode
          || !register_operand (operands[3], E_QImode))
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
pattern991 (rtx x1)
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

    case E_V16QImode:
      if (!register_operand (operands[1], E_V16QImode)
          || !const0_operand (operands[2], E_V16QImode))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1006 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !general_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1014 (rtx x1, machine_mode i1)
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
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1022 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V8HFmode)
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
pattern1036 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      return pattern1035 (x1); /* [-1, 2] */

    default:
      return -1;
    }
}

int
pattern1047 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case AND:
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
              || pattern1046 (x1, 
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
      return 2;

    default:
      return -1;
    }
}

int
pattern1068 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], E_QImode))
    return -1;
  return 0;
}

int
pattern1074 (rtx x1, machine_mode i1)
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
      || !const123_operand (operands[2], E_VOIDmode)
      || !nonmemory_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1084 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1083 (x2); /* [-1, 20] */
}

int
pattern1090 (rtx x1)
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
  return pattern869 (); /* [-1, 1] */
}

int
pattern1093 (rtx x1)
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
  switch (GET_MODE (x1))
    {
    case E_V8SFmode:
      if (GET_MODE (x2) != E_V8SImode
          || !register_operand (operands[1], E_V8SImode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (GET_MODE (x2) != E_V4SImode
          || !register_operand (operands[1], E_V4SImode))
        return -1;
      return 1;

    case E_V4DFmode:
      if (GET_MODE (x2) != E_V4DImode
          || !register_operand (operands[1], E_V4DImode))
        return -1;
      return 2;

    case E_V2DFmode:
      if (GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1101 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1107 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  operands[4] = x3;
  x4 = XEXP (x2, 2);
  operands[5] = x4;
  if (!register_operand (operands[5], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  if (!rtx_equal_p (x5, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1106 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1106 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1106 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1116 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1124 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 2);
  if (XWINT (x3, 0) != 1L)
    return -1;
  x4 = XEXP (x2, 0);
  x5 = XEXP (x4, 0);
  x6 = XVECEXP (x5, 0, 0);
  operands[1] = x6;
  x7 = XVECEXP (x5, 0, 1);
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
  x11 = XEXP (x2, 1);
  if (!rtx_equal_p (x11, operands[1]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8HFmode:
      return pattern1123 (x1, 
E_V8HFmode); /* [-1, 0] */

    case E_V4SFmode:
      if (pattern1123 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 1;

    case E_V2DFmode:
      if (pattern1123 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1136 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !bcst_vector_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1142 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (XWINT (x2, 0))
    {
    case 0L:
      x3 = XVECEXP (x1, 0, 1);
      switch (XWINT (x3, 0))
        {
        case 1L:
          return 0;

        case 2L:
          return 1;

        default:
          return -1;
        }

    case 1L:
      x3 = XVECEXP (x1, 0, 1);
      if (XWINT (x3, 0) != 3L)
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      if (XWINT (x4, 0) != 5L)
        return -1;
      x5 = XVECEXP (x1, 0, 3);
      if (XWINT (x5, 0) != 7L)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1153 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != 19
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern1158 (rtx x1, machine_mode i1)
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
      || !immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1167 (rtx x1)
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
  return pattern203 (x1); /* [-1, 3] */
}

int
pattern1173 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1181 ()
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
pattern1191 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!rtx_equal_p (x1, operands[0]))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      return 0;

    case REG:
      if (peep2_current_count < 4)
        return -1;
      operands[5] = x3;
      if (!general_reg_operand (operands[5], i1))
        return -1;
      x4 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x4) != SET)
        return -1;
      x5 = XEXP (x4, 1);
      if (!rtx_equal_p (x5, operands[5]))
        return -1;
      x6 = XEXP (x4, 0);
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1200 (rtx x1, machine_mode i1, rtx_code i2, machine_mode i3, rtx_code i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i4
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern1205 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_unset_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1210 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1216 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x1, 2);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern1224 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4DImode)
      || GET_MODE (x1) != E_V4DImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != E_V4DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode))
        return -1;
      return 0;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DFmode))
        return -1;
      return 1;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1234 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[3], i1))
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1239 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
  if (GET_MODE (x7) != E_SImode
      || !nonimmediate_operand (operands[1], E_SImode)
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x4, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  return 0;
}

int
pattern1243 (rtx x1, machine_mode i1)
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
pattern1248 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !bcst_vector_operand (operands[1], i1)
      || !vector_all_ones_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1255 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1262 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[1] = x2;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x1, 1);
      operands[3] = x4;
      switch (GET_MODE (x1))
        {
        case E_V32QImode:
          if (!vector_all_ones_operand (operands[0], E_V32QImode)
              || !const0_operand (operands[3], E_V32QImode)
              || !register_operand (operands[1], E_SImode))
            return -1;
          return 0;

        case E_V16QImode:
          if (!vector_all_ones_operand (operands[0], E_V16QImode)
              || !const0_operand (operands[3], E_V16QImode)
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x2, 0) != 3
          || XINT (x2, 1) != 59)
        return -1;
      x5 = XVECEXP (x2, 0, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x3 = XEXP (x1, 0);
      operands[3] = x3;
      x4 = XEXP (x1, 1);
      operands[4] = x4;
      x6 = XVECEXP (x2, 0, 0);
      operands[0] = x6;
      x7 = XVECEXP (x2, 0, 1);
      operands[1] = x7;
      switch (GET_MODE (x1))
        {
        case E_V32QImode:
          if (pattern1261 (x2, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 2;

        case E_V16QImode:
          if (pattern1261 (x2, 
E_V16QImode, 
E_HImode) != 0)
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
pattern1291 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[5], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_HImode)
        return -1;
      return 0;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 1;

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 2;

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 3;

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_SImode)
        return -1;
      return 4;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_HImode)
        return -1;
      return 5;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 6;

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x1) != E_V4DImode)
        return -1;
      x2 = XEXP (x1, 2);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern1323 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  if (GET_MODE (x7) != E_SImode
      || !nonimmediate_operand (operands[1], E_SImode)
      || !const_1_to_31_operand (operands[2], E_QImode)
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x4, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x4, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

int
pattern1335 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[2], i1)
      || !const0_operand (operands[3], i1)
      || !register_operand (operands[1], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1342 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x4, 0);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1350 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!general_reg_operand (operands[0], i1)
      || GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCmode)
    return -1;
  x5 = XEXP (x2, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x2, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  switch (GET_CODE (x5))
    {
    case PLUS:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 0;

    case IOR:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 1;

    case XOR:
      x7 = XEXP (x5, 0);
      if (!rtx_equal_p (x7, operands[0]))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1367 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !vector_operand (operands[1], i1)
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !vector_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1377 (rtx x1, machine_mode i1)
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
pattern1385 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[1], i1)
      || pattern1372 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1394 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1403 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1413 (rtx x1, int i1, int i2, int i3, int i4, int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 3);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + i5])
    return -1;
  x3 = XVECEXP (x1, 0, 4);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + i4])
    return -1;
  x4 = XVECEXP (x1, 0, 5);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XVECEXP (x1, 0, 6);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i2])
    return -1;
  x6 = XVECEXP (x1, 0, 7);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern1424 (rtx x1, machine_mode i1)
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
pattern1430 (rtx x1, machine_mode i1)
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
pattern1437 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonmemory_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1444 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !addsub_vm_operator (operands[6], i1))
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
pattern1451 (rtx x1, machine_mode i1)
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
pattern1461 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1469 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !vector_all_ones_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 2);
  return pattern1468 (x2, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1474 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
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
    case E_V8HFmode:
      return 0;

    case E_V4SFmode:
      return 1;

    case E_V4DFmode:
      return 2;

    default:
      return -1;
    }
}

int
pattern1481 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1489 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1500 (rtx x1, rtx_code i1)
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
      return pattern1499 (x1, 
E_DImode, 
E_TImode); /* [-1, 0] */

    case 32L:
      if (pattern1499 (x1, 
E_SImode, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1510 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[2], E_V8HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[2], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[2], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1525 (rtx x1, machine_mode i1)
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
pattern1532 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 2);
  return pattern1468 (x2, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1536 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE
      || GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern1543 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1552 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1560 (rtx x1, machine_mode i1)
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
pattern1565 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !ix86_carry_flag_unset_operator (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1573 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x8) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1581 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V4SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8SFmode
      || !vector_operand (operands[1], E_V4SFmode))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!nonimm_or_0_operand (operands[2], E_V4SFmode))
    return -1;
  x5 = XEXP (x1, 2);
  operands[3] = x5;
  x6 = XEXP (x3, 1);
  if (!rtx_equal_p (x6, operands[1]))
    return -1;
  return 0;
}

int
pattern1592 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[3], i2)
      || !const0_operand (operands[4], i2)
      || !register_operand (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1599 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i2))
    return -1;
  x5 = XEXP (x3, 2);
  return pattern1592 (x5, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1609 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1608 (x3, 
E_V16SImode, 
E_HImode); /* [-1, 1] */

    case E_QImode:
      x2 = XVECEXP (x1, 0, 2);
      x3 = XEXP (x2, 0);
      res = pattern1608 (x3, 
E_V8DImode, 
E_QImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1621 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (!rtx_equal_p (x2, operands[2]))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[3]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case CONST_INT:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1631 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XVECEXP (x4, 0, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1641 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1649 (rtx x1, machine_mode i1)
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
  x4 = XEXP (x3, 2);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1658 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1657 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1657 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1672 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_7_operand (operands[4], E_VOIDmode)
      || !const_0_to_7_operand (operands[5], E_VOIDmode)
      || !const_0_to_7_operand (operands[6], E_VOIDmode)
      || !const_8_to_15_operand (operands[7], E_VOIDmode)
      || !const_8_to_15_operand (operands[8], E_VOIDmode)
      || !const_8_to_15_operand (operands[9], E_VOIDmode)
      || !const_8_to_15_operand (operands[10], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1681 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  return 0;
}

int
pattern1691 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[4] = x4;
  if (!const_int_operand (operands[4], E_SImode))
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x7, 1);
  if (!rtx_equal_p (x9, operands[0]))
    return -1;
  x10 = XEXP (x6, 0);
  if (!rtx_equal_p (x10, operands[1]))
    return -1;
  x11 = PATTERN (peep2_next_insn (2));
  return pattern1536 (x11); /* [-1, 0] */
}

int
pattern1702 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1709 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !const_4_to_7_operand (operands[7], E_VOIDmode)
      || !const_4_to_7_operand (operands[8], E_VOIDmode)
      || !const_4_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1720 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1719 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1719 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1732 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1738 (machine_mode i1)
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
pattern1746 (machine_mode i1)
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
pattern1754 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[11], i1))
    return -1;
  return 0;
}

int
pattern1763 (rtx x1, machine_mode i1)
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
pattern1772 (machine_mode i1)
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

    case E_V2DImode:
      if (!register_operand (operands[3], E_V2DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1780 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  x6 = XEXP (x2, 2);
  if (GET_CODE (x6) != PC)
    return -1;
  x7 = XEXP (x1, 0);
  if (GET_CODE (x7) != PC)
    return -1;
  return 0;
}

int
pattern1790 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1789 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1789 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1801 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != COMPARE)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x2, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  return 0;
}

int
pattern1808 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[2], E_VOIDmode)
      || !const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_0_to_3_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode)
      || !const_4_to_7_operand (operands[7], E_VOIDmode)
      || !const_4_to_7_operand (operands[8], E_VOIDmode)
      || !const_4_to_7_operand (operands[9], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1816 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53, x54, x55;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != E_V2QImode)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 2)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XVECEXP (x6, 0, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
    return -1;
  x9 = XEXP (x3, 1);
  if (GET_CODE (x9) != i1)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != VEC_SELECT
      || GET_MODE (x10) != E_V2QImode)
    return -1;
  x11 = XEXP (x10, 1);
  if (GET_CODE (x11) != PARALLEL
      || XVECLEN (x11, 0) != 2)
    return -1;
  x12 = XVECEXP (x11, 0, 0);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x13 = XVECEXP (x11, 0, 1);
  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
    return -1;
  x14 = XEXP (x2, 1);
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != i1)
    return -1;
  x16 = XEXP (x15, 0);
  if (GET_CODE (x16) != VEC_SELECT
      || GET_MODE (x16) != E_V2QImode)
    return -1;
  x17 = XEXP (x16, 1);
  if (GET_CODE (x17) != PARALLEL
      || XVECLEN (x17, 0) != 2)
    return -1;
  x18 = XVECEXP (x17, 0, 0);
  if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x19 = XVECEXP (x17, 0, 1);
  if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
    return -1;
  x20 = XEXP (x14, 1);
  if (GET_CODE (x20) != i1)
    return -1;
  x21 = XEXP (x20, 0);
  if (GET_CODE (x21) != VEC_SELECT
      || GET_MODE (x21) != E_V2QImode)
    return -1;
  x22 = XEXP (x21, 1);
  if (GET_CODE (x22) != PARALLEL
      || XVECLEN (x22, 0) != 2)
    return -1;
  x23 = XVECEXP (x22, 0, 0);
  if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
    return -1;
  x24 = XVECEXP (x22, 0, 1);
  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
    return -1;
  x25 = XEXP (x1, 1);
  x26 = XEXP (x25, 0);
  x27 = XEXP (x26, 0);
  if (GET_CODE (x27) != i1)
    return -1;
  x28 = XEXP (x27, 0);
  if (GET_CODE (x28) != VEC_SELECT
      || GET_MODE (x28) != E_V2QImode)
    return -1;
  x29 = XEXP (x28, 1);
  if (GET_CODE (x29) != PARALLEL
      || XVECLEN (x29, 0) != 2)
    return -1;
  x30 = XVECEXP (x29, 0, 0);
  if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x31 = XVECEXP (x29, 0, 1);
  if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
    return -1;
  x32 = XEXP (x26, 1);
  if (GET_CODE (x32) != i1)
    return -1;
  x33 = XEXP (x32, 0);
  if (GET_CODE (x33) != VEC_SELECT
      || GET_MODE (x33) != E_V2QImode)
    return -1;
  x34 = XEXP (x33, 1);
  if (GET_CODE (x34) != PARALLEL
      || XVECLEN (x34, 0) != 2)
    return -1;
  x35 = XVECEXP (x34, 0, 0);
  if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x36 = XVECEXP (x34, 0, 1);
  if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
    return -1;
  x37 = XEXP (x25, 1);
  x38 = XEXP (x37, 0);
  if (GET_CODE (x38) != i1)
    return -1;
  x39 = XEXP (x38, 0);
  if (GET_CODE (x39) != VEC_SELECT
      || GET_MODE (x39) != E_V2QImode)
    return -1;
  x40 = XEXP (x39, 1);
  if (GET_CODE (x40) != PARALLEL
      || XVECLEN (x40, 0) != 2)
    return -1;
  x41 = XVECEXP (x40, 0, 0);
  if (x41 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x42 = XVECEXP (x40, 0, 1);
  if (x42 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
    return -1;
  x43 = XEXP (x37, 1);
  if (GET_CODE (x43) != i1)
    return -1;
  x44 = XEXP (x43, 0);
  if (GET_CODE (x44) != VEC_SELECT
      || GET_MODE (x44) != E_V2QImode)
    return -1;
  x45 = XEXP (x44, 1);
  if (GET_CODE (x45) != PARALLEL
      || XVECLEN (x45, 0) != 2)
    return -1;
  x46 = XVECEXP (x45, 0, 0);
  if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  x47 = XVECEXP (x45, 0, 1);
  if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
    return -1;
  x48 = XEXP (x5, 0);
  operands[1] = x48;
  if (!nonimmediate_operand (operands[1], E_V16QImode))
    return -1;
  x49 = XEXP (x10, 0);
  if (!rtx_equal_p (x49, operands[1]))
    return -1;
  x50 = XEXP (x16, 0);
  if (!rtx_equal_p (x50, operands[1]))
    return -1;
  x51 = XEXP (x21, 0);
  if (!rtx_equal_p (x51, operands[1]))
    return -1;
  x52 = XEXP (x28, 0);
  if (!rtx_equal_p (x52, operands[1]))
    return -1;
  x53 = XEXP (x33, 0);
  if (!rtx_equal_p (x53, operands[1]))
    return -1;
  x54 = XEXP (x39, 0);
  if (!rtx_equal_p (x54, operands[1]))
    return -1;
  x55 = XEXP (x44, 0);
  if (!rtx_equal_p (x55, operands[1]))
    return -1;
  return 0;
}

int
pattern1871 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !sext_operand (operands[2], i1)
      || pattern1870 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1878 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
      || !ix86_carry_flag_operator (operands[4], i2)
      || !const_int_operand (operands[6], i2))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_MODE (x9) != i1
      || !ix86_carry_flag_operator (operands[5], i1))
    return -1;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 1);
  return pattern1873 (x11, 
i1); /* [-1, 0] */
}

int
pattern1888 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 24);
  if (XWINT (x2, 0) != 28L)
    return -1;
  x3 = XVECEXP (x1, 0, 25);
  if (XWINT (x3, 0) != 60L)
    return -1;
  x4 = XVECEXP (x1, 0, 26);
  if (XWINT (x4, 0) != 29L)
    return -1;
  x5 = XVECEXP (x1, 0, 27);
  if (XWINT (x5, 0) != 61L)
    return -1;
  x6 = XVECEXP (x1, 0, 28);
  if (XWINT (x6, 0) != 30L)
    return -1;
  x7 = XVECEXP (x1, 0, 29);
  if (XWINT (x7, 0) != 62L)
    return -1;
  x8 = XVECEXP (x1, 0, 30);
  if (XWINT (x8, 0) != 31L)
    return -1;
  x9 = XVECEXP (x1, 0, 31);
  if (XWINT (x9, 0) != 63L)
    return -1;
  return 0;
}

 int
recog_8 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const48_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  switch (XVECLEN (x4, 0))
    {
    case 3:
      if (XINT (x4, 1) != 59)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x7 = XVECEXP (x4, 0, 1);
      operands[2] = x7;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      operands[4] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || GET_MODE (x4) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !nonimmediate_operand (operands[2], E_V16SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3282; /* avx512f_cmpv16si3_round */

            case E_V16HFmode:
              if (!register_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[2], E_V16HFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3306; /* avx512vl_cmpv16hf3_round */

            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[2], E_V16SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3312; /* avx512f_cmpv16sf3_round */

            default:
              return -1;
            }

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || GET_MODE (x4) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !nonimmediate_operand (operands[2], E_V8SImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3286; /* avx512vl_cmpv8si3_round */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !nonimmediate_operand (operands[2], E_V8DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V8DImode == V16SFmode
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
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3292; /* avx512f_cmpv8di3_round */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !nonimmediate_operand (operands[2], E_V4DImode)
                  || !const_0_to_7_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ((V4DImode == V16SFmode
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
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3296; /* avx512vl_cmpv4di3_round */

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[2], E_V8SFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3316; /* avx512vl_cmpv8sf3_round */

            case E_V8DFmode:
              if (!register_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[2], E_V8DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3322; /* avx512f_cmpv8df3_round */

            case E_V4DFmode:
              if (!register_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[2], E_V4DFmode)
                  || !const_0_to_31_operand (operands[3], E_SImode)
                  || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4394 "../../src/gcc/config/i386/sse.md"
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
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3326; /* avx512vl_cmpv4df3_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x4, 1) != 61
          || GET_MODE (x4) != E_CCFPmode
          || pattern846 (x4) != 0
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      x9 = XEXP (x6, 0);
      operands[0] = x9;
      x7 = XVECEXP (x4, 0, 1);
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      operands[2] = x3;
      switch (GET_MODE (x6))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x7) != E_HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3671; /* avx10_2_comxhf_round */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x7) != E_SFmode
              || !register_operand (operands[1], E_V4SFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 3675; /* avx10_2_comxsf_round */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x7) != E_DFmode
              || !register_operand (operands[1], E_V2DFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 3679; /* avx10_2_comxdf_round */

        default:
          return -1;
        }

    case 1:
      if (XINT (x4, 1) != 26
          || GET_MODE (x4) != E_CCFPmode
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x6 = XVECEXP (x4, 0, 0);
      if (GET_MODE (x6) != E_CCFPmode)
        return -1;
      operands[2] = x3;
      switch (GET_CODE (x6))
        {
        case UNSPEC:
          if (XVECLEN (x6, 0) != 2
              || XINT (x6, 1) != 61)
            return -1;
          x11 = XVECEXP (x6, 0, 0);
          if (GET_CODE (x11) != VEC_SELECT)
            return -1;
          x12 = XEXP (x11, 1);
          if (GET_CODE (x12) != PARALLEL
              || XVECLEN (x12, 0) != 1)
            return -1;
          x13 = XVECEXP (x12, 0, 0);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XVECEXP (x6, 0, 1);
          if (GET_CODE (x14) != VEC_SELECT)
            return -1;
          x15 = XEXP (x14, 1);
          if (GET_CODE (x15) != PARALLEL
              || XVECLEN (x15, 0) != 1)
            return -1;
          x16 = XVECEXP (x15, 0, 0);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x17 = XEXP (x11, 0);
          operands[0] = x17;
          x18 = XEXP (x14, 0);
          operands[1] = x18;
          switch (GET_MODE (x11))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x14) != E_HFmode
                  || !register_operand (operands[1], E_V8HFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3673; /* avx10_2_ucomxhf_round */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x14) != E_SFmode
                  || !register_operand (operands[1], E_V4SFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 3677; /* avx10_2_ucomxsf_round */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x14) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4853 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 3681; /* avx10_2_ucomxdf_round */

            default:
              return -1;
            }

        case COMPARE:
          x9 = XEXP (x6, 0);
          if (GET_CODE (x9) != VEC_SELECT)
            return -1;
          x19 = XEXP (x9, 1);
          if (GET_CODE (x19) != PARALLEL
              || XVECLEN (x19, 0) != 1)
            return -1;
          x20 = XVECEXP (x19, 0, 0);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x21 = XEXP (x6, 1);
          if (GET_CODE (x21) != VEC_SELECT)
            return -1;
          x22 = XEXP (x21, 1);
          if (GET_CODE (x22) != PARALLEL
              || XVECLEN (x22, 0) != 1)
            return -1;
          x23 = XVECEXP (x22, 0, 0);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x24 = XEXP (x9, 0);
          operands[0] = x24;
          x25 = XEXP (x21, 0);
          operands[1] = x25;
          switch (GET_MODE (x9))
            {
            case E_HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x21) != E_HFmode
                  || !register_operand (operands[1], E_V8HFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3685; /* avx512fp16_ucomi_round */

            case E_SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x21) != E_SFmode
                  || !register_operand (operands[1], E_V4SFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode)))
                return -1;
              return 3689; /* sse_ucomi_round */

            case E_DFmode:
              if (!register_operand (operands[0], E_V2DFmode)
                  || GET_MODE (x21) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode)))
                return -1;
              return 3693; /* sse2_ucomi_round */

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
recog_22 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  switch (pattern1 (x1, pnum_clobbers))
    {
    case 0:
      if (!(
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 1128; /* *lshrti3_doubleword_mask_1 */

    case 1:
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case CONST_INT:
          switch (pattern255 (x1))
            {
            case 0:
              return 137; /* *insvqi_3 */

            case 1:
              return 139; /* *insvqi_3 */

            case 2:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 141; /* *insvqi_3 */
              break;

            default:
              break;
            }
          break;

        case SUBREG:
          if (pnum_clobbers != NULL
              && pattern421 (x1, 
E_TImode) == 0
              && (
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 1124; /* *lshrti3_doubleword_mask */
            }
          break;

        default:
          break;
        }
      operands[2] = x3;
      switch (pattern256 (x1, pnum_clobbers))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (pnum_clobbers == NULL
                  || pattern738 (x2, 
E_TImode, 
E_QImode) != 0
                  || !
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1132; /* lshrti3_doubleword */

            case E_QImode:
              if (pattern623 (x2, 
E_QImode) != 0)
                return -1;
              if (
#line 17561 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 1212; /* *lshrqi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17561 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 1213; /* *lshrqi3_1 */

            case E_HImode:
              if (pattern623 (x2, 
E_HImode) != 0)
                return -1;
              if (
#line 17599 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
                return 1214; /* *lshrhi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 17599 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands, TARGET_APX_NDD)
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 1215; /* *lshrhi3_1 */

            case E_V4HImode:
              if (pattern738 (x2, 
E_V4HImode, 
E_DImode) != 0
                  || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2203; /* mmx_lshrv4hi3 */

            case E_V2SImode:
              if (pattern738 (x2, 
E_V2SImode, 
E_DImode) != 0
                  || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2205; /* mmx_lshrv2si3 */

            case E_V1DImode:
              if (pattern738 (x2, 
E_V1DImode, 
E_DImode) != 0
                  || !
#line 3891 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
                return -1;
              return 2207; /* mmx_lshrv1di3 */

            case E_V1SImode:
              if (pattern738 (x2, 
E_V1SImode, 
E_DImode) != 0
                  || !
#line 3928 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2209; /* mmx_lshrv1si3 */

            case E_V2HImode:
              if (pattern738 (x2, 
E_V2HImode, 
E_DImode) != 0
                  || !
#line 3945 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
                return -1;
              return 2211; /* lshrv2hi3 */

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
              return 2215; /* lshrv2qi3 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1216; /* *lshrqi3_1_slp */

        case 2:
          if (!
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          *pnum_clobbers = 1;
          return 1218; /* *lshrhi3_1_slp */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_27 (rtx x1 ATTRIBUTE_UNUSED,
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
    case CONST_INT:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (!nonimmediate_operand (operands[0], E_TImode)
              || GET_MODE (x3) != E_TImode
              || !nonimmediate_operand (operands[1], E_DImode)
              || !
#line 4660 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 174; /* zero_extendditi2 */

        case E_DImode:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          if (nonimmediate_operand (operands[0], E_DImode)
              && x86_64_zext_operand (operands[1], E_SImode))
            return 175; /* *zero_extendsidi2 */
          if (!register_operand (operands[0], E_DImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 4812 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 176; /* zero_extendqidi2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 4812 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 177; /* zero_extendhidi2 */

            default:
              return -1;
            }

        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[1], E_QImode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 178; /* zero_extendqisi2_and */
                }
              if (!
#line 4867 "../../src/gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
                return -1;
              return 180; /* *zero_extendqisi2 */

            case E_HImode:
              if (!nonimmediate_operand (operands[1], E_HImode))
                return -1;
              if (pnum_clobbers != NULL
                  && 
#line 4839 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
                {
                  *pnum_clobbers = 1;
                  return 179; /* zero_extendhisi2_and */
                }
              if (!
#line 4867 "../../src/gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
                return -1;
              return 181; /* *zero_extendhisi2 */

            default:
              return -1;
            }

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || !nonimmediate_operand (operands[1], E_QImode))
            return -1;
          if (pnum_clobbers != NULL
              && 
#line 4893 "../../src/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
            {
              *pnum_clobbers = 1;
              return 182; /* zero_extendqihi2_and */
            }
          if (!
#line 4921 "../../src/gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))))
            return -1;
          return 183; /* *zero_extendqihi2 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[1]))
        {
        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !
#line 5170 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 190; /* *extendhisi2_zext */

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !
#line 5205 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 192; /* *extendqisi2_zext */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[1]))
        {
        case E_HFmode:
          if (!nonimmediate_operand (operands[1], E_HFmode)
              || !
#line 5887 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512FP16))
            return -1;
          return 220; /* *fixuns_trunchfsi2zext */

        case E_SFmode:
          if (!nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 5898 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 221; /* *fixuns_truncsfsi2_avx512f_zext */

        case E_DFmode:
          if (!nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 5898 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_AVX512F && TARGET_SSE_MATH))
            return -1;
          return 222; /* *fixuns_truncdfsi2_avx512f_zext */

        default:
          return -1;
        }

    case PLUS:
      if (GET_MODE (x4) != E_QImode
          || !register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 286; /* *addqi_1_zexthi_nf */
          if (pnum_clobbers == NULL
              || !
#line 6677 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 287; /* *addqi_1_zexthi */

        case PLUS:
          if (pnum_clobbers == NULL
              || GET_MODE (x5) != E_QImode)
            return -1;
          x7 = XEXP (x5, 0);
          if (!ix86_carry_flag_operator (x7, E_QImode))
            return -1;
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
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_general_operand (operands[2], E_QImode)
              || !
#line 8895 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 465; /* *addqi3_carry_zexthi */

        case LTU:
        case UNLT:
          if (pnum_clobbers == NULL)
            return -1;
          operands[2] = x5;
          if (!ix86_carry_flag_operator (operands[2], E_QImode)
              || pattern1068 (x4) != 0
              || !
#line 8952 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 471; /* *addqi3_carry_zexthi_0 */

        case GE:
        case GEU:
          if (pnum_clobbers == NULL)
            return -1;
          operands[2] = x5;
          if (!ix86_carry_flag_unset_operator (operands[2], E_QImode)
              || pattern1068 (x4) != 0
              || !
#line 8997 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
            return -1;
          *pnum_clobbers = 1;
          return 477; /* *addqi3_carry_zexthi_0r */

        default:
          return -1;
        }

    case MINUS:
      if (GET_MODE (x4) != E_QImode
          || !register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode))
            return -1;
          switch (GET_CODE (operands[2]))
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
              if (!x86_64_general_operand (operands[2], E_QImode))
                return -1;
              if (
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 392; /* *subqi_1_zexthi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 393; /* *subqi_1_zexthi */

            case LTU:
            case UNLT:
              if (pnum_clobbers == NULL
                  || !ix86_carry_flag_operator (operands[2], E_QImode))
                return -1;
              x11 = XEXP (x6, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 17)
                return -1;
              x12 = XEXP (x6, 1);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !
#line 9440 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 505; /* *subqi3_carry_zexthi_0 */

            case GE:
            case GEU:
              if (pnum_clobbers == NULL
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode))
                return -1;
              x11 = XEXP (x6, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 17)
                return -1;
              x12 = XEXP (x6, 1);
              if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || !
#line 9488 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 511; /* *subqi3_carry_zexthi_0r */

            default:
              return -1;
            }

        case MINUS:
          if (pnum_clobbers == NULL
              || GET_MODE (x5) != E_QImode)
            return -1;
          x10 = XEXP (x5, 1);
          if (!ix86_carry_flag_operator (x10, E_QImode))
            return -1;
          operands[3] = x10;
          x13 = XEXP (x10, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 17)
            return -1;
          x14 = XEXP (x10, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode)
              || !
#line 9380 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 499; /* *subqi3_carry_zexthi */

        default:
          return -1;
        }

    case AND:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          if (!nonimmediate_operand (operands[1], E_QImode)
              || GET_MODE (x4) != E_QImode)
            return -1;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          if (!x86_64_general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return 708; /* *andqi_1_zexthi_nf */
          if (pnum_clobbers == NULL
              || !
#line 12626 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          *pnum_clobbers = 1;
          return 709; /* *andqi_1_zexthi */

        case UNSPEC:
          if (XVECLEN (x5, 0) != 2)
            return -1;
          x15 = XVECEXP (x5, 0, 0);
          operands[1] = x15;
          x16 = XVECEXP (x5, 0, 1);
          operands[2] = x16;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          switch (XINT (x5, 1))
            {
            case 158:
              switch (pattern1079 (x4))
                {
                case 0:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8199; /* *avx512bw_testmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8202; /* *avx512vl_testmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8208; /* *avx512bw_testmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8205; /* *avx512vl_testmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8211; /* *avx512vl_testmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8217; /* *avx512f_testmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8214; /* *avx512vl_testmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8220; /* *avx512vl_testmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8223; /* *avx512vl_testmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8226; /* *avx512f_testmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8229; /* *avx512vl_testmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19104 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8232; /* *avx512vl_testmv2di3_zext_mask */

                default:
                  return -1;
                }

            case 159:
              switch (pattern1079 (x4))
                {
                case 0:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8271; /* *avx512bw_testnmv64qi3_zext_mask */

                case 1:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8274; /* *avx512vl_testnmv32qi3_zext_mask */

                case 2:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8280; /* *avx512bw_testnmv32hi3_zext_mask */

                case 3:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8277; /* *avx512vl_testnmv16qi3_zext_mask */

                case 4:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8283; /* *avx512vl_testnmv16hi3_zext_mask */

                case 5:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8289; /* *avx512f_testnmv16si3_zext_mask */

                case 6:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8286; /* *avx512vl_testnmv8hi3_zext_mask */

                case 7:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8292; /* *avx512vl_testnmv8si3_zext_mask */

                case 8:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8295; /* *avx512vl_testnmv4si3_zext_mask */

                case 9:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8298; /* *avx512f_testnmv8di3_zext_mask */

                case 10:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8301; /* *avx512vl_testnmv4di3_zext_mask */

                case 11:
                  if (!(
#line 19134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8304; /* *avx512vl_testnmv2di3_zext_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      if (pattern79 (x3) != 0)
        return -1;
      if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 843; /* *iorqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      *pnum_clobbers = 1;
      return 844; /* *iorqi_1_zexthi */

    case XOR:
      if (pattern79 (x3) != 0)
        return -1;
      if (
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 845; /* *xorqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 13715 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      *pnum_clobbers = 1;
      return 846; /* *xorqi_1_zexthi */

    case NEG:
      if (pattern80 (x3) != 0)
        return -1;
      if (
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 962; /* *negqi_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 14360 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 963; /* *negqi_1_zexthi */

    case NOT:
      if (pattern80 (x3) != 0
          || !
#line 15002 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
        return -1;
      return 1035; /* *one_cmplqi2_1_zexthi */

    case ASHIFT:
      if (pattern81 (x3) != 0)
        return -1;
      if (
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1093; /* *ashlqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 16008 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1094; /* *ashlqi3_1_zexthi */

    case LSHIFTRT:
      if (pattern81 (x3) != 0)
        return -1;
      if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1186; /* *lshrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1187; /* *lshrqi3_1_zexthi */

    case ASHIFTRT:
      if (pattern81 (x3) != 0)
        return -1;
      if (
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1188; /* *ashrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 17455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1189; /* *ashrqi3_1_zexthi */

    case ROTATE:
      if (pattern81 (x3) != 0)
        return -1;
      if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1351; /* *rotlqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1352; /* *rotlqi3_1_zexthi */

    case ROTATERT:
      if (pattern81 (x3) != 0)
        return -1;
      if (
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF))
        return 1353; /* *rotrqi3_1_zexthi_nf */
      if (pnum_clobbers == NULL
          || !
#line 18570 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true))
        return -1;
      *pnum_clobbers = 1;
      return 1354; /* *rotrqi3_1_zexthi */

    case VEC_SELECT:
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) != PARALLEL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (XVECLEN (x6, 0))
        {
        case 4:
          if (pattern608 (x3) != 0
              || !
#line 5011 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2305; /* sse4_1_zero_extendv4qiv4hi2 */

        case 2:
          switch (pattern609 (x3))
            {
            case 0:
              if (!
#line 5043 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2307; /* sse4_1_zero_extendv2hiv2si2 */

            case 1:
              if (!
#line 5075 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2309; /* sse4_1_zero_extendv2qiv2si2 */

            case 2:
              if (!
#line 5101 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                return -1;
              return 2311; /* sse4_1_zero_extendv2qiv2hi2 */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || GET_MODE (x4) != E_QImode)
            return -1;
          x17 = XVECEXP (x6, 0, 0);
          operands[2] = x17;
          switch (pattern984 ())
            {
            case 0:
              if (!
#line 5474 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
                return -1;
              return 2327; /* *mmx_pextrb_zext */

            case 1:
              if (!
#line 6130 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
                return -1;
              return 2365; /* *pextrb_zext */

            case 2:
              if (!
#line 21147 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                return -1;
              return 8468; /* *vec_extractv16qi_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      return recog_26 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_61 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[2] = x4;
      x5 = XEXP (x3, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      operands[3] = x5;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (register_operand (operands[0], E_V2SFmode)
              && GET_MODE (x3) == E_V2SFmode
              && register_operand (operands[2], E_V2SFmode)
              && register_operand (operands[1], E_V2SFmode)
              && const_0_to_3_operand (operands[3], E_SImode)
              && 
#line 1297 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2074; /* *mmx_blendps */
          break;

        case E_V4HFmode:
          if (pattern860 (x3, 
E_V4HFmode) == 0
              && 
#line 5597 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2336; /* *mmx_pblendw64 */
          break;

        case E_V4BFmode:
          if (pattern860 (x3, 
E_V4BFmode) == 0
              && 
#line 5597 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2337; /* *mmx_pblendw64 */
          break;

        case E_V4HImode:
          if (pattern860 (x3, 
E_V4HImode) == 0
              && 
#line 5597 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return 2338; /* *mmx_pblendw64 */
          break;

        case E_V2HFmode:
          if (pattern861 (x3, 
E_V2HFmode) == 0
              && 
#line 5615 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2339; /* *mmx_pblendw32 */
          break;

        case E_V2BFmode:
          if (pattern861 (x3, 
E_V2BFmode) == 0
              && 
#line 5615 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2340; /* *mmx_pblendw32 */
          break;

        case E_V2HImode:
          if (pattern861 (x3, 
E_V2HImode) == 0
              && 
#line 5615 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1))
            return 2341; /* *mmx_pblendw32 */
          break;

        default:
          break;
        }
      if (XWINT (x5, 0) != 1L)
        return -1;
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (pattern862 (x3, 
E_V2SFmode) != 0
              || !
#line 1741 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2090; /* *mmx_movss_v2sf */

        case E_V2SImode:
          if (pattern862 (x3, 
E_V2SImode) != 0
              || !
#line 1741 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2091; /* *mmx_movss_v2si */

        default:
          return -1;
        }

    case VEC_DUPLICATE:
      x7 = XEXP (x4, 0);
      operands[2] = x7;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      x5 = XEXP (x3, 2);
      operands[3] = x5;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SImode:
          if (pattern863 (x3, 
E_V2SImode, 
E_SImode) != 0
              || !
#line 5262 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2SImode))))
            return -1;
          return 2316; /* *mmx_pinsrd */

        case E_V4HFmode:
          if (pattern863 (x3, 
E_V4HFmode, 
E_HFmode) != 0
              || !
#line 5292 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2317; /* *mmx_pinsrw */

        case E_V4BFmode:
          if (pattern863 (x3, 
E_V4BFmode, 
E_BFmode) != 0
              || !
#line 5292 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2318; /* *mmx_pinsrw */

        case E_V4HImode:
          if (pattern863 (x3, 
E_V4HImode, 
E_HImode) != 0
              || !
#line 5292 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode))))
            return -1;
          return 2319; /* *mmx_pinsrw */

        case E_V8QImode:
          if (pattern863 (x3, 
E_V8QImode, 
E_QImode) != 0
              || !
#line 5347 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8QImode))))
            return -1;
          return 2320; /* *mmx_pinsrb */

        case E_V2HFmode:
          if (pattern863 (x3, 
E_V2HFmode, 
E_HFmode) != 0
              || !
#line 5960 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2355; /* *pinsrw */

        case E_V2BFmode:
          if (pattern863 (x3, 
E_V2BFmode, 
E_BFmode) != 0
              || !
#line 5960 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2356; /* *pinsrw */

        case E_V2HImode:
          if (pattern863 (x3, 
E_V2HImode, 
E_HImode) != 0
              || !
#line 5960 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2HImode))))
            return -1;
          return 2357; /* *pinsrw */

        case E_V4QImode:
          if (pattern863 (x3, 
E_V4QImode, 
E_QImode) != 0
              || !
#line 6013 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4QImode))))
            return -1;
          return 2358; /* *pinsrb */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern100 (x3))
        {
        case 0:
          if (!
#line 15483 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7311; /* avx512vl_ss_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7338; /* avx512vl_ss_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7341; /* avx512vl_ss_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7368; /* avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7371; /* avx512vl_ss_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7463; /* avx512f_ss_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7408; /* avx512vl_ss_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7411; /* avx512vl_ss_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15921 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7426; /* avx512vl_ss_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16067 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7445; /* avx512vl_ss_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern100 (x3))
        {
        case 0:
          if (!
#line 15483 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7312; /* avx512vl_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7339; /* avx512vl_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7342; /* avx512vl_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7369; /* avx512vl_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7372; /* avx512vl_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7464; /* avx512f_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7409; /* avx512vl_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7412; /* avx512vl_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15921 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7427; /* avx512vl_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16067 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7446; /* avx512vl_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern100 (x3))
        {
        case 0:
          if (!
#line 15483 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7313; /* avx512vl_us_truncatev2div2qi2_mask_store_1 */

        case 1:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7340; /* avx512vl_us_truncatev4siv4qi2_mask_store_1 */

        case 2:
          if (!
#line 15578 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7343; /* avx512vl_us_truncatev4div4qi2_mask_store_1 */

        case 3:
          if (!(
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7370; /* avx512vl_us_truncatev8hiv8qi2_mask_store_1 */

        case 4:
          if (!
#line 15676 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7373; /* avx512vl_us_truncatev8siv8qi2_mask_store_1 */

        case 5:
          if (!
#line 16192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7465; /* avx512f_us_truncatev8div16qi2_mask_store_1 */

        case 6:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7410; /* avx512vl_us_truncatev4siv4hi2_mask_store_1 */

        case 7:
          if (!
#line 15830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7413; /* avx512vl_us_truncatev4div4hi2_mask_store_1 */

        case 8:
          if (!
#line 15921 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7428; /* avx512vl_us_truncatev2div2hi2_mask_store_1 */

        case 9:
          if (!
#line 16067 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7447; /* avx512vl_us_truncatev2div2si2_mask_store_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_73 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
      switch (GET_CODE (operands[2]))
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
          switch (pattern107 (x2, pnum_clobbers))
            {
            case 0:
              if (
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 394; /* *subqi_1_zextsi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 395; /* *subqi_1_zextsi */

            case 1:
              if (
#line 8158 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 398; /* *subhi_1_zextsi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8158 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 399; /* *subhi_1_zextsi */

            case 2:
              if (
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 396; /* *subqi_1_zextdi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8144 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 397; /* *subqi_1_zextdi */

            case 3:
              if (
#line 8158 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && TARGET_APX_NF
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return 400; /* *subhi_1_zextdi_nf */
              if (pnum_clobbers == NULL
                  || !
#line 8158 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD && true
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 401; /* *subhi_1_zextdi */

            case 4:
              if (!
#line 8173 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 402; /* *subsi_1_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          switch (pattern753 (x2, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 506; /* *subqi3_carry_zextsi_0 */

            case 1:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 508; /* *subhi3_carry_zextsi_0 */

            case 2:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_operator (operands[2], E_QImode)
                  || !
#line 9440 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 507; /* *subqi3_carry_zextdi_0 */

            case 3:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_operator (operands[2], E_HImode)
                  || !
#line 9455 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 509; /* *subhi3_carry_zextdi_0 */

            case 4:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_operator (operands[2], E_SImode)
                  || !
#line 9470 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 510; /* *subsi3_carry_zext_0 */

            default:
              return -1;
            }

        case GE:
        case GEU:
          switch (pattern753 (x2, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 512; /* *subqi3_carry_zextsi_0r */

            case 1:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 514; /* *subhi3_carry_zextsi_0r */

            case 2:
              if (!nonimmediate_operand (operands[1], E_QImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_QImode)
                  || !
#line 9488 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 513; /* *subqi3_carry_zextdi_0r */

            case 3:
              if (!nonimmediate_operand (operands[1], E_HImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_HImode)
                  || !
#line 9503 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD))
                return -1;
              *pnum_clobbers = 1;
              return 515; /* *subhi3_carry_zextdi_0r */

            case 4:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !ix86_carry_flag_unset_operator (operands[2], E_SImode)
                  || !
#line 9518 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 516; /* *subsi3_carry_zext_0r */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x6 = XEXP (x4, 1);
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
          x9 = XEXP (x4, 0);
          operands[1] = x9;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (pattern278 (x2))
            {
            case 0:
              if (pattern1540 (x4, 
E_QImode) != 0
                  || !
#line 9380 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 500; /* *subqi3_carry_zextsi */

            case 1:
              if (pattern1540 (x4, 
E_HImode) != 0
                  || !
#line 9400 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 502; /* *subhi3_carry_zextsi */

            case 2:
              if (pattern1540 (x4, 
E_QImode) != 0
                  || !
#line 9380 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 501; /* *subqi3_carry_zextdi */

            case 3:
              if (pattern1540 (x4, 
E_HImode) != 0
                  || !
#line 9400 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 503; /* *subhi3_carry_zextdi */

            case 4:
              if (pattern1540 (x4, 
E_SImode) != 0
                  || !
#line 9420 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 504; /* *subsi3_carry_zext */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CONST_INT:
      if (pnum_clobbers == NULL
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      switch (XWINT (x4, 0))
        {
        case 63L:
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0))
            return -1;
          x10 = XEXP (x5, 0);
          if (GET_CODE (x10) != CLZ
              || GET_MODE (x10) != E_DImode)
            return -1;
          x11 = XEXP (x10, 0);
          operands[1] = x11;
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 21250 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1526; /* bsr_rex64_1_zext */

        case 31L:
          if (GET_CODE (x5) != CLZ)
            return -1;
          x10 = XEXP (x5, 0);
          operands[1] = x10;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 21290 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1529; /* bsr_zext_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_83 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
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
      switch (pattern434 (x2))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 8069 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 380; /* *subdi3_doubleword */
            }
          if (!x86_64_general_operand (operands[2], E_DImode))
            return -1;
          if ((
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 390; /* *subdi_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 391; /* *subdi_1 */

        case 1:
          if (
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 388; /* *subsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 8125 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
  && true))
            return -1;
          *pnum_clobbers = 1;
          return 389; /* *subsi_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode
          || pattern758 (x2, 
E_SImode, 
E_DImode) != 0
          || !(
#line 8103 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 382; /* *subdi3_doubleword_zext */

    case LTU:
    case UNLT:
      switch (pattern442 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1204 (x2, 
E_SImode) != 0
              || !
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 493; /* *subsi3_carry_0 */

        case 1:
          if (pattern1204 (x2, 
E_DImode) != 0
              || !(
#line 9349 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 494; /* *subdi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern442 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1205 (x2, 
E_SImode) != 0
              || !
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 497; /* *subsi3_carry_0r */

        case 1:
          if (pattern1205 (x2, 
E_DImode) != 0
              || !(
#line 9363 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 498; /* *subdi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern444 (x2, pnum_clobbers))
        {
        case 0:
          if (!
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 584; /* *subsi3_eq_0 */

        case 1:
          if (!(
#line 10307 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 585; /* *subdi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern444 (x2, pnum_clobbers))
        {
        case 0:
          if (!
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 588; /* *subsi3_ne_0 */

        case 1:
          if (!(
#line 10328 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (MINUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 589; /* *subdi3_ne_0 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_86 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
      operands[1] = x3;
      if (bt_comparison_operator (operands[1], E_VOIDmode))
        {
          res = recog_85 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (GET_CODE (x3) != NE
          || GET_MODE (x3) != E_QImode
          || XWINT (x4, 0) != 0L)
        return -1;
      x6 = XEXP (x2, 1);
      if (GET_CODE (x6) != ZERO_EXTRACT)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != UMIN
          || GET_MODE (x7) != E_QImode)
        return -1;
      x8 = XEXP (x6, 2);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XEXP (x2, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x10 = XEXP (x3, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x11 = XEXP (x6, 0);
      operands[1] = x11;
      x12 = XEXP (x7, 1);
      operands[3] = x12;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      x13 = XEXP (x7, 0);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern871 (x2, 
E_SImode) != 0
              || !
#line 22036 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 4 * BITS_PER_UNIT))
            return -1;
          *pnum_clobbers = 1;
          return 1590; /* *bmi2_bzhi_si3 */

        case E_DImode:
          if (pattern871 (x2, 
E_DImode) != 0
              || !(
#line 22036 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1591; /* *bmi2_bzhi_di3 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      operands[1] = x3;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x10 = XEXP (x3, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || XWINT (x4, 0) != 0L)
        return -1;
      x6 = XEXP (x2, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return -1;
      x9 = XEXP (x2, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (pattern23 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1795; /* *x86_movsicc_0_m1 */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1796; /* *x86_movdicc_0_m1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_87 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pnum_clobbers != NULL)
        {
          res = recog_86 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[1] = x3;
      if (!ix86_comparison_operator (operands[1], E_VOIDmode))
        return -1;
      switch (pattern241 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1275 (x2, 
E_SImode) != 0
                  || !
#line 26319 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 1804; /* *movsicc_noc */

            case E_DImode:
              if (pattern1275 (x2, 
E_DImode) != 0
                  || !(
#line 26319 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1805; /* *movdicc_noc */

            default:
              return -1;
            }

        case 1:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode)
            return -1;
          x4 = XEXP (x2, 1);
          x5 = XEXP (x4, 0);
          operands[2] = x5;
          if (!nonimmediate_operand (operands[2], E_SImode))
            return -1;
          x6 = XEXP (x2, 2);
          x7 = XEXP (x6, 0);
          operands[3] = x7;
          if (!nonimmediate_operand (operands[3], E_SImode)
              || !
#line 26337 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
            return -1;
          return 1806; /* *movsicc_noc_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_90 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  switch (pattern434 (x2))
    {
    case 0:
      if (pnum_clobbers != NULL
          && x86_64_hilo_general_operand (operands[2], E_DImode)
          && (
#line 12501 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        {
          *pnum_clobbers = 1;
          return 703; /* *anddi3_doubleword */
        }
      if (x86_64_szext_general_operand (operands[2], E_DImode))
        {
          if (
#line 12543 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 705; /* *anddi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 12543 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)
   && true))
            {
              *pnum_clobbers = 1;
              return 706; /* *anddi_1 */
            }
        }
      if (pnum_clobbers == NULL
          || !const_int_operand (operands[2], E_DImode)
          || !
#line 12576 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)))
        return -1;
      *pnum_clobbers = 1;
      return 707; /* *anddi_1_btr */

    case 1:
      if (
#line 12671 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 721; /* *andsi_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 12671 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 722; /* *andsi_1 */

    default:
      return -1;
    }
}

 int
recog_93 (rtx x1 ATTRIBUTE_UNUSED,
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
      switch (pattern115 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && (
#line 14237 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 952; /* *negdi2_doubleword */
            }
          if ((
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 960; /* *negdi_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 961; /* *negdi_1 */

        case 1:
          if (
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
            return 958; /* *negsi_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 14346 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands, TARGET_APX_NDD)
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 959; /* *negsi_1 */

        default:
          return -1;
        }

    case ABS:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern614 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 14644 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 997; /* *nabsdi2_doubleword */
            }
          if (!(
#line 14715 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1006; /* *nabsdi2_1 */

        case E_SImode:
          if (pattern614 (x3, 
E_SImode) != 0
              || !
#line 14715 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1005; /* *nabssi2_1 */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x4;
      if (!ix86_carry_flag_operator (operands[1], E_VOIDmode))
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 17)
        return -1;
      x6 = XEXP (x4, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (pattern23 (x3))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1801; /* *x86_movsicc_0_m1_neg */

        case 1:
          if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1802; /* *x86_movdicc_0_m1_neg */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_97 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (register_operand (operands[2], E_SImode))
    {
      x2 = XEXP (x1, 0);
      operands[0] = x2;
      if (register_operand (operands[0], E_SImode))
        {
          x3 = XEXP (x1, 1);
          if (GET_MODE (x3) == E_SImode
              && nonimmediate_operand (operands[1], E_SImode)
              && 
#line 17313 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
            return 1171; /* *bmi2_lshrsi3_1 */
        }
    }
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode))
        return -1;
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (pnum_clobbers != NULL
          && register_operand (operands[1], E_DImode)
          && nonmemory_operand (operands[2], E_QImode)
          && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
        {
          *pnum_clobbers = 1;
          return 1130; /* lshrdi3_doubleword */
        }
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !register_operand (operands[2], E_DImode)
          || !(
#line 17313 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1173; /* *bmi2_lshrdi3_1 */

    case E_SImode:
      x3 = XEXP (x1, 1);
      if (pattern623 (x3, 
E_SImode) != 0)
        return -1;
      if (
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF))
        return 1180; /* *lshrsi3_1_nf */
      if (pnum_clobbers == NULL
          || !
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
        return -1;
      *pnum_clobbers = 1;
      return 1181; /* *lshrsi3_1 */

    default:
      return -1;
    }
}

 int
recog_101 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case LSHIFTRT:
      switch (pattern292 (x2))
        {
        case 0:
          if ((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1134; /* lshrdi3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1138; /* lshrdi3_doubleword_lowpart */

        case 1:
          if ((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1136; /* lshrti3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1140; /* lshrti3_doubleword_lowpart */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern292 (x2))
        {
        case 0:
          if ((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1135; /* ashrdi3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1139; /* ashrdi3_doubleword_lowpart */

        case 1:
          if ((
#line 16736 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1137; /* ashrti3_doubleword_lowpart_nf */
          if (pnum_clobbers == NULL
              || !(
#line 16757 "../../src/gcc/config/i386/i386.md"
(UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1141; /* ashrti3_doubleword_lowpart */

        default:
          return -1;
        }

    case SS_TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7320; /* *avx512vl_ss_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7323; /* *avx512vl_ss_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7417; /* *avx512vl_ss_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7350; /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7353; /* *avx512vl_ss_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7454; /* *avx512f_ss_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7390; /* *avx512vl_ss_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7393; /* *avx512vl_ss_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7436; /* *avx512vl_ss_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    case TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7321; /* *avx512vl_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7324; /* *avx512vl_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7418; /* *avx512vl_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7351; /* *avx512vl_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7354; /* *avx512vl_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7455; /* *avx512f_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7391; /* *avx512vl_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7394; /* *avx512vl_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7437; /* *avx512vl_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    case US_TRUNCATE:
      switch (pattern295 (x2))
        {
        case 0:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7322; /* *avx512vl_us_truncatev4siv4qi2_store_2 */

        case 1:
          if (!
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7325; /* *avx512vl_us_truncatev4div4qi2_store_2 */

        case 2:
          if (!
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7419; /* *avx512vl_us_truncatev2div2hi2_store_2 */

        case 3:
          if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7352; /* *avx512vl_us_truncatev8hiv8qi2_store_2 */

        case 4:
          if (!
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7355; /* *avx512vl_us_truncatev8siv8qi2_store_2 */

        case 5:
          if (!
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()))
            return -1;
          return 7456; /* *avx512f_us_truncatev8div16qi2_store_2 */

        case 6:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7392; /* *avx512vl_us_truncatev4siv4hi2_store_2 */

        case 7:
          if (!
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7395; /* *avx512vl_us_truncatev4div4hi2_store_2 */

        case 8:
          if (!
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()))
            return -1;
          return 7438; /* *avx512vl_us_truncatev2div2si2_store_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_115 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[1] = x4;
      switch (pattern126 (x3))
        {
        case 0:
          if (
#line 22286 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT))
            return 1624; /* popcountsi2_nf */
          if (pnum_clobbers == NULL
              || !
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT))
            return -1;
          *pnum_clobbers = 1;
          return 1626; /* popcountsi2 */

        case 1:
          if ((
#line 22286 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 1625; /* popcountdi2_nf */
          if (pnum_clobbers == NULL
              || !(
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1627; /* popcountdi2 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern110 (x3, pnum_clobbers, 
E_HImode, 
E_SImode) != 0
          || !
#line 22481 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1636; /* *popcounthi2_1 */

    default:
      return -1;
    }
}

 int
recog_118 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (nonimmediate_operand (operands[0], E_SImode)
          && GET_MODE (x2) == E_SImode)
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V2SImode:
              if (nonimmediate_operand (operands[1], E_V2SImode)
                  && 
#line 5729 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 2349; /* *vec_extractv2si_0 */
              break;

            case E_V4SImode:
              if (nonimmediate_operand (operands[1], E_V4SImode)
                  && 
#line 21170 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
                return 8471; /* *vec_extractv4si_0 */
              break;

            default:
              break;
            }
        }
      break;

    case 1L:
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (nonimmediate_operand (operands[0], E_SImode)
              && GET_MODE (x2) == E_SImode
              && nonimmediate_operand (operands[1], E_V2SImode)
              && 
#line 5786 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 2352; /* *vec_extractv2si_1 */
          break;

        case E_DImode:
          if (nonimmediate_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && nonimmediate_operand (operands[1], E_V2DImode)
              && 
#line 21339 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return 8480; /* *vec_extractv2di_1 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      if (register_operand (operands[0], E_SImode))
        {
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (register_operand (operands[1], E_V16SImode)
                  && const_0_to_15_operand (operands[2], E_VOIDmode)
                  && (
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && 
#line 300 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 7095; /* *vec_extractv16sisi_valign */
              break;

            case E_V8SImode:
              if (register_operand (operands[1], E_V8SImode)
                  && const_0_to_7_operand (operands[2], E_VOIDmode)
                  && (
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (SImode) >= 16) && 
#line 300 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 7096; /* *vec_extractv8sisi_valign */
              break;

            default:
              break;
            }
        }
      if (nonimmediate_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_V4SImode)
          && const_0_to_3_operand (operands[2], E_SImode)
          && 
#line 21260 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return 8476; /* *vec_extractv4si */
      if (!register_operand (operands[0], E_SImode)
          || !memory_operand (operands[1], E_V4SImode)
          || !const_0_to_3_operand (operands[2], E_VOIDmode)
          || !
#line 21317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 8478; /* *vec_extractv4si_mem */

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !const_0_to_7_operand (operands[2], E_VOIDmode)
              || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && 
#line 301 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7097; /* *vec_extractv8didi_valign */

        case E_V4DImode:
          if (!register_operand (operands[1], E_V4DImode)
              || !const_0_to_3_operand (operands[2], E_VOIDmode)
              || !(
#line 14085 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL(operands[2]) * GET_MODE_SIZE (DImode) >= 16) && 
#line 301 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7098; /* *vec_extractv4didi_valign */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_123 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4567; /* unspec_avx512fp16_fix_truncv8hi2_mask */

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
      return 4572; /* unspec_avx512fp16_fix_truncv16hi2_mask */

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
      return 4580; /* unspec_avx512fp16_fix_truncv32hi2_mask */

    case E_V8SImode:
      switch (pattern993 (x2))
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
          return 4588; /* unspec_avx512fp16_fix_truncv8si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
  && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 4893; /* unspec_fix_truncv8sfv8si2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5030; /* unspec_fix_truncv8dfv8si2_mask */

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
          return 4596; /* unspec_avx512fp16_fix_truncv16si2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 4877; /* unspec_fix_truncv16sfv16si2_mask */

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
          return 4604; /* unspec_avx512fp16_fix_truncv8di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5063; /* unspec_fix_truncv8dfv8di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 5123; /* unspec_fix_truncv8sfv8di2_mask */

        default:
          return -1;
        }

    case E_V4SImode:
      if (pattern773 (x2, 
E_V4SImode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[1], E_V8HFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
            return -1;
          return 4655; /* unspec_avx512fp16_fix_truncv4si2_mask */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8816 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 4898; /* unspec_fix_truncv4sfv4si2_mask */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9661 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 5051; /* unspec_fix_truncv4dfv4si2_mask */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9945 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 5164; /* unspec_sse2_cvttpd2dq_mask */

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
          return 4660; /* unspec_avx512fp16_fix_truncv4di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5071; /* unspec_fix_truncv4dfv4di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5131; /* unspec_fix_truncv4sfv4di2_mask */

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
          return 4683; /* unspec_avx512fp16_fix_truncv2di2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 5078; /* unspec_fix_truncv2dfv2di2_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL)))
            return -1;
          return 5146; /* unspec_avx512dq_fix_truncv2sfv2di2_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_129 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[4] = x3;
      x4 = XEXP (x2, 0);
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x2, 1);
      operands[3] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern466 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 7147; /* avx512bw_rndscalev32hf_mask */

        case E_V16HFmode:
          if (pattern466 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7151; /* avx512vl_rndscalev16hf_mask */

        case E_V8HFmode:
          if (pattern466 (x2, 
E_V8HFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 7154; /* avx512fp16_rndscalev8hf_mask */

        case E_V16SFmode:
          if (pattern466 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7157; /* avx512f_rndscalev16sf_mask */

        case E_V8SFmode:
          if (pattern466 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7161; /* avx512vl_rndscalev8sf_mask */

        case E_V4SFmode:
          if (pattern466 (x2, 
E_V4SFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7164; /* avx512vl_rndscalev4sf_mask */

        case E_V8DFmode:
          if (pattern466 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 7167; /* avx512f_rndscalev8df_mask */

        case E_V4DFmode:
          if (pattern466 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7171; /* avx512vl_rndscalev4df_mask */

        case E_V2DFmode:
          if (pattern466 (x2, 
E_V2DFmode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 7174; /* avx512vl_rndscalev2df_mask */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x3, 0) != 1L)
        return -1;
      x4 = XEXP (x2, 0);
      x5 = XVECEXP (x4, 0, 0);
      operands[2] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[3] = x6;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern1210 (x2, 
E_V8HFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return 7175; /* avx512f_rndscalev8hf */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !(
#line 25585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 8975; /* sse4_1_roundsh */

        case E_V4SFmode:
          if (pattern1210 (x2, 
E_V4SFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && 
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return 7179; /* avx512f_rndscalev4sf */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !
#line 25585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8976; /* sse4_1_roundss */

        case E_V2DFmode:
          if (pattern1210 (x2, 
E_V2DFmode) != 0)
            return -1;
          if (const_0_to_255_operand (operands[3], E_SImode)
              && (
#line 14252 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 7183; /* avx512f_rndscalev2df */
          if (!const_0_to_15_operand (operands[3], E_SImode)
              || !(
#line 25585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 8977; /* sse4_1_roundsd */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_138 (rtx x1 ATTRIBUTE_UNUSED,
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
  x7 = XEXP (x2, 2);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XEXP (x2, 1);
  switch (GET_CODE (x8))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x8;
      operands[5] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1368 (x2, 
E_V16SFmode, 
E_V32BFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10355; /* avx512f_dpbf16ps_v16sf_maskz_1 */

        case E_V8SFmode:
          if (pattern1368 (x2, 
E_V8SFmode, 
E_V16BFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10357; /* avx512f_dpbf16ps_v8sf_maskz_1 */

        case E_V4SFmode:
          if (pattern1368 (x2, 
E_V4SFmode, 
E_V8BFmode) != 0
              || !(
#line 31203 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10359; /* avx512f_dpbf16ps_v4sf_maskz_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1369 (x2, 
E_V32BFmode, 
E_V16SFmode) != 0
              || !(
#line 31216 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 10360; /* avx512f_dpbf16ps_v16sf_mask */

        case E_V8SFmode:
          if (pattern1369 (x2, 
E_V16BFmode, 
E_V8SFmode) != 0
              || !(
#line 31216 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10361; /* avx512f_dpbf16ps_v8sf_mask */

        case E_V4SFmode:
          if (pattern1369 (x2, 
E_V8BFmode, 
E_V4SFmode) != 0
              || !(
#line 31216 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 10362; /* avx512f_dpbf16ps_v4sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_145 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  x4 = XEXP (x2, 0);
  switch (XINT (x4, 1))
    {
    case 177:
      return recog_121 (x1, insn, pnum_clobbers);

    case 54:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
          switch (pattern882 (x2))
            {
            case 0:
              if (!
#line 2928 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2883; /* sse_vmrcpv4sf2 */

            case 1:
              if (!
#line 2978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 2891; /* avx512fp16_vmrcpv8hf2 */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern626 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2965 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 2886; /* avx512fp16_rcpv32hf2_mask */

            case E_V16HFmode:
              if (pattern626 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2965 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2888; /* avx512fp16_rcpv16hf2_mask */

            case E_V8HFmode:
              if (pattern626 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2965 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2890; /* avx512fp16_rcpv8hf2_mask */

            case E_V32BFmode:
              if (pattern626 (x2, 
E_V32BFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10694; /* avx10_2_rcpbf16_v32bf_mask */

            case E_V16BFmode:
              if (pattern626 (x2, 
E_V16BFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10696; /* avx10_2_rcpbf16_v16bf_mask */

            case E_V8BFmode:
              if (pattern626 (x2, 
E_V8BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10698; /* avx10_2_rcpbf16_v8bf_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 161:
      switch (pattern628 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2895; /* rcp14v16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2897; /* rcp14v8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2899; /* rcp14v4sf_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2901; /* rcp14v8df_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2903; /* rcp14v4df_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2905; /* rcp14v2df_mask */

        case 6:
          if (!
#line 3017 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2906; /* srcp14v4sf */

        case 7:
          if (!(
#line 3017 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2907; /* srcp14v2df */

        default:
          return -1;
        }

    case 55:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern998 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 2967; /* avx512fp16_rsqrtv32hf2_mask */

            case E_V16HFmode:
              if (pattern998 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2969; /* avx512fp16_rsqrtv16hf2_mask */

            case E_V8HFmode:
              if (pattern998 (x2, 
E_V8HFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 2971; /* avx512fp16_rsqrtv8hf2_mask */

            case E_V32BFmode:
              if (pattern626 (x2, 
E_V32BFmode, 
E_SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
                return -1;
              return 10682; /* avx10_2_rsqrtbf16_v32bf_mask */

            case E_V16BFmode:
              if (pattern626 (x2, 
E_V16BFmode, 
E_HImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10684; /* avx10_2_rsqrtbf16_v16bf_mask */

            case E_V8BFmode:
              if (pattern626 (x2, 
E_V8BFmode, 
E_QImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                return -1;
              return 10686; /* avx10_2_rsqrtbf16_v8bf_mask */

            default:
              return -1;
            }

        case CONST_INT:
          switch (pattern882 (x2))
            {
            case 0:
              if (!
#line 3201 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 2988; /* sse_vmrsqrtv4sf2 */

            case 1:
              if (!
#line 3236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 2990; /* avx512fp16_vmrsqrtv8hf2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 162:
      switch (pattern628 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2973; /* rsqrt14v16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2975; /* rsqrt14v8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2977; /* rsqrt14v4sf_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 2979; /* rsqrt14v8df_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2981; /* rsqrt14v4df_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3157 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 2983; /* rsqrt14v2df_mask */

        case 6:
          if (!
#line 3171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2984; /* rsqrt14v4sf */

        case 7:
          if (!(
#line 3171 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2985; /* rsqrt14v2df */

        default:
          return -1;
        }

    case 156:
      return recog_124 (x1, insn, pnum_clobbers);

    case 46:
      return recog_122 (x1, insn, pnum_clobbers);

    case 172:
      return recog_123 (x1, insn, pnum_clobbers);

    case 173:
      return recog_125 (x1, insn, pnum_clobbers);

    case 165:
      return recog_127 (x1, insn, pnum_clobbers);

    case 136:
      x6 = XEXP (x2, 2);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern999 (x2, 
E_V4SFmode) != 0
              || !
#line 27030 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9063; /* *xop_vmfrczv4sf2 */

        case E_V2DFmode:
          if (pattern999 (x2, 
E_V2DFmode) != 0
              || !(
#line 27030 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9064; /* *xop_vmfrczv2df2 */

        default:
          return -1;
        }

    case 149:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x4) != E_V4SFmode
              || !memory_operand (operands[1], E_V4HImode)
              || !nonimm_or_0_operand (operands[2], E_V4SFmode)
              || !register_operand (operands[3], E_QImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29099 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL)))
            return -1;
          return 9653; /* *vcvtph2ps_load_mask */

        case E_V8SFmode:
          if (pattern630 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29109 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL)
   && (!false || TARGET_AVX10_2_256))))
            return -1;
          return 9656; /* vcvtph2ps256_mask */

        case E_V16SFmode:
          if (pattern632 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29122 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9660; /* avx512f_vcvtph2ps512_mask */

        default:
          return -1;
        }

    case 168:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern626 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10076; /* conflictv16si_mask */

        case E_V8SImode:
          if (pattern626 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10078; /* conflictv8si_mask */

        case E_V4SImode:
          if (pattern626 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10080; /* conflictv4si_mask */

        case E_V8DImode:
          if (pattern626 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10082; /* conflictv8di_mask */

        case E_V4DImode:
          if (pattern626 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10084; /* conflictv4di_mask */

        case E_V2DImode:
          if (pattern626 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29959 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512CD) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10086; /* conflictv2di_mask */

        default:
          return -1;
        }

    case 253:
      switch (pattern631 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10507; /* vcvtph2bf8v16hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10515; /* vcvtph2bf8v32hf_mask */

        default:
          return -1;
        }

    case 254:
      switch (pattern631 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10509; /* vcvtph2bf8sv16hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10517; /* vcvtph2bf8sv32hf_mask */

        default:
          return -1;
        }

    case 255:
      switch (pattern631 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10511; /* vcvtph2hf8v16hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10519; /* vcvtph2hf8v32hf_mask */

        default:
          return -1;
        }

    case 256:
      switch (pattern631 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10513; /* vcvtph2hf8sv16hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 31835 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10521; /* vcvtph2hf8sv32hf_mask */

        default:
          return -1;
        }

    case 257:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern630 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10523; /* vcvthf82phv32hf_mask */

        case E_V16HFmode:
          if (pattern630 (x2, 
E_V16HFmode, 
E_HImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10525; /* vcvthf82phv16hf_mask */

        case E_V8HFmode:
          if (pattern630 (x2, 
E_V8HFmode, 
E_QImode, 
E_V16QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31923 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10527; /* vcvthf82phv8hf_mask */

        default:
          return -1;
        }

    case 263:
      switch (pattern633 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10736; /* avx10_2_cvtbf162ibsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10744; /* avx10_2_cvtbf162ibsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10752; /* avx10_2_cvtbf162ibsv8bf_mask */

        default:
          return -1;
        }

    case 264:
      switch (pattern633 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10738; /* avx10_2_cvtbf162iubsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10746; /* avx10_2_cvtbf162iubsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10754; /* avx10_2_cvtbf162iubsv8bf_mask */

        default:
          return -1;
        }

    case 269:
      switch (pattern633 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10740; /* avx10_2_cvttbf162ibsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10748; /* avx10_2_cvttbf162ibsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10756; /* avx10_2_cvttbf162ibsv8bf_mask */

        default:
          return -1;
        }

    case 270:
      switch (pattern633 (x2, 
E_V32BFmode, 
E_V16BFmode, 
E_V8BFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10742; /* avx10_2_cvttbf162iubsv32bf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10750; /* avx10_2_cvttbf162iubsv16bf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10758; /* avx10_2_cvttbf162iubsv8bf_mask */

        default:
          return -1;
        }

    case 265:
      switch (pattern633 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10761; /* avx10_2_cvtph2ibsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10769; /* avx10_2_cvtph2ibsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10776; /* avx10_2_cvtph2ibsv8hf_mask */

        default:
          return -1;
        }

    case 266:
      switch (pattern633 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10765; /* avx10_2_cvtph2iubsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10773; /* avx10_2_cvtph2iubsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10778; /* avx10_2_cvtph2iubsv8hf_mask */

        default:
          return -1;
        }

    case 271:
      switch (pattern633 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10781; /* avx10_2_cvttph2ibsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10789; /* avx10_2_cvttph2ibsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10796; /* avx10_2_cvttph2ibsv8hf_mask */

        default:
          return -1;
        }

    case 272:
      switch (pattern633 (x2, 
E_V32HFmode, 
E_V16HFmode, 
E_V8HFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10785; /* avx10_2_cvttph2iubsv32hf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10793; /* avx10_2_cvttph2iubsv16hf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10798; /* avx10_2_cvttph2iubsv8hf_mask */

        default:
          return -1;
        }

    case 267:
      switch (pattern634 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10801; /* avx10_2_cvtps2ibsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10809; /* avx10_2_cvtps2ibsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10816; /* avx10_2_cvtps2ibsv4sf_mask */

        default:
          return -1;
        }

    case 268:
      switch (pattern634 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10805; /* avx10_2_cvtps2iubsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10813; /* avx10_2_cvtps2iubsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32541 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10818; /* avx10_2_cvtps2iubsv4sf_mask */

        default:
          return -1;
        }

    case 273:
      switch (pattern634 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10821; /* avx10_2_cvttps2ibsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10829; /* avx10_2_cvttps2ibsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10836; /* avx10_2_cvttps2ibsv4sf_mask */

        default:
          return -1;
        }

    case 274:
      switch (pattern634 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 545 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10825; /* avx10_2_cvttps2iubsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10833; /* avx10_2_cvttps2iubsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32556 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10838; /* avx10_2_cvttps2iubsv4sf_mask */

        default:
          return -1;
        }

    case 275:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10841; /* avx10_2_vcvttps2dqsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10849; /* avx10_2_vcvttps2dqsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10861; /* avx10_2_vcvttpd2dqsv8df_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10856; /* avx10_2_vcvttps2dqsv4sf_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10869; /* avx10_2_vcvttpd2dqsv4df_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10876; /* avx10_2_vcvttpd2dqsv2df_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10881; /* avx10_2_vcvttpd2qqsv8df_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10901; /* avx10_2_vcvttps2qqsv8di_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10889; /* avx10_2_vcvttpd2qqsv4df_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10909; /* avx10_2_vcvttps2qqsv4di_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10896; /* avx10_2_vcvttpd2qqsv2df_mask */

        case 11:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10916; /* avx10_2_vcvttps2qqsv2di_mask */

        default:
          return -1;
        }

    case 276:
      switch (pattern635 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 385 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10845; /* avx10_2_vcvttps2udqsv16sf_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10853; /* avx10_2_vcvttps2udqsv8sf_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 386 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10865; /* avx10_2_vcvttpd2udqsv8df_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10858; /* avx10_2_vcvttps2udqsv4sf_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10873; /* avx10_2_vcvttpd2udqsv4df_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32575 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10878; /* avx10_2_vcvttpd2udqsv2df_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 450 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10885; /* avx10_2_vcvttpd2uqqsv8df_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 617 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10905; /* avx10_2_vcvttps2uqqsv8di_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10893; /* avx10_2_vcvttpd2uqqsv4df_mask */

        case 9:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10913; /* avx10_2_vcvttps2uqqsv4di_mask */

        case 10:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32586 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10898; /* avx10_2_vcvttpd2uqqsv2df_mask */

        case 11:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32597 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10918; /* avx10_2_vcvttps2uqqsv2di_mask */

        default:
          return -1;
        }

    case 279:
      return recog_126 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_169 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[2] = x5;
  res = recog_168 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x7) != CONST_INT)
    return -1;
  x8 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x8) != CONST_INT)
    return -1;
  x9 = XEXP (x2, 1);
  operands[2] = x9;
  x10 = XEXP (x2, 2);
  operands[3] = x10;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  switch (XWINT (x5, 0))
    {
    case 0L:
      if (XWINT (x6, 0) != 1L
          || XWINT (x7, 0) != 2L
          || XWINT (x8, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || pattern1547 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 12635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5349; /* vec_extract_lo_v8df_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || pattern1547 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 12635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5350; /* vec_extract_lo_v8di_mask */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[0], E_V4SImode)
              || pattern1547 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 12969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5373; /* vec_extract_lo_v8si_mask */

        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || pattern1547 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 12969 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5374; /* vec_extract_lo_v8sf_mask */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x6, 0) != 5L
          || XWINT (x7, 0) != 6L
          || XWINT (x8, 0) != 7L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DFmode:
          if (!nonimmediate_operand (operands[0], E_V4DFmode)
              || pattern1547 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 12672 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5353; /* vec_extract_hi_v8df_mask */

        case E_V4DImode:
          if (!nonimmediate_operand (operands[0], E_V4DImode)
              || pattern1547 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 12672 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5354; /* vec_extract_hi_v8di_mask */

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || pattern1547 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 13001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5377; /* vec_extract_hi_v8si_mask */

        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || pattern1547 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 13001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5378; /* vec_extract_hi_v8sf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_179 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2755; /* *avx512fp16_vmaddv8hf3 */

        case 1:
          if (!
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2757; /* *sse_vmaddv4sf3 */

        case 2:
          if (!(
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2759; /* *sse2_vmaddv2df3 */

        default:
          return -1;
        }

    case MINUS:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2756; /* *avx512fp16_vmsubv8hf3 */

        case 1:
          if (!
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2758; /* *sse_vmsubv4sf3 */

        case 2:
          if (!(
#line 2683 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2760; /* *sse2_vmsubv2df3 */

        default:
          return -1;
        }

    case MULT:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2821; /* *avx512fp16_vmmulv8hf3 */

        case 1:
          if (!
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2823; /* *sse_vmmulv4sf3 */

        case 2:
          if (!(
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2825; /* *sse2_vmmulv2df3 */

        default:
          return -1;
        }

    case DIV:
      switch (pattern307 (x2))
        {
        case 0:
          if (!(
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2822; /* *avx512fp16_vmdivv8hf3 */

        case 1:
          if (!
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2824; /* *sse_vmdivv4sf3 */

        case 2:
          if (!(
#line 2773 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2826; /* *sse2_vmdivv2df3 */

        default:
          return -1;
        }

    case UNSPEC:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 1:
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (XINT (x4, 1))
            {
            case 54:
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1111 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !
#line 2948 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 2884; /* *sse_vmrcpv4sf2 */

                case E_V8HFmode:
                  if (pattern1111 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                      || !
#line 2992 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 2893; /* *avx512fp16_vmrcpv8hf2 */

                default:
                  return -1;
                }

            case 55:
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1111 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                      || !
#line 3219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 2989; /* *sse_vmrsqrtv4sf2 */

                case E_V8HFmode:
                  if (pattern1111 (x2, 
E_V8HFmode, 
E_HFmode) != 0
                      || !
#line 3250 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 2992; /* *avx512fp16_vmrsqrtv8hf2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 2:
          switch (XINT (x4, 1))
            {
            case 63:
              switch (pattern771 (x2))
                {
                case 0:
                  if (!(
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 3127; /* *ieee_maxv8hf3 */

                case 1:
                  if (!
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 3129; /* *ieee_maxv4sf3 */

                case 2:
                  if (!(
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 3131; /* *ieee_maxv2df3 */

                default:
                  return -1;
                }

            case 62:
              switch (pattern771 (x2))
                {
                case 0:
                  if (!(
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 3128; /* *ieee_minv8hf3 */

                case 1:
                  if (!
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 3130; /* *ieee_minv4sf3 */

                case 2:
                  if (!(
#line 3419 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 3132; /* *ieee_minv2df3 */

                default:
                  return -1;
                }

            case 94:
              x6 = XVECEXP (x4, 0, 0);
              operands[2] = x6;
              x8 = XVECEXP (x4, 0, 1);
              operands[3] = x8;
              x7 = XEXP (x2, 1);
              operands[1] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V8HFmode:
                  if (pattern1213 (x2, 
E_V8HFmode, 
E_HFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_HFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && (
#line 14268 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return 7187; /* *avx512f_rndscalev8hf */
                  if (!nonimmediate_operand (operands[2], E_HFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !(
#line 25622 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                    return -1;
                  return 8978; /* *sse4_1_roundsh */

                case E_V4SFmode:
                  if (pattern1213 (x2, 
E_V4SFmode, 
E_SFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_SFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && 
#line 14268 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
                    return 7189; /* *avx512f_rndscalev4sf */
                  if (!nonimmediate_operand (operands[2], E_SFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !
#line 25622 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return -1;
                  return 8979; /* *sse4_1_roundss */

                case E_V2DFmode:
                  if (pattern1213 (x2, 
E_V2DFmode, 
E_DFmode) != 0)
                    return -1;
                  if (vector_operand (operands[2], E_DFmode)
                      && const_0_to_255_operand (operands[3], E_SImode)
                      && (
#line 14268 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 7191; /* *avx512f_rndscalev2df */
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !const_0_to_15_operand (operands[3], E_SImode)
                      || !(
#line 25622 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8980; /* *sse4_1_roundsd */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SQRT:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      operands[1] = x9;
      x7 = XEXP (x2, 1);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          if (pattern884 (x2, 
E_V8HFmode, 
E_HFmode) != 0
              || !(
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2952; /* *avx512fp16_vmsqrtv8hf2 */

        case E_V4SFmode:
          if (pattern884 (x2, 
E_V4SFmode, 
E_SFmode) != 0
              || !
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2956; /* *sse_vmsqrtv4sf2 */

        case E_V2DFmode:
          if (pattern884 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !(
#line 3101 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2960; /* *sse2_vmsqrtv2df2 */

        default:
          return -1;
        }

    case FLOAT:
      x5 = XEXP (x2, 2);
      if (GET_CODE (x5) != CONST_INT)
        return -1;
      x9 = XEXP (x4, 0);
      operands[2] = x9;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (XWINT (x5, 0))
        {
        case 1L:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              switch (pattern885 (x2, 
E_V8HFmode, 
E_HFmode))
                {
                case 0:
                  if (!
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4558; /* avx512fp16_vcvtsi2sh */

                case 1:
                  if (!(
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4562; /* avx512fp16_vcvtsi2shq */

                default:
                  return -1;
                }

            case E_V4SFmode:
              switch (pattern885 (x2, 
E_V4SFmode, 
E_SFmode))
                {
                case 0:
                  if (!
#line 8530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                    return -1;
                  return 4790; /* sse_cvtsi2ss */

                case 1:
                  if (!(
#line 8530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 4792; /* sse_cvtsi2ssq */

                default:
                  return -1;
                }

            case E_V2DFmode:
              switch (pattern885 (x2, 
E_V2DFmode, 
E_DFmode))
                {
                case 0:
                  if (!
#line 8992 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 4908; /* sse2_cvtsi2sd */

                case 1:
                  if (!
#line 9014 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
                    return -1;
                  return 4909; /* sse2_cvtsi2sdq */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 3L:
          if (pnum_clobbers == NULL
              || pattern772 (x2, 
E_V2SFmode, 
E_V4SFmode) != 0
              || !register_mmxmem_operand (operands[2], E_V2SImode)
              || !register_operand (operands[1], E_V4SFmode)
              || !
#line 8375 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
            return -1;
          *pnum_clobbers = 1;
          return 4786; /* sse_cvtpi2ps */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      operands[2] = x9;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          switch (pattern885 (x2, 
E_V8HFmode, 
E_HFmode))
            {
            case 0:
              if (!
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4560; /* avx512fp16_vcvtusi2sh */

            case 1:
              if (!(
#line 7851 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 4564; /* avx512fp16_vcvtusi2shq */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern885 (x2, 
E_V4SFmode, 
E_SFmode))
            {
            case 0:
              if (!
#line 8626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1))
                return -1;
              return 4808; /* cvtusi2ss32 */

            case 1:
              if (!
#line 8640 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT))
                return -1;
              return 4811; /* cvtusi2ss64 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern885 (x2, 
E_V2DFmode, 
E_DFmode))
            {
            case 0:
              if (!(
#line 8626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4810; /* cvtusi2sd32 */

            case 1:
              if (!(
#line 8640 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_64BIT) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4813; /* cvtusi2sd64 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_EXTEND:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      switch (GET_CODE (x9))
        {
        case VEC_SELECT:
          if (GET_MODE (x9) != E_HFmode)
            return -1;
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x12 = XEXP (x9, 0);
          operands[1] = x12;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern1460 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4762; /* avx512fp16_vcvtsh2sd */

            case E_V4SFmode:
              if (pattern1460 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 8311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4766; /* avx512fp16_vcvtsh2ss */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (pattern772 (x2, 
E_DFmode, 
E_V2DFmode) != 0)
                return -1;
              x7 = XEXP (x2, 1);
              if (!register_operand (x7, E_V2DFmode))
                return -1;
              switch (GET_MODE (x9))
                {
                case E_HFmode:
                  operands[1] = x9;
                  if (!memory_operand (operands[1], E_HFmode))
                    return -1;
                  operands[2] = x7;
                  if (!
#line 8325 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4770; /* avx512fp16_vcvtsh2sd_mem */

                case E_SFmode:
                  operands[2] = x9;
                  if (!nonimmediate_operand (operands[2], E_SFmode))
                    return -1;
                  operands[1] = x7;
                  if (!
#line 10081 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5177; /* *sse2_vd_cvtss2sd */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (pattern772 (x2, 
E_SFmode, 
E_V4SFmode) != 0)
                return -1;
              operands[1] = x9;
              if (!memory_operand (operands[1], E_HFmode))
                return -1;
              x7 = XEXP (x2, 1);
              operands[2] = x7;
              if (!register_operand (operands[2], E_V4SFmode)
                  || !
#line 8325 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4772; /* avx512fp16_vcvtsh2ss_mem */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x5 = XEXP (x2, 2);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x9 = XEXP (x4, 0);
      switch (GET_CODE (x9))
        {
        case VEC_SELECT:
          x10 = XEXP (x9, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern772 (x2, 
E_HFmode, 
E_V8HFmode) != 0)
            return -1;
          x12 = XEXP (x9, 0);
          operands[1] = x12;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          if (!register_operand (operands[2], E_V8HFmode))
            return -1;
          switch (GET_MODE (x9))
            {
            case E_DFmode:
              if (!register_operand (operands[1], E_V2DFmode)
                  || !
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4774; /* avx512fp16_vcvtsd2sh */

            case E_SFmode:
              if (!register_operand (operands[1], E_V4SFmode)
                  || !
#line 8341 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                return -1;
              return 4778; /* avx512fp16_vcvtss2sh */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          switch (GET_MODE (operands[0]))
            {
            case E_V8HFmode:
              if (!register_operand (operands[0], E_V8HFmode)
                  || GET_MODE (x2) != E_V8HFmode
                  || GET_MODE (x3) != E_V8HFmode
                  || GET_MODE (x4) != E_HFmode)
                return -1;
              operands[1] = x9;
              x7 = XEXP (x2, 1);
              operands[2] = x7;
              if (!register_operand (operands[2], E_V8HFmode))
                return -1;
              switch (GET_MODE (operands[1]))
                {
                case E_SFmode:
                  if (!memory_operand (operands[1], E_SFmode)
                      || !
#line 8355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4782; /* avx512fp16_vcvtss2sh_mem */

                case E_DFmode:
                  if (!memory_operand (operands[1], E_DFmode)
                      || !
#line 8355 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))
                    return -1;
                  return 4784; /* avx512fp16_vcvtsd2sh_mem */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[0], E_V4SFmode)
                  || GET_MODE (x2) != E_V4SFmode
                  || GET_MODE (x3) != E_V4SFmode)
                return -1;
              operands[2] = x9;
              x7 = XEXP (x2, 1);
              operands[1] = x7;
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V2SFmode:
                  if (!nonimmediate_operand (operands[2], E_V2DFmode)
                      || !
#line 10016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5168; /* sse2_cvtsd2ss */

                case E_SFmode:
                  if (!nonimmediate_operand (operands[2], E_DFmode)
                      || !
#line 10037 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                    return -1;
                  return 5172; /* *sse2_vd_cvtsd2ss */

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
      return recog_148 (x1, insn, pnum_clobbers);

    case VEC_SELECT:
      return recog_149 (x1, insn, pnum_clobbers);

    case ZERO_EXTEND:
      switch (pattern310 (x2))
        {
        case 0:
          if (!(
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 803 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5316; /* *vec_setv16si_0_zero_extendhi */

        case 1:
          if (!
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5317; /* *vec_setv8si_0_zero_extendhi */

        case 2:
          if (!
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5318; /* *vec_setv4si_0_zero_extendhi */

        case 3:
          if (!(
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 804 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5319; /* *vec_setv8di_0_zero_extendhi */

        case 4:
          if (!(
#line 12204 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 614 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 5331; /* *vec_setv8di_0_zero_extendsi */

        case 5:
          if (!
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5320; /* *vec_setv4di_0_zero_extendhi */

        case 6:
          if (!(
#line 12204 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 614 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 5332; /* *vec_setv4di_0_zero_extendsi */

        case 7:
          if (!
#line 12090 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()))
            return -1;
          return 5321; /* *vec_setv2di_0_zero_extendhi */

        case 8:
          if (!
#line 12204 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 5333; /* *vec_setv2di_0_zero_extendsi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_198 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (pattern133 (x2))
    {
    case 0:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 3000; /* *sminv32hf3_mask */

    case 1:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3008; /* *sminv16hf3_mask */

    case 2:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 3013; /* *sminv8hf3_mask */

    case 3:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 3020; /* *sminv16sf3_mask */

    case 4:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 3028; /* *sminv8sf3_mask */

    case 5:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1)))
        return -1;
      return 3033; /* *sminv4sf3_mask */

    case 6:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (64 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 3040; /* *sminv8df3_mask */

    case 7:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (32 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
        return -1;
      return 3048; /* *sminv4df3_mask */

    case 8:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 3305 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && (16 == 64 || TARGET_AVX512VL)
   && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
        return -1;
      return 3053; /* *sminv2df3_mask */

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7777; /* *avx512f_sminv16si3_mask */

    case 10:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7785; /* *avx512f_sminv8si3_mask */

    case 11:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7793; /* *avx512f_sminv4si3_mask */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
        return -1;
      return 7877; /* *sse4_1_sminv4si3_mask */

    case 12:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7801; /* *avx512f_sminv8di3_mask */

    case 13:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7809; /* *avx512f_sminv4di3_mask */

    case 14:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7817; /* *avx512f_sminv2di3_mask */

    case 15:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7825; /* *avx512bw_sminv64qi3_mask */

    case 16:
      if (nonimmediate_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7833; /* *avx512bw_sminv16qi3_mask */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17824 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && (16 == 64 || TARGET_AVX512VL)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))))
        return -1;
      return 7873; /* *sse4_1_sminv16qi3_mask */

    case 17:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7841; /* *avx512bw_sminv32qi3_mask */

    case 18:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7849; /* *avx512bw_sminv32hi3_mask */

    case 19:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7857; /* *avx512bw_sminv16hi3_mask */

    case 20:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7865; /* *avx512bw_sminv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10600; /* avx10_2_sminbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10604; /* avx10_2_sminbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10608; /* avx10_2_sminbf16_v8bf_mask */

    case 24:
      if (!(
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 3137; /* *avx512fp16_vmsminv8hf3 */

    case 25:
      if (!
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3145; /* *sse_vmsminv4sf3 */

    case 26:
      if (!(
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3153; /* *sse2_vmsminv2df3 */

    default:
      return -1;
    }
}

 int
recog_210 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4566; /* unspec_avx512fp16_fix_truncv8hi2 */

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
      return 4570; /* unspec_avx512fp16_fix_truncv16hi2 */

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
      return 4578; /* unspec_avx512fp16_fix_truncv32hi2 */

    case E_V8SImode:
      switch (pattern640 (x2))
        {
        case 0:
          if (!(
#line 7868 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4586; /* unspec_avx512fp16_fix_truncv8si2 */

        case 1:
          if (!
#line 8796 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
  && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 4891; /* unspec_fix_truncv8sfv8si2 */

        case 2:
          if (!
#line 9571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5028; /* unspec_fix_truncv8dfv8si2 */

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
          return 4594; /* unspec_avx512fp16_fix_truncv16si2 */

        case 1:
          if (!
#line 8776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 4875; /* unspec_fix_truncv16sfv16si2 */

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
          return 4602; /* unspec_avx512fp16_fix_truncv8di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5061; /* unspec_fix_truncv8dfv8di2 */

        case 2:
          if (!(
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5121; /* unspec_fix_truncv8sfv8di2 */

        default:
          return -1;
        }

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x2) != E_V4SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8HFmode:
          if (!register_operand (operands[1], E_V8HFmode)
              || !
#line 7906 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1))
            return -1;
          return 4654; /* unspec_avx512fp16_fix_truncv4si2 */

        case E_V4SFmode:
          if (!vector_operand (operands[1], E_V4SFmode)
              || !
#line 8816 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 4897; /* unspec_fix_truncv4sfv4si2 */

        case E_V4DFmode:
          if (!vector_operand (operands[1], E_V4DFmode)
              || !
#line 9661 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1
   && (!false || TARGET_AVX10_2_256)))
            return -1;
          return 5049; /* unspec_fix_truncv4dfv4si2 */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !
#line 9945 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
            return -1;
          return 5163; /* unspec_sse2_cvttpd2dq */

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
          return 4658; /* unspec_avx512fp16_fix_truncv4di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5069; /* unspec_fix_truncv4dfv4di2 */

        case 2:
          if (!(
#line 9745 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5129; /* unspec_fix_truncv4sfv4di2 */

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
          return 4682; /* unspec_avx512fp16_fix_truncv2di2 */

        case 1:
          if (!(
#line 9702 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5077; /* unspec_fix_truncv2dfv2di2 */

        case 2:
          if (!
#line 9766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
            return -1;
          return 5145; /* unspec_avx512dq_fix_truncv2sfv2di2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_224 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (XVECLEN (x4, 0))
    {
    case 2:
      return recog_220 (x1, insn, pnum_clobbers);

    case 3:
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      switch (XINT (x4, 1))
        {
        case 192:
          x7 = XEXP (x3, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          switch (pattern1407 (x2))
            {
            case 0:
              if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V8HFmode))) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3227; /* reducesv8hf_round */

            case 1:
              if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V4SFmode)))))
                return -1;
              return 3231; /* reducesv4sf_round */

            case 2:
              if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4040 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ || (VALID_AVX512FP16_REG_MODE (V2DFmode))) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3235; /* reducesv2df_round */

            default:
              return -1;
            }

        case 133:
          return recog_218 (x1, insn, pnum_clobbers);

        case 217:
          switch (pattern1128 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
              return 4331; /* fma_fmaddc_v32hf_maskz_1_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
              return 4339; /* fma_fmaddc_v16hf_maskz_1_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7298 "../../src/gcc/config/i386/sse.md"
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
              return 4373; /* avx512bw_fmaddc_v32hf_mask_round */

            case 3:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7298 "../../src/gcc/config/i386/sse.md"
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
              return 4377; /* avx512vl_fmaddc_v16hf_mask_round */

            case 4:
              if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4404; /* avx512fp16_fma_fmaddcsh_v8hf_round */

            default:
              return -1;
            }

        case 219:
          switch (pattern1128 (x2))
            {
            case 0:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
              return 4335; /* fma_fcmaddc_v32hf_maskz_1_round */

            case 1:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
              return 4343; /* fma_fcmaddc_v16hf_maskz_1_round */

            case 2:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7298 "../../src/gcc/config/i386/sse.md"
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
              return 4375; /* avx512bw_fcmaddc_v32hf_mask_round */

            case 3:
              if (!(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7298 "../../src/gcc/config/i386/sse.md"
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
              return 4379; /* avx512vl_fcmaddc_v16hf_mask_round */

            case 4:
              if (!(
#line 460 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7487 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
                return -1;
              return 4408; /* avx512fp16_fma_fcmaddcsh_v8hf_round */

            default:
              return -1;
            }

        case 194:
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          x9 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x9, E_SImode))
            return -1;
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              x10 = XEXP (x3, 1);
              operands[4] = x10;
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1647 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 9966; /* avx512dq_rangepv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1647 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 9970; /* avx512dq_rangepv8sf_mask_round */

                case E_V8DFmode:
                  if (pattern1647 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 9976; /* avx512dq_rangepv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1647 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 9980; /* avx512dq_rangepv4df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[4] = x9;
              x10 = XEXP (x3, 1);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1405 (x2, 
E_V4SFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
                    return -1;
                  return 9985; /* avx512dq_rangesv4sf_round */

                case E_V2DFmode:
                  if (pattern1405 (x2, 
E_V2DFmode) != 0
                      || !(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29848 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 9989; /* avx512dq_rangesv2df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 166:
          x7 = XEXP (x3, 2);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_15_operand (operands[3], E_SImode))
            return -1;
          switch (pattern1407 (x2))
            {
            case 0:
              if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 10047; /* avx512f_vgetmantv8hf_round */

            case 1:
              if (!
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 10051; /* avx512f_vgetmantv4sf_round */

            case 2:
              if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29916 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 10055; /* avx512f_vgetmantv2df_round */

            default:
              return -1;
            }

        case 278:
          x8 = XVECEXP (x4, 0, 2);
          operands[3] = x8;
          if (!const_0_to_255_operand (operands[3], E_SImode))
            return -1;
          x9 = XVECEXP (x2, 0, 1);
          if (!const48_operand (x9, E_SImode))
            return -1;
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              x10 = XEXP (x3, 1);
              operands[4] = x10;
              operands[6] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1647 (x2, 
E_V32HFmode, 
E_SImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 531 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10944; /* avx10_2_minmaxpv32hf_mask_round */

                case E_V16HFmode:
                  if (pattern1647 (x2, 
E_V16HFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10948; /* avx10_2_minmaxpv16hf_mask_round */

                case E_V8HFmode:
                  if (pattern1647 (x2, 
E_V8HFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10952; /* avx10_2_minmaxpv8hf_mask_round */

                case E_V16SFmode:
                  if (pattern1647 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10956; /* avx10_2_minmaxpv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1647 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10960; /* avx10_2_minmaxpv8sf_mask_round */

                case E_V4SFmode:
                  if (pattern1647 (x2, 
E_V4SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10964; /* avx10_2_minmaxpv4sf_mask_round */

                case E_V8DFmode:
                  if (pattern1647 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))))
                    return -1;
                  return 10968; /* avx10_2_minmaxpv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1647 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10972; /* avx10_2_minmaxpv4df_mask_round */

                case E_V2DFmode:
                  if (pattern1647 (x2, 
E_V2DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))))
                    return -1;
                  return 10976; /* avx10_2_minmaxpv2df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[4] = x9;
              switch (pattern1406 (x2))
                {
                case 0:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 10979; /* avx10_2_minmaxsv8hf_round */

                case 1:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
                    return -1;
                  return 10983; /* avx10_2_minmaxsv4sf_round */

                case 2:
                  if (!(
#line 486 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 10987; /* avx10_2_minmaxsv2df_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      return recog_219 (x1, insn, pnum_clobbers);

    case 4:
      if (XINT (x4, 1) != 163)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      operands[1] = x5;
      x6 = XVECEXP (x4, 0, 1);
      operands[2] = x6;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      x11 = XVECEXP (x4, 0, 3);
      operands[4] = x11;
      if (!const_0_to_255_operand (operands[4], E_SImode))
        return -1;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x10 = XEXP (x3, 1);
      switch (GET_CODE (x10))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[5] = x10;
          x7 = XEXP (x3, 2);
          operands[6] = x7;
          operands[7] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1671 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
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
              return 7106; /* avx512f_fixupimmv16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1671 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
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
              return 7110; /* avx512vl_fixupimmv8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1671 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
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
              return 7116; /* avx512f_fixupimmv8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1671 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
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
              return 7120; /* avx512vl_fixupimmv4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
          x7 = XEXP (x3, 2);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
              operands[5] = x7;
              operands[6] = x9;
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1698 (x2, 
E_V16SImode, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14175 "../../src/gcc/config/i386/sse.md"
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
                  return 7124; /* avx512f_fixupimmv16sf_mask_round */

                case E_V8SFmode:
                  if (pattern1698 (x2, 
E_V8SImode, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14175 "../../src/gcc/config/i386/sse.md"
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
                  return 7126; /* avx512vl_fixupimmv8sf_mask_round */

                case E_V8DFmode:
                  if (pattern1698 (x2, 
E_V8DImode, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14175 "../../src/gcc/config/i386/sse.md"
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
                  return 7129; /* avx512f_fixupimmv8df_mask_round */

                case E_V4DFmode:
                  if (pattern1698 (x2, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14175 "../../src/gcc/config/i386/sse.md"
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
                  return 7131; /* avx512vl_fixupimmv4df_mask_round */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x7, 0) != 1L)
                return -1;
              operands[5] = x9;
              if (!rtx_equal_p (x10, operands[2]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1699 (x2, 
E_V4SImode, 
E_V4SFmode) != 0
                      || !
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                    return -1;
                  return 7134; /* avx512f_sfixupimmv4sf_round */

                case E_V2DFmode:
                  if (pattern1699 (x2, 
E_V2DImode, 
E_V2DFmode) != 0
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 14207 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 7138; /* avx512f_sfixupimmv2df_round */

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
recog_231 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case VEC_MERGE:
      if (GET_MODE (x5) != E_V4HFmode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != VEC_SELECT
          || GET_MODE (x6) != E_V4HFmode)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL
          || XVECLEN (x7, 0) != 4)
        return -1;
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
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || !register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x2) != E_V8HFmode
          || GET_MODE (x4) != E_V8HFmode)
        return -1;
      x12 = XEXP (x5, 0);
      if (GET_MODE (x12) != E_V4HFmode)
        return -1;
      x13 = XEXP (x6, 0);
      operands[2] = x13;
      if (!nonimm_or_0_operand (operands[2], E_V8HFmode))
        return -1;
      x14 = XEXP (x5, 2);
      operands[3] = x14;
      if (!register_operand (operands[3], E_QImode))
        return -1;
      x15 = XEXP (x4, 1);
      operands[4] = x15;
      if (!const0_operand (operands[4], E_V4HFmode))
        return -1;
      operands[5] = x3;
      switch (GET_CODE (x12))
        {
        case FLOAT:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DImode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7720 "../../src/gcc/config/i386/sse.md"
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
          return 4533; /* avx512fp16_vcvtqq2ph_v4di_mask_round_1 */

        case UNSIGNED_FLOAT:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DImode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 7720 "../../src/gcc/config/i386/sse.md"
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
          return 4535; /* avx512fp16_vcvtuqq2ph_v4di_mask_round_1 */

        case FLOAT_TRUNCATE:
          x16 = XEXP (x12, 0);
          operands[1] = x16;
          if (!register_operand (operands[1], E_V4DFmode)
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8204 "../../src/gcc/config/i386/sse.md"
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
          return 4755; /* avx512fp16_vcvtpd2ph_v4df_mask_round_1 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      x15 = XEXP (x4, 1);
      if (GET_CODE (x15) != FLOAT_TRUNCATE)
        return -1;
      x12 = XEXP (x5, 0);
      operands[2] = x12;
      x17 = XEXP (x15, 0);
      operands[1] = x17;
      operands[3] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (pattern1312 (x2, 
E_V16SFmode, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX10_2_512))))
            return -1;
          return 10441; /* avx10_2_cvt2ps2phx_v32hf_round */

        case E_V16HFmode:
          if (pattern1312 (x2, 
E_V8SFmode, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
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
								       || V16HFmode == V16HFmode))))))
            return -1;
          return 10445; /* avx10_2_cvt2ps2phx_v16hf_round */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_234 (rtx x1 ATTRIBUTE_UNUSED,
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
  operands[0] = x4;
  x5 = XVECEXP (x3, 0, 1);
  operands[1] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || !vector_operand (operands[1], E_V16QImode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8942; /* *sse4_1_ptestv16qi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || !vector_operand (operands[1], E_V8HImode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8943; /* *sse4_1_ptestv8hi */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8944; /* *sse4_1_ptestv4si */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || !vector_operand (operands[1], E_V2DImode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8945; /* *sse4_1_ptestv2di */

    case E_V1TImode:
      if (!register_operand (operands[0], E_V1TImode)
          || !vector_operand (operands[1], E_V1TImode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8946; /* *sse4_1_ptestv1ti */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !vector_operand (operands[1], E_V4SFmode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8947; /* *sse4_1_ptestv4sf */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)))
        return -1;
      return 8948; /* *sse4_1_ptestv2df */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || !vector_operand (operands[1], E_V32QImode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8949; /* *avx_ptestv32qi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || !vector_operand (operands[1], E_V16HImode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 605 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8950; /* *avx_ptestv16hi */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || !vector_operand (operands[1], E_V8SImode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8951; /* *avx_ptestv8si */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || !vector_operand (operands[1], E_V4DImode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8952; /* *avx_ptestv4di */

    case E_V2TImode:
      if (!register_operand (operands[0], E_V2TImode)
          || !vector_operand (operands[1], E_V2TImode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 606 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8953; /* *avx_ptestv2ti */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !vector_operand (operands[1], E_V8SFmode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8954; /* *avx_ptestv8sf */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !vector_operand (operands[1], E_V4DFmode)
          || !(
#line 25328 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_match_ptest_ccmode (insn)) && 
#line 607 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8955; /* *avx_ptestv4df */

    default:
      return -1;
    }
}

 int
recog_236 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8SImode:
      if (pattern783 (x3, 
E_V8SImode) != 0
          || !
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9118; /* avx2_permvarv8si */

    case E_V8SFmode:
      if (pattern784 (x3, 
E_V8SImode, 
E_V8SFmode) != 0
          || !
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9120; /* avx2_permvarv8sf */

    case E_V16SImode:
      if (pattern783 (x3, 
E_V16SImode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 997 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9122; /* avx512f_permvarv16si */

    case E_V16SFmode:
      if (pattern784 (x3, 
E_V16SImode, 
E_V16SFmode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 998 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9124; /* avx512f_permvarv16sf */

    case E_V8DImode:
      if (pattern783 (x3, 
E_V8DImode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 999 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9126; /* avx512f_permvarv8di */

    case E_V8DFmode:
      if (pattern784 (x3, 
E_V8DImode, 
E_V8DFmode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1000 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9128; /* avx512f_permvarv8df */

    case E_V4DImode:
      if (pattern783 (x3, 
E_V4DImode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9130; /* avx2_permvarv4di */

    case E_V4DFmode:
      if (pattern784 (x3, 
E_V4DImode, 
E_V4DFmode) != 0
          || !(
#line 27327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 1001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9132; /* avx2_permvarv4df */

    case E_V64QImode:
      if (pattern783 (x3, 
E_V64QImode) != 0
          || !(
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9134; /* avx512bw_permvarv64qi */

    case E_V16QImode:
      if (pattern783 (x3, 
E_V16QImode) != 0
          || !(
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9136; /* avx512vl_permvarv16qi */

    case E_V32QImode:
      if (pattern783 (x3, 
E_V32QImode) != 0
          || !(
#line 27346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && 1) && 
#line 327 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9138; /* avx512vl_permvarv32qi */

    case E_V8HImode:
      if (pattern783 (x3, 
E_V8HImode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9140; /* avx512vl_permvarv8hi */

    case E_V16HImode:
      if (pattern783 (x3, 
E_V16HImode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9142; /* avx512vl_permvarv16hi */

    case E_V32HImode:
      if (pattern783 (x3, 
E_V32HImode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 688 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9144; /* avx512bw_permvarv32hi */

    case E_V8HFmode:
      if (pattern784 (x3, 
E_V8HImode, 
E_V8HFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9146; /* avx512fp16_permvarv8hf */

    case E_V16HFmode:
      if (pattern784 (x3, 
E_V16HImode, 
E_V16HFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9148; /* avx512vl_permvarv16hf */

    case E_V32HFmode:
      if (pattern784 (x3, 
E_V32HImode, 
E_V32HFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 689 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9150; /* avx512bw_permvarv32hf */

    case E_V8BFmode:
      if (pattern784 (x3, 
E_V8HImode, 
E_V8BFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9152; /* avx512vl_permvarv8bf */

    case E_V16BFmode:
      if (pattern784 (x3, 
E_V16HImode, 
E_V16BFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9154; /* avx512vl_permvarv16bf */

    case E_V32BFmode:
      if (pattern784 (x3, 
E_V32HImode, 
E_V32BFmode) != 0
          || !(
#line 27358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && 1) && 
#line 690 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9156; /* avx512bw_permvarv32bf */

    default:
      return -1;
    }
}

 int
recog_240 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern61 (x3, 
E_V32HFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 5433; /* avx512bw_scalefv32hf */

    case E_V16HFmode:
      if (pattern61 (x3, 
E_V16HFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 5437; /* avx512vl_scalefv16hf */

    case E_V8HFmode:
      if (pattern61 (x3, 
E_V8HFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 5441; /* avx512fp16_scalefv8hf */

    case E_V16SFmode:
      if (pattern61 (x3, 
E_V16SFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5443; /* avx512f_scalefv16sf */

    case E_V8SFmode:
      if (pattern61 (x3, 
E_V8SFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5447; /* avx512vl_scalefv8sf */

    case E_V4SFmode:
      if (pattern61 (x3, 
E_V4SFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5451; /* avx512vl_scalefv4sf */

    case E_V8DFmode:
      if (pattern61 (x3, 
E_V8DFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5453; /* avx512f_scalefv8df */

    case E_V4DFmode:
      if (pattern61 (x3, 
E_V4DFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5457; /* avx512vl_scalefv4df */

    case E_V2DFmode:
      if (pattern61 (x3, 
E_V2DFmode) != 0
          || !(
#line 13636 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5461; /* avx512vl_scalefv2df */

    default:
      return -1;
    }
}

 int
recog_244 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != E_V16QImode)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_V16QImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (GET_MODE (x2) != E_V16QImode)
    return -1;
  switch (pattern1067 (x2, 
E_V16QImode))
    {
    case 0:
      if (!(
#line 22474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 8583; /* *sse2_maskmovdqu */

    case 1:
      if (!(
#line 22474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 8584; /* *sse2_maskmovdqu */

    default:
      return -1;
    }
}

 int
recog_246 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_CODE (x4))
        {
        case MEM:
          res = recog_244 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case REG:
        case SUBREG:
          operands[2] = x4;
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          x6 = XVECEXP (x2, 0, 1);
          if (rtx_equal_p (x6, operands[0]))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V16SImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16SImode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9505; /* avx512f_storev16si_mask */
                  break;

                case E_V8DImode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8DImode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9508; /* avx512f_storev8di_mask */
                  break;

                case E_V16SFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16SFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9511; /* avx512f_storev16sf_mask */
                  break;

                case E_V8SFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8SFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9512; /* avx512vl_storev8sf_mask */
                  break;

                case E_V4SFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V4SFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9513; /* avx512vl_storev4sf_mask */
                  break;

                case E_V8DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8DFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9514; /* avx512f_storev8df_mask */
                  break;

                case E_V4DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V4DFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9515; /* avx512vl_storev4df_mask */
                  break;

                case E_V2DFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V2DFmode) == 0
                      && (
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9516; /* avx512vl_storev2df_mask */
                  break;

                case E_V64QImode:
                  if (pattern916 (x2, 
E_DImode, 
E_V64QImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9517; /* avx512bw_storev64qi_mask */
                  break;

                case E_V16QImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16QImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9518; /* avx512vl_storev16qi_mask */
                  break;

                case E_V32QImode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32QImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9519; /* avx512vl_storev32qi_mask */
                  break;

                case E_V32HImode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32HImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9520; /* avx512bw_storev32hi_mask */
                  break;

                case E_V16HImode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16HImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9521; /* avx512vl_storev16hi_mask */
                  break;

                case E_V8HImode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8HImode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9522; /* avx512vl_storev8hi_mask */
                  break;

                case E_V32HFmode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32HFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9523; /* avx512bw_storev32hf_mask */
                  break;

                case E_V16HFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16HFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9524; /* avx512vl_storev16hf_mask */
                  break;

                case E_V8HFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8HFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9525; /* avx512fp16_storev8hf_mask */
                  break;

                case E_V32BFmode:
                  if (pattern916 (x2, 
E_SImode, 
E_V32BFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9526; /* avx512bw_storev32bf_mask */
                  break;

                case E_V16BFmode:
                  if (pattern916 (x2, 
E_HImode, 
E_V16BFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9527; /* avx512vl_storev16bf_mask */
                  break;

                case E_V8BFmode:
                  if (pattern916 (x2, 
E_QImode, 
E_V8BFmode) == 0
                      && (
#line 28775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9528; /* avx512vl_storev8bf_mask */
                  break;

                default:
                  break;
                }
            }
          break;

        default:
          break;
        }
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern788 (x2, 
E_V4SFmode, 
E_V4SImode) != 0
              || !
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9497; /* avx_maskstoreps */

        case E_V2DFmode:
          if (pattern788 (x2, 
E_V2DFmode, 
E_V2DImode) != 0
              || !
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9498; /* avx_maskstorepd */

        case E_V4DImode:
          if (!memory_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_V4DImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V4DImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9499; /* avx2_maskstoreq256 */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9509; /* avx512vl_storev4di_mask */

        case E_V2DImode:
          if (!memory_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[1], E_V2DImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V2DImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9500; /* avx2_maskstoreq */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9510; /* avx512vl_storev2di_mask */

        case E_V8SFmode:
          if (pattern788 (x2, 
E_V8SFmode, 
E_V8SImode) != 0
              || !
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9501; /* avx_maskstoreps256 */

        case E_V4DFmode:
          if (pattern788 (x2, 
E_V4DFmode, 
E_V4DImode) != 0
              || !
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9502; /* avx_maskstorepd256 */

        case E_V8SImode:
          if (!memory_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_V8SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V8SImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9503; /* avx2_maskstored256 */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9506; /* avx512vl_storev8si_mask */

        case E_V4SImode:
          if (!memory_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_V4SImode))
            return -1;
          x6 = XVECEXP (x2, 0, 1);
          operands[2] = x6;
          if (register_operand (operands[2], E_V4SImode)
              && rtx_equal_p (x4, operands[0])
              && 
#line 28655 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9504; /* avx2_maskstored */
          operands[2] = x4;
          if (!register_operand (operands[2], E_QImode)
              || !rtx_equal_p (x6, operands[0])
              || !(
#line 28746 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9507; /* avx512vl_storev4si_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[2] = x4;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern790 (x2))
        {
        case 0:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9529; /* *avx512bw_storev64qi_mask_1 */

        case 1:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9530; /* *avx512vl_storev32qi_mask_1 */

        case 2:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9531; /* *avx512vl_storev16qi_mask_1 */

        case 3:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9532; /* *avx512bw_storev32hi_mask_1 */

        case 4:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9533; /* *avx512vl_storev16hi_mask_1 */

        case 5:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9534; /* *avx512vl_storev8hi_mask_1 */

        case 6:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9535; /* *avx512f_storev16si_mask_1 */

        case 7:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9536; /* *avx512vl_storev8si_mask_1 */

        case 8:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9537; /* *avx512vl_storev4si_mask_1 */

        case 9:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9538; /* *avx512f_storev8di_mask_1 */

        case 10:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9539; /* *avx512vl_storev4di_mask_1 */

        case 11:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9540; /* *avx512vl_storev2di_mask_1 */

        case 12:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9541; /* *avx512bw_storev32hf_mask_1 */

        case 13:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9542; /* *avx512vl_storev16hf_mask_1 */

        case 14:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9543; /* *avx512fp16_storev8hf_mask_1 */

        case 15:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9544; /* *avx512bw_storev32bf_mask_1 */

        case 16:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9545; /* *avx512vl_storev16bf_mask_1 */

        case 17:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9546; /* *avx512vl_storev8bf_mask_1 */

        case 18:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9547; /* *avx512f_storev16sf_mask_1 */

        case 19:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9548; /* *avx512vl_storev8sf_mask_1 */

        case 20:
          if (!
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()))
            return -1;
          return 9549; /* *avx512vl_storev4sf_mask_1 */

        case 21:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 9550; /* *avx512f_storev8df_mask_1 */

        case 22:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 9551; /* *avx512vl_storev4df_mask_1 */

        case 23:
          if (!(
#line 28789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 9552; /* *avx512vl_storev2df_mask_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_252 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9891; /* avx512f_compressv16si_mask */

    case E_V16SFmode:
      if (pattern915 (x3, 
E_HImode, 
E_V16SFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9892; /* avx512f_compressv16sf_mask */

    case E_V8DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9893; /* avx512f_compressv8di_mask */

    case E_V8DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V8DFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9894; /* avx512f_compressv8df_mask */

    case E_V8SImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9895; /* avx512vl_compressv8si_mask */

    case E_V8SFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V8SFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9896; /* avx512vl_compressv8sf_mask */

    case E_V4DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9897; /* avx512vl_compressv4di_mask */

    case E_V4DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V4DFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9898; /* avx512vl_compressv4df_mask */

    case E_V4SImode:
      if (pattern915 (x3, 
E_QImode, 
E_V4SImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9899; /* avx512vl_compressv4si_mask */

    case E_V4SFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V4SFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9900; /* avx512vl_compressv4sf_mask */

    case E_V2DImode:
      if (pattern915 (x3, 
E_QImode, 
E_V2DImode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9901; /* avx512vl_compressv2di_mask */

    case E_V2DFmode:
      if (pattern915 (x3, 
E_QImode, 
E_V2DFmode) != 0
          || !(
#line 29667 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9902; /* avx512vl_compressv2df_mask */

    case E_V64QImode:
      if (pattern915 (x3, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9903; /* compressv64qi_mask */

    case E_V16QImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9904; /* compressv16qi_mask */

    case E_V32QImode:
      if (pattern915 (x3, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9905; /* compressv32qi_mask */

    case E_V32HImode:
      if (pattern915 (x3, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9906; /* compressv32hi_mask */

    case E_V16HImode:
      if (pattern915 (x3, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9907; /* compressv16hi_mask */

    case E_V8HImode:
      if (pattern915 (x3, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 29680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9908; /* compressv8hi_mask */

    default:
      return -1;
    }
}

 int
recog_258 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern174 (x1))
    {
    case 0:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10222; /* vpshrdv_v32hi */

    case 1:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10223; /* vpshrdv_v16si */

    case 2:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10224; /* vpshrdv_v8di */

    case 3:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10225; /* vpshrdv_v16hi */

    case 4:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10226; /* vpshrdv_v8si */

    case 5:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10227; /* vpshrdv_v4di */

    case 6:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10228; /* vpshrdv_v8hi */

    case 7:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10229; /* vpshrdv_v4si */

    case 8:
      if (!(
#line 30431 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10230; /* vpshrdv_v2di */

    default:
      return -1;
    }
}

 int
recog_263 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (pattern666 (x3))
    {
    case 0:
      if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 4328; /* fma_fmaddc_v32hf */
      break;

    case 1:
      if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 4336; /* fma_fmaddc_v16hf */
      break;

    case 2:
      if ((
#line 7160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1 && 1) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 4344; /* fma_fmaddc_v8hf */
      break;

    default:
      break;
    }
  if (GET_CODE (x5) != SUBREG
      || maybe_ne (SUBREG_BYTE (x5), 0))
    return -1;
  switch (pattern592 (x3))
    {
    case 0:
      if (!(
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 4366; /* fma_v32hf_fmaddc_bcst */

    case 1:
      if (!(
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4367; /* fma_v16hf_fmaddc_bcst */

    case 2:
      if (!(
#line 7239 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 4368; /* fma_v8hf_fmaddc_bcst */

    default:
      return -1;
    }
}

 int
recog_268 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern795 (x2, 
E_V2SFmode, 
E_V4SFmode) == 0
              && 
#line 11845 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5293; /* *vec_concatv4sf */
          break;

        case E_V8HFmode:
          if (pattern795 (x2, 
E_V4HFmode, 
E_V8HFmode) == 0
              && 
#line 11845 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5294; /* *vec_concatv8hf */
          break;

        case E_V8BFmode:
          if (pattern795 (x2, 
E_V4BFmode, 
E_V8BFmode) == 0
              && 
#line 11845 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 5295; /* *vec_concatv8bf */
          break;

        case E_V16QImode:
          if (pattern795 (x2, 
E_V8QImode, 
E_V16QImode) == 0
              && 
#line 21585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8485; /* *vec_concatv16qi */
          break;

        case E_V8HImode:
          if (pattern795 (x2, 
E_V4HImode, 
E_V8HImode) == 0
              && 
#line 21585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8486; /* *vec_concatv8hi */
          break;

        case E_V4SImode:
          if (pattern795 (x2, 
E_V2SImode, 
E_V4SImode) == 0
              && 
#line 21585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8487; /* *vec_concatv4si */
          break;

        case E_V2DImode:
          if (pattern795 (x2, 
E_DImode, 
E_V2DImode) == 0
              && 
#line 21673 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return 8493; /* vec_concatv2di */
          break;

        case E_V32QImode:
          if (register_operand (operands[0], E_V32QImode)
              && GET_MODE (x2) == E_V32QImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V16QImode)
                  && 
#line 27899 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9296; /* avx2_vbroadcasti128_v32qi */
              if (nonimmediate_operand (operands[1], E_V16QImode)
                  && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9315; /* avx_vbroadcastf128_v32qi */
            }
          break;

        case E_V16HImode:
          if (register_operand (operands[0], E_V16HImode)
              && GET_MODE (x2) == E_V16HImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V8HImode)
                  && 
#line 27899 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9297; /* avx2_vbroadcasti128_v16hi */
              if (nonimmediate_operand (operands[1], E_V8HImode)
                  && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9316; /* avx_vbroadcastf128_v16hi */
            }
          break;

        case E_V8SImode:
          if (register_operand (operands[0], E_V8SImode)
              && GET_MODE (x2) == E_V8SImode
              && rtx_equal_p (x4, operands[1]))
            {
              if (memory_operand (operands[1], E_V4SImode)
                  && 
#line 27899 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
                return 9298; /* avx2_vbroadcasti128_v8si */
              if (nonimmediate_operand (operands[1], E_V4SImode)
                  && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
                return 9317; /* avx_vbroadcastf128_v8si */
            }
          break;

        case E_V4DImode:
          if (register_operand (operands[0], E_V4DImode)
              && GET_MODE (x2) == E_V4DImode
              && memory_operand (operands[1], E_V2DImode)
              && rtx_equal_p (x4, operands[1])
              && 
#line 27899 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return 9299; /* avx2_vbroadcasti128_v4di */
          break;

        case E_V8SFmode:
          if (pattern796 (x2, 
E_V4SFmode, 
E_V8SFmode) == 0
              && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9319; /* avx_vbroadcastf128_v8sf */
          break;

        case E_V4DFmode:
          if (pattern796 (x2, 
E_V2DFmode, 
E_V4DFmode) == 0
              && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9320; /* avx_vbroadcastf128_v4df */
          break;

        case E_V16HFmode:
          if (pattern796 (x2, 
E_V8HFmode, 
E_V16HFmode) == 0
              && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9321; /* avx_vbroadcastf128_v16hf */
          break;

        case E_V16BFmode:
          if (pattern796 (x2, 
E_V8BFmode, 
E_V16BFmode) == 0
              && 
#line 28013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return 9322; /* avx_vbroadcastf128_v16bf */
          break;

        default:
          break;
        }
      break;

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern923 (x2, 
E_V2SFmode, 
E_V4SFmode) == 0
              && 
#line 11861 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5296; /* *vec_concatv4sf_0 */
          break;

        case E_V8HFmode:
          if (pattern923 (x2, 
E_V4HFmode, 
E_V8HFmode) == 0
              && 
#line 11861 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5297; /* *vec_concatv8hf_0 */
          break;

        case E_V8BFmode:
          if (pattern923 (x2, 
E_V4BFmode, 
E_V8BFmode) == 0
              && 
#line 11861 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 5298; /* *vec_concatv8bf_0 */
          break;

        case E_V16QImode:
          if (pattern923 (x2, 
E_V8QImode, 
E_V16QImode) == 0
              && 
#line 21656 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8490; /* *vec_concatv16qi_0 */
          break;

        case E_V8HImode:
          if (pattern923 (x2, 
E_V4HImode, 
E_V8HImode) == 0
              && 
#line 21656 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8491; /* *vec_concatv8hi_0 */
          break;

        case E_V4SImode:
          if (pattern923 (x2, 
E_V2SImode, 
E_V4SImode) == 0
              && 
#line 21656 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8492; /* *vec_concatv4si_0 */
          break;

        case E_V2DImode:
          if (pattern923 (x2, 
E_DImode, 
E_V2DImode) == 0
              && 
#line 21734 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return 8494; /* *vec_concatv2di_0 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[2] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V2DFmode:
      if (pattern797 (x2, 
E_DFmode, 
E_V2DFmode) != 0
          || !
#line 14922 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7224; /* vec_concatv2df */

    case E_V32QImode:
      if (pattern797 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16QImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9610; /* avx_vec_concatv32qi */

    case E_V16HImode:
      if (pattern797 (x2, 
E_V8HImode, 
E_V16HImode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9611; /* avx_vec_concatv16hi */

    case E_V16HFmode:
      if (pattern797 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8HFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9612; /* avx_vec_concatv16hf */

    case E_V16BFmode:
      if (pattern797 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8BFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9613; /* avx_vec_concatv16bf */

    case E_V8SImode:
      if (pattern797 (x2, 
E_V4SImode, 
E_V8SImode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SImode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9614; /* avx_vec_concatv8si */

    case E_V8SFmode:
      if (pattern797 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4SFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9616; /* avx_vec_concatv8sf */

    case E_V4DFmode:
      if (pattern797 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
          || !
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V2DFmode)
       || !MEM_P (operands[1]))))
        return -1;
      return 9617; /* avx_vec_concatv4df */

    case E_V64QImode:
      if (pattern797 (x2, 
E_V32QImode, 
E_V64QImode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V32QImode)
       || !MEM_P (operands[1]))) && 
#line 363 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9618; /* avx_vec_concatv64qi */

    case E_V32HImode:
      if (pattern797 (x2, 
E_V16HImode, 
E_V32HImode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HImode)
       || !MEM_P (operands[1]))) && 
#line 364 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9619; /* avx_vec_concatv32hi */

    case E_V32HFmode:
      if (pattern797 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16HFmode)
       || !MEM_P (operands[1]))) && 
#line 365 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9620; /* avx_vec_concatv32hf */

    case E_V32BFmode:
      if (pattern797 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V16BFmode)
       || !MEM_P (operands[1]))) && 
#line 366 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9621; /* avx_vec_concatv32bf */

    case E_V16SImode:
      if (pattern797 (x2, 
E_V8SImode, 
E_V16SImode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SImode)
       || !MEM_P (operands[1]))) && 
#line 367 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9622; /* avx_vec_concatv16si */

    case E_V8DImode:
      if (pattern797 (x2, 
E_V4DImode, 
E_V8DImode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DImode)
       || !MEM_P (operands[1]))) && 
#line 368 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9623; /* avx_vec_concatv8di */

    case E_V16SFmode:
      if (pattern797 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V8SFmode)
       || !MEM_P (operands[1]))) && 
#line 369 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9624; /* avx_vec_concatv16sf */

    case E_V8DFmode:
      if (pattern797 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
          || !(
#line 28958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (operands[2] == CONST0_RTX (V4DFmode)
       || !MEM_P (operands[1]))) && 
#line 370 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9625; /* avx_vec_concatv8df */

    default:
      return -1;
    }
}

 int
recog_273 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 2);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3802; /* *fma_fmadd_v4sf */
          if (!bcst_vector_operand (operands[1], E_V4SFmode)
              || !bcst_vector_operand (operands[2], E_V4SFmode)
              || !bcst_vector_operand (operands[3], E_V4SFmode)
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3826; /* *fma_fmadd_v4sf */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3803; /* *fma_fmadd_v2df */
          if (!bcst_vector_operand (operands[1], E_V2DFmode)
              || !bcst_vector_operand (operands[2], E_V2DFmode)
              || !bcst_vector_operand (operands[3], E_V2DFmode)
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3837; /* *fma_fmadd_v2df */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3804; /* *fma_fmadd_v8sf */
          if (!bcst_vector_operand (operands[1], E_V8SFmode)
              || !bcst_vector_operand (operands[2], E_V8SFmode)
              || !bcst_vector_operand (operands[3], E_V8SFmode)
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3822; /* *fma_fmadd_v8sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && 
#line 5914 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3805; /* *fma_fmadd_v4df */
          if (!bcst_vector_operand (operands[1], E_V4DFmode)
              || !bcst_vector_operand (operands[2], E_V4DFmode)
              || !bcst_vector_operand (operands[3], E_V4DFmode)
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3833; /* *fma_fmadd_v4df */

        case E_V32HFmode:
          if (pattern864 (x2, 
E_V32HFmode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3806; /* *fma_fmadd_v32hf */

        case E_V16HFmode:
          if (pattern864 (x2, 
E_V16HFmode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3810; /* *fma_fmadd_v16hf */

        case E_V8HFmode:
          if (pattern864 (x2, 
E_V8HFmode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3814; /* *fma_fmadd_v8hf */

        case E_V16SFmode:
          if (pattern864 (x2, 
E_V16SFmode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3818; /* *fma_fmadd_v16sf */

        case E_V8DFmode:
          if (pattern864 (x2, 
E_V8DFmode) != 0
              || !(
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3829; /* *fma_fmadd_v8df */

        case E_V32BFmode:
          if (pattern924 (x2, 
E_V32BFmode) != 0
              || !(
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10633; /* avx10_2_fmaddbf16_v32bf */

        case E_V16BFmode:
          if (pattern924 (x2, 
E_V16BFmode) != 0
              || !
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10635; /* avx10_2_fmaddbf16_v16bf */

        case E_V8BFmode:
          if (pattern924 (x2, 
E_V8BFmode) != 0
              || !
#line 32148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10637; /* avx10_2_fmaddbf16_v8bf */

        default:
          return -1;
        }

    case NEG:
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || GET_MODE (x4) != E_V4SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && nonimmediate_operand (operands[2], E_V4SFmode)
              && nonimmediate_operand (operands[3], E_V4SFmode)
              && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3871; /* *fma_fmsub_v4sf */
          if (!bcst_vector_operand (operands[1], E_V4SFmode)
              || !bcst_vector_operand (operands[2], E_V4SFmode)
              || !bcst_vector_operand (operands[3], E_V4SFmode)
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3895; /* *fma_fmsub_v4sf */

        case E_V2DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || GET_MODE (x4) != E_V2DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && nonimmediate_operand (operands[2], E_V2DFmode)
              && nonimmediate_operand (operands[3], E_V2DFmode)
              && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3872; /* *fma_fmsub_v2df */
          if (!bcst_vector_operand (operands[1], E_V2DFmode)
              || !bcst_vector_operand (operands[2], E_V2DFmode)
              || !bcst_vector_operand (operands[3], E_V2DFmode)
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3906; /* *fma_fmsub_v2df */

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || GET_MODE (x4) != E_V8SFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && nonimmediate_operand (operands[2], E_V8SFmode)
              && nonimmediate_operand (operands[3], E_V8SFmode)
              && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3873; /* *fma_fmsub_v8sf */
          if (!bcst_vector_operand (operands[1], E_V8SFmode)
              || !bcst_vector_operand (operands[2], E_V8SFmode)
              || !bcst_vector_operand (operands[3], E_V8SFmode)
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3891; /* *fma_fmsub_v8sf */

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || GET_MODE (x4) != E_V4DFmode)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && nonimmediate_operand (operands[2], E_V4DFmode)
              && nonimmediate_operand (operands[3], E_V4DFmode)
              && 
#line 6013 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
            return 3874; /* *fma_fmsub_v4df */
          if (!bcst_vector_operand (operands[1], E_V4DFmode)
              || !bcst_vector_operand (operands[2], E_V4DFmode)
              || !bcst_vector_operand (operands[3], E_V4DFmode)
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 3902; /* *fma_fmsub_v4df */

        case E_V32HFmode:
          if (pattern865 (x2, 
E_V32HFmode) != 0
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 3875; /* *fma_fmsub_v32hf */

        case E_V16HFmode:
          if (pattern865 (x2, 
E_V16HFmode) != 0
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3879; /* *fma_fmsub_v16hf */

        case E_V8HFmode:
          if (pattern865 (x2, 
E_V8HFmode) != 0
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 3883; /* *fma_fmsub_v8hf */

        case E_V16SFmode:
          if (pattern865 (x2, 
E_V16SFmode) != 0
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3887; /* *fma_fmsub_v16sf */

        case E_V8DFmode:
          if (pattern865 (x2, 
E_V8DFmode) != 0
              || !(
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1 && 1) && 
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 3898; /* *fma_fmsub_v8df */

        case E_V32BFmode:
          if (pattern925 (x2, 
E_V32BFmode) != 0
              || !(
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10657; /* avx10_2_fmsubbf16_v32bf */

        case E_V16BFmode:
          if (pattern925 (x2, 
E_V16BFmode) != 0
              || !
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10659; /* avx10_2_fmsubbf16_v16bf */

        case E_V8BFmode:
          if (pattern925 (x2, 
E_V8BFmode) != 0
              || !
#line 32276 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10661; /* avx10_2_fmsubbf16_v8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_280 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_279 (x1, insn, pnum_clobbers);
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
  x14 = XVECEXP (x3, 0, 8);
  operands[11] = x14;
  x15 = XVECEXP (x3, 0, 9);
  operands[12] = x15;
  x16 = XVECEXP (x3, 0, 10);
  operands[13] = x16;
  x17 = XVECEXP (x3, 0, 11);
  operands[14] = x17;
  x18 = XVECEXP (x3, 0, 12);
  operands[15] = x18;
  x19 = XVECEXP (x3, 0, 13);
  operands[16] = x19;
  x20 = XVECEXP (x3, 0, 14);
  operands[17] = x20;
  x21 = XVECEXP (x3, 0, 15);
  operands[18] = x21;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0)
        return -1;
      if (const_0_to_3_operand (operands[3], E_VOIDmode)
          && const_0_to_3_operand (operands[4], E_VOIDmode)
          && const_16_to_19_operand (operands[5], E_VOIDmode)
          && const_16_to_19_operand (operands[6], E_VOIDmode)
          && const_4_to_7_operand (operands[7], E_VOIDmode)
          && const_4_to_7_operand (operands[8], E_VOIDmode)
          && const_20_to_23_operand (operands[9], E_VOIDmode)
          && const_20_to_23_operand (operands[10], E_VOIDmode)
          && const_8_to_11_operand (operands[11], E_VOIDmode)
          && const_8_to_11_operand (operands[12], E_VOIDmode)
          && const_24_to_27_operand (operands[13], E_VOIDmode)
          && const_24_to_27_operand (operands[14], E_VOIDmode)
          && const_12_to_15_operand (operands[15], E_VOIDmode)
          && const_12_to_15_operand (operands[16], E_VOIDmode)
          && const_28_to_31_operand (operands[17], E_VOIDmode)
          && const_28_to_31_operand (operands[18], E_VOIDmode)
          && 
#line 14297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[11]) - 8)
       && INTVAL (operands[4]) == (INTVAL (operands[12]) - 8)
       && INTVAL (operands[5]) == (INTVAL (operands[13]) - 8)
       && INTVAL (operands[6]) == (INTVAL (operands[14]) - 8)
       && INTVAL (operands[3]) == (INTVAL (operands[15]) - 12)
       && INTVAL (operands[4]) == (INTVAL (operands[16]) - 12)
       && INTVAL (operands[5]) == (INTVAL (operands[17]) - 12)
       && INTVAL (operands[6]) == (INTVAL (operands[18]) - 12))))
        return 7193; /* avx512f_shufps512_1 */
      if (!const_0_to_15_operand (operands[3], E_VOIDmode)
          || pattern1853 () != 0
          || !(
#line 20426 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8433; /* avx512f_shuf_f32x4_1 */

    case E_V16SImode:
      if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
          || !const_0_to_15_operand (operands[3], E_VOIDmode)
          || pattern1853 () != 0
          || !(
#line 20426 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[3]) & 3) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[5]) - 2
   && INTVAL (operands[3]) == INTVAL (operands[6]) - 3
   && (INTVAL (operands[7]) & 3) == 0
   && INTVAL (operands[7]) == INTVAL (operands[8]) - 1
   && INTVAL (operands[7]) == INTVAL (operands[9]) - 2
   && INTVAL (operands[7]) == INTVAL (operands[10]) - 3
   && (INTVAL (operands[11]) & 3) == 0
   && INTVAL (operands[11]) == INTVAL (operands[12]) - 1
   && INTVAL (operands[11]) == INTVAL (operands[13]) - 2
   && INTVAL (operands[11]) == INTVAL (operands[14]) - 3
   && (INTVAL (operands[15]) & 3) == 0
   && INTVAL (operands[15]) == INTVAL (operands[16]) - 1
   && INTVAL (operands[15]) == INTVAL (operands[17]) - 2
   && INTVAL (operands[15]) == INTVAL (operands[18]) - 3) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8435; /* avx512f_shuf_i32x4_1 */

    default:
      return -1;
    }
}

 int
recog_285 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[2] = x4;
  if (const_0_to_7_operand (operands[2], E_VOIDmode))
    {
      x5 = XVECEXP (x3, 0, 1);
      operands[3] = x5;
      if (const_0_to_7_operand (operands[3], E_VOIDmode))
        {
          switch (GET_MODE (operands[0]))
            {
            case E_V2DFmode:
              if (nonimmediate_operand (operands[0], E_V2DFmode)
                  && GET_MODE (x2) == E_V2DFmode
                  && register_operand (operands[1], E_V8DFmode)
                  && (
#line 12467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5343; /* *avx512dq_vextractf64x2_1 */
              break;

            case E_V2DImode:
              if (nonimmediate_operand (operands[0], E_V2DImode)
                  && GET_MODE (x2) == E_V2DImode
                  && register_operand (operands[1], E_V8DImode)
                  && (
#line 12467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 5344; /* *avx512dq_vextracti64x2_1 */
              break;

            default:
              break;
            }
        }
    }
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (XWINT (x5, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !nonimmediate_operand (operands[1], E_V4DImode)
              || !
#line 12893 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5367; /* vec_extract_lo_v4di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || !nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 12893 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5368; /* vec_extract_lo_v4df */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x5, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || GET_MODE (x2) != E_V2DImode
              || !register_operand (operands[1], E_V4DImode)
              || !
#line 12929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5371; /* vec_extract_hi_v4di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || !register_operand (operands[1], E_V4DFmode)
              || !
#line 12929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5372; /* vec_extract_hi_v4df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_291 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_288 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x4;
  res = recog_290 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 0L
      || x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || !register_operand (operands[0], E_V8HImode)
      || GET_MODE (x2) != E_V8HImode
      || !vector_operand (operands[1], E_V8HImode)
      || pattern1488 (x3) != 0
      || !
#line 21016 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
    return -1;
  return 8457; /* sse2_pshufhw_1 */
}

 int
recog_293 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[3] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[4] = x5;
  x6 = XVECEXP (x3, 0, 3);
  operands[5] = x6;
  x7 = XVECEXP (x3, 0, 5);
  operands[7] = x7;
  x8 = XVECEXP (x3, 0, 6);
  operands[8] = x8;
  x9 = XVECEXP (x3, 0, 7);
  operands[9] = x9;
  x10 = XVECEXP (x3, 0, 8);
  operands[10] = x10;
  x11 = XVECEXP (x3, 0, 9);
  operands[11] = x11;
  x12 = XVECEXP (x3, 0, 10);
  operands[12] = x12;
  x13 = XVECEXP (x3, 0, 11);
  operands[13] = x13;
  x14 = XVECEXP (x3, 0, 12);
  operands[14] = x14;
  x15 = XVECEXP (x3, 0, 13);
  operands[15] = x15;
  x16 = XVECEXP (x3, 0, 14);
  operands[16] = x16;
  x17 = XVECEXP (x3, 0, 15);
  operands[17] = x17;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || pattern1830 () != 0
          || !(
#line 20478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 3) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[2]) == INTVAL (operands[4]) - 2
   && INTVAL (operands[2]) == INTVAL (operands[5]) - 3
   && (INTVAL (operands[6]) & 3) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && INTVAL (operands[6]) == INTVAL (operands[8]) - 2
   && INTVAL (operands[6]) == INTVAL (operands[9]) - 3
   && (INTVAL (operands[10]) & 3) == 0
   && INTVAL (operands[10]) == INTVAL (operands[11]) - 1
   && INTVAL (operands[10]) == INTVAL (operands[12]) - 2
   && INTVAL (operands[10]) == INTVAL (operands[13]) - 3
   && (INTVAL (operands[14]) & 3) == 0
   && INTVAL (operands[14]) == INTVAL (operands[15]) - 1
   && INTVAL (operands[14]) == INTVAL (operands[16]) - 2
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8437; /* *avx512f_shuf_f32x4_1_1 */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode)
        return -1;
      if (register_operand (operands[1], E_V16SImode)
          && pattern1830 () == 0
          && (
#line 20478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 3) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[2]) == INTVAL (operands[4]) - 2
   && INTVAL (operands[2]) == INTVAL (operands[5]) - 3
   && (INTVAL (operands[6]) & 3) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && INTVAL (operands[6]) == INTVAL (operands[8]) - 2
   && INTVAL (operands[6]) == INTVAL (operands[9]) - 3
   && (INTVAL (operands[10]) & 3) == 0
   && INTVAL (operands[10]) == INTVAL (operands[11]) - 1
   && INTVAL (operands[10]) == INTVAL (operands[12]) - 2
   && INTVAL (operands[10]) == INTVAL (operands[13]) - 3
   && (INTVAL (operands[14]) & 3) == 0
   && INTVAL (operands[14]) == INTVAL (operands[15]) - 1
   && INTVAL (operands[14]) == INTVAL (operands[16]) - 2
   && INTVAL (operands[14]) == INTVAL (operands[17]) - 3) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 8439; /* *avx512f_shuf_i32x4_1_1 */
      if (!nonimmediate_operand (operands[1], E_V16SImode)
          || pattern1709 () != 0
          || !const_8_to_11_operand (operands[10], E_VOIDmode)
          || !const_8_to_11_operand (operands[11], E_VOIDmode)
          || !const_8_to_11_operand (operands[12], E_VOIDmode)
          || !const_8_to_11_operand (operands[13], E_VOIDmode)
          || !const_12_to_15_operand (operands[14], E_VOIDmode)
          || !const_12_to_15_operand (operands[15], E_VOIDmode)
          || !const_12_to_15_operand (operands[16], E_VOIDmode)
          || !const_12_to_15_operand (operands[17], E_VOIDmode)
          || !
#line 20560 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])
   && INTVAL (operands[2]) + 8 == INTVAL (operands[10])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[11])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[12])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[13])
   && INTVAL (operands[2]) + 12 == INTVAL (operands[14])
   && INTVAL (operands[3]) + 12 == INTVAL (operands[15])
   && INTVAL (operands[4]) + 12 == INTVAL (operands[16])
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17])))
        return -1;
      return 8441; /* avx512f_pshufd_1 */

    default:
      return -1;
    }
}

 int
recog_303 (rtx x1 ATTRIBUTE_UNUSED,
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
    case NOT:
      switch (pattern335 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_V16BFmode:
              if (pattern612 (x2, 
E_V16BFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3695; /* avx512bf16_andnotv16bf3 */

            case E_V8BFmode:
              if (pattern612 (x2, 
E_V8BFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 426 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3696; /* avx512bf16_andnotv8bf3 */

            case E_V16HFmode:
              if (pattern612 (x2, 
E_V16HFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3697; /* avx512fp16_andnotv16hf3 */

            case E_V8HFmode:
              if (pattern612 (x2, 
E_V8HFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 16 != 16)) && 
#line 427 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3698; /* avx512fp16_andnotv8hf3 */

            case E_V8SFmode:
              if (pattern612 (x2, 
E_V8SFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)) && 
#line 428 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3699; /* avx_andnotv8sf3 */

            case E_V4SFmode:
              if (pattern612 (x2, 
E_V4SFmode) != 0
                  || !
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 32 != 16)))
                return -1;
              return 3701; /* sse_andnotv4sf3 */

            case E_V4DFmode:
              if (pattern612 (x2, 
E_V4DFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3703; /* avx_andnotv4df3 */

            case E_V2DFmode:
              if (pattern612 (x2, 
E_V2DFmode) != 0
                  || !(
#line 5235 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1
   && (!false || 64 != 16)) && 
#line 429 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 3705; /* sse2_andnotv2df3 */

            case E_V32BFmode:
              if (pattern739 (x2, 
E_V32BFmode) != 0
                  || !(
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 16 != 16)) && 
#line 491 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3707; /* avx512bf16_andnotv32bf3 */

            case E_V32HFmode:
              if (pattern739 (x2, 
E_V32HFmode) != 0
                  || !(
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 16 != 16)) && 
#line 492 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3708; /* avx512fp16_andnotv32hf3 */

            case E_V16SFmode:
              if (pattern739 (x2, 
E_V16SFmode) != 0
                  || !(
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 32 != 16)) && 
#line 493 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3709; /* avx512f_andnotv16sf3 */

            case E_V8DFmode:
              if (pattern739 (x2, 
E_V8DFmode) != 0
                  || !(
#line 5310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (!false || 64 != 16)) && 
#line 494 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3711; /* avx512f_andnotv8df3 */

            case E_V1TImode:
              if (pattern612 (x2, 
E_V1TImode) != 0
                  || !
#line 5601 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 3784; /* *andnotv1ti3 */

            case E_V16SImode:
              if (pattern933 (x2, 
E_V16SImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16SImode)
       || register_operand (operands[2], V16SImode))) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7990; /* *andnotv16si3 */

            case E_V8DImode:
              if (pattern933 (x2, 
E_V8DImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8DImode)
       || register_operand (operands[2], V8DImode))) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7991; /* *andnotv8di3 */

            case E_V64QImode:
              if (pattern933 (x2, 
E_V64QImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V64QImode)
       || register_operand (operands[2], V64QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7992; /* *andnotv64qi3 */

            case E_V32QImode:
              if (pattern933 (x2, 
E_V32QImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V32QImode)
       || register_operand (operands[2], V32QImode))) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7993; /* *andnotv32qi3 */

            case E_V16QImode:
              if (pattern933 (x2, 
E_V16QImode) != 0
                  || !
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
                return -1;
              return 7994; /* *andnotv16qi3 */

            case E_V32HImode:
              if (pattern933 (x2, 
E_V32HImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V32HImode)
       || register_operand (operands[2], V32HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 7995; /* *andnotv32hi3 */

            case E_V16HImode:
              if (pattern933 (x2, 
E_V16HImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V16HImode)
       || register_operand (operands[2], V16HImode))) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7996; /* *andnotv16hi3 */

            case E_V8HImode:
              if (pattern933 (x2, 
E_V8HImode) != 0
                  || !
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
                return -1;
              return 7997; /* *andnotv8hi3 */

            case E_V8SImode:
              if (pattern933 (x2, 
E_V8SImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V8SImode)
       || register_operand (operands[2], V8SImode))) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7998; /* *andnotv8si3 */

            case E_V4SImode:
              if (pattern933 (x2, 
E_V4SImode) != 0
                  || !
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
                return -1;
              return 7999; /* *andnotv4si3 */

            case E_V4DImode:
              if (pattern933 (x2, 
E_V4DImode) != 0
                  || !(
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V4DImode)
       || register_operand (operands[2], V4DImode))) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 8000; /* *andnotv4di3 */

            case E_V2DImode:
              if (pattern933 (x2, 
E_V2DImode) != 0
                  || !
#line 18500 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
                return -1;
              return 8001; /* *andnotv2di3 */

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
          return 8089; /* *norv16si3 */

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
          return 8091; /* *norv8di3 */

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
          return 8093; /* *norv64qi3 */

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
          return 8095; /* *norv32qi3 */

        case 5:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V16QImode)
       || register_operand (operands[2], V16QImode))))
            return -1;
          return 8097; /* *norv16qi3 */

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
          return 8099; /* *norv32hi3 */

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
          return 8101; /* *norv16hi3 */

        case 8:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V8HImode)
       || register_operand (operands[2], V8HImode))))
            return -1;
          return 8103; /* *norv8hi3 */

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
          return 8105; /* *norv8si3 */

        case 10:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V4SImode)
       || register_operand (operands[2], V4SImode))))
            return -1;
          return 8107; /* *norv4si3 */

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
          return 8109; /* *norv4di3 */

        case 12:
          if (!
#line 19034 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && (register_operand (operands[1], V2DImode)
       || register_operand (operands[2], V2DImode))))
            return -1;
          return 8111; /* *norv2di3 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
    case VEC_DUPLICATE:
      return recog_300 (x1, insn, pnum_clobbers);

    case AND:
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
              return 5523; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5550; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5577; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5604; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5631; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5658; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5685; /* *avx512f_vpternlogv16si_1 */

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
              return 5712; /* *avx512vl_vpternlogv8si_1 */

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
              return 5739; /* *avx512vl_vpternlogv4si_1 */

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
              return 5766; /* *avx512f_vpternlogv8di_1 */

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
              return 5793; /* *avx512vl_vpternlogv4di_1 */

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
              return 5820; /* *avx512vl_vpternlogv2di_1 */

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
              return 5526; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5553; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5580; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5607; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5634; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5661; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5688; /* *avx512f_vpternlogv16si_1 */

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
              return 5715; /* *avx512vl_vpternlogv8si_1 */

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
              return 5742; /* *avx512vl_vpternlogv4si_1 */

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
              return 5769; /* *avx512f_vpternlogv8di_1 */

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
              return 5796; /* *avx512vl_vpternlogv4di_1 */

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
              return 5823; /* *avx512vl_vpternlogv2di_1 */

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
              return 5529; /* *avx512bw_vpternlogv64qi_1 */

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
              return 5556; /* *avx512vl_vpternlogv32qi_1 */

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
              return 5583; /* *avx512vl_vpternlogv16qi_1 */

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
              return 5610; /* *avx512bw_vpternlogv32hi_1 */

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
              return 5637; /* *avx512vl_vpternlogv16hi_1 */

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
              return 5664; /* *avx512vl_vpternlogv8hi_1 */

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
              return 5691; /* *avx512f_vpternlogv16si_1 */

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
              return 5718; /* *avx512vl_vpternlogv8si_1 */

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
              return 5745; /* *avx512vl_vpternlogv4si_1 */

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
              return 5772; /* *avx512f_vpternlogv8di_1 */

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
              return 5799; /* *avx512vl_vpternlogv4di_1 */

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
              return 5826; /* *avx512vl_vpternlogv2di_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6819; /* *avx512bw_vpternlogv64qi_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6828; /* *avx512vl_vpternlogv32qi_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6837; /* *avx512vl_vpternlogv16qi_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6846; /* *avx512bw_vpternlogv32hi_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6855; /* *avx512vl_vpternlogv16hi_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6864; /* *avx512vl_vpternlogv8hi_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6873; /* *avx512f_vpternlogv16si_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6882; /* *avx512vl_vpternlogv8si_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6891; /* *avx512vl_vpternlogv4si_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6900; /* *avx512f_vpternlogv8di_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6909; /* *avx512vl_vpternlogv4di_3 */

            case 47:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6918; /* *avx512vl_vpternlogv2di_3 */

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
              return 6171; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6198; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6225; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6252; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6279; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6306; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6333; /* *avx512f_vpternlogv16si_2 */

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
              return 6360; /* *avx512vl_vpternlogv8si_2 */

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
              return 6387; /* *avx512vl_vpternlogv4si_2 */

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
              return 6414; /* *avx512f_vpternlogv8di_2 */

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
              return 6441; /* *avx512vl_vpternlogv4di_2 */

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
              return 6468; /* *avx512vl_vpternlogv2di_2 */

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
              return 6174; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6201; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6228; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6255; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6282; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6309; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6336; /* *avx512f_vpternlogv16si_2 */

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
              return 6363; /* *avx512vl_vpternlogv8si_2 */

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
              return 6390; /* *avx512vl_vpternlogv4si_2 */

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
              return 6417; /* *avx512f_vpternlogv8di_2 */

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
              return 6444; /* *avx512vl_vpternlogv4di_2 */

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
              return 6471; /* *avx512vl_vpternlogv2di_2 */

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
              return 6177; /* *avx512bw_vpternlogv64qi_2 */

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
              return 6204; /* *avx512vl_vpternlogv32qi_2 */

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
              return 6231; /* *avx512vl_vpternlogv16qi_2 */

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
              return 6258; /* *avx512bw_vpternlogv32hi_2 */

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
              return 6285; /* *avx512vl_vpternlogv16hi_2 */

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
              return 6312; /* *avx512vl_vpternlogv8hi_2 */

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
              return 6339; /* *avx512f_vpternlogv16si_2 */

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
              return 6366; /* *avx512vl_vpternlogv8si_2 */

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
              return 6393; /* *avx512vl_vpternlogv4si_2 */

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
              return 6420; /* *avx512f_vpternlogv8di_2 */

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
              return 6447; /* *avx512vl_vpternlogv4di_2 */

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
              return 6474; /* *avx512vl_vpternlogv2di_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      return recog_302 (x1, insn, pnum_clobbers);

    case XOR:
      return recog_301 (x1, insn, pnum_clobbers);

    case GT:
      switch (pattern337 (x2))
        {
        case 0:
          if (!(
#line 17338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7683; /* *avx2_lshrv4di3_1 */

        case 1:
          if (!
#line 17338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()))
            return -1;
          return 7684; /* *avx2_lshrv2di3_1 */

        default:
          return -1;
        }

    case LT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 1);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DImode:
          if (pattern934 (x2, 
E_V4DImode) != 0
              || !(
#line 17355 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7685; /* *avx2_lshrv4di3_2 */

        case E_V2DImode:
          if (pattern934 (x2, 
E_V2DImode) != 0
              || !
#line 17355 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return -1;
          return 7686; /* *avx2_lshrv2di3_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_319 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47;
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
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V32HFmode, operands)
   && 1 && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 2683; /* *addv32hf3 */

        case 1:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16HFmode, operands)
   && 1 && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2691; /* *addv16hf3 */

        case 2:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8HFmode, operands)
   && 1 && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 2699; /* *addv8hf3 */

        case 3:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V16SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2707; /* *addv16sf3 */

        case 4:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)
   && 1 && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2715; /* *addv8sf3 */

        case 5:
          if (!
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)
   && 1 && 1))
            return -1;
          return 2723; /* *addv4sf3 */

        case 6:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2731; /* *addv8df3 */

        case 7:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)
   && 1 && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2739; /* *addv4df3 */

        case 8:
          if (!(
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)
   && 1 && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2747; /* *addv2df3 */

        case 9:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V64QImode, operands)) && 
#line 587 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7466; /* *addv64qi3 */

        case 10:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 587 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7468; /* *addv32qi3 */

        case 11:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)))
            return -1;
          return 7470; /* *addv16qi3 */

        case 12:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32HImode, operands)) && 
#line 588 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 7472; /* *addv32hi3 */

        case 13:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 588 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7474; /* *addv16hi3 */

        case 14:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)))
            return -1;
          return 7476; /* *addv8hi3 */

        case 15:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16SImode, operands)) && 
#line 589 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7478; /* *addv16si3 */

        case 16:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 589 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7480; /* *addv8si3 */

        case 17:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)))
            return -1;
          return 7482; /* *addv4si3 */

        case 18:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8DImode, operands)) && 
#line 590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 7484; /* *addv8di3 */

        case 19:
          if (!(
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 7486; /* *addv4di3 */

        case 20:
          if (!
#line 16280 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)))
            return -1;
          return 7488; /* *addv2di3 */

        case 21:
          if (!(
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10609; /* avx10_2_addbf16_v32bf */

        case 22:
          if (!
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10617; /* avx10_2_addbf16_v16bf */

        case 23:
          if (!
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10625; /* avx10_2_addbf16_v8bf */

        default:
          return -1;
        }

    case UNSPEC:
      switch (pattern184 (x3))
        {
        case 0:
          if (!(
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4348; /* fma_v32hf_fadd_fmul */

        case 1:
          if (!(
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4349; /* fma_v16hf_fadd_fmul */

        case 2:
          if (!(
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4350; /* fma_v8hf_fadd_fmul */

        case 3:
          if (!(
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4351; /* fma_v32hf_fadd_fcmul */

        case 4:
          if (!(
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4352; /* fma_v16hf_fadd_fcmul */

        case 5:
          if (!(
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4353; /* fma_v8hf_fadd_fcmul */

        case 6:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4354; /* fma_fmaddc_v32hf_fma_zero */

        case 7:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4356; /* fma_fmaddc_v16hf_fma_zero */

        case 8:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4358; /* fma_fmaddc_v8hf_fma_zero */

        case 9:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4355; /* fma_fcmaddc_v32hf_fma_zero */

        case 10:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4357; /* fma_fcmaddc_v16hf_fma_zero */

        case 11:
          if (!(
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4359; /* fma_fcmaddc_v8hf_fma_zero */

        default:
          return -1;
        }

    case MULT:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          if (pattern327 (x4) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          x7 = XEXP (x6, 1);
          switch (XVECLEN (x7, 0))
            {
            case 8:
              if (pattern1314 (x4) != 0)
                return -1;
              x8 = XEXP (x3, 1);
              if (GET_CODE (x8) != MULT
                  || GET_MODE (x8) != E_V8SImode)
                return -1;
              x9 = XEXP (x8, 0);
              if (GET_CODE (x9) != SIGN_EXTEND
                  || GET_MODE (x9) != E_V8SImode)
                return -1;
              x10 = XEXP (x9, 0);
              if (GET_CODE (x10) != VEC_SELECT
                  || GET_MODE (x10) != E_V8HImode)
                return -1;
              x11 = XEXP (x10, 1);
              if (GET_CODE (x11) != PARALLEL
                  || pattern1863 (x11, 
8) != 0)
                return -1;
              x12 = XEXP (x8, 1);
              if (pattern1843 (x12, 
E_V8HImode, 
E_V8SImode) != 0)
                return -1;
              x13 = XEXP (x12, 0);
              x14 = XEXP (x13, 1);
              if (pattern1880 (x14, 
8) != 0
                  || !register_operand (operands[0], E_V8SImode)
                  || GET_MODE (x3) != E_V8SImode
                  || GET_MODE (x4) != E_V8SImode
                  || GET_MODE (x5) != E_V8SImode
                  || GET_MODE (x6) != E_V8HImode
                  || !nonimmediate_operand (operands[1], E_V16HImode))
                return -1;
              x15 = XEXP (x4, 1);
              if (GET_MODE (x15) != E_V8SImode)
                return -1;
              x16 = XEXP (x15, 0);
              if (GET_MODE (x16) != E_V8HImode
                  || !nonimmediate_operand (operands[2], E_V16HImode))
                return -1;
              x17 = XEXP (x10, 0);
              if (!rtx_equal_p (x17, operands[1]))
                return -1;
              x18 = XEXP (x13, 0);
              if (!rtx_equal_p (x18, operands[2])
                  || !
#line 16755 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 7598; /* *avx2_pmaddwd */

            case 4:
              x19 = XVECEXP (x7, 0, 0);
              if (GET_CODE (x19) != CONST_INT)
                return -1;
              x20 = XVECEXP (x7, 0, 1);
              if (GET_CODE (x20) != CONST_INT)
                return -1;
              x21 = XVECEXP (x7, 0, 2);
              if (GET_CODE (x21) != CONST_INT)
                return -1;
              x22 = XVECEXP (x7, 0, 3);
              if (GET_CODE (x22) != CONST_INT)
                return -1;
              x15 = XEXP (x4, 1);
              x16 = XEXP (x15, 0);
              x23 = XEXP (x16, 1);
              if (XVECLEN (x23, 0) != 4)
                return -1;
              x24 = XVECEXP (x23, 0, 0);
              if (GET_CODE (x24) != CONST_INT)
                return -1;
              x25 = XVECEXP (x23, 0, 1);
              if (GET_CODE (x25) != CONST_INT)
                return -1;
              x26 = XVECEXP (x23, 0, 2);
              if (GET_CODE (x26) != CONST_INT)
                return -1;
              x27 = XVECEXP (x23, 0, 3);
              if (GET_CODE (x27) != CONST_INT
                  || pattern883 (x3, 
E_V4HImode, 
E_V4SImode) != 0
                  || GET_MODE (x15) != E_V4SImode
                  || GET_MODE (x16) != E_V4HImode)
                return -1;
              switch (XWINT (x19, 0))
                {
                case 0L:
                  if (XWINT (x20, 0) != 2L
                      || XWINT (x21, 0) != 4L
                      || XWINT (x22, 0) != 6L
                      || XWINT (x24, 0) != 0L
                      || XWINT (x25, 0) != 2L
                      || XWINT (x26, 0) != 4L
                      || XWINT (x27, 0) != 6L)
                    return -1;
                  x8 = XEXP (x3, 1);
                  if (pattern1783 (x8, 
E_V4HImode, 
E_V4SImode, 
SIGN_EXTEND) != 0
                      || !vector_operand (operands[1], E_V8HImode)
                      || !vector_operand (operands[2], E_V8HImode))
                    return -1;
                  x9 = XEXP (x8, 0);
                  x10 = XEXP (x9, 0);
                  x17 = XEXP (x10, 0);
                  if (!rtx_equal_p (x17, operands[1]))
                    return -1;
                  x12 = XEXP (x8, 1);
                  x13 = XEXP (x12, 0);
                  x18 = XEXP (x13, 0);
                  if (!rtx_equal_p (x18, operands[2])
                      || !
#line 16810 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 7599; /* *sse2_pmaddwd */

                case 1L:
                  if (XWINT (x20, 0) != 3L
                      || XWINT (x21, 0) != 5L
                      || XWINT (x22, 0) != 7L
                      || XWINT (x24, 0) != 1L
                      || XWINT (x25, 0) != 3L
                      || XWINT (x26, 0) != 5L
                      || XWINT (x27, 0) != 7L
                      || !nonimmediate_operand (operands[1], E_V8HImode)
                      || !nonimmediate_operand (operands[2], E_V8HImode))
                    return -1;
                  x8 = XEXP (x3, 1);
                  operands[3] = x8;
                  if (!register_operand (operands[3], E_V4SImode)
                      || !
#line 26178 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8997; /* xop_pmacswd */

                default:
                  return -1;
                }

            case 2:
              if (pattern1315 (x3) != 0)
                return -1;
              x15 = XEXP (x4, 1);
              if (GET_MODE (x15) != E_V2DImode)
                return -1;
              x16 = XEXP (x15, 0);
              if (GET_MODE (x16) != E_V2SImode
                  || !nonimmediate_operand (operands[2], E_V4SImode))
                return -1;
              x8 = XEXP (x3, 1);
              operands[3] = x8;
              switch (pattern1827 (x4))
                {
                case 0:
                  if (!
#line 26137 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8993; /* xop_pmacsdql */

                case 1:
                  if (!
#line 26156 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                    return -1;
                  return 8995; /* xop_pmacsdqh */

                default:
                  return -1;
                }

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
              return 8989; /* xop_pmacsww */

            case 1:
              if (!
#line 26118 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 8991; /* xop_pmacsdd */

            default:
              return -1;
            }

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
          return 8591; /* avx2_phaddwv16hi3 */

        case 1:
          if (!
#line 22603 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8595; /* ssse3_phaddwv8hi3 */

        case 2:
          if (!
#line 22670 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return -1;
          return 8603; /* avx2_phadddv8si3 */

        case 3:
          if (!
#line 22691 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3))
            return -1;
          return 8605; /* ssse3_phadddv4si3 */

        default:
          return -1;
        }

    case PLUS:
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case MULT:
          if (pattern330 (x5) != 0)
            return -1;
          x28 = XEXP (x5, 1);
          if (GET_MODE (x28) != E_V4SImode)
            return -1;
          x29 = XEXP (x28, 0);
          if (GET_CODE (x29) != VEC_SELECT
              || GET_MODE (x29) != E_V4HImode)
            return -1;
          x30 = XEXP (x29, 1);
          if (GET_CODE (x30) != PARALLEL
              || XVECLEN (x30, 0) != 4)
            return -1;
          x31 = XVECEXP (x30, 0, 0);
          if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x32 = XVECEXP (x30, 0, 1);
          if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x33 = XVECEXP (x30, 0, 2);
          if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x34 = XVECEXP (x30, 0, 3);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x15 = XEXP (x4, 1);
          if (GET_CODE (x15) != MULT
              || GET_MODE (x15) != E_V4SImode)
            return -1;
          x16 = XEXP (x15, 0);
          if (GET_CODE (x16) != SIGN_EXTEND
              || GET_MODE (x16) != E_V4SImode)
            return -1;
          x35 = XEXP (x16, 0);
          if (GET_CODE (x35) != VEC_SELECT
              || GET_MODE (x35) != E_V4HImode)
            return -1;
          x36 = XEXP (x35, 1);
          if (GET_CODE (x36) != PARALLEL
              || XVECLEN (x36, 0) != 4)
            return -1;
          x37 = XVECEXP (x36, 0, 0);
          if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x38 = XVECEXP (x36, 0, 1);
          if (x38 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x39 = XVECEXP (x36, 0, 2);
          if (x39 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x40 = XVECEXP (x36, 0, 3);
          if (x40 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
            return -1;
          x41 = XEXP (x15, 1);
          if (GET_CODE (x41) != SIGN_EXTEND
              || GET_MODE (x41) != E_V4SImode)
            return -1;
          x42 = XEXP (x41, 0);
          if (GET_CODE (x42) != VEC_SELECT
              || GET_MODE (x42) != E_V4HImode)
            return -1;
          x43 = XEXP (x42, 1);
          if (GET_CODE (x43) != PARALLEL
              || XVECLEN (x43, 0) != 4)
            return -1;
          x44 = XVECEXP (x43, 0, 0);
          if (x44 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x45 = XVECEXP (x43, 0, 1);
          if (x45 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x46 = XVECEXP (x43, 0, 2);
          if (x46 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x47 = XVECEXP (x43, 0, 3);
          if (x47 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || !register_operand (operands[0], E_V4SImode)
              || GET_MODE (x3) != E_V4SImode
              || GET_MODE (x4) != E_V4SImode
              || pattern1883 (x3) != 0
              || !
#line 26211 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 8999; /* xop_pmadcswd */

        case SIGN_EXTEND:
          switch (pattern333 (x3, 
SIGN_EXTEND))
            {
            case 0:
              if (!
#line 26305 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9019; /* xop_phaddbd */

            case 1:
              if (!
#line 26401 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9025; /* xop_phaddwq */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern333 (x3, 
ZERO_EXTEND))
            {
            case 0:
              if (!
#line 26305 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9020; /* xop_phaddubd */

            case 1:
              if (!
#line 26401 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9026; /* xop_phadduwq */

            default:
              return -1;
            }

        case PLUS:
          if (GET_MODE (x5) != E_V2DImode)
            return -1;
          x15 = XEXP (x4, 1);
          if (GET_CODE (x15) != PLUS
              || GET_MODE (x15) != E_V2DImode)
            return -1;
          x8 = XEXP (x3, 1);
          if (GET_CODE (x8) != PLUS
              || GET_MODE (x8) != E_V2DImode
              || pattern1030 (x8, 
E_V2DImode, 
PLUS) != 0
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode
              || GET_MODE (x4) != E_V2DImode
              || pattern1554 (x3, 
E_V2DImode) != 0)
            return -1;
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case SIGN_EXTEND:
              if (pattern1816 (x3, 
SIGN_EXTEND) != 0
                  || !
#line 26353 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9021; /* xop_phaddbq */

            case ZERO_EXTEND:
              if (pattern1816 (x3, 
ZERO_EXTEND) != 0
                  || !
#line 26353 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
                return -1;
              return 9022; /* xop_phaddubq */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SIGN_EXTEND:
      switch (pattern190 (x3, 
SIGN_EXTEND))
        {
        case 0:
          if (!
#line 26273 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9017; /* xop_phaddbw */

        case 1:
          if (!
#line 26373 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9023; /* xop_phaddwd */

        case 2:
          if (!
#line 26419 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9027; /* xop_phadddq */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern190 (x3, 
ZERO_EXTEND))
        {
        case 0:
          if (!
#line 26273 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9018; /* xop_phaddubw */

        case 1:
          if (!
#line 26373 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9024; /* xop_phadduwd */

        case 2:
          if (!
#line 26419 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9028; /* xop_phaddudq */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_324 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V64QImode:
      if (nonimmediate_operand (operands[0], E_V64QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V64QImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2395; /* movv64qi_internal */
      if (!register_operand (operands[0], E_V64QImode)
          || !ternlog_operand (operands[1], E_V64QImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5499; /* *avx512bw_vpternlogv64qi_0 */

    case E_V32QImode:
      if (nonimmediate_operand (operands[0], E_V32QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V32QImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 282 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2396; /* movv32qi_internal */
      if (!register_operand (operands[0], E_V32QImode)
          || !ternlog_operand (operands[1], E_V32QImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5500; /* *avx512vl_vpternlogv32qi_0 */

    case E_V16QImode:
      if (nonimmediate_operand (operands[0], E_V16QImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16QImode)
          && 
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2397; /* movv16qi_internal */
      if (!register_operand (operands[0], E_V16QImode)
          || !ternlog_operand (operands[1], E_V16QImode)
          || !
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5501; /* *avx512vl_vpternlogv16qi_0 */

    case E_V32HImode:
      if (nonimmediate_operand (operands[0], E_V32HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V32HImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2398; /* movv32hi_internal */
      if (!register_operand (operands[0], E_V32HImode)
          || !ternlog_operand (operands[1], E_V32HImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5502; /* *avx512bw_vpternlogv32hi_0 */

    case E_V16HImode:
      if (nonimmediate_operand (operands[0], E_V16HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16HImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2399; /* movv16hi_internal */
      if (!register_operand (operands[0], E_V16HImode)
          || !ternlog_operand (operands[1], E_V16HImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5503; /* *avx512vl_vpternlogv16hi_0 */

    case E_V8HImode:
      if (nonimmediate_operand (operands[0], E_V8HImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8HImode)
          && 
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2400; /* movv8hi_internal */
      if (!register_operand (operands[0], E_V8HImode)
          || !ternlog_operand (operands[1], E_V8HImode)
          || !
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5504; /* *avx512vl_vpternlogv8hi_0 */

    case E_V16SImode:
      if (nonimmediate_operand (operands[0], E_V16SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V16SImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2401; /* movv16si_internal */
      if (!register_operand (operands[0], E_V16SImode)
          || !ternlog_operand (operands[1], E_V16SImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5505; /* *avx512f_vpternlogv16si_0 */

    case E_V8SImode:
      if (nonimmediate_operand (operands[0], E_V8SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8SImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 284 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2402; /* movv8si_internal */
      if (!register_operand (operands[0], E_V8SImode)
          || !ternlog_operand (operands[1], E_V8SImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5506; /* *avx512vl_vpternlogv8si_0 */

    case E_V4SImode:
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V4SImode)
          && 
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2403; /* movv4si_internal */
      if (!register_operand (operands[0], E_V4SImode)
          || !ternlog_operand (operands[1], E_V4SImode)
          || !
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5507; /* *avx512vl_vpternlogv4si_0 */

    case E_V8DImode:
      if (nonimmediate_operand (operands[0], E_V8DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V8DImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return 2404; /* movv8di_internal */
      if (!register_operand (operands[0], E_V8DImode)
          || !ternlog_operand (operands[1], E_V8DImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 5508; /* *avx512f_vpternlogv8di_0 */

    case E_V4DImode:
      if (nonimmediate_operand (operands[0], E_V4DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V4DImode)
          && (
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return 2405; /* movv4di_internal */
      if (!register_operand (operands[0], E_V4DImode)
          || !ternlog_operand (operands[1], E_V4DImode)
          || !(
#line 13760 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 5509; /* *avx512vl_vpternlogv4di_0 */

    case E_V2DImode:
      if (nonimmediate_operand (operands[0], E_V2DImode)
          && nonimmediate_or_sse_const_operand (operands[1], E_V2DImode)
          && 
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return 2406; /* movv2di_internal */
      if (!register_operand (operands[0], E_V2DImode)
          || !ternlog_operand (operands[1], E_V2DImode)
          || !
#line 13760 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
        return -1;
      return 5510; /* *avx512vl_vpternlogv2di_0 */

    case E_V4TImode:
      if (!nonimmediate_operand (operands[0], E_V4TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4TImode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4TImode)
       || register_operand (operands[1], V4TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2407; /* movv4ti_internal */

    case E_V2TImode:
      if (!nonimmediate_operand (operands[0], E_V2TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V2TImode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 286 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2408; /* movv2ti_internal */

    case E_V1TImode:
      if (!nonimmediate_operand (operands[0], E_V1TImode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V1TImode)
          || !
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2409; /* movv1ti_internal */

    case E_V32HFmode:
      if (!nonimmediate_operand (operands[0], E_V32HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V32HFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2410; /* movv32hf_internal */

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16HFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HFmode)
       || register_operand (operands[1], V16HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2411; /* movv16hf_internal */

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[0], E_V8HFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8HFmode)
          || !
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2412; /* movv8hf_internal */

    case E_V32BFmode:
      if (!nonimmediate_operand (operands[0], E_V32BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V32BFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2413; /* movv32bf_internal */

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16BFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16BFmode)
       || register_operand (operands[1], V16BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 288 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2414; /* movv16bf_internal */

    case E_V8BFmode:
      if (!nonimmediate_operand (operands[0], E_V8BFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8BFmode)
          || !
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2415; /* movv8bf_internal */

    case E_V16SFmode:
      if (!nonimmediate_operand (operands[0], E_V16SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V16SFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2416; /* movv16sf_internal */

    case E_V8SFmode:
      if (!nonimmediate_operand (operands[0], E_V8SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8SFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 289 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2417; /* movv8sf_internal */

    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4SFmode)
          || !
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2418; /* movv4sf_internal */

    case E_V8DFmode:
      if (!nonimmediate_operand (operands[0], E_V8DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V8DFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2419; /* movv8df_internal */

    case E_V4DFmode:
      if (!nonimmediate_operand (operands[0], E_V4DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V4DFmode)
          || !(
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])) && 
#line 290 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2420; /* movv4df_internal */

    case E_V2DFmode:
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || !nonimmediate_or_sse_const_operand (operands[1], E_V2DFmode)
          || !
#line 1507 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))
   && ix86_hardreg_mov_ok (operands[0], operands[1])))
        return -1;
      return 2421; /* movv2df_internal */

    default:
      return -1;
    }
}

 int
recog_329 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7647; /* *ashlv16hi3 */
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 774 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7671; /* ashlv16hi3 */
      if (!nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9602; /* avx512vl_ashlvv16hi */

    case 1:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 798 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 7651; /* *ashlv8hi3 */
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7673; /* ashlv8hi3 */
      if (!nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9598; /* avx512vl_ashlvv8hi */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7655; /* *ashlv8si3 */
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7675; /* ashlv8si3 */
      if (!nonimmediate_operand (operands[2], E_V8SImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9578; /* avx2_ashlvv8si */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7659; /* *ashlv4si3 */
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7677; /* ashlv4si3 */
      if (!nonimmediate_operand (operands[2], E_V4SImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9582; /* avx2_ashlvv4si */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7663; /* *ashlv4di3 */
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && (
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 7679; /* ashlv4di3 */
      if (!nonimmediate_operand (operands[2], E_V4DImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9590; /* avx2_ashlvv4di */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
        return 7667; /* *ashlv2di3 */
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      if (nonmemory_operand (operands[2], E_DImode)
          && 
#line 17317 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return 7681; /* ashlv2di3 */
      if (!nonimmediate_operand (operands[2], E_V2DImode)
          || !
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9594; /* avx2_ashlvv2di */

    case 6:
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
        return 7687; /* ashlv32hi3 */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 28947 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9606; /* avx512bw_ashlvv32hi */

    case 7:
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7691; /* ashlv16si3 */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 803 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9574; /* avx512f_ashlvv16si */

    case 8:
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 17391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 7695; /* ashlv8di3 */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1) && 
#line 804 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 9586; /* avx512f_ashlvv8di */

    case 9:
      if (register_operand (operands[1], E_V1TImode)
          && const_0_to_255_not_mul_8_operand (operands[2], E_SImode)
          && 
#line 17466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()))
        return 7699; /* *ashlv1ti3_internal */
      if (!const_0_to_255_mul_8_operand (operands[2], E_SImode))
        return -1;
      if (nonimmediate_operand (operands[1], E_V1TImode)
          && (
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7708; /* avx512bw_ashlv1ti3 */
      if (!register_operand (operands[1], E_V1TImode)
          || !
#line 17625 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 7712; /* sse2_ashlv1ti3 */

    case 10:
      if (!(
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7704; /* avx512bw_ashlv4ti3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V2TImode)
          && (
#line 17610 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 729 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7706; /* avx512bw_ashlv2ti3 */
      if (!register_operand (operands[1], E_V2TImode)
          || !(
#line 17625 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return -1;
      return 7710; /* avx2_ashlv2ti3 */

    default:
      return -1;
    }
}

 int
recog_334 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10136; /* vpopcountv16si */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x3) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || !(
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10138; /* vpopcountv8si */

    case E_V4SImode:
      if (!register_operand (operands[0], E_V4SImode)
          || GET_MODE (x3) != E_V4SImode
          || !nonimmediate_operand (operands[1], E_V4SImode)
          || !(
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10140; /* vpopcountv4si */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x3) != E_V8DImode
          || !nonimmediate_operand (operands[1], E_V8DImode)
          || !(
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10142; /* vpopcountv8di */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x3) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || !(
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10144; /* vpopcountv4di */

    case E_V2DImode:
      if (!register_operand (operands[0], E_V2DImode)
          || GET_MODE (x3) != E_V2DImode
          || !nonimmediate_operand (operands[1], E_V2DImode)
          || !(
#line 30299 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VPOPCNTDQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10146; /* vpopcountv2di */

    case E_V64QImode:
      if (!register_operand (operands[0], E_V64QImode)
          || GET_MODE (x3) != E_V64QImode
          || !nonimmediate_operand (operands[1], E_V64QImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10156; /* vpopcountv64qi */

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x3) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V16QImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10158; /* vpopcountv16qi */

    case E_V32QImode:
      if (!register_operand (operands[0], E_V32QImode)
          || GET_MODE (x3) != E_V32QImode
          || !nonimmediate_operand (operands[1], E_V32QImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10160; /* vpopcountv32qi */

    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x3) != E_V32HImode
          || !nonimmediate_operand (operands[1], E_V32HImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10162; /* vpopcountv32hi */

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x3) != E_V16HImode
          || !nonimmediate_operand (operands[1], E_V16HImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10164; /* vpopcountv16hi */

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x3) != E_V8HImode
          || !nonimmediate_operand (operands[1], E_V8HImode)
          || !(
#line 30349 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BITALG) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10166; /* vpopcountv8hi */

    default:
      return -1;
    }
}

 int
recog_339 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      switch (pattern50 (x3))
        {
        case 0:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7228; /* *avx512f_truncatev16siv16qi2 */

        case 1:
          if (!(
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 15237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 7270; /* *avx512vl_truncatev16hiv16qi2 */

        case 2:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7231; /* *avx512f_truncatev16siv16hi2 */

        case 3:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7234; /* *avx512f_truncatev8div8si2 */

        case 4:
          if (!
#line 15001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 7237; /* *avx512f_truncatev8div8hi2 */

        case 5:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7267; /* *avx512vl_truncatev8siv8hi2 */

        case 6:
          if (!
#line 15174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))
            return -1;
          return 7257; /* avx512bw_truncatev32hiv32qi2 */

        case 7:
          if (!
#line 15263 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
            return -1;
          return 7264; /* *avx512vl_truncatev4div4si2 */

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
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case SIGN_EXTEND:
              switch (pattern811 (x3, 
SIGN_EXTEND))
                {
                case 0:
                  if (!(
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 7568; /* *smulv32hi3_highpart */

                case 1:
                  if (!(
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7572; /* *smulv16hi3_highpart */

                case 2:
                  if (!
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
                    return -1;
                  return 7576; /* *smulv8hi3_highpart */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern811 (x3, 
ZERO_EXTEND))
                {
                case 0:
                  if (!(
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 7570; /* *umulv32hi3_highpart */

                case 1:
                  if (!(
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 7574; /* *umulv16hi3_highpart */

                case 2:
                  if (!
#line 16433 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && 1 && 1))
                    return -1;
                  return 7578; /* *umulv8hi3_highpart */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case PLUS:
          if (XWINT (x5, 0) != 1L)
            return -1;
          x7 = XEXP (x6, 0);
          switch (GET_CODE (x7))
            {
            case PLUS:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != ZERO_EXTEND)
                return -1;
              x9 = XEXP (x7, 1);
              if (GET_CODE (x9) != ZERO_EXTEND)
                return -1;
              x10 = XEXP (x8, 0);
              operands[1] = x10;
              x11 = XEXP (x9, 0);
              operands[2] = x11;
              x12 = XEXP (x6, 1);
              operands[3] = x12;
              switch (GET_MODE (operands[0]))
                {
                case E_V64QImode:
                  if (pattern1416 (x3, 
E_V64HImode, 
E_V64QImode) != 0
                      || !(
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8497; /* *avx512bw_uavgv64qi3 */

                case E_V32QImode:
                  if (pattern1416 (x3, 
E_V32HImode, 
E_V32QImode) != 0
                      || !(
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 739 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8499; /* *avx2_uavgv32qi3 */

                case E_V16QImode:
                  if (pattern1416 (x3, 
E_V16HImode, 
E_V16QImode) != 0
                      || !
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8501; /* *sse2_uavgv16qi3 */

                case E_V32HImode:
                  if (pattern1416 (x3, 
E_V32SImode, 
E_V32HImode) != 0
                      || !(
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8503; /* *avx512bw_uavgv32hi3 */

                case E_V16HImode:
                  if (pattern1416 (x3, 
E_V16SImode, 
E_V16HImode) != 0
                      || !(
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 740 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8505; /* *avx2_uavgv16hi3 */

                case E_V8HImode:
                  if (pattern1416 (x3, 
E_V8SImode, 
E_V8HImode) != 0
                      || !
#line 21901 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8507; /* *sse2_uavgv8hi3 */

                default:
                  return -1;
                }

            case LSHIFTRT:
              if (pattern616 (x7) != 0)
                return -1;
              x8 = XEXP (x7, 0);
              x10 = XEXP (x8, 0);
              x13 = XEXP (x10, 0);
              operands[1] = x13;
              if (nonimmediate_operand (operands[1], E_V32HImode))
                {
                  res = recog_316 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              x14 = XEXP (x8, 1);
              x15 = XEXP (x14, 0);
              operands[2] = x15;
              x12 = XEXP (x6, 1);
              operands[3] = x12;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HImode:
                  if (pattern1524 (x3, 
E_V32HImode, 
E_V32SImode) != 0
                      || !(
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8620; /* *avx512bw_pmulhrswv32hi3 */

                case E_V16HImode:
                  if (pattern1524 (x3, 
E_V16HImode, 
E_V16SImode) != 0
                      || !(
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8622; /* *avx2_pmulhrswv16hi3 */

                case E_V8HImode:
                  if (pattern1524 (x3, 
E_V8HImode, 
E_V8SImode) != 0
                      || !
#line 23005 "../../src/gcc/config/i386/sse.md"
(TARGET_SSSE3 && 1 && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 8624; /* *ssse3_pmulhrswv8hi3 */

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
recog_347 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7764; /* *avx2_umaxv32qi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7842; /* *avx512bw_umaxv32qi3 */

    case 1:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7768; /* *avx2_umaxv16hi3 */
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7858; /* *avx512bw_umaxv16hi3 */

    case 2:
      if (
#line 17680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return 7772; /* *avx2_umaxv8si3 */
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7786; /* *avx512f_umaxv8si3 */

    case 3:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7778; /* *avx512f_umaxv16si3 */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonimmediate_operand (operands[2], E_V4SImode)
          && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7794; /* *avx512f_umaxv4si3 */
      if (!vector_operand (operands[1], E_V4SImode)
          || !vector_operand (operands[2], E_V4SImode)
          || !
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7884; /* *sse4_1_umaxv4si3 */

    case 5:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7802; /* *avx512f_umaxv8di3 */

    case 6:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7810; /* *avx512f_umaxv4di3 */

    case 7:
      if (!(
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 7818; /* *avx512f_umaxv2di3 */

    case 8:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7826; /* *avx512bw_umaxv64qi3 */

    case 9:
      if (nonimmediate_operand (operands[1], E_V16QImode)
          && nonimmediate_operand (operands[2], E_V16QImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7834; /* *avx512bw_umaxv16qi3 */
      if (!vector_operand (operands[1], E_V16QImode)
          || !vector_operand (operands[2], E_V16QImode)
          || !
#line 17927 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7888; /* *umaxv16qi3 */

    case 10:
      if (!(
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7850; /* *avx512bw_umaxv32hi3 */

    case 11:
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonimmediate_operand (operands[2], E_V8HImode)
          && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7866; /* *avx512bw_umaxv8hi3 */
      if (!vector_operand (operands[1], E_V8HImode)
          || !vector_operand (operands[2], E_V8HImode)
          || !
#line 17908 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && 1
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7880; /* *sse4_1_umaxv8hi3 */

    default:
      return -1;
    }
}

 int
recog_355 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (GET_MODE (x3) != E_SImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_SImode)
          && nonimmediate_operand (operands[1], E_SImode)
          && 
#line 22562 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
        return 1640; /* *bswapsi2_movbe */
      if (!register_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_SImode)
          || !
#line 22577 "../../src/gcc/config/i386/i386.md"
(TARGET_BSWAP))
        return -1;
      return 1642; /* *bswapsi2 */

    case E_DImode:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_DImode)
          && nonimmediate_operand (operands[1], E_DImode)
          && (
#line 22562 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return 1641; /* *bswapdi2_movbe */
      if (!register_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_DImode)
          || !(
#line 22577 "../../src/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1643; /* *bswapdi2 */

    default:
      return -1;
    }
}

 int
recog_361 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XVECEXP (x6, 0, 0);
  operands[1] = x7;
  switch (pattern1147 (x1))
    {
    case 0:
      if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1867; /* stack_protect_set_1_si_si */

    case 1:
      if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1869; /* stack_protect_set_1_si_di */

    case 2:
      if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1868; /* stack_protect_set_1_di_si */

    case 3:
      if (!(
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      *pnum_clobbers = 1;
      return 1870; /* stack_protect_set_1_di_di */

    default:
      return -1;
    }
}

 int
recog_364 (rtx x1 ATTRIBUTE_UNUSED,
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
    case 105:
      if (GET_MODE (x3) != E_TImode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 108
          || GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XVECEXP (x4, 0, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!push_operand (operands[0], E_TImode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      if (!register_operand (operands[2], E_DImode)
          || !
#line 3928 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_PUSH2POP2 && TARGET_APX_PPX))
        return -1;
      return 163; /* push2p_di */

    case 40:
      x8 = XVECEXP (x3, 0, 1);
      if (GET_CODE (x8) != CONST_INT)
        return -1;
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x7;
          if (XWINT (x8, 0) == 0L)
            {
              res = recog_362 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
            }
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET)
            return -1;
          x9 = XEXP (x4, 1);
          if (GET_CODE (x9) != NEG
              || GET_MODE (x6) != E_CCOmode
              || GET_MODE (x3) != E_CCOmode)
            return -1;
          operands[2] = x8;
          x10 = XEXP (x4, 0);
          operands[0] = x10;
          x11 = XEXP (x9, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (pattern1660 (x9, 
E_QImode) != 0
                  || !
#line 14543 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands)
   && mode_signbit_p (QImode, operands[2])))
                return -1;
              return 991; /* *negvqi3 */

            case E_HImode:
              if (pattern1660 (x9, 
E_HImode) != 0
                  || !
#line 14543 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands)
   && mode_signbit_p (HImode, operands[2])))
                return -1;
              return 992; /* *negvhi3 */

            case E_SImode:
              if (pattern1660 (x9, 
E_SImode) != 0
                  || !
#line 14543 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands)
   && mode_signbit_p (SImode, operands[2])))
                return -1;
              return 993; /* *negvsi3 */

            case E_DImode:
              if (pattern1660 (x9, 
E_DImode) != 0
                  || !(
#line 14543 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)
   && mode_signbit_p (DImode, operands[2])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 994; /* *negvdi3 */

            default:
              return -1;
            }

        case AND:
          x12 = XEXP (x7, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x8, 0) != 0L)
            return -1;
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != SET
              || GET_MODE (x6) != E_CCCmode
              || GET_MODE (x3) != E_CCCmode)
            return -1;
          x13 = XEXP (x7, 0);
          operands[1] = x13;
          x10 = XEXP (x4, 0);
          operands[0] = x10;
          x9 = XEXP (x4, 1);
          switch (GET_CODE (x9))
            {
            case LSHIFTRT:
              switch (pattern1620 (x1))
                {
                case 0:
                  return 1387; /* lshrsi3_carry */

                case 1:
                  if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1389; /* lshrdi3_carry */

                default:
                  return -1;
                }

            case ASHIFTRT:
              switch (pattern1620 (x1))
                {
                case 0:
                  return 1388; /* ashrsi3_carry */

                case 1:
                  if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 1390; /* ashrdi3_carry */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 98:
      if (pattern549 (x1) != 0)
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern1419 (x3, 
E_SImode) != 0
              || !
#line 21734 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1566; /* bmi_bextr_si */

        case E_DImode:
          if (pattern1419 (x3, 
E_DImode) != 0
              || !(
#line 21734 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1567; /* bmi_bextr_di */

        default:
          return -1;
        }

    case 66:
      if (GET_MODE (x3) != E_XFmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[2] = x7;
      if (!register_operand (operands[2], E_XFmode))
        return -1;
      x8 = XVECEXP (x3, 0, 1);
      operands[1] = x8;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      x10 = XEXP (x4, 0);
      operands[3] = x10;
      if (!scratch_operand (operands[3], E_XFmode)
          || !
#line 24127 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1721; /* atan2xf3 */

    case 67:
      if (pattern550 (x1) != 0
          || !
#line 24430 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1722; /* fyl2xxf3_i387 */

    case 68:
      if (pattern550 (x1) != 0
          || !
#line 24527 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1723; /* fyl2xp1xf3_i387 */

    case 84:
      if (GET_MODE (x3) != E_XFmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != SET)
        return -1;
      x9 = XEXP (x4, 1);
      if (pattern813 (x9, 
E_XFmode, 
85, 
2, 
UNSPEC) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_XFmode)
          || pattern1420 (x1) != 0
          || !
#line 24662 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1726; /* fscalexf4_i387 */

    case 93:
      if (GET_MODE (x3) != E_CCZmode)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!flags_reg_operand (operands[0], E_CCZmode))
        return -1;
      x7 = XVECEXP (x3, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x3, 0, 1);
      operands[2] = x8;
      x10 = XEXP (x4, 0);
      operands[3] = x10;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !memory_operand (operands[2], E_SImode)
              || !scratch_operand (operands[3], E_SImode)
              || !
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
            return -1;
          return 1883; /* stack_protect_test_1_si */

        case E_DImode:
          if (!memory_operand (operands[1], E_DImode)
              || !memory_operand (operands[2], E_DImode)
              || !scratch_operand (operands[3], E_DImode)
              || !
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
            return -1;
          return 1884; /* stack_protect_test_1_di */

        default:
          return -1;
        }

    case 63:
      if (pattern551 (x1) != 0
          || !
#line 890 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2057; /* mmx_ieee_maxv2sf3 */

    case 62:
      if (pattern551 (x1) != 0
          || !
#line 890 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2058; /* mmx_ieee_minv2sf3 */

    case 160:
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != MEM)
        return -1;
      operands[5] = x6;
      x14 = XEXP (x6, 0);
      if (GET_CODE (x14) != UNSPEC
          || XVECLEN (x14, 0) != 4
          || XINT (x14, 1) != 154)
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x4) != CLOBBER)
        return -1;
      x15 = XVECEXP (x14, 0, 0);
      operands[0] = x15;
      x16 = XVECEXP (x14, 0, 1);
      operands[2] = x16;
      x17 = XVECEXP (x14, 0, 2);
      operands[4] = x17;
      if (!const1248_operand (operands[4], E_SImode))
        return -1;
      x18 = XVECEXP (x14, 0, 3);
      operands[6] = x18;
      x8 = XVECEXP (x3, 0, 1);
      operands[3] = x8;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x7 = XVECEXP (x3, 0, 0);
      if (!rtx_equal_p (x7, operands[6]))
        return -1;
      switch (GET_MODE (operands[5]))
        {
        case E_V16SImode:
          if (!vsib_mem_operator (operands[5], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
            return -1;
          switch (GET_MODE (x14))
            {
            case E_SImode:
              switch (pattern1769 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9843; /* *avx512f_scattersiv16si */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9867; /* *avx512f_scatterdiv16si */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1769 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9855; /* *avx512f_scattersiv16si */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9879; /* *avx512f_scatterdiv16si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!vsib_mem_operator (operands[5], E_V16SFmode)
              || GET_MODE (x3) != E_V16SFmode)
            return -1;
          switch (GET_MODE (x14))
            {
            case E_SImode:
              switch (pattern1770 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9844; /* *avx512f_scattersiv16sf */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9868; /* *avx512f_scatterdiv16sf */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1770 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9856; /* *avx512f_scattersiv16sf */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 9880; /* *avx512f_scatterdiv16sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1711 (x2, 
E_V8DImode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9845; /* *avx512f_scattersiv8di */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9869; /* *avx512f_scatterdiv8di */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9857; /* *avx512f_scattersiv8di */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9881; /* *avx512f_scatterdiv8di */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1711 (x2, 
E_V8DFmode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9846; /* *avx512f_scattersiv8df */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9870; /* *avx512f_scatterdiv8df */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9858; /* *avx512f_scattersiv8df */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 9882; /* *avx512f_scatterdiv8df */

            default:
              return -1;
            }

        case E_V8SImode:
          switch (pattern1712 (x2, 
E_V8SImode))
            {
            case 0:
              switch (pattern1818 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9847; /* *avx512f_scattersiv8si */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9871; /* *avx512f_scatterdiv8si */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1818 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9859; /* *avx512f_scattersiv8si */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9883; /* *avx512f_scatterdiv8si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8SFmode:
          switch (pattern1712 (x2, 
E_V8SFmode))
            {
            case 0:
              switch (pattern1819 (
E_SImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9848; /* *avx512f_scattersiv8sf */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9872; /* *avx512f_scatterdiv8sf */

                default:
                  return -1;
                }

            case 1:
              switch (pattern1819 (
E_DImode))
                {
                case 0:
                  if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9860; /* *avx512f_scattersiv8sf */

                case 1:
                  if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 9884; /* *avx512f_scatterdiv8sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1714 (x2, 
E_V4DImode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9849; /* *avx512f_scattersiv4di */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9873; /* *avx512f_scatterdiv4di */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9861; /* *avx512f_scattersiv4di */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9885; /* *avx512f_scatterdiv4di */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1714 (x2, 
E_V4DFmode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9850; /* *avx512f_scattersiv4df */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9874; /* *avx512f_scatterdiv4df */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9862; /* *avx512f_scattersiv4df */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9886; /* *avx512f_scatterdiv4df */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1716 (x2, 
E_V4SImode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9851; /* *avx512f_scattersiv4si */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9875; /* *avx512f_scatterdiv4si */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9863; /* *avx512f_scattersiv4si */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9887; /* *avx512f_scatterdiv4si */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1716 (x2, 
E_V4SFmode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9852; /* *avx512f_scattersiv4sf */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9876; /* *avx512f_scatterdiv4sf */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9864; /* *avx512f_scattersiv4sf */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9888; /* *avx512f_scatterdiv4sf */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1716 (x2, 
E_V2DImode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9853; /* *avx512f_scattersiv2di */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9877; /* *avx512f_scatterdiv2di */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9865; /* *avx512f_scattersiv2di */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9889; /* *avx512f_scatterdiv2di */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1716 (x2, 
E_V2DFmode))
            {
            case 0:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9854; /* *avx512f_scattersiv2df */

            case 1:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9878; /* *avx512f_scatterdiv2df */

            case 2:
              if (!(
#line 29612 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && ((((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9866; /* *avx512f_scattersiv2df */

            case 3:
              if (!(
#line 29652 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && (((
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 9890; /* *avx512f_scatterdiv2df */

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
recog_392 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  switch (pattern692 (x1))
    {
    case 0:
      switch (XWINT (x5, 0))
        {
        case 0L:
          x6 = XEXP (x3, 1);
          if (GET_CODE (x6) != PLUS)
            return -1;
          x7 = XEXP (x6, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x8 = XEXP (x2, 0);
          operands[0] = x8;
          operands[1] = x4;
          x9 = XEXP (x4, 0);
          operands[2] = x9;
          switch (pattern1577 (x3))
            {
            case 0:
              if (!
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              return 449; /* *dec_cmovhi */

            case 1:
              if (!
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE))
                return -1;
              return 450; /* *dec_cmovsi */

            case 2:
              if (!(
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 451; /* *dec_cmovdi */

            default:
              return -1;
            }

        case -1L:
          switch (pattern1183 (x2))
            {
            case 0:
              if (!(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2630; /* *kortest_cmpqi_jcc */

            case 1:
              if (!
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2631; /* *kortest_cmphi_jcc */

            case 2:
              if (!
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))
                return -1;
              return 2632; /* *kortest_cmpsi_jcc */

            case 3:
              if (!(
#line 2418 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2633; /* *kortest_cmpdi_jcc */

            case 4:
              if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2634; /* *kortest_cmpqi_movqicc */

            case 5:
              if (!
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL))
                return -1;
              return 2635; /* *kortest_cmphi_movqicc */

            case 6:
              if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2636; /* *kortest_cmpsi_movqicc */

            case 7:
              if (!(
#line 2454 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2637; /* *kortest_cmpdi_movqicc */

            case 8:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2638; /* *kortest_cmpqi_movhicc */

            case 9:
              if (!
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 2641; /* *kortest_cmphi_movhicc */

            case 10:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2644; /* *kortest_cmpsi_movhicc */

            case 11:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2647; /* *kortest_cmpdi_movhicc */

            case 12:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1555 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512DQ)))
                return -1;
              return 2639; /* *kortest_cmpqi_movsicc */

            case 13:
              if (!
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))))
                return -1;
              return 2642; /* *kortest_cmphi_movsicc */

            case 14:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW)))
                return -1;
              return 2645; /* *kortest_cmpsi_movsicc */

            case 15:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1556 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512BW && TARGET_64BIT)))
                return -1;
              return 2648; /* *kortest_cmpdi_movsicc */

            case 16:
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
              return 2640; /* *kortest_cmpqi_movdicc */

            case 17:
              if (!(
#line 2497 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 2643; /* *kortest_cmphi_movdicc */

            case 18:
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
              return 2646; /* *kortest_cmpsi_movdicc */

            case 19:
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
              return 2649; /* *kortest_cmpdi_movdicc */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 1:
      x9 = XEXP (x4, 0);
      x10 = XEXP (x9, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || XWINT (x5, 0) != 0L)
        return -1;
      switch (pattern1337 (x2))
        {
        case 0:
          x11 = XEXP (x9, 2);
          operands[2] = x11;
          switch (pattern1685 (x3))
            {
            case 0:
              if (
#line 19189 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()))
                return 1424; /* *jcc_btsi */
              break;

            case 1:
              if ((
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
                return 1425; /* *jcc_btdi */
              break;

            default:
              break;
            }
          if (GET_CODE (x11) != SUBREG)
            return -1;
          switch (pattern1687 (x3))
            {
            case 0:
              if (!
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
              return 1428; /* *jcc_btsi_mask_1 */

            case 1:
              if (!
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
              return 1432; /* *jcc_btsi_mask_1 */

            case 3:
              if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1429; /* *jcc_btdi_mask_1 */

            case 4:
              if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1431; /* *jcc_btdi_mask_1 */

            case 5:
              if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1433; /* *jcc_btdi_mask_1 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
            return -1;
          return 1426; /* *jcc_btsi_mask */

        case 2:
          if (!(
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1427; /* *jcc_btdi_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_403 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      x7 = XEXP (x6, 0);
      switch (pattern694 (x7))
        {
        case 0:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x4) != E_DImode
              || !general_operand (operands[1], E_DImode))
            return -1;
          if ((
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 995; /* *absdi2_doubleword */
          if (!(
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1002; /* *absdi2_1 */

        case 1:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode
              || !general_operand (operands[1], E_TImode)
              || !(
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 996; /* *absti2_doubleword */

        case 2:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !general_operand (operands[1], E_QImode)
              || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 999; /* *absqi2_1 */

        case 3:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !general_operand (operands[1], E_HImode)
              || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1000; /* *abshi2_1 */

        case 4:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !general_operand (operands[1], E_SImode)
              || !
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()))
            return -1;
          return 1001; /* *abssi2_1 */

        case 5:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x4) != E_SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1010; /* *abssf2_i387_1 */

        case 6:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x4) != E_DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1012; /* *absdf2_i387_1 */

        case 7:
          if (!register_operand (operands[0], E_XFmode)
              || GET_MODE (x4) != E_XFmode
              || !register_operand (operands[1], E_XFmode)
              || !
#line 14810 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
            return -1;
          return 1014; /* *absxf2_i387_1 */

        default:
          return -1;
        }

    case USE:
      switch (pattern698 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 14748 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE))
            return -1;
          return 1007; /* *abstf2_1 */

        case 1:
          if (!
#line 14834 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          *pnum_clobbers = 1;
          return 1016; /* *abshf2_1 */

        case 2:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 1018; /* *abssf2_1 */

        case 3:
          if (!
#line 14850 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 1020; /* *absdf2_1 */

        case 4:
          if (!
#line 683 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2049; /* *mmx_absv2sf2 */

        case 5:
          if (!
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2095; /* *mmx_absv2bf */

        case 6:
          if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2224 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2097; /* *mmx_absv4bf */

        case 7:
          if (!
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE))
            return -1;
          return 2099; /* *mmx_absv2hf */

        case 8:
          if (!(
#line 2239 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE) && 
#line 2225 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE)))
            return -1;
          return 2101; /* *mmx_absv4hf */

        case 9:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2653; /* *absv32bf2 */

        case 10:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2655; /* *absv16bf2 */

        case 11:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2657; /* *absv8bf2 */

        case 12:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2659; /* *absv32hf2 */

        case 13:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2661; /* *absv16hf2 */

        case 14:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2663; /* *absv8hf2 */

        case 15:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2665; /* *absv16sf2 */

        case 16:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2667; /* *absv8sf2 */

        case 17:
          if (!
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2669; /* *absv4sf2 */

        case 18:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 416 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 2671; /* *absv8df2 */

        case 19:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 2673; /* *absv4df2 */

        case 20:
          if (!(
#line 2585 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2675; /* *absv2df2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_407 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (pattern202 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      switch (GET_CODE (x5))
        {
        case SUBREG:
          switch (pattern1333 (x4))
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
                return 1123; /* *ashrdi3_doubleword_mask */
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
                return 1125; /* *ashrti3_doubleword_mask */
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          operands[2] = x5;
          if (const_int_operand (operands[2], E_QImode)
              && nonimmediate_operand (operands[0], E_SImode)
              && GET_MODE (x4) == E_SImode
              && nonimmediate_operand (operands[1], E_SImode)
              && 
#line 17244 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == GET_MODE_BITSIZE (SImode)-1
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)
   && true))
            return 1167; /* ashrsi3_cvt */
          break;

        default:
          break;
        }
      operands[2] = x5;
      res = recog_406 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_QImode)
        return -1;
      switch (pattern1435 (x2))
        {
        case 0:
          if (!
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
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
          return 1249; /* *ashrdi3_mask */

        case 2:
          if (!
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
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
          return 1261; /* *ashrdi3_add */

        case 4:
          if (!
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
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
        return 1127; /* *ashrdi3_doubleword_mask_1 */
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
      return 1255; /* *ashrdi3_mask_1 */

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
      return 1129; /* *ashrti3_doubleword_mask_1 */

    case 3:
      if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
        return -1;
      return 1252; /* *ashrsi3_mask_1 */

    case 4:
      if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1264; /* *ashrsi3_add_1 */

    case 5:
      if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1267; /* *ashrdi3_add_1 */

    case 6:
      if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
        return -1;
      return 1276; /* *ashrsi3_sub_1 */

    case 7:
      if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1279; /* *ashrdi3_sub_1 */

    case 8:
      if (!(
#line 17988 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      return 1280; /* *extenddi2_doubleword_highpart */

    case 9:
      if (!(
#line 17988 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return -1;
      return 1281; /* *extendti2_doubleword_highpart */

    default:
      return -1;
    }
}

 int
recog_426 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  if (pattern228 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS)
    return -1;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  x8 = XEXP (x5, 1);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  x10 = XVECEXP (x1, 0, 1);
  x11 = XEXP (x10, 0);
  operands[0] = x11;
  x12 = XEXP (x2, 0);
  operands[1] = x12;
  x13 = XEXP (x10, 1);
  x14 = XEXP (x13, 0);
  if (!rtx_equal_p (x14, operands[2]))
    return -1;
  x15 = XEXP (x3, 0);
  if (!rtx_equal_p (x15, operands[3]))
    return -1;
  x16 = XEXP (x13, 1);
  switch (XWINT (x16, 0))
    {
    case 8L:
      if (XWINT (x4, 0) != 8L)
        return -1;
      switch (pattern1662 (x1, 
E_DImode))
        {
        case 0:
          if (!(
#line 25616 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1761; /* *strmovdi_rex_1 */

        case 1:
          if (!(
#line 25616 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1762; /* *strmovdi_rex_1 */

        default:
          return -1;
        }

    case 4L:
      if (XWINT (x4, 0) != 4L)
        return -1;
      switch (pattern1662 (x1, 
E_SImode))
        {
        case 0:
          if (!(
#line 25633 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1763; /* *strmovsi_1 */

        case 1:
          if (!(
#line 25633 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1764; /* *strmovsi_1 */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x4, 0) != 2L)
        return -1;
      switch (pattern1662 (x1, 
E_HImode))
        {
        case 0:
          if (!(
#line 25649 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1765; /* *strmovhi_1 */

        case 1:
          if (!(
#line 25649 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1766; /* *strmovhi_1 */

        default:
          return -1;
        }

    case 1L:
      if (XWINT (x4, 0) != 1L)
        return -1;
      switch (pattern1662 (x1, 
E_QImode))
        {
        case 0:
          if (!(
#line 25665 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 1767; /* *strmovqi_1 */

        case 1:
          if (!(
#line 25665 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 1768; /* *strmovqi_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_432 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (pattern35 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  operands[5] = x5;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[6] = x7;
  x8 = XVECEXP (x1, 0, 2);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  if (!immediate_operand (operands[3], E_SImode))
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  operands[0] = x11;
  x12 = XVECEXP (x1, 0, 4);
  x13 = XEXP (x12, 0);
  operands[1] = x13;
  x14 = XVECEXP (x1, 0, 5);
  x15 = XEXP (x14, 0);
  operands[2] = x15;
  switch (GET_MODE (operands[4]))
    {
    case E_SImode:
      if (pattern1820 (
E_SImode) != 0
          || !(
#line 26028 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 1789; /* *cmpstrnqi_nz_1 */

    case E_DImode:
      if (pattern1820 (
E_DImode) != 0
          || !(
#line 26028 "../../src/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])
   && ix86_check_no_addr_space (insn)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 1790; /* *cmpstrnqi_nz_1 */

    default:
      return -1;
    }
}

 int
recog_433 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != UNSPEC_VOLATILE
      || XVECLEN (x2, 0) != 1)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || pattern36 (x1) != 0)
    return -1;
  x4 = XVECEXP (x1, 0, 9);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 28
      || GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XVECEXP (x1, 0, 10);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 29
      || GET_MODE (x7) != E_DImode)
    return -1;
  x8 = XVECEXP (x1, 0, 11);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 30
      || GET_MODE (x9) != E_DImode)
    return -1;
  x10 = XVECEXP (x1, 0, 12);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 31
      || GET_MODE (x11) != E_DImode)
    return -1;
  x12 = XVECEXP (x1, 0, 13);
  if (GET_CODE (x12) != CLOBBER)
    return -1;
  x13 = XEXP (x12, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 32
      || GET_MODE (x13) != E_DImode)
    return -1;
  x14 = XVECEXP (x1, 0, 14);
  if (GET_CODE (x14) != CLOBBER)
    return -1;
  x15 = XEXP (x14, 0);
  if (GET_CODE (x15) != REG
      || REGNO (x15) != 33
      || GET_MODE (x15) != E_DImode)
    return -1;
  x16 = XVECEXP (x1, 0, 15);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 34
      || GET_MODE (x17) != E_DImode)
    return -1;
  x18 = XVECEXP (x1, 0, 16);
  if (GET_CODE (x18) != CLOBBER)
    return -1;
  x19 = XEXP (x18, 0);
  if (GET_CODE (x19) != REG
      || REGNO (x19) != 35
      || GET_MODE (x19) != E_DImode)
    return -1;
  switch (XINT (x2, 1))
    {
    case 90:
      if (!
#line 6868 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX))
        return -1;
      return 2387; /* *mmx_emms */

    case 91:
      if (!
#line 6869 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2388; /* *mmx_femms */

    default:
      return -1;
    }
}

 int
recog_435 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != RETURN)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != USE)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 38
      || pattern722 (x4, 
E_DImode, 
7) != 0)
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[1]))
    {
    case E_SImode:
      if (!symbol_operand (operands[1], E_SImode)
          || !(
#line 30323 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
        return -1;
      return 10152; /* *restore_multiple_and_returnsi */

    case E_DImode:
      if (!symbol_operand (operands[1], E_DImode)
          || !(
#line 30323 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
        return -1;
      return 10153; /* *restore_multiple_and_returndi */

    default:
      return -1;
    }
}

 int
recog (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27;
  int res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      return recog_436 (x1, insn, pnum_clobbers);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          res = recog_421 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 3:
          res = recog_429 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_430 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 5:
          res = recog_431 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 6:
          res = recog_432 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 9:
          if (pattern36 (x1) == 0)
            {
              x2 = XVECEXP (x1, 0, 0);
              switch (GET_CODE (x2))
                {
                case SET:
                  x3 = XEXP (x2, 1);
                  if (GET_CODE (x3) == UNSPEC_VOLATILE
                      && XVECLEN (x3, 0) == 1
                      && XINT (x3, 1) == 40
                      && GET_MODE (x3) == E_BLKmode)
                    {
                      x4 = XVECEXP (x3, 0, 0);
                      if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                        {
                          x5 = XEXP (x2, 0);
                          operands[0] = x5;
                          if (memory_operand (operands[0], E_BLKmode)
                              && 
#line 29345 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                            return 1927; /* fnstenv */
                        }
                    }
                  break;

                case UNSPEC_VOLATILE:
                  if (XVECLEN (x2, 0) == 1
                      && XINT (x2, 1) == 41)
                    {
                      x6 = XVECEXP (x2, 0, 0);
                      operands[0] = x6;
                      if (memory_operand (operands[0], E_BLKmode)
                          && 
#line 29363 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                        return 1928; /* fldenv */
                    }
                  break;

                default:
                  break;
                }
            }
          break;

        case 17:
          res = recog_433 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x1, 0) >= 1)
        {
          res = recog_434 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[0] = x1;
      if (XVECLEN (operands[0], 0) >= 3
          && restore_multiple (operands[0], E_VOIDmode))
        {
          res = recog_435 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (XVECLEN (operands[0], 0) < 5
          || !restore_multiple (operands[0], E_VOIDmode))
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != RETURN)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != USE)
        return -1;
      x8 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x8) != SET)
        return -1;
      x9 = XEXP (x8, 1);
      if (GET_CODE (x9) != PLUS
          || GET_MODE (x9) != E_DImode)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 6
          || GET_MODE (x10) != E_DImode)
        return -1;
      x11 = XEXP (x9, 1);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x12 = XEXP (x8, 0);
      if (GET_CODE (x12) != REG
          || REGNO (x12) != 7
          || GET_MODE (x12) != E_DImode)
        return -1;
      x13 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x13) != SET)
        return -1;
      x14 = XEXP (x13, 1);
      if (GET_CODE (x14) != MEM
          || GET_MODE (x14) != E_DImode)
        return -1;
      x15 = XEXP (x14, 0);
      if (GET_CODE (x15) != REG
          || REGNO (x15) != 6
          || GET_MODE (x15) != E_DImode)
        return -1;
      x16 = XEXP (x13, 0);
      if (GET_CODE (x16) != REG
          || REGNO (x16) != 6
          || GET_MODE (x16) != E_DImode)
        return -1;
      x17 = XVECEXP (x1, 0, 4);
      if (GET_CODE (x17) != CLOBBER)
        return -1;
      x18 = XEXP (x17, 0);
      if (GET_CODE (x18) != MEM
          || GET_MODE (x18) != E_BLKmode)
        return -1;
      x19 = XEXP (x18, 0);
      if (GET_CODE (x19) != SCRATCH)
        return -1;
      x20 = XEXP (x7, 0);
      operands[1] = x20;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!symbol_operand (operands[1], E_SImode)
              || !(
#line 30336 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 10154; /* *restore_multiple_leave_returnsi */

        case E_DImode:
          if (!symbol_operand (operands[1], E_DImode)
              || !(
#line 30336 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 10155; /* *restore_multiple_leave_returndi */

        default:
          return -1;
        }

    case CALL:
      x21 = XEXP (x1, 0);
      if (GET_CODE (x21) != MEM
          || GET_MODE (x21) != E_QImode)
        return -1;
      x22 = XEXP (x21, 0);
      operands[0] = x22;
      x23 = XEXP (x1, 1);
      operands[1] = x23;
      if (call_insn_operand (operands[0], E_SImode)
          && (
#line 20127 "../../src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
        return 1464; /* *call */
      if (call_insn_operand (operands[0], E_DImode)
          && (
#line 20127 "../../src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
        return 1465; /* *call */
      switch (GET_CODE (x22))
        {
        case ZERO_EXTEND:
          if (GET_MODE (x22) == E_DImode)
            {
              x24 = XEXP (x22, 0);
              operands[0] = x24;
              if (GOT_memory_operand (operands[0], E_SImode))
                {
                  operands[1] = x23;
                  if (
#line 20136 "../../src/gcc/config/i386/i386.md"
(TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER))
                    return 1466; /* *call_got_x32 */
                }
            }
          break;

        case MEM:
          if (GET_MODE (x22) == E_SImode)
            {
              x24 = XEXP (x22, 0);
              if (GET_CODE (x24) == PLUS
                  && GET_MODE (x24) == E_SImode)
                {
                  x25 = XEXP (x24, 0);
                  operands[0] = x25;
                  if (register_no_elim_operand (operands[0], E_SImode))
                    {
                      x26 = XEXP (x24, 1);
                      operands[1] = x26;
                      if (GOT32_symbol_operand (operands[1], E_SImode))
                        {
                          operands[2] = x23;
                          if (
#line 20151 "../../src/gcc/config/i386/i386.md"
(!TARGET_MACHO
  && !TARGET_64BIT && !TARGET_INDIRECT_BRANCH_REGISTER
  && SIBLING_CALL_P (insn)))
                            return 1467; /* *sibcall_GOT_32 */
                        }
                    }
                }
            }
          break;

        default:
          break;
        }
      operands[0] = x22;
      operands[1] = x23;
      if (sibcall_insn_operand (operands[0], E_SImode)
          && (
#line 20164 "../../src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
        return 1468; /* *sibcall */
      if (!sibcall_insn_operand (operands[0], E_DImode)
          || !(
#line 20164 "../../src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
        return -1;
      return 1469; /* *sibcall */

    case UNSPEC_VOLATILE:
      return recog_437 (x1, insn, pnum_clobbers);

    case SIMPLE_RETURN:
      if (!
#line 20625 "../../src/gcc/config/i386/i386.md"
(reload_completed))
        return -1;
      return 1489; /* simple_return_internal */

    case CONST_INT:
      if (XWINT (x1, 0) != 0L)
        return -1;
      return 1495; /* nop */

    case EH_RETURN:
      return 1503; /* eh_return_internal */

    case TRAP_IF:
      x21 = XEXP (x1, 0);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x23 = XEXP (x1, 1);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      return 1885; /* trap */

    case PREFETCH:
      x23 = XEXP (x1, 1);
      if (GET_CODE (x23) != CONST_INT)
        return -1;
      x21 = XEXP (x1, 0);
      operands[0] = x21;
      if (!address_operand (operands[0], E_VOIDmode))
        return -1;
      switch (XWINT (x23, 0))
        {
        case 0L:
          x27 = XEXP (x1, 2);
          operands[1] = x27;
          if (const_int_operand (operands[1], E_SImode)
              && 
#line 28965 "../../src/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE))
            return 1887; /* *prefetch_sse */
          break;

        case 2L:
          x27 = XEXP (x1, 2);
          if (x27 == const_int_rtx[MAX_SAVED_CONST_INT + 1]
              && 
#line 29022 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVRS))
            return 1890; /* *prefetch_rst2 */
          break;

        default:
          break;
        }
      x27 = XEXP (x1, 2);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      operands[1] = x23;
      if (!const_int_operand (operands[1], E_SImode)
          || !
#line 28986 "../../src/gcc/config/i386/i386.md"
(TARGET_3DNOW || TARGET_PRFCHW))
        return -1;
      return 1888; /* *prefetch_3dnow */

    default:
      return -1;
    }
}

 rtx_insn *
split_9 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_CODE (operands[1]))
    {
    case CONST_INT:
      switch (pattern580 (x3))
        {
        case 0:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
   == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_686 (insn, operands);

        case 1:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
   == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_688 (insn, operands);

        case 2:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
   == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_690 (insn, operands);

        case 3:
          if (!(
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
   == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_692 (insn, operands);

        case 4:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_718 (insn, operands);

        case 5:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_720 (insn, operands);

        case 6:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_722 (insn, operands);

        case 7:
          if (!(
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_724 (insn, operands);

        case 8:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_750 (insn, operands);

        case 9:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_752 (insn, operands);

        case 10:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_754 (insn, operands);

        case 11:
          if (!(
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_756 (insn, operands);

        case 12:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
  == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_702 (insn, operands);

        case 13:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
  == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_704 (insn, operands);

        case 14:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
  == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_706 (insn, operands);

        case 15:
          if (!(
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
  == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_708 (insn, operands);

        case 16:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_734 (insn, operands);

        case 17:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_736 (insn, operands);

        case 18:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_738 (insn, operands);

        case 19:
          if (!(
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_740 (insn, operands);

        case 20:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_766 (insn, operands);

        case 21:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_768 (insn, operands);

        case 22:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_770 (insn, operands);

        case 23:
          if (!(
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_772 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CONST_INT)
        return NULL;
      switch (XWINT (x5, 0))
        {
        case 32L:
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x3) == E_DImode
              && register_operand (operands[1], E_DImode)
              && (
#line 18427 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 18429 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_778 (insn, operands);
          break;

        case 64L:
          if (register_operand (operands[0], E_TImode)
              && GET_MODE (x3) == E_TImode
              && register_operand (operands[1], E_TImode)
              && (
#line 18445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 18447 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_780 (insn, operands);
          break;

        default:
          break;
        }
      operands[2] = x5;
      if (!const_int_operand (operands[2], E_QImode))
        return NULL;
      switch (pattern126 (x3))
        {
        case 0:
          if (!
#line 18536 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD))
            return NULL;
          return gen_split_784 (insn, operands);

        case 1:
          if (!(
#line 18536 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed && !optimize_function_for_size_p (cfun)
   && !TARGET_APX_NDD) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_785 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_11 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_CODE (operands[1]))
    {
    case CONST_INT:
      switch (pattern580 (x3))
        {
        case 0:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
   == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_687 (insn, operands);

        case 1:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
   == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_689 (insn, operands);

        case 2:
          if (!
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
   == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_691 (insn, operands);

        case 3:
          if (!(
#line 18166 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
   == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_693 (insn, operands);

        case 4:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_719 (insn, operands);

        case 5:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_721 (insn, operands);

        case 6:
          if (!
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_723 (insn, operands);

        case 7:
          if (!(
#line 18239 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_725 (insn, operands);

        case 8:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_751 (insn, operands);

        case 9:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_753 (insn, operands);

        case 10:
          if (!
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_755 (insn, operands);

        case 11:
          if (!(
#line 18308 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_757 (insn, operands);

        case 12:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (QImode) - 1))
  == GET_MODE_BITSIZE (QImode) - 1))
            return NULL;
          return gen_split_703 (insn, operands);

        case 13:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (HImode) - 1))
  == GET_MODE_BITSIZE (HImode) - 1))
            return NULL;
          return gen_split_705 (insn, operands);

        case 14:
          if (!
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode) - 1))
  == GET_MODE_BITSIZE (SImode) - 1))
            return NULL;
          return gen_split_707 (insn, operands);

        case 15:
          if (!(
#line 18201 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode) - 1))
  == GET_MODE_BITSIZE (DImode) - 1) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_709 (insn, operands);

        case 16:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_735 (insn, operands);

        case 17:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_737 (insn, operands);

        case 18:
          if (!
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_739 (insn, operands);

        case 19:
          if (!(
#line 18271 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_741 (insn, operands);

        case 20:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (1 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_767 (insn, operands);

        case 21:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (2 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_769 (insn, operands);

        case 22:
          if (!
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0))
            return NULL;
          return gen_split_771 (insn, operands);

        case 23:
          if (!(
#line 18340 "../../src/gcc/config/i386/i386.md"
((INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_773 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != CONST_INT)
        return NULL;
      switch (XWINT (x5, 0))
        {
        case 32L:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || !register_operand (operands[1], E_DImode)
              || !(
#line 18427 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 18429 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_779 (insn, operands);

        case 64L:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x3) != E_TImode
              || !register_operand (operands[1], E_TImode)
              || !(
#line 18445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 18447 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_781 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_21 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      switch (pattern1176 (x3))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (nonimmediate_operand (operands[0], E_DImode)
                  && GET_MODE (x4) == E_DImode
                  && nonimmediate_operand (operands[1], E_DImode))
                {
                  if (x86_64_hilo_general_operand (operands[2], E_DImode)
                      && ((
#line 12501 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 12503 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_283 (insn, operands);
                  if (const_int_operand (operands[2], E_DImode)
                      && (
#line 12576 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (AND, DImode, operands)
   && IN_RANGE (exact_log2 (~INTVAL (operands[2])), 31, 63)) && 
#line 12580 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_285 (insn, operands);
                }
              break;

            case E_TImode:
              if (pattern563 (x4, 
E_TImode) == 0
                  && ((
#line 12501 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12503 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_284 (insn, operands);
              break;

            case E_HImode:
              if (pattern1351 (x4, 
E_HImode) == 0
                  && 
#line 12825 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))))
                return gen_split_311 (insn, operands);
              break;

            case E_SImode:
              if (pattern1351 (x4, 
E_SImode) == 0
                  && 
#line 12825 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))))
                return gen_split_312 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case 1:
          if ((
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_287 (insn, operands);
          break;

        case 2:
          if ((
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_290 (insn, operands);
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 1);
      if (GET_CODE (x6) == CONST_INT)
        {
          res = split_17 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      if (GET_CODE (x5) == SUBREG
          && known_eq (SUBREG_BYTE (x5), 0))
        {
          res = split_18 (x1, insn);
          if (res != NULL_RTX)
            return res;
        }
      if (GET_CODE (x6) != CONST_INT)
        return NULL;
      operands[2] = x6;
      if (const_int_operand (operands[2], E_DImode))
        {
          x7 = XEXP (x3, 0);
          operands[0] = x7;
          if (register_operand (operands[0], E_DImode)
              && GET_MODE (x4) == E_DImode)
            {
              operands[1] = x5;
              if (nonimmediate_operand (operands[1], E_DImode)
                  && (
#line 12825 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && (!REG_P (operands[1])
       || REGNO (operands[0]) != REGNO (operands[1]))
   && (UINTVAL (operands[2]) == GET_MODE_MASK (SImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (HImode)
       || UINTVAL (operands[2]) == GET_MODE_MASK (QImode))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_313 (insn, operands);
            }
        }
      x7 = XEXP (x3, 0);
      operands[0] = x7;
      if (GET_MODE (x4) != E_DImode)
        return NULL;
      if (rtx_equal_p (x5, operands[0]))
        {
          switch (XWINT (x6, 0))
            {
            case -65536L:
              if (register_operand (operands[0], E_DImode)
                  && (
#line 12860 "../../src/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_315 (insn, operands);
              break;

            case -256L:
              if (any_QIreg_operand (operands[0], E_DImode)
                  && (
#line 12870 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_318 (insn, operands);
              break;

            case -65281L:
              if (QIreg_operand (operands[0], E_DImode)
                  && (
#line 12880 "../../src/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_321 (insn, operands);
              break;

            default:
              break;
            }
        }
      operands[1] = x5;
      if (register_operand (operands[1], E_DImode)
          && QIreg_operand (operands[0], E_DImode))
        {
          operands[2] = x6;
          if (const_int_operand (operands[2], E_DImode)
              && (
#line 13261 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && !(TARGET_APX_NDD && REGNO (operands[0]) != REGNO (operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_369 (insn, operands);
        }
      if (general_operand (operands[1], E_DImode)
          && any_QIreg_operand (operands[0], E_DImode))
        {
          operands[2] = x6;
          if (const_int_operand (operands[2], E_DImode)
              && (
#line 13290 "../../src/gcc/config/i386/i386.md"
(reload_completed
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && !(TARGET_APX_NDD
	 && !rtx_equal_p (operands[0], operands[1]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_372 (insn, operands);
        }
      if (GET_CODE (x5) != SUBREG
          || maybe_ne (SUBREG_BYTE (x5), 0)
          || GET_MODE (x5) != E_DImode
          || XWINT (x6, 0) != 63L
          || !register_operand (operands[0], E_DImode))
        return NULL;
      x8 = XEXP (x5, 0);
      if (GET_MODE (x8) != E_SImode)
        return NULL;
      switch (GET_CODE (x8))
        {
        case CTZ:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 21118 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT) && 
#line 21120 "../../src/gcc/config/i386/i386.md"
( (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_875 (insn, operands);

        case CLZ:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 21557 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT) && 
#line 21559 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_888 (insn, operands);

        case POPCOUNT:
          x9 = XEXP (x8, 0);
          operands[1] = x9;
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !(
#line 22382 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT) && 
#line 22390 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_912 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x7 = XEXP (x3, 0);
      operands[0] = x7;
      x8 = XEXP (x5, 0);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[1] = x8;
          x6 = XEXP (x4, 1);
          operands[2] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1432 (x4, 
E_DImode) == 0)
                {
                  if (((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13314 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_373 (insn, operands);
                  if (((
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13333 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_375 (insn, operands);
                }
              break;

            case E_TImode:
              if (pattern1432 (x4, 
E_TImode) == 0)
                {
                  if (((
#line 13312 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13314 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return gen_split_374 (insn, operands);
                  if (((
#line 13330 "../../src/gcc/config/i386/i386.md"
(!TARGET_BMI
   && ix86_pre_reload_split ()) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13333 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_376 (insn, operands);
                }
              break;

            case E_SImode:
              if (pattern1432 (x4, 
E_SImode) == 0
                  && 
#line 13398 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && REGNO (operands[0]) == REGNO (operands[1])
   && LEGACY_INT_REG_P (operands[0])
   && !REX_INT_REG_P (operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
                return gen_split_377 (insn, operands);
              break;

            default:
              break;
            }
          if (GET_CODE (x8) != SUBREG
              || maybe_ne (SUBREG_BYTE (x8), 0)
              || GET_MODE (x8) != E_QImode)
            return NULL;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != LSHIFTRT
              || x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1527 (x4))
            {
            case 0:
              if (!(
#line 19344 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19346 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_838 (insn, operands);

            case 1:
              if (!((
#line 19344 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19346 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_839 (insn, operands);

            default:
              return NULL;
            }

        case LSHIFTRT:
          x6 = XEXP (x4, 1);
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1244 (x4))
            {
            case 0:
              if (!(
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19364 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_840 (insn, operands);

            case 1:
              if (!((
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19364 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_841 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case ROTATE:
      switch (pattern1058 (x3, 
-2))
        {
        case 0:
          if (!(
#line 18892 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18897 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_804 (insn, operands);

        case 1:
          if (!((
#line 18892 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18897 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_805 (insn, operands);

        case 2:
          if (!(
#line 18920 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 18925 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_806 (insn, operands);

        case 3:
          if (!((
#line 18920 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 18925 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_807 (insn, operands);

        default:
          return NULL;
        }

    case NEG:
      switch (pattern952 (x3))
        {
        case 0:
          if (!(
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21763 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_898 (insn, operands);

        case 1:
          if (!((
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21763 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_899 (insn, operands);

        default:
          return NULL;
        }

    case PLUS:
      x10 = XEXP (x5, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
        return NULL;
      switch (pattern952 (x3))
        {
        case 0:
          if (!(
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21908 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_904 (insn, operands);

        case 1:
          if (!((
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21908 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_905 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_31 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern202 (x1))
    {
    case 0:
      x2 = XVECEXP (x1, 0, 0);
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) == SUBREG)
        {
          switch (pattern1333 (x4))
            {
            case 0:
              if (((
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16587 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_590 (insn, operands);
              break;

            case 1:
              if (((
#line 16582 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16587 "../../src/gcc/config/i386/i386.md"
( 1)))
                return gen_split_592 (insn, operands);
              break;

            default:
              break;
            }
        }
      if (GET_MODE (x4) == E_SImode
          && nonimmediate_operand (operands[1], E_SImode))
        {
          if (register_operand (operands[0], E_SImode))
            {
              operands[2] = x5;
              if (register_operand (operands[2], E_QImode)
                  && 
#line 17435 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed))
                return gen_split_623 (insn, operands);
            }
          if (GET_CODE (x5) == SUBREG)
            {
              switch (pattern1506 (x5))
                {
                case 0:
                  if ((
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17845 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_640 (insn, operands);
                  break;

                case 1:
                  if ((
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17892 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_652 (insn, operands);
                  break;

                case 2:
                  if ((
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17938 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_664 (insn, operands);
                  break;

                default:
                  break;
                }
            }
        }
      operands[2] = x5;
      switch (pattern1252 (x2))
        {
        case 0:
          if (register_operand (operands[1], E_DImode)
              && nonmemory_operand (operands[2], E_QImode)
              && (
#line 16694 "../../src/gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return gen_split_598 (insn, operands);
          if (nonimmediate_operand (operands[1], E_DImode)
              && register_operand (operands[2], E_QImode)
              && (
#line 17435 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_625 (insn, operands);
          break;

        case 1:
          if ((
#line 16694 "../../src/gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_600 (insn, operands);
          break;

        case 2:
          if ((
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_629 (insn, operands);
          break;

        case 3:
          if ((
#line 17638 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 17649 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return gen_split_631 (insn, operands);
          break;

        default:
          break;
        }
      if (GET_CODE (x5) != SUBREG)
        return NULL;
      switch (pattern1166 (x2, 
E_DImode))
        {
        case 0:
          if (!((
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17845 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_643 (insn, operands);

        case 1:
          if (!((
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17892 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_655 (insn, operands);

        case 2:
          if (!((
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17938 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_667 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && ((
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (4 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 4 * BITS_PER_UNIT - 1))
	 == (2 * 4 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 16648 "../../src/gcc/config/i386/i386.md"
( 1)))
        return gen_split_594 (insn, operands);
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !nonimmediate_operand (operands[1], E_DImode)
          || !((
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1))
      == 8 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17870 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_649 (insn, operands);

    case 2:
      if (!((
#line 16643 "../../src/gcc/config/i386/i386.md"
(((INTVAL (operands[3]) & (8 * BITS_PER_UNIT)) == 0
    || ((INTVAL (operands[3]) & (2 * 8 * BITS_PER_UNIT - 1))
	 == (2 * 8 * BITS_PER_UNIT - 1)))
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 16648 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_596 (insn, operands);

    case 3:
      if (!(
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()) && 
#line 17870 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_646 (insn, operands);

    case 4:
      if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17916 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_658 (insn, operands);

    case 5:
      if (!((
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17916 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_661 (insn, operands);

    case 6:
      if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 17968 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_670 (insn, operands);

    case 7:
      if (!((
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17968 "../../src/gcc/config/i386/i386.md"
( 1)))
        return NULL;
      return gen_split_673 (insn, operands);

    case 8:
      if (!((
#line 17988 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 17991 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_674 (insn, operands);

    case 9:
      if (!((
#line 17988 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == INTVAL (operands[3])
   && UINTVAL (operands[2]) < 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 17991 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_675 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_40 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return NULL;
  x5 = XEXP (x3, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x1, 0);
  operands[0] = x6;
  x7 = XEXP (x2, 1);
  operands[2] = x7;
  x8 = XEXP (x2, 2);
  operands[3] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x2) != E_HImode
          || !ix86_comparison_operator (operands[1], E_VOIDmode))
        return NULL;
      if (nonimmediate_operand (operands[2], E_HImode)
          && nonimmediate_operand (operands[3], E_HImode)
          && 
#line 26375 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return gen_split_947 (insn, operands);
      if (!register_operand (operands[2], E_HImode)
          || !register_operand (operands[3], E_HImode)
          || !
#line 26405 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed))
        return NULL;
      return gen_split_951 (insn, operands);

    case E_SImode:
      if (pattern1197 (x2, 
E_SImode) != 0
          || !
#line 26375 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_948 (insn, operands);

    case E_DImode:
      if (pattern1197 (x2, 
E_DImode) != 0
          || !(
#line 26375 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      return gen_split_949 (insn, operands);

    case E_QImode:
      if (pattern1198 (x2) != 0
          || !
#line 26405 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed))
        return NULL;
      return gen_split_950 (insn, operands);

    case E_DFmode:
      if (GET_MODE (x2) != E_DFmode
          || !nonimmediate_operand (operands[2], E_DFmode)
          || !nonimmediate_operand (operands[3], E_DFmode))
        return NULL;
      if (general_reg_operand (operands[0], E_DFmode)
          && fcmov_comparison_operator (operands[1], E_VOIDmode)
          && 
#line 26621 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_952 (insn, operands);
      if (!register_operand (operands[0], E_DFmode)
          || !ix86_comparison_operator (operands[1], E_VOIDmode)
          || !
#line 26655 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_954 (insn, operands);

    case E_SFmode:
      if (pattern1197 (x2, 
E_SFmode) != 0
          || !
#line 26655 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()))
        return NULL;
      return gen_split_953 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_45 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (nonimmediate_gr_operand (operands[0], E_V8QImode)
          && nonimmediate_gr_operand (operands[1], E_V8QImode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_989 (insn, operands);
      break;

    case E_V4HImode:
      if (nonimmediate_gr_operand (operands[0], E_V4HImode)
          && nonimmediate_gr_operand (operands[1], E_V4HImode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_990 (insn, operands);
      break;

    case E_V2SImode:
      if (nonimmediate_gr_operand (operands[0], E_V2SImode)
          && nonimmediate_gr_operand (operands[1], E_V2SImode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_991 (insn, operands);
      break;

    case E_V1DImode:
      if (nonimmediate_gr_operand (operands[0], E_V1DImode)
          && nonimmediate_gr_operand (operands[1], E_V1DImode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_992 (insn, operands);
      break;

    case E_V2SFmode:
      if (nonimmediate_gr_operand (operands[0], E_V2SFmode)
          && nonimmediate_gr_operand (operands[1], E_V2SFmode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_993 (insn, operands);
      break;

    case E_V4HFmode:
      if (nonimmediate_gr_operand (operands[0], E_V4HFmode)
          && nonimmediate_gr_operand (operands[1], E_V4HFmode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_994 (insn, operands);
      break;

    case E_V4BFmode:
      if (nonimmediate_gr_operand (operands[0], E_V4BFmode)
          && nonimmediate_gr_operand (operands[1], E_V4BFmode)
          && 
#line 310 "../../src/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed))
        return gen_split_995 (insn, operands);
      break;

    case E_V4QImode:
      if (push_operand (operands[0], E_V4QImode)
          && sse_reg_operand (operands[1], E_V4QImode))
        {
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1013 (insn, operands);
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1018 (insn, operands);
        }
      break;

    case E_V2HImode:
      if (push_operand (operands[0], E_V2HImode)
          && sse_reg_operand (operands[1], E_V2HImode))
        {
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1014 (insn, operands);
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1019 (insn, operands);
        }
      break;

    case E_V1SImode:
      if (push_operand (operands[0], E_V1SImode)
          && sse_reg_operand (operands[1], E_V1SImode))
        {
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1015 (insn, operands);
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1020 (insn, operands);
        }
      break;

    case E_V2HFmode:
      if (push_operand (operands[0], E_V2HFmode)
          && sse_reg_operand (operands[1], E_V2HFmode))
        {
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1016 (insn, operands);
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1021 (insn, operands);
        }
      break;

    case E_V2BFmode:
      if (push_operand (operands[0], E_V2BFmode)
          && sse_reg_operand (operands[1], E_V2BFmode))
        {
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1017 (insn, operands);
          if ((
#line 440 "../../src/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_SSE && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1022 (insn, operands);
        }
      break;

    case E_V2QImode:
      if (push_operand (operands[0], E_V2QImode)
          && sse_reg_operand (operands[1], E_V2QImode))
        {
          if ((
#line 614 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_1023 (insn, operands);
          if ((
#line 614 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return gen_split_1024 (insn, operands);
        }
      break;

    case E_P2QImode:
      if (nonimmediate_operand (operands[0], E_P2QImode)
          && nonimmediate_operand (operands[1], E_P2QImode)
          && (
#line 30958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 30961 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return gen_split_3817 (insn, operands);
      break;

    case E_P2HImode:
      if (nonimmediate_operand (operands[0], E_P2HImode)
          && nonimmediate_operand (operands[1], E_P2HImode)
          && (
#line 30958 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VP2INTERSECT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 30961 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return gen_split_3818 (insn, operands);
      break;

    default:
      break;
    }
  if (GET_CODE (x2) != SUBREG)
    return NULL;
  operands[0] = x3;
  switch (SUBREG_BYTE (x2))
    {
    case 8:
      if (GET_MODE (x2) != E_DFmode
          || !register_operand (operands[0], E_DFmode))
        return NULL;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DFmode)
          || !
#line 14652 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return NULL;
      return gen_split_3172 (insn, operands);

    case 0:
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_DFmode:
              if (!register_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_V2DFmode)
                  || !
#line 14705 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return NULL;
              return gen_split_3174 (insn, operands);

            case E_SImode:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !register_operand (operands[1], E_VOIDmode)
                  || !
#line 21462 "../../src/gcc/config/i386/sse.md"
(can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (SImode == SImode || TARGET_64BIT || MEM_P (operands[0]))))
                return NULL;
              return gen_split_3400 (insn, operands);

            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || GET_MODE (x2) != E_DImode
                  || !register_operand (operands[1], E_VOIDmode)
                  || !
#line 21462 "../../src/gcc/config/i386/sse.md"
(can_create_pseudo_p ()
   && REG_P (operands[1])
   && VECTOR_MODE_P (GET_MODE (operands[1]))
   && ((TARGET_SSE && GET_MODE_SIZE (GET_MODE (operands[1])) == 16)
       || (TARGET_AVX && GET_MODE_SIZE (GET_MODE (operands[1])) == 32)
       || (TARGET_AVX512F && TARGET_EVEX512
	   && GET_MODE_SIZE (GET_MODE (operands[1])) == 64))
   && (DImode == SImode || TARGET_64BIT || MEM_P (operands[0]))))
                return NULL;
              return gen_split_3401 (insn, operands);

            default:
              return NULL;
            }

        case SS_TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15427 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3186 (insn, operands);

            case 1:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3189 (insn, operands);

            case 2:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3192 (insn, operands);

            case 3:
              if (!(
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15873 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3208 (insn, operands);

            case 4:
              if (!((
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3195 (insn, operands);

            case 5:
              if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3198 (insn, operands);

            case 6:
              if (!(
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16136 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3215 (insn, operands);

            case 7:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3202 (insn, operands);

            case 8:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3205 (insn, operands);

            case 9:
              if (!(
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16023 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3212 (insn, operands);

            default:
              return NULL;
            }

        case TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15427 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3187 (insn, operands);

            case 1:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3190 (insn, operands);

            case 2:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3193 (insn, operands);

            case 3:
              if (!(
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15873 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3209 (insn, operands);

            case 4:
              if (!((
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3196 (insn, operands);

            case 5:
              if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3199 (insn, operands);

            case 6:
              if (!(
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16136 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3216 (insn, operands);

            case 7:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3203 (insn, operands);

            case 8:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3206 (insn, operands);

            case 9:
              if (!(
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16023 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3213 (insn, operands);

            default:
              return NULL;
            }

        case US_TRUNCATE:
          switch (pattern724 (x2))
            {
            case 0:
              if (!(
#line 15425 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15427 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3188 (insn, operands);

            case 1:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3191 (insn, operands);

            case 2:
              if (!(
#line 15520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15522 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3194 (insn, operands);

            case 3:
              if (!(
#line 15871 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15873 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3210 (insn, operands);

            case 4:
              if (!((
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3197 (insn, operands);

            case 5:
              if (!(
#line 15618 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15620 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3200 (insn, operands);

            case 6:
              if (!(
#line 16134 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 16136 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3217 (insn, operands);

            case 7:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3204 (insn, operands);

            case 8:
              if (!(
#line 15780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 15782 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3207 (insn, operands);

            case 9:
              if (!(
#line 16021 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 16023 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3214 (insn, operands);

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
split_60 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V2DFmode:
      if (!nonimmediate_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DFmode:
          if (!register_operand (operands[1], E_V8DFmode)
              || !(
#line 12484 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1559 (insn, operands);

        case E_V4DFmode:
          if (!nonimmediate_operand (operands[1], E_V4DFmode)
              || !
#line 12902 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1568 (insn, operands);

        default:
          return NULL;
        }

    case E_V2DImode:
      if (!nonimmediate_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode)
              || !(
#line 12484 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_1560 (insn, operands);

        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !
#line 12902 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed))
            return NULL;
          return gen_split_1567 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_62 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern835 (x3) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 4);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return NULL;
  x5 = XVECEXP (x3, 0, 5);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return NULL;
  x6 = XVECEXP (x3, 0, 6);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return NULL;
  x7 = XVECEXP (x3, 0, 7);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return NULL;
  switch (pattern1533 (x2))
    {
    case 0:
      if (!(
#line 12854 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1565 (insn, operands);

    case 1:
      if (!(
#line 12854 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1]))) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return NULL;
      return gen_split_1566 (insn, operands);

    case 2:
      if (!(
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13096 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1574 (insn, operands);

    case 3:
      if (!(
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13096 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1575 (insn, operands);

    case 4:
      if (!(
#line 13094 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13096 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_1576 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_63 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      res = split_60 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 4:
      res = split_61 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 8:
      res = split_62 (x1, insn);
      if (res != NULL_RTX)
        return res;
      break;

    case 16:
      if (pattern836 (x3, 
6, 
5, 
4) == 0
          && pattern1508 (x3, 
11, 
10, 
9, 
8, 
7) == 0)
        {
          switch (pattern1779 (x2))
            {
            case 0:
              if (((
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13047 "../../src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1571 (insn, operands);
              break;

            case 1:
              if (((
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13047 "../../src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1572 (insn, operands);
              break;

            case 2:
              if (((
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 13047 "../../src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
                return gen_split_1573 (insn, operands);
              break;

            case 3:
              if ((
#line 13208 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13210 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return gen_split_1578 (insn, operands);
              break;

            default:
              break;
            }
        }
      break;

    case 32:
      if (pattern838 (x3, 
11, 
10, 
9, 
8) == 0
          && pattern1690 (x3, 
15, 
14, 
13, 
12, 
16) == 0
          && pattern1800 (x3, 
21, 
20, 
19, 
18, 
17) == 0
          && pattern1842 (x3, 
26, 
25, 
24, 
23, 
22) == 0)
        {
          x4 = XVECEXP (x3, 0, 27);
          if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 27]
              && pattern1860 (x3, 
31, 
30, 
29, 
28) == 0
              && nonimmediate_operand (operands[0], E_V32QImode)
              && GET_MODE (x2) == E_V32QImode
              && nonimmediate_operand (operands[1], E_V64QImode)
              && (
#line 13140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 13150 "../../src/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_AVX512VL
       || REG_P (operands[0])
       || !EXT_REX_SSE_REG_P (operands[1])))))
            return gen_split_1577 (insn, operands);
        }
      break;

    default:
      break;
    }
  if (XVECLEN (x3, 0) < 1)
    return NULL;
  operands[2] = x3;
  if (!avx_vbroadcast_operand (operands[2], E_VOIDmode))
    return NULL;
  x5 = XVECEXP (x3, 0, 0);
  operands[3] = x5;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !(
#line 27401 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (V8SFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && 
#line 27404 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_3725 (insn, operands);

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !(
#line 27401 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX
   && (V4DFmode != V4DFmode || !TARGET_AVX2 || operands[3] == const0_rtx)) && 
#line 27404 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
        return NULL;
      return gen_split_3726 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_66 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern956 (x2, 
E_V32BFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1488 (insn, operands);

        case E_V16BFmode:
          if (pattern956 (x2, 
E_V16BFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1489 (insn, operands);

        case E_V8BFmode:
          if (pattern956 (x2, 
E_V8BFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 412 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1490 (insn, operands);

        case E_V32HFmode:
          if (pattern956 (x2, 
E_V32HFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 413 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1491 (insn, operands);

        case E_V16HFmode:
          if (pattern956 (x2, 
E_V16HFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1492 (insn, operands);

        case E_V8HFmode:
          if (pattern956 (x2, 
E_V8HFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 414 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1493 (insn, operands);

        case E_V16SFmode:
          if (pattern956 (x2, 
E_V16SFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1494 (insn, operands);

        case E_V8SFmode:
          if (pattern956 (x2, 
E_V8SFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 415 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1495 (insn, operands);

        case E_V4SFmode:
          if (pattern956 (x2, 
E_V4SFmode) != 0
              || !(
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1496 (insn, operands);

        case E_V8DFmode:
          if (pattern956 (x2, 
E_V8DFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 416 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1497 (insn, operands);

        case E_V4DFmode:
          if (pattern956 (x2, 
E_V4DFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1498 (insn, operands);

        case E_V2DFmode:
          if (pattern956 (x2, 
E_V2DFmode) != 0
              || !((
#line 5470 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()) && 
#line 417 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 5472 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1499 (insn, operands);

        default:
          return NULL;
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
              return gen_split_1659 (insn, operands);

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
              return gen_split_1686 (insn, operands);

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
              return gen_split_1713 (insn, operands);

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
              return gen_split_1740 (insn, operands);

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
              return gen_split_1767 (insn, operands);

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
              return gen_split_1794 (insn, operands);

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
              return gen_split_1821 (insn, operands);

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
              return gen_split_1848 (insn, operands);

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
              return gen_split_1875 (insn, operands);

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
              return gen_split_1902 (insn, operands);

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
              return gen_split_1929 (insn, operands);

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
              return gen_split_1956 (insn, operands);

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
              return gen_split_1662 (insn, operands);

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
              return gen_split_1689 (insn, operands);

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
              return gen_split_1716 (insn, operands);

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
              return gen_split_1743 (insn, operands);

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
              return gen_split_1770 (insn, operands);

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
              return gen_split_1797 (insn, operands);

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
              return gen_split_1824 (insn, operands);

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
              return gen_split_1851 (insn, operands);

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
              return gen_split_1878 (insn, operands);

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
              return gen_split_1905 (insn, operands);

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
              return gen_split_1932 (insn, operands);

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
              return gen_split_1959 (insn, operands);

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
              return gen_split_1665 (insn, operands);

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
              return gen_split_1692 (insn, operands);

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
              return gen_split_1719 (insn, operands);

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
              return gen_split_1746 (insn, operands);

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
              return gen_split_1773 (insn, operands);

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
              return gen_split_1800 (insn, operands);

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
              return gen_split_1827 (insn, operands);

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
              return gen_split_1854 (insn, operands);

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
              return gen_split_1881 (insn, operands);

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
              return gen_split_1908 (insn, operands);

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
              return gen_split_1935 (insn, operands);

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
              return gen_split_1962 (insn, operands);

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
              return gen_split_2955 (insn, operands);

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
              return gen_split_2964 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2973 (insn, operands);

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
              return gen_split_2982 (insn, operands);

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
              return gen_split_2991 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3000 (insn, operands);

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
              return gen_split_3009 (insn, operands);

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
              return gen_split_3018 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3027 (insn, operands);

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
              return gen_split_3036 (insn, operands);

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
              return gen_split_3045 (insn, operands);

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3054 (insn, operands);

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
              return gen_split_2307 (insn, operands);

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
              return gen_split_2334 (insn, operands);

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
              return gen_split_2361 (insn, operands);

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
              return gen_split_2388 (insn, operands);

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
              return gen_split_2415 (insn, operands);

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
              return gen_split_2442 (insn, operands);

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
              return gen_split_2469 (insn, operands);

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
              return gen_split_2496 (insn, operands);

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
              return gen_split_2523 (insn, operands);

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
              return gen_split_2550 (insn, operands);

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
              return gen_split_2577 (insn, operands);

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
              return gen_split_2604 (insn, operands);

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
              return gen_split_2310 (insn, operands);

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
              return gen_split_2337 (insn, operands);

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
              return gen_split_2364 (insn, operands);

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
              return gen_split_2391 (insn, operands);

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
              return gen_split_2418 (insn, operands);

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
              return gen_split_2445 (insn, operands);

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
              return gen_split_2472 (insn, operands);

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
              return gen_split_2499 (insn, operands);

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
              return gen_split_2526 (insn, operands);

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
              return gen_split_2553 (insn, operands);

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
              return gen_split_2580 (insn, operands);

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
              return gen_split_2607 (insn, operands);

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
              return gen_split_2313 (insn, operands);

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
              return gen_split_2340 (insn, operands);

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
              return gen_split_2367 (insn, operands);

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
              return gen_split_2394 (insn, operands);

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
              return gen_split_2421 (insn, operands);

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
              return gen_split_2448 (insn, operands);

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
              return gen_split_2475 (insn, operands);

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
              return gen_split_2502 (insn, operands);

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
              return gen_split_2529 (insn, operands);

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
              return gen_split_2556 (insn, operands);

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
              return gen_split_2583 (insn, operands);

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
              return gen_split_2610 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      return split_65 (x1, insn);

    case XOR:
      return split_64 (x1, insn);

    case GT:
      switch (pattern337 (x2))
        {
        case 0:
          if (!((
#line 17338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17340 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3235 (insn, operands);

        case 1:
          if (!(
#line 17338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_2 && ix86_pre_reload_split ()) && 
#line 17340 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3236 (insn, operands);

        default:
          return NULL;
        }

    case LT:
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4DImode:
          if (pattern934 (x2, 
E_V4DImode) != 0)
            return NULL;
          if (((
#line 17355 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 704 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17357 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3237 (insn, operands);
          if (!(
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3243 (insn, operands);

        case E_V2DImode:
          if (pattern934 (x2, 
E_V2DImode) != 0)
            return NULL;
          if ((
#line 17355 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17357 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3238 (insn, operands);
          if (!
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3244 (insn, operands);

        case E_V16HImode:
          if (pattern934 (x2, 
E_V16HImode) != 0
              || !(
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 774 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3239 (insn, operands);

        case E_V8HImode:
          if (pattern934 (x2, 
E_V8HImode) != 0
              || !
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3240 (insn, operands);

        case E_V8SImode:
          if (pattern934 (x2, 
E_V8SImode) != 0
              || !(
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return NULL;
          return gen_split_3241 (insn, operands);

        case E_V4SImode:
          if (pattern934 (x2, 
E_V4SImode) != 0
              || !
#line 17367 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return NULL;
          return gen_split_3242 (insn, operands);

        default:
          return NULL;
        }

    case VEC_DUPLICATE:
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != NOT)
        return NULL;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SImode:
          if (pattern1062 (x2, 
E_V4SImode, 
E_SImode) != 0)
            return NULL;
          if (register_operand (operands[1], E_SImode)
              && 
#line 18630 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return gen_split_3346 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3356 (insn, operands);

        case E_V2DImode:
          if (pattern1062 (x2, 
E_V2DImode, 
E_DImode) != 0)
            return NULL;
          if (register_operand (operands[1], E_DImode)
              && 
#line 18630 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return gen_split_3347 (insn, operands);
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3359 (insn, operands);

        case E_V64QImode:
          if (pattern594 (x2, 
E_V64QImode, 
E_QImode) != 0
              || !(
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 587 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3348 (insn, operands);

        case E_V32QImode:
          if (pattern594 (x2, 
E_V32QImode, 
E_QImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3349 (insn, operands);

        case E_V16QImode:
          if (pattern594 (x2, 
E_V16QImode, 
E_QImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3350 (insn, operands);

        case E_V32HImode:
          if (pattern594 (x2, 
E_V32HImode, 
E_HImode) != 0
              || !(
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 588 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3351 (insn, operands);

        case E_V16HImode:
          if (pattern594 (x2, 
E_V16HImode, 
E_HImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3352 (insn, operands);

        case E_V8HImode:
          if (pattern594 (x2, 
E_V8HImode, 
E_HImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3353 (insn, operands);

        case E_V16SImode:
          if (pattern594 (x2, 
E_V16SImode, 
E_SImode) != 0
              || !(
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 589 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3354 (insn, operands);

        case E_V8SImode:
          if (pattern594 (x2, 
E_V8SImode, 
E_SImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3355 (insn, operands);

        case E_V8DImode:
          if (pattern594 (x2, 
E_V8DImode, 
E_DImode) != 0
              || !(
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3357 (insn, operands);

        case E_V4DImode:
          if (pattern594 (x2, 
E_V4DImode, 
E_DImode) != 0
              || !
#line 18646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2))
            return NULL;
          return gen_split_3358 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_82 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NOT:
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern617 (x2, 
E_V16SImode, 
E_SImode) != 0
              || !(
#line 18462 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 803 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3340 (insn, operands);

        case E_V8SImode:
          if (pattern617 (x2, 
E_V8SImode, 
E_SImode) != 0
              || !
#line 18462 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3341 (insn, operands);

        case E_V4SImode:
          if (pattern617 (x2, 
E_V4SImode, 
E_SImode) != 0
              || !
#line 18462 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3342 (insn, operands);

        case E_V8DImode:
          if (pattern617 (x2, 
E_V8DImode, 
E_DImode) != 0
              || !(
#line 18462 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 804 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3343 (insn, operands);

        case E_V4DImode:
          if (pattern617 (x2, 
E_V4DImode, 
E_DImode) != 0
              || !
#line 18462 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3344 (insn, operands);

        case E_V2DImode:
          if (pattern617 (x2, 
E_V2DImode, 
E_DImode) != 0
              || !
#line 18462 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3345 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (!register_operand (operands[0], E_V32QImode)
              || GET_MODE (x2) != E_V32QImode
              || !register_operand (operands[1], E_QImode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3728 (insn, operands);

        case E_V16QImode:
          if (!register_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || !register_operand (operands[1], E_QImode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || QImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3729 (insn, operands);

        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3730 (insn, operands);

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x2) != E_V8HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3731 (insn, operands);

        case E_V8SImode:
          if (!register_operand (operands[0], E_V8SImode)
              || GET_MODE (x2) != E_V8SImode
              || !register_operand (operands[1], E_SImode))
            return NULL;
          if (
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return gen_split_3732 (insn, operands);
          if (!
#line 28001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3738 (insn, operands);

        case E_V4SImode:
          if (!register_operand (operands[0], E_V4SImode)
              || GET_MODE (x2) != E_V4SImode
              || !register_operand (operands[1], E_SImode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || SImode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3733 (insn, operands);

        case E_V16HFmode:
          if (!register_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3734 (insn, operands);

        case E_V8HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x2) != E_V8HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || HFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3735 (insn, operands);

        case E_V16BFmode:
          if (!register_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || BFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3736 (insn, operands);

        case E_V8BFmode:
          if (!register_operand (operands[0], E_V8BFmode)
              || GET_MODE (x2) != E_V8BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 27978 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   /* Disable this splitter if avx512vl_vec_dup_gprv*[qhs]i insn is
      available, because then we can broadcast from GPRs directly.
      For V*[QH]I modes it requires both -mavx512vl and -mavx512bw,
      for V*SI mode it requires just -mavx512vl.  */
   && !(TARGET_AVX512VL
	&& (TARGET_AVX512BW || BFmode == SImode))
   && reload_completed && GENERAL_REG_P (operands[1])))
            return NULL;
          return gen_split_3737 (insn, operands);

        case E_V8SFmode:
          if (!register_operand (operands[0], E_V8SFmode)
              || GET_MODE (x2) != E_V8SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 28001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3739 (insn, operands);

        case E_V4DImode:
          if (!register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode
              || !register_operand (operands[1], E_DImode)
              || !
#line 28001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3740 (insn, operands);

        case E_V4DFmode:
          if (!register_operand (operands[0], E_V4DFmode)
              || GET_MODE (x2) != E_V4DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 28001 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed))
            return NULL;
          return gen_split_3741 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_84 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  res = split_81 (x1, insn);
  if (res != NULL_RTX)
    return res;
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      return split_79 (x1, insn);

    case VEC_MERGE:
      return split_78 (x1, insn);

    case VEC_SELECT:
      return split_83 (x1, insn);

    case AND:
    case IOR:
    case XOR:
    case NOT:
      return split_80 (x1, insn);

    case PLUS:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != UNSPEC)
        return NULL;
      switch (pattern184 (x2))
        {
        case 0:
          if (!((
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7177 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1500 (insn, operands);

        case 1:
          if (!((
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7177 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1501 (insn, operands);

        case 2:
          if (!((
#line 7174 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7177 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1502 (insn, operands);

        case 3:
          if (!((
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7194 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1503 (insn, operands);

        case 4:
          if (!((
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7194 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1504 (insn, operands);

        case 5:
          if (!((
#line 7191 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7194 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1505 (insn, operands);

        case 6:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1506 (insn, operands);

        case 7:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1508 (insn, operands);

        case 8:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1510 (insn, operands);

        case 9:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1507 (insn, operands);

        case 10:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1509 (insn, operands);

        case 11:
          if (!((
#line 7209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && flag_unsafe_math_optimizations
  && ix86_pre_reload_split ()) && 
#line 554 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 7212 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_1511 (insn, operands);

        default:
          return NULL;
        }

    case VEC_CONCAT:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case ZERO_EXTEND:
          switch (pattern179 (x2))
            {
            case 0:
              if (!(
#line 12110 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && ix86_pre_reload_split ()) && 
#line 12112 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1549 (insn, operands);

            case 1:
              if (!(
#line 12224 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 12226 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_1553 (insn, operands);

            default:
              return NULL;
            }

        case VEC_SELECT:
          if (GET_MODE (x3) != E_DFmode)
            return NULL;
          x4 = XEXP (x3, 1);
          if (GET_CODE (x4) != PARALLEL
              || XVECLEN (x4, 0) != 1)
            return NULL;
          x5 = XVECEXP (x4, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !memory_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode)
            return NULL;
          x6 = XEXP (x2, 1);
          operands[1] = x6;
          if (!register_operand (operands[1], E_DFmode))
            return NULL;
          x7 = XEXP (x3, 0);
          if (!rtx_equal_p (x7, operands[0])
              || !
#line 14764 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed))
            return NULL;
          return gen_split_3175 (insn, operands);

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x3;
          res = split_77 (x1, insn);
          if (res != NULL_RTX)
            return res;
          if (GET_CODE (x3) != SUBREG
              || pattern596 (x2) != 0
              || !register_operand (operands[0], E_V4DImode)
              || GET_MODE (x2) != E_V4DImode)
            return NULL;
          x7 = XEXP (x3, 0);
          x8 = XVECEXP (x7, 0, 0);
          operands[1] = x8;
          if (!memory_operand (operands[1], E_V16QImode))
            return NULL;
          x6 = XEXP (x2, 1);
          x9 = XEXP (x6, 0);
          x10 = XVECEXP (x9, 0, 0);
          if (!rtx_equal_p (x10, operands[1])
              || !(
#line 27921 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_pre_reload_split ()) && 
#line 27923 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3727 (insn, operands);

        case VEC_CONCAT:
          if (pattern408 (x2) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SImode:
              if (pattern1483 (x2, 
E_V8SImode, 
E_V4SImode, 
E_V16SImode) != 0
                  || !((
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30153 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3811 (insn, operands);

            case E_V16SFmode:
              if (pattern1483 (x2, 
E_V8SFmode, 
E_V4SFmode, 
E_V16SFmode) != 0
                  || !((
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30153 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3812 (insn, operands);

            case E_V8DFmode:
              if (pattern1483 (x2, 
E_V4DFmode, 
E_V2DFmode, 
E_V8DFmode) != 0
                  || !((
#line 30151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1444 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 30153 "../../src/gcc/config/i386/sse.md"
( reload_completed)))
                return NULL;
              return gen_split_3813 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case EQ:
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case US_MINUS:
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          x6 = XEXP (x2, 1);
          operands[3] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V32QImode:
              if (pattern957 (x2, 
E_V32QImode) != 0
                  || !(
#line 16350 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V32QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 735 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3218 (insn, operands);

            case E_V16QImode:
              if (pattern957 (x2, 
E_V16QImode) != 0
                  || !
#line 16350 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V16QImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)))
                return NULL;
              return gen_split_3219 (insn, operands);

            case E_V16HImode:
              if (pattern957 (x2, 
E_V16HImode) != 0
                  || !(
#line 16350 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V16HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 736 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3220 (insn, operands);

            case E_V8HImode:
              if (pattern957 (x2, 
E_V8HImode) != 0
                  || !
#line 16350 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (V8HImode != V8HImode || TARGET_SSE4_1)
   && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)))
                return NULL;
              return gen_split_3221 (insn, operands);

            default:
              return NULL;
            }

        case EQ:
          x7 = XEXP (x3, 0);
          if (GET_CODE (x7) != LSHIFTRT)
            return NULL;
          x11 = XEXP (x7, 0);
          operands[1] = x11;
          x12 = XEXP (x7, 1);
          operands[2] = x12;
          if (!const_int_operand (operands[2], E_SImode))
            return NULL;
          x4 = XEXP (x3, 1);
          operands[3] = x4;
          x6 = XEXP (x2, 1);
          operands[4] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_V16HImode:
              if (pattern1255 (x2, 
E_V16HImode) != 0
                  || !(
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1) && 
#line 774 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3266 (insn, operands);

            case E_V8HImode:
              if (pattern1255 (x2, 
E_V8HImode) != 0
                  || !
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (HImode) - 1))
                return NULL;
              return gen_split_3267 (insn, operands);

            case E_V8SImode:
              if (pattern1255 (x2, 
E_V8SImode) != 0
                  || !(
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1) && 
#line 775 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3268 (insn, operands);

            case E_V4SImode:
              if (pattern1255 (x2, 
E_V4SImode) != 0
                  || !
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (SImode) - 1))
                return NULL;
              return gen_split_3269 (insn, operands);

            case E_V4DImode:
              if (pattern1255 (x2, 
E_V4DImode) != 0
                  || !(
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1) && 
#line 776 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                return NULL;
              return gen_split_3270 (insn, operands);

            case E_V2DImode:
              if (pattern1255 (x2, 
E_V2DImode) != 0
                  || !
#line 17544 "../../src/gcc/config/i386/sse.md"
(INTVAL (operands[2]) == GET_MODE_PRECISION (DImode) - 1))
                return NULL;
              return gen_split_3271 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern233 (x2, 
E_V16HImode) != 0
              || !((
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 743 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17142 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3222 (insn, operands);

        case E_V8HImode:
          if (pattern233 (x2, 
E_V8HImode) != 0
              || !(
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17142 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3223 (insn, operands);

        case E_V8SImode:
          if (pattern233 (x2, 
E_V8SImode) != 0
              || !((
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 744 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)) && 
#line 17142 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3224 (insn, operands);

        case E_V4SImode:
          if (pattern233 (x2, 
E_V4SImode) != 0
              || !(
#line 17140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_pre_reload_split ()) && 
#line 17142 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3225 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      switch (pattern238 (x2))
        {
        case 0:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3254 (insn, operands);

        case 1:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3257 (insn, operands);

        case 2:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3260 (insn, operands);

        case 3:
          if (!(
#line 17466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17469 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3263 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      switch (pattern238 (x2))
        {
        case 0:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3255 (insn, operands);

        case 1:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3258 (insn, operands);

        case 2:
          if (!(
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return NULL;
          return gen_split_3261 (insn, operands);

        case 3:
          if (!(
#line 17495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17498 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3264 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFTRT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x6 = XEXP (x2, 1);
      operands[2] = x6;
      switch (GET_CODE (operands[2]))
        {
        case CONST_VECTOR:
          switch (GET_MODE (operands[0]))
            {
            case E_V32HImode:
              if (pattern237 (x2, 
E_V32HImode) == 0
                  && (
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V32HImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return gen_split_3256 (insn, operands);
              break;

            case E_V16SImode:
              if (pattern237 (x2, 
E_V16SImode) == 0
                  && (
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V16SImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 784 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return gen_split_3259 (insn, operands);
              break;

            case E_V8DImode:
              if (pattern237 (x2, 
E_V8DImode) == 0
                  && (
#line 17407 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && GET_MODE_UNIT_BITSIZE (V8DImode)
   > INTVAL (XVECEXP (operands[2], 0, 0))) && 
#line 785 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return gen_split_3262 (insn, operands);
              break;

            default:
              break;
            }
          break;

        case CONST_INT:
          if (const_0_to_255_operand (operands[2], E_SImode)
              && register_operand (operands[0], E_V1TImode)
              && GET_MODE (x2) == E_V1TImode
              && register_operand (operands[1], E_V1TImode)
              && (
#line 17525 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17528 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3265 (insn, operands);
          break;

        default:
          break;
        }
      if (!nonmemory_operand (operands[2], E_DImode)
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode)
          || !(
#line 26992 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 26994 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3724 (insn, operands);

    case ROTATE:
      if (pattern239 (x2) != 0
          || !(
#line 17566 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17569 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3272 (insn, operands);

    case ROTATERT:
      if (pattern239 (x2) != 0
          || !(
#line 17595 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT
   && ix86_pre_reload_split ()) && 
#line 17598 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3273 (insn, operands);

    case VEC_DUPLICATE:
      return split_82 (x1, insn);

    case SIGN_EXTEND:
      x3 = XEXP (x2, 0);
      if (pattern240 (x3) != 0)
        return NULL;
      switch (pattern680 (x2))
        {
        case 0:
          if ((
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && 
#line 24281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3517 (insn, operands);
          if (!(
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24281 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3518 (insn, operands);

        case 1:
          if ((
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24433 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3525 (insn, operands);
          if (!(
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24433 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3526 (insn, operands);

        case 2:
          if (!(
#line 24794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 24796 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3549 (insn, operands);

        case 3:
          if ((
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24667 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3541 (insn, operands);
          if (!(
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24667 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3542 (insn, operands);

        case 4:
          if ((
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24997 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3560 (insn, operands);
          if (!(
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24997 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3561 (insn, operands);

        case 5:
          if ((
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25222 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3572 (insn, operands);
          if (!(
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25222 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3573 (insn, operands);

        case 6:
          if ((
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24498 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3529 (insn, operands);
          if (!(
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24498 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3530 (insn, operands);

        case 7:
          if ((
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24858 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3553 (insn, operands);
          if (!(
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24858 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3554 (insn, operands);

        case 8:
          if ((
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25060 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3564 (insn, operands);
          if (!(
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25060 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3565 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      x3 = XEXP (x2, 0);
      if (pattern240 (x3) != 0)
        return NULL;
      x7 = XEXP (x3, 0);
      x11 = XEXP (x7, 0);
      switch (GET_CODE (x11))
        {
        case VEC_CONCAT:
          switch (pattern678 (x2))
            {
            case 0:
              if ((
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1 && 1
   && ix86_pre_reload_split ()) && 
#line 24281 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_3519 (insn, operands);
              if (!(
#line 24278 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512BW && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24281 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3520 (insn, operands);

            case 1:
              if ((
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24433 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_3527 (insn, operands);
              if (!(
#line 24430 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24433 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3528 (insn, operands);

            case 2:
              if (!(
#line 24794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512 && ix86_pre_reload_split ()) && 
#line 24796 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3551 (insn, operands);

            case 3:
              if ((
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24667 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_3543 (insn, operands);
              if (!(
#line 24664 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24667 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3544 (insn, operands);

            case 4:
              if ((
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24997 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_3562 (insn, operands);
              if (!(
#line 24994 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24997 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3563 (insn, operands);

            case 5:
              if ((
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25222 "../../src/gcc/config/i386/sse.md"
( 1)))
                return gen_split_3574 (insn, operands);
              if (!(
#line 25219 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25222 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3575 (insn, operands);

            default:
              return NULL;
            }

        case VEC_MERGE:
          x13 = XEXP (x11, 0);
          if (GET_CODE (x13) != VEC_DUPLICATE)
            return NULL;
          if (GET_MODE (x13) == E_V4SImode)
            {
              switch (pattern1032 (x2))
                {
                case 0:
                  if ((
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 24498 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3531 (insn, operands);
                  if ((
#line 24495 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24498 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3532 (insn, operands);
                  break;

                case 1:
                  if ((
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1
   && ix86_pre_reload_split ()) && 
#line 24858 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3555 (insn, operands);
                  if ((
#line 24855 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 24858 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3556 (insn, operands);
                  break;

                case 2:
                  if ((
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && 1
   && ix86_pre_reload_split ()) && 
#line 25060 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3566 (insn, operands);
                  if ((
#line 25057 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_AVX512VL
   && ix86_pre_reload_split ()) && 
#line 25060 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3567 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          x14 = XEXP (x11, 2);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          switch (pattern1033 (x2))
            {
            case 0:
              if (!(
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24933 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3557 (insn, operands);

            case 1:
              if (!(
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24933 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3558 (insn, operands);

            case 2:
              if (!(
#line 24931 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 24933 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3559 (insn, operands);

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
peephole2_9 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DFmode)
    return NULL;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  if (!memory_operand (operands[0], E_DFmode))
    return NULL;
  x6 = XEXP (x2, 0);
  operands[1] = x6;
  if (!sse_reg_operand (operands[1], E_V2DFmode))
    return NULL;
  x7 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x7) != SET)
    return NULL;
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) != VEC_SELECT
      || GET_MODE (x8) != E_DFmode)
    return NULL;
  x9 = XEXP (x8, 1);
  if (GET_CODE (x9) != PARALLEL
      || XVECLEN (x9, 0) != 1)
    return NULL;
  x10 = XVECEXP (x9, 0, 0);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return NULL;
  x11 = XEXP (x7, 0);
  operands[2] = x11;
  if (!memory_operand (operands[2], E_DFmode))
    return NULL;
  x12 = XEXP (x8, 0);
  operands[3] = x12;
  if (!sse_reg_operand (operands[3], E_V2DFmode)
      || !
#line 1976 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_SSE_UNALIGNED_STORE_OPTIMAL
   && ix86_operands_ok_for_move_multiple (operands, false, DFmode)))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_402 (insn, operands);
}

 rtx_insn *
peephole2_10 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (address_no_seg_operand (operands[1], E_SImode)
      && 
#line 6392 "../../src/gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_60 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_SImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 20181 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_176 (insn, operands);

    case UNSPEC_VOLATILE:
      if (pattern840 (x2) != 0)
        return NULL;
      x6 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x6))
        {
        case CALL:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_QImode)
            return NULL;
          x8 = XEXP (x6, 1);
          operands[3] = x8;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0])
              || !(
#line 20195 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_178 (insn, operands);

        case PARALLEL:
          if (XVECLEN (x6, 0) != 2)
            return NULL;
          x10 = XVECEXP (x6, 0, 1);
          if (GET_CODE (x10) != SET)
            return NULL;
          x11 = XEXP (x10, 1);
          if (GET_CODE (x11) != PLUS
              || GET_MODE (x11) != E_SImode)
            return NULL;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != REG
              || REGNO (x12) != 7
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x10, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 7
              || GET_MODE (x13) != E_SImode)
            return NULL;
          x14 = XEXP (x11, 1);
          operands[4] = x14;
          if (!immediate_operand (operands[4], E_SImode))
            return NULL;
          x15 = XVECEXP (x6, 0, 0);
          switch (GET_CODE (x15))
            {
            case CALL:
              x16 = XEXP (x15, 0);
              if (GET_CODE (x16) != MEM
                  || GET_MODE (x16) != E_QImode)
                return NULL;
              x17 = XEXP (x15, 1);
              operands[3] = x17;
              x18 = XEXP (x16, 0);
              if (!rtx_equal_p (x18, operands[0])
                  || !
#line 20275 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_181 (insn, operands);

            case SET:
              x17 = XEXP (x15, 1);
              if (GET_CODE (x17) != CALL)
                return NULL;
              x19 = XEXP (x17, 0);
              if (GET_CODE (x19) != MEM
                  || GET_MODE (x19) != E_QImode)
                return NULL;
              x16 = XEXP (x15, 0);
              operands[2] = x16;
              x20 = XEXP (x17, 1);
              operands[3] = x20;
              x21 = XEXP (x19, 0);
              if (!rtx_equal_p (x21, operands[0])
                  || !
#line 20490 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_189 (insn, operands);

            default:
              return NULL;
            }

        case SET:
          if (pattern1343 (x6) != 0
              || !(
#line 20402 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_186 (insn, operands);

        default:
          return NULL;
        }

    case PARALLEL:
      if (XVECLEN (x2, 0) != 2)
        return NULL;
      x22 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x22) != CALL)
        return NULL;
      x23 = XEXP (x22, 0);
      if (GET_CODE (x23) != MEM
          || GET_MODE (x23) != E_QImode)
        return NULL;
      x24 = XVECEXP (x2, 0, 1);
      if (pattern1257 (x24) != 0)
        return NULL;
      x25 = XEXP (x24, 0);
      if (GET_CODE (x25) != REG
          || REGNO (x25) != 7
          || GET_MODE (x25) != E_SImode)
        return NULL;
      x26 = XEXP (x22, 1);
      operands[3] = x26;
      x27 = XEXP (x24, 1);
      x28 = XEXP (x27, 1);
      operands[4] = x28;
      if (!immediate_operand (operands[4], E_SImode))
        return NULL;
      x29 = XEXP (x23, 0);
      if (!rtx_equal_p (x29, operands[0])
          || !
#line 20256 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_180 (insn, operands);

    case SET:
      switch (pattern841 (x2))
        {
        case 0:
          if (!(
#line 20292 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_182 (insn, operands);

        case 1:
          if (!(
#line 20386 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_184 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_13 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!general_reg_operand (x3, E_SImode))
    return NULL;
  operands[8] = x3;
  switch (pattern961 (x1, 
E_SImode, 
E_DImode))
    {
    case 0:
      if (
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
	  && rtx_equal_p (operands[6], operands[2])))))
        {
          *pmatch_len_ = 3;
          res = gen_peephole2_100 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    case 1:
      if (
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
	  && rtx_equal_p (operands[6], operands[2])))))
        {
          *pmatch_len_ = 5;
          res = gen_peephole2_102 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      break;

    default:
      break;
    }
  operands[0] = x3;
  if (pattern964 (x1, 
E_SImode) != 0
      || !
#line 26525 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
  && REGNO (operands[2]) != REGNO (operands[0])
  && REGNO (operands[2]) != REGNO (operands[1])
  && peep2_reg_dead_p (2, operands[1])
  && peep2_reg_dead_p (4, operands[2])
  && !reg_overlap_mentioned_p (operands[0], operands[3])
  && !reg_mentioned_p (operands[2], operands[6])))
    return NULL;
  *pmatch_len_ = 3;
  return gen_peephole2_207 (insn, operands);
}

 rtx_insn *
peephole2_15 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (address_no_seg_operand (operands[1], E_DImode)
      && (
#line 6392 "../../src/gcc/config/i386/i386.md"
(ix86_hardreg_mov_ok (operands[0], operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ix86_avoid_lea_for_addr (peep2_next_insn (0), operands)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_61 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2
      || !memory_operand (operands[1], E_DImode))
    return NULL;
  x2 = PATTERN (peep2_next_insn (1));
  switch (GET_CODE (x2))
    {
    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode)
        return NULL;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 20181 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_177 (insn, operands);

    case UNSPEC_VOLATILE:
      if (pattern840 (x2) != 0)
        return NULL;
      x6 = PATTERN (peep2_next_insn (2));
      switch (GET_CODE (x6))
        {
        case CALL:
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != MEM
              || GET_MODE (x7) != E_QImode)
            return NULL;
          x8 = XEXP (x6, 1);
          operands[3] = x8;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0])
              || !(
#line 20195 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_179 (insn, operands);

        case SET:
          if (pattern1343 (x6) != 0
              || !(
#line 20402 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (2))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (2)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_187 (insn, operands);

        default:
          return NULL;
        }

    case SET:
      switch (pattern841 (x2))
        {
        case 0:
          if (!(
#line 20292 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && peep2_reg_dead_p (2, operands[0])) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_183 (insn, operands);

        case 1:
          if (!(
#line 20386 "../../src/gcc/config/i386/i386.md"
(!TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (peep2_next_insn (1))
   && !reg_mentioned_p (operands[0],
			CALL_INSN_FUNCTION_USAGE (peep2_next_insn (1)))) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_185 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_20 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (!flags_reg_operand (x2, E_VOIDmode))
    return NULL;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  operands[4] = x2;
  res = peephole2_19 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count < 4)
    return NULL;
  operands[6] = x2;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != PARALLEL
      || XVECLEN (x4, 0) != 2)
    return NULL;
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != SET)
    return NULL;
  x6 = XEXP (x5, 0);
  operands[7] = x6;
  if (!flags_reg_operand (operands[7], E_VOIDmode))
    return NULL;
  x7 = XEXP (x5, 1);
  operands[1] = x7;
  x8 = XVECEXP (x4, 0, 1);
  operands[5] = x8;
  x9 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x9) != SET)
    return NULL;
  x10 = XEXP (x9, 1);
  if (!ix86_comparison_operator (x10, E_QImode))
    return NULL;
  operands[3] = x10;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17)
    return NULL;
  x12 = XEXP (x10, 1);
  if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x13 = XEXP (x9, 0);
  operands[2] = x13;
  if (!register_operand (operands[2], E_QImode))
    return NULL;
  x14 = PATTERN (peep2_next_insn (3));
  switch (GET_CODE (x14))
    {
    case SET:
      x15 = XEXP (x14, 1);
      if (GET_CODE (x15) != ZERO_EXTEND)
        return NULL;
      x16 = XEXP (x14, 0);
      operands[4] = x16;
      if (!any_QIreg_operand (operands[4], E_VOIDmode))
        return NULL;
      x17 = XEXP (x15, 0);
      if (!rtx_equal_p (x17, operands[2])
          || !
#line 19970 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_171 (insn, operands);

    case PARALLEL:
      if (XVECLEN (x14, 0) != 2)
        return NULL;
      x18 = XVECEXP (x14, 0, 0);
      if (GET_CODE (x18) != SET)
        return NULL;
      x19 = XEXP (x18, 1);
      if (GET_CODE (x19) != ZERO_EXTEND)
        return NULL;
      x20 = XVECEXP (x14, 0, 1);
      if (GET_CODE (x20) != CLOBBER)
        return NULL;
      x21 = XEXP (x20, 0);
      if (GET_CODE (x21) != REG
          || REGNO (x21) != 17
          || GET_MODE (x21) != E_CCmode)
        return NULL;
      x22 = XEXP (x18, 0);
      operands[4] = x22;
      if (!any_QIreg_operand (operands[4], E_VOIDmode))
        return NULL;
      x23 = XEXP (x19, 0);
      if (!rtx_equal_p (x23, operands[2])
          || !
#line 20043 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (4, operands[2])
    || operands_match_p (operands[2], operands[4]))
   && ! reg_overlap_mentioned_p (operands[4], operands[0])
   && ! reg_overlap_mentioned_p (operands[4], operands[1])
   && ! reg_overlap_mentioned_p (operands[4], operands[5])
   && ! reg_set_p (operands[4], operands[5])
   && refers_to_regno_p (FLAGS_REG, operands[1], (rtx *)NULL)
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_174 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_24 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (memory_operand (operands[1], E_SImode)
      && register_operand (operands[0], E_SImode))
    {
      res = peephole2_23 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 3
      || peep2_current_count < 4
      || !general_reg_operand (operands[1], E_SImode)
      || !general_reg_operand (operands[0], E_SImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 2)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x4, 1);
  operands[5] = x7;
  x8 = XEXP (x6, 1);
  operands[6] = x8;
  x9 = XEXP (x6, 0);
  if (!rtx_equal_p (x9, operands[0]))
    return NULL;
  x10 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x10) != SET
      || pattern1347 (x10, 
E_SImode) != 0
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
  return gen_peephole2_204 (insn, operands);
}

 rtx_insn *
peephole2_26 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count >= 2)
    {
      res = peephole2_24 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (memory_operand (operands[1], E_SImode)
      && push_operand (operands[0], E_SImode)
      && 
#line 27780 "../../src/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))))
    {
      *pmatch_len_ = 0;
      res = gen_peephole2_253 (insn, operands);
      if (res != NULL_RTX)
        return res;
    }
  if (peep2_current_count < 2)
    return NULL;
  if (general_reg_operand (operands[1], E_SImode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern412 (x3, 
E_SImode) == 0
          && 
#line 27980 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && (SImode != QImode
       || any_QIreg_operand (operands[1], QImode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_281 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count >= 3)
    {
      res = peephole2_25 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  if (mmx_reg_operand (operands[1], E_VOIDmode)
      && mmx_reg_operand (operands[0], E_VOIDmode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern598 (x3) == 0
          && 
#line 27999 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_283 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (sse_reg_operand (operands[1], E_VOIDmode)
      && sse_reg_operand (operands[0], E_VOIDmode))
    {
      x3 = PATTERN (peep2_next_insn (1));
      if (pattern598 (x3) == 0
          && 
#line 28011 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   /* Punt if operands[1] is %[xy]mm16+ and AVX512BW is not enabled,
      as EVEX encoded vpadd[bw], vpmullw, vpmin[su][bw] and vpmax[su][bw]
      instructions require AVX512BW and AVX512VL, but with the original
      instructions it might require just AVX512VL.
      AVX512VL is implied from TARGET_HARD_REGNO_MODE_OK.  */
   && (!EXT_REX_SSE_REGNO_P (REGNO (operands[1]))
       || TARGET_AVX512BW
       || GET_MODE_SIZE (GET_MODE_INNER (GET_MODE (operands[0]))) > 2
       || logic_operator (operands[3], VOIDmode))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_284 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (peep2_current_count >= 3
      && peep2_current_count >= 4)
    {
      if (memory_operand (operands[1], E_QImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern730 (x3, 
E_QImode) == 0
              && 
#line 28136 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_301 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_HImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern730 (x3, 
E_HImode) == 0
              && 
#line 28136 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_302 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_SImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern731 (x3, 
E_SImode) == 0
              && 
#line 28136 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_303 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (memory_operand (operands[1], E_DImode))
        {
          x3 = PATTERN (peep2_next_insn (1));
          if (pattern731 (x3, 
E_DImode) == 0
              && (
#line 28136 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REGNO (operands[4]) == REGNO (operands[0])
   && REGNO (operands[5]) == REGNO (operands[3])
   && peep2_reg_dead_p (4, operands[3])
   && ((REGNO (operands[0]) == REGNO (operands[3]))
       || peep2_reg_dead_p (2, operands[0]))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[3], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || any_QIreg_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3), CCGOCmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 3;
              res = gen_peephole2_304 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
    }
  if (!memory_operand (operands[1], E_VOIDmode)
      || !register_operand (operands[0], E_VOIDmode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != SET)
    return NULL;
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!memory_operand (operands[2], E_VOIDmode))
    return NULL;
  x5 = XEXP (x3, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !
#line 28469 "../../src/gcc/config/i386/i386.md"
(!MEM_VOLATILE_P (operands[1])
   && !MEM_VOLATILE_P (operands[2])
   && rtx_equal_p (operands[1], operands[2])
   && !reg_overlap_mentioned_p (operands[0], operands[2])))
    return NULL;
  *pmatch_len_ = 1;
  return gen_peephole2_331 (insn, operands);
}

 rtx_insn *
peephole2_41 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return NULL;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return NULL;
  x8 = XEXP (x6, 1);
  switch (GET_CODE (x8))
    {
    case REG:
    case SUBREG:
      operands[1] = x8;
      if (!register_operand (operands[1], E_VOIDmode)
          || GET_MODE (x3) != E_CCmode)
        return NULL;
      x9 = PATTERN (peep2_next_insn (1));
      if (pattern413 (x9, 
PLUS, 
2) != 0)
        return NULL;
      x10 = XVECEXP (x9, 0, 1);
      if (GET_CODE (x10) != CLOBBER)
        return NULL;
      x11 = XEXP (x10, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return NULL;
      x12 = XVECEXP (x9, 0, 0);
      x13 = XEXP (x12, 1);
      x14 = XEXP (x13, 1);
      operands[2] = x14;
      if (!x86_64_immediate_operand (operands[2], E_VOIDmode))
        return NULL;
      x15 = XEXP (x13, 0);
      if (!rtx_equal_p (x15, operands[0]))
        return NULL;
      x16 = XEXP (x12, 0);
      if (!rtx_equal_p (x16, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode
              || GET_MODE (x13) != E_SImode
              || !
#line 6442 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_62 (insn, operands);

        case E_DImode:
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || GET_MODE (x13) != E_DImode
              || !(
#line 6442 "../../src/gcc/config/i386/i386.md"
(!TARGET_AVOID_LEA_FOR_ADDR || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_63 (insn, operands);

        default:
          return NULL;
        }

    case CONST_INT:
      if (peep2_current_count < 3
          || XWINT (x8, 0) != -1L)
        return NULL;
      x9 = PATTERN (peep2_next_insn (1));
      if (pattern1256 (x9, 
-1) != 0)
        return NULL;
      x17 = PATTERN (peep2_next_insn (2));
      x18 = XEXP (x17, 1);
      x19 = XEXP (x18, 0);
      operands[1] = x19;
      if (pattern1780 (x17) != 0)
        return NULL;
      x20 = XEXP (x18, 1);
      operands[2] = x20;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!general_reg_operand (operands[0], E_QImode)
              || GET_MODE (x6) != E_QImode
              || !
#line 8725 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_72 (insn, operands);

        case E_HImode:
          if (!general_reg_operand (operands[0], E_HImode)
              || GET_MODE (x6) != E_HImode
              || !
#line 8725 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_73 (insn, operands);

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || GET_MODE (x6) != E_SImode
              || !
#line 8725 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_74 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || GET_MODE (x6) != E_DImode
              || !(
#line 8725 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (3, FLAGS_REG)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_75 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_46 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3)
    return NULL;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[5] = x3;
  if (!flags_reg_operand (operands[5], E_VOIDmode))
    return NULL;
  x4 = XEXP (x2, 1);
  operands[0] = x4;
  x5 = XVECEXP (x1, 0, 1);
  operands[4] = x5;
  x6 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x6, 1);
  if (!ix86_comparison_operator (x7, E_QImode))
    return NULL;
  operands[2] = x7;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17)
    return NULL;
  x9 = XEXP (x7, 1);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x10 = XEXP (x6, 0);
  operands[1] = x10;
  if (!register_operand (operands[1], E_QImode))
    return NULL;
  x11 = PATTERN (peep2_next_insn (2));
  switch (GET_CODE (x11))
    {
    case SET:
      x12 = XEXP (x11, 1);
      if (GET_CODE (x12) != ZERO_EXTEND)
        return NULL;
      x13 = XEXP (x11, 0);
      operands[3] = x13;
      if (!any_QIreg_operand (operands[3], E_VOIDmode))
        return NULL;
      x14 = XEXP (x12, 0);
      if (!rtx_equal_p (x14, operands[1])
          || !
#line 19946 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_170 (insn, operands);

    case PARALLEL:
      if (XVECLEN (x11, 0) != 2)
        return NULL;
      x15 = XVECEXP (x11, 0, 0);
      if (GET_CODE (x15) != SET)
        return NULL;
      x16 = XEXP (x15, 1);
      if (GET_CODE (x16) != ZERO_EXTEND
          || pattern1729 (x11, 
E_VOIDmode) != 0)
        return NULL;
      x17 = XEXP (x16, 0);
      if (!rtx_equal_p (x17, operands[1])
          || !
#line 20018 "../../src/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0])
   && ! reg_overlap_mentioned_p (operands[3], operands[4])
   && ! reg_set_p (operands[3], operands[4])
   && peep2_regno_dead_p (0, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_173 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_49 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return NULL;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case REG:
      res = peephole2_38 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case CONST_INT:
      res = peephole2_40 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case PLUS:
      res = peephole2_41 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case COMPARE:
      res = peephole2_43 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case MULT:
      res = peephole2_44 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    case ASHIFT:
      if (pattern242 (x1) == 0)
        {
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          if (nonmemory_operand (operands[2], E_QImode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (register_operand (operands[0], E_DImode)
                      && GET_MODE (x3) == E_DImode
                      && nonmemory_operand (operands[1], E_DImode)
                      && (
#line 15347 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_159 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case E_TImode:
                  if (register_operand (operands[0], E_TImode)
                      && GET_MODE (x3) == E_TImode
                      && nonmemory_operand (operands[1], E_TImode)
                      && (
#line 15347 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_160 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                default:
                  break;
                }
            }
        }
      break;

    case LSHIFTRT:
      switch (pattern244 (x1))
        {
        case 0:
          if ((
#line 16719 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_161 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 16719 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_163 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case ASHIFTRT:
      switch (pattern244 (x1))
        {
        case 0:
          if ((
#line 16719 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_162 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case 1:
          if ((
#line 16719 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_164 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
      break;

    case NOT:
      if (GET_MODE (x3) == E_DImode)
        {
          x5 = XEXP (x3, 0);
          if (GET_CODE (x5) == ZERO_EXTRACT
              && pattern373 (x1) == 0)
            {
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x7 = XEXP (x5, 2);
                  if (rtx_equal_p (x7, operands[1])
                      && 
#line 19106 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_167 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
      break;

    case POPCOUNT:
      res = peephole2_45 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      break;

    default:
      break;
    }
  if (peep2_current_count >= 2)
    {
      res = peephole2_46 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
    }
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return NULL;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return NULL;
  switch (GET_CODE (x3))
    {
    case COMPARE:
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
    case AND:
    case IOR:
    case XOR:
    case ASHIFT:
    case ROTATE:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      operands[3] = x3;
      res = peephole2_47 (x1, insn, pmatch_len_);
      if (res != NULL_RTX)
        return res;
      switch (GET_CODE (x3))
        {
        case PLUS:
        case MINUS:
        case AND:
        case IOR:
        case XOR:
          if (peep2_current_count >= 2)
            {
              res = peephole2_48 (x1, insn, pmatch_len_);
              if (res != NULL_RTX)
                return res;
            }
          if (GET_CODE (x3) != PLUS
              || pattern414 (x2) != 0)
            return NULL;
          switch (pattern1446 (x2))
            {
            case 0:
              if ((
#line 28634 "../../src/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_355 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28634 "../../src/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_356 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28646 "../../src/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_359 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28646 "../../src/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_360 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28702 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_375 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28702 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_376 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28714 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_379 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28714 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_380 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28724 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_383 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!(
#line 28724 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_384 (insn, operands);

            case 1:
              if ((
#line 28634 "../../src/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_357 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28634 "../../src/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_358 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28646 "../../src/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_361 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28646 "../../src/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)
   && !ix86_red_zone_used) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_362 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28702 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_377 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28702 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_378 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28714 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_381 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28714 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_382 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if ((
#line 28724 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_385 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!(
#line 28724 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_386 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          x10 = XEXP (x2, 0);
          operands[0] = x10;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return NULL;
              if (const359_operand (operands[2], E_SImode))
                {
                  if (register_operand (operands[1], E_SImode))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_388 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (nonimmediate_operand (operands[1], E_SImode)
                      && 
#line 28767 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_390 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (memory_operand (operands[1], E_SImode)
                  && immediate_operand (operands[2], E_SImode)
                  && 
#line 28783 "../../src/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_392 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !const_int_operand (operands[2], E_SImode)
                  || !
#line 28815 "../../src/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_396 (insn, operands);

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode)
                return NULL;
              if (const359_operand (operands[2], E_DImode))
                {
                  if (register_operand (operands[1], E_DImode)
                      && (
#line 28753 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_389 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (nonimmediate_operand (operands[1], E_DImode)
                      && (
#line 28767 "../../src/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    {
                      *pmatch_len_ = 0;
                      res = gen_peephole2_391 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (memory_operand (operands[1], E_DImode)
                  && immediate_operand (operands[2], E_DImode)
                  && (
#line 28783 "../../src/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pmatch_len_ = 0;
                  res = gen_peephole2_393 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              if (!nonimmediate_operand (operands[1], E_DImode)
                  || !const_int_operand (operands[2], E_DImode)
                  || !(
#line 28815 "../../src/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_397 (insn, operands);

            case E_HImode:
              if (pattern1351 (x3, 
E_HImode) != 0
                  || !
#line 28815 "../../src/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])))
                return NULL;
              *pmatch_len_ = 0;
              return gen_peephole2_395 (insn, operands);

            default:
              return NULL;
            }

        case ASHIFT:
          if (peep2_current_count < 2)
            return NULL;
          x10 = XEXP (x2, 0);
          operands[0] = x10;
          if (!register_operand (operands[0], E_VOIDmode))
            return NULL;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          x4 = XEXP (x3, 1);
          operands[2] = x4;
          if (!const_int_operand (operands[2], E_VOIDmode))
            return NULL;
          x11 = PATTERN (peep2_next_insn (1));
          if (pattern413 (x11, 
PLUS, 
2) != 0)
            return NULL;
          x12 = XVECEXP (x11, 0, 1);
          if (GET_CODE (x12) != CLOBBER)
            return NULL;
          x13 = XEXP (x12, 0);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 17
              || GET_MODE (x13) != E_CCmode)
            return NULL;
          x14 = XVECEXP (x11, 0, 0);
          x15 = XEXP (x14, 0);
          operands[3] = x15;
          if (!register_operand (operands[3], E_VOIDmode))
            return NULL;
          x16 = XEXP (x14, 1);
          x17 = XEXP (x16, 1);
          operands[4] = x17;
          if (!x86_64_general_operand (operands[4], E_VOIDmode))
            return NULL;
          x18 = XEXP (x16, 0);
          if (!rtx_equal_p (x18, operands[0]))
            return NULL;
          if ((
#line 28847 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            {
              *pmatch_len_ = 1;
              res = gen_peephole2_398 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          if (!(
#line 28847 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_399 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x3) != E_DImode)
        return NULL;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != MULT
          || GET_MODE (x5) != E_SImode)
        return NULL;
      x10 = XEXP (x2, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_DImode))
        return NULL;
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      if (!memory_operand (operands[1], E_SImode))
        return NULL;
      x19 = XEXP (x5, 1);
      operands[2] = x19;
      if (!immediate_operand (operands[2], E_SImode)
          || !
#line 28796 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])))
        return NULL;
      *pmatch_len_ = 0;
      return gen_peephole2_394 (insn, operands);

    default:
      return NULL;
    }
}
