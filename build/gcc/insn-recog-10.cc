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
pattern9 (rtx x1, int *pnum_clobbers)
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
    case E_SFmode:
      return pattern5 (x3, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern5 (x3, 
E_DFmode) != 0)
        return -1;
      return 1;

    case E_HFmode:
      if (pattern5 (x3, 
E_HFmode) != 0)
        return -1;
      return 2;

    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_TImode) != 0)
        return -1;
      return 3;

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_QImode) != 0)
        return -1;
      return 4;

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_HImode) != 0)
        return -1;
      return 5;

    case E_V8QImode:
      if (pattern7 (x3, 
E_V8QImode) != 0)
        return -1;
      return 6;

    case E_V2SImode:
      if (pattern7 (x3, 
E_V2SImode) != 0)
        return -1;
      return 7;

    case E_V4HImode:
      if (pattern8 (x3, 
E_V4HImode) != 0)
        return -1;
      return 8;

    case E_V4QImode:
      if (pattern7 (x3, 
E_V4QImode) != 0)
        return -1;
      return 9;

    case E_V2QImode:
      if (pattern7 (x3, 
E_V2QImode) != 0)
        return -1;
      return 10;

    case E_V2HImode:
      if (pattern7 (x3, 
E_V2HImode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern28 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      switch (XVECLEN (x5, 0))
        {
        case 4:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x9 = XVECEXP (x5, 0, 2);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x10 = XVECEXP (x5, 0, 3);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || GET_MODE (x4) != E_V4HFmode
              || !register_operand (operands[1], E_V8HFmode))
            return -1;
          res = pattern27 (x3);
          if (res >= 0)
            return res + 9; /* [9, 10] */
          return -1;

        case 2:
          x7 = XVECEXP (x5, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x8 = XVECEXP (x5, 0, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DImode)
              || GET_MODE (x3) != E_V2DImode)
            return -1;
          switch (GET_MODE (x4))
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
pattern50 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V16HImode:
      if (!nonimmediate_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !register_operand (operands[1], E_V16SImode))
        return -1;
      return 2;

    case E_V8SImode:
      if (!nonimmediate_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode
          || !register_operand (operands[1], E_V8DImode))
        return -1;
      return 3;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode))
            return -1;
          return 4;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V32QImode:
      if (!nonimmediate_operand (operands[0], E_V32QImode)
          || GET_MODE (x1) != E_V32QImode
          || !register_operand (operands[1], E_V32HImode))
        return -1;
      return 6;

    case E_V4SImode:
      if (!nonimmediate_operand (operands[0], E_V4SImode)
          || GET_MODE (x1) != E_V4SImode
          || !register_operand (operands[1], E_V4DImode))
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern77 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
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
      return 0;

    default:
      return -1;
    }
}

int
pattern85 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern84 (x1, 
i1, 
i2); /* [-1, 1] */
}

int
pattern91 (rtx x1)
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
      return 0;

    case VEC_CONCAT:
      return 1;

    default:
      return -1;
    }
}

int
pattern96 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern107 (rtx x1, int *pnum_clobbers)
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 0;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 2;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
          return 3;

        case E_SImode:
          if (pnum_clobbers == NULL
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode))
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
pattern127 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern138 (rtx x1)
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
    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || GET_MODE (x2) != E_V16QImode
          || !nonimm_or_0_operand (operands[2], E_V16QImode)
          || !register_operand (operands[3], E_HImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16SImode:
          if (!register_operand (operands[1], E_V16SImode))
            return -1;
          return 0;

        case E_V16HImode:
          if (!register_operand (operands[1], E_V16HImode))
            return -1;
          return 1;

        default:
          return -1;
        }

    case E_V16HImode:
      if (pattern137 (x1, 
E_V16HImode, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      return 2;

    case E_V8SImode:
      if (pattern137 (x1, 
E_V8SImode, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      return 3;

    case E_V8HImode:
      if (!nonimmediate_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || GET_MODE (x2) != E_V8HImode
          || !nonimm_or_0_operand (operands[2], E_V8HImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!register_operand (operands[1], E_V8DImode))
            return -1;
          return 4;

        case E_V8SImode:
          if (!register_operand (operands[1], E_V8SImode))
            return -1;
          return 5;

        default:
          return -1;
        }

    case E_V32QImode:
      if (pattern137 (x1, 
E_V32QImode, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern137 (x1, 
E_V4SImode, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      return 7;

    default:
      return -1;
    }
}

int
pattern156 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], i2))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], i2))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern162 (rtx x1)
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
      return pattern161 (x3, 
E_V64QImode, 
E_V32HFmode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern161 (x3, 
E_V32QImode, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern161 (x3, 
E_V16QImode, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern173 (rtx x1)
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
    case E_V32HImode:
      return pattern61 (x3, 
E_V32HImode); /* [-1, 0] */

    case E_V16SImode:
      if (pattern61 (x3, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern61 (x3, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V16HImode:
      if (pattern61 (x3, 
E_V16HImode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern61 (x3, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V4DImode:
      if (pattern61 (x3, 
E_V4DImode) != 0)
        return -1;
      return 5;

    case E_V8HImode:
      if (pattern61 (x3, 
E_V8HImode) != 0)
        return -1;
      return 6;

    case E_V4SImode:
      if (pattern61 (x3, 
E_V4SImode) != 0)
        return -1;
      return 7;

    case E_V2DImode:
      if (pattern61 (x3, 
E_V2DImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern189 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !nonimmediate_operand (operands[1], i3))
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
pattern193 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || !ternlog_operand (operands[1], E_V32HFmode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || !ternlog_operand (operands[1], E_V16HFmode))
        return -1;
      return 1;

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || !ternlog_operand (operands[1], E_V8HFmode))
        return -1;
      return 2;

    case E_V32BFmode:
      if (!register_operand (operands[0], E_V32BFmode)
          || !ternlog_operand (operands[1], E_V32BFmode))
        return -1;
      return 3;

    case E_V16BFmode:
      if (!register_operand (operands[0], E_V16BFmode)
          || !ternlog_operand (operands[1], E_V16BFmode))
        return -1;
      return 4;

    case E_V8BFmode:
      if (!register_operand (operands[0], E_V8BFmode)
          || !ternlog_operand (operands[1], E_V8BFmode))
        return -1;
      return 5;

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || !ternlog_operand (operands[1], E_V16SFmode))
        return -1;
      return 6;

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || !ternlog_operand (operands[1], E_V8SFmode))
        return -1;
      return 7;

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || !ternlog_operand (operands[1], E_V4SFmode))
        return -1;
      return 8;

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || !ternlog_operand (operands[1], E_V8DFmode))
        return -1;
      return 9;

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || !ternlog_operand (operands[1], E_V4DFmode))
        return -1;
      return 10;

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || !ternlog_operand (operands[1], E_V2DFmode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern202 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      return pattern200 (x4); /* [-1, 7] */

    case ASHIFT:
      x7 = XEXP (x4, 0);
      operands[0] = x7;
      x8 = XEXP (x6, 0);
      operands[1] = x8;
      x9 = XEXP (x6, 1);
      operands[2] = x9;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x5, 1);
      operands[3] = x10;
      if (!const_int_operand (operands[3], E_QImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern201 (x5, 
E_DImode) != 0)
            return -1;
          return 8;

        case E_TImode:
          if (pattern201 (x5, 
E_TImode) != 0)
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
pattern215 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern219 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern221 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  x7 = XVECEXP (x1, 0, 2);
  x8 = XEXP (x7, 0);
  operands[3] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x4) != E_DImode
          || !register_operand (operands[1], E_DImode)
          || !const_1_to_31_operand (operands[2], E_QImode)
          || !scratch_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_TImode:
      if (!register_operand (operands[0], E_TImode)
          || GET_MODE (x4) != E_TImode
          || !register_operand (operands[1], E_TImode)
          || !const_1_to_63_operand (operands[2], E_QImode)
          || !scratch_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern242 (rtx x1)
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
  return 0;
}

int
pattern248 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17
      || GET_MODE (x4) != E_CCCmode)
    return -1;
  return 0;
}

int
pattern257 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      if (GET_MODE (x1) != i2)
        return -1;
      x2 = XEXP (x1, 0);
      operands[3] = x2;
      if (!nonimmediate_operand (operands[3], i1))
        return -1;
      return 0;

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x1;
      if (!const_scalar_int_operand (operands[3], i2))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern261 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
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
pattern272 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern277 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (!nonimmediate_operand (x3, i2))
    return -1;
  x4 = XEXP (x1, 1);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], i1))
        return -1;
      operands[2] = x3;
      return 0;

    case ASHIFT:
      if (GET_MODE (x4) != i1)
        return -1;
      operands[1] = x3;
      res = pattern37 (x4, 
i1, 
i2);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x4;
      if (!const_scalar_int_operand (operands[2], i1))
        return -1;
      operands[1] = x3;
      return 4;

    default:
      return -1;
    }
}

int
pattern293 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_V4QImode:
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

    case E_V2HImode:
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern305 (rtx x1, int i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != VEC_SELECT
      || GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 2)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + i1])
    return -1;
  return 0;
}

int
pattern313 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern317 (rtx x1, machine_mode i1)
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
pattern323 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      if (!register_operand (operands[0], E_V32HImode)
          || GET_MODE (x1) != E_V32HImode
          || !vector_operand (operands[1], i1))
        return -1;
      return 0;

    case E_V16HImode:
      if (!register_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !vector_operand (operands[1], i2))
        return -1;
      return 1;

    case E_V8HImode:
      if (!register_operand (operands[0], E_V8HImode)
          || GET_MODE (x1) != E_V8HImode
          || !vector_operand (operands[1], i3))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern328 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern330 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_V4SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != SIGN_EXTEND
      || GET_MODE (x2) != E_V4SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_SELECT
      || GET_MODE (x3) != E_V4HImode)
    return -1;
  x4 = XEXP (x3, 1);
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
  if (GET_CODE (x9) != SIGN_EXTEND)
    return -1;
  return 0;
}

int
pattern338 (rtx x1)
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
pattern340 (rtx x1, int *pnum_clobbers, rtx_code i1)
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
  operands[0] = x7;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  return 0;
}

int
pattern344 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
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
  return pattern343 (x6); /* [-1, 5] */
}

int
pattern349 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  x8 = XEXP (x7, 0);
  operands[1] = x8;
  x9 = XEXP (x7, 1);
  operands[2] = x9;
  return pattern348 (x6); /* [-1, 5] */
}

int
pattern355 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != ASHIFT)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != ZERO_EXTEND)
    return -1;
  x7 = XEXP (x4, 1);
  if (GET_CODE (x7) != ZERO_EXTEND)
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 17
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  operands[0] = x10;
  return pattern354 (x3); /* [-1, 3] */
}

int
pattern360 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
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
  return pattern359 (x2); /* [-1, 3] */
}

int
pattern367 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XEXP (x3, 1);
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
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || !ix86_comparison_operator (operands[1], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || !ix86_comparison_operator (operands[1], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern377 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x7))
    {
    case CLOBBER:
      x8 = XEXP (x7, 0);
      if (GET_CODE (x8) != REG
          || REGNO (x8) != 17
          || GET_MODE (x8) != E_CCmode)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          return pattern376 (x4, 
E_DImode); /* [-1, 0] */

        case E_TImode:
          if (pattern376 (x4, 
E_TImode) != 0)
            return -1;
          return 1;

        case E_QImode:
          if (pattern376 (x4, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_HImode:
          if (pattern376 (x4, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_SImode:
          if (pattern376 (x4, 
E_SImode) != 0)
            return -1;
          return 4;

        default:
          return -1;
        }

    case USE:
      x8 = XEXP (x7, 0);
      operands[2] = x8;
      return 5;

    default:
      return -1;
    }
}

int
pattern396 (rtx x1, machine_mode i1)
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
      || !nonmemory_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern403 (rtx x1)
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
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_QImode
          || !memory_operand (operands[1], E_QImode)
          || !const_int_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!memory_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode))
            return -1;
          return 1;

        case E_HImode:
          if (!memory_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 2;

        default:
          return -1;
        }

    case E_DImode:
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      switch (GET_MODE (x2))
        {
        case E_QImode:
          if (!memory_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!memory_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!memory_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
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
pattern426 (rtx x1)
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
    case E_QImode:
      return pattern425 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern425 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern439 (rtx x1, machine_mode i1)
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
pattern444 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XEXP (x2, 0);
  operands[2] = x4;
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      return pattern443 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern443 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern454 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern459 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 2);
  switch (GET_CODE (x5))
    {
    case UNSPEC:
      if (XVECLEN (x5, 0) != 1
          || XINT (x5, 1) != 223)
        return -1;
      x6 = XEXP (x1, 1);
      operands[3] = x6;
      x7 = XVECEXP (x5, 0, 0);
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          if (!register_operand (operands[0], E_V32HFmode)
              || GET_MODE (x1) != E_V32HFmode
              || GET_MODE (x2) != E_V32HFmode
              || !vector_operand (operands[1], E_V32HFmode)
              || !vector_operand (operands[2], E_V32HFmode)
              || !nonimm_or_0_operand (operands[3], E_V32HFmode)
              || GET_MODE (x5) != E_SImode
              || !register_operand (operands[4], E_HImode))
            return -1;
          return 0;

        case E_V16HFmode:
          if (pattern458 (x1, 
E_HImode, 
E_V16HFmode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern458 (x1, 
E_QImode, 
E_V8HFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x5, 0) != 3L
          || !register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x1) != E_V8HFmode
          || GET_MODE (x2) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !vector_operand (operands[2], E_V8HFmode))
        return -1;
      x6 = XEXP (x1, 1);
      if (!rtx_equal_p (x6, operands[1]))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern486 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
      operands[4] = x2;
      x3 = XEXP (x1, 1);
      operands[3] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern485 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern485 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern485 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern485 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern485 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern485 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern485 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern485 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern485 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        case E_V16SImode:
          if (pattern128 (x1, 
E_V16SImode, 
E_HImode) != 0)
            return -1;
          return 9;

        case E_V8SImode:
          if (pattern128 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 10;

        case E_V4SImode:
          if (pattern128 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 11;

        case E_V8DImode:
          if (pattern128 (x1, 
E_V8DImode, 
E_QImode) != 0)
            return -1;
          return 12;

        case E_V4DImode:
          if (pattern128 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern128 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V64QImode:
          if (pattern128 (x1, 
E_V64QImode, 
E_DImode) != 0)
            return -1;
          return 15;

        case E_V16QImode:
          if (pattern128 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 16;

        case E_V32QImode:
          if (pattern128 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 17;

        case E_V32HImode:
          if (pattern128 (x1, 
E_V32HImode, 
E_SImode) != 0)
            return -1;
          return 18;

        case E_V16HImode:
          if (pattern128 (x1, 
E_V16HImode, 
E_HImode) != 0)
            return -1;
          return 19;

        case E_V8HImode:
          if (pattern128 (x1, 
E_V8HImode, 
E_QImode) != 0)
            return -1;
          return 20;

        case E_V32BFmode:
          if (pattern130 (x1, 
E_V32BFmode, 
E_SImode) != 0)
            return -1;
          return 21;

        case E_V16BFmode:
          if (pattern130 (x1, 
E_V16BFmode, 
E_HImode) != 0)
            return -1;
          return 22;

        case E_V8BFmode:
          if (pattern130 (x1, 
E_V8BFmode, 
E_QImode) != 0)
            return -1;
          return 23;

        default:
          return -1;
        }

    case CONST_INT:
      res = pattern132 (x1);
      if (res >= 0)
        return res + 24; /* [24, 26] */
      return -1;

    default:
      return -1;
    }
}

int
pattern518 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V4SImode:
      if (!nonimmediate_operand (operands[1], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!nonimmediate_operand (operands[1], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern523 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1
      || !nonimmediate_operand (operands[1], i2)
      || !const0_operand (operands[2], i2)
      || !const0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern531 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !regmem_or_bitnot_regmem_operand (operands[1], i1)
      || !regmem_or_bitnot_regmem_operand (operands[2], i1)
      || !regmem_or_bitnot_regmem_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern535 (rtx x1)
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
    case E_V32HFmode:
      return pattern529 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern529 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern529 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V32BFmode:
      if (pattern529 (x1, 
E_V32BFmode) != 0)
        return -1;
      return 3;

    case E_V16BFmode:
      if (pattern529 (x1, 
E_V16BFmode) != 0)
        return -1;
      return 4;

    case E_V8BFmode:
      if (pattern529 (x1, 
E_V8BFmode) != 0)
        return -1;
      return 5;

    case E_V16SFmode:
      if (pattern529 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 6;

    case E_V8SFmode:
      if (pattern529 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 7;

    case E_V4SFmode:
      if (pattern529 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 8;

    case E_V8DFmode:
      if (pattern529 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 9;

    case E_V4DFmode:
      if (pattern529 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern529 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern541 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 107
      || GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern547 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      return 0;

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      return 1;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x1) != E_DImode)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern550 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_XFmode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_XFmode))
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[1] = x6;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  x7 = XVECEXP (x3, 0, 1);
  operands[2] = x7;
  if (!register_operand (operands[2], E_XFmode))
    return -1;
  x8 = XEXP (x4, 0);
  operands[3] = x8;
  if (!scratch_operand (operands[3], E_XFmode))
    return -1;
  return 0;
}

int
pattern561 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || pattern560 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern564 (rtx x1, machine_mode i1)
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
pattern570 (rtx x1)
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
  if (GET_MODE (x5) != E_QImode)
    return -1;
  return 0;
}

int
pattern575 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], E_SImode)
      || !register_operand (operands[2], E_SImode))
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
pattern583 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x8 = XEXP (x4, 1);
  operands[2] = x8;
  if (!general_operand (operands[2], E_QImode))
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  return pattern582 (x9); /* [-1, 2] */
}

int
pattern587 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  return pattern221 (x1); /* [-1, 1] */
}

int
pattern590 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != US_MINUS)
    return -1;
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

    case E_HImode:
      res = pattern416 (x1);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case E_SImode:
      res = pattern452 (x1);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case E_QImode:
      if (pattern417 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern601 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern608 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      || pattern607 (x1, 
E_V8QImode, 
E_V4QImode, 
E_V4HImode) != 0)
    return -1;
  return 0;
}

int
pattern618 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern623 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern629 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  operands[3] = x2;
  x3 = XEXP (x1, 0);
  x4 = XVECEXP (x3, 0, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
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
      if (GET_MODE (x4) != E_V2SFmode)
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
          || !register_operand (operands[0], E_V2DImode)
          || GET_MODE (x1) != E_V2DImode
          || GET_MODE (x3) != E_V2DImode)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_V4SFmode)
          || !nonimm_or_0_operand (operands[2], E_V2DImode)
          || !register_operand (operands[3], E_QImode))
        return -1;
      return 9;

    default:
      return -1;
    }
}

int
pattern645 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern653 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 2);
  operands[3] = x6;
  x7 = XVECEXP (x1, 0, 1);
  operands[4] = x7;
  if (!const48_operand (operands[4], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      return pattern651 (x1, 
E_V16HImode, 
E_V16HFmode, 
E_HImode); /* [-1, 0] */

    case E_V32HImode:
      if (pattern651 (x1, 
E_V32HImode, 
E_V32HFmode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V8SImode:
      res = pattern652 (x1, 
E_V8SImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x1) != E_V16SImode
          || GET_MODE (x2) != E_V16SImode
          || GET_MODE (x3) != E_V16SImode
          || !nonimm_or_0_operand (operands[2], E_V16SImode)
          || !register_operand (operands[3], E_HImode))
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
      res = pattern652 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    case E_V4DImode:
      if (pattern651 (x1, 
E_V4DImode, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern670 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x7 = XVECEXP (x1, 0, 5);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
    return -1;
  x9 = XVECEXP (x1, 0, 7);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
    return -1;
  return 0;
}

int
pattern683 (rtx x1)
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
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCZmode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != CLOBBER
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  return 0;
}

int
pattern689 (rtx x1, machine_mode i1)
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
pattern693 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  x4 = XEXP (x1, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
    return -1;
  return 0;
}

int
pattern699 (rtx x1)
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
  return pattern243 (x1); /* [-1, 1] */
}

int
pattern706 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != UNSPEC_VOLATILE
      || XVECLEN (x6, 0) != 1
      || XINT (x6, 1) != i2
      || GET_MODE (x6) != i1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], E_DImode))
    return -1;
  x8 = XEXP (x5, 0);
  operands[1] = x8;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern713 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != i2
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern722 (rtx x1, machine_mode i1, unsigned int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != i2
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern726 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2
      || peep2_current_count < 3
      || !general_reg_operand (operands[0], i1)
      || !general_reg_operand (operands[1], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != SET)
    return -1;
  switch (GET_CODE (x1))
    {
    case SET:
      return 0;

    case PARALLEL:
      return 1;

    default:
      return -1;
    }
}

int
pattern732 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_mmxmem_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern735 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  x4 = XEXP (x2, 1);
  operands[4] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      return pattern734 (x1, 
E_SFmode); /* [-1, 0] */

    case E_DFmode:
      if (pattern734 (x1, 
E_DFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern744 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern748 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  switch (GET_MODE (operands[0]))
    {
    case E_V4HImode:
      if (!register_operand (operands[0], E_V4HImode)
          || GET_MODE (x1) != E_V4HImode
          || GET_MODE (x2) != E_V4SImode
          || GET_MODE (x3) != E_V4SImode
          || GET_MODE (x5) != E_V4SImode
          || !register_mmxmem_operand (operands[1], E_V4HImode)
          || GET_MODE (x4) != E_V4SImode
          || !register_mmxmem_operand (operands[2], E_V4HImode))
        return -1;
      return 0;

    case E_V2HImode:
      if (!register_operand (operands[0], E_V2HImode)
          || GET_MODE (x1) != E_V2HImode
          || GET_MODE (x2) != E_V2SImode
          || GET_MODE (x3) != E_V2SImode
          || GET_MODE (x5) != E_V2SImode
          || !register_operand (operands[1], E_V2HImode)
          || GET_MODE (x4) != E_V2SImode
          || !register_operand (operands[2], E_V2HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern772 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern776 (rtx x1, machine_mode i1)
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
pattern784 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !nonimmediate_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern792 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern804 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern811 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      return pattern810 (x1, 
E_V32HImode, 
E_V32SImode); /* [-1, 0] */

    case E_V16HImode:
      if (pattern810 (x1, 
E_V16HImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8HImode:
      if (pattern810 (x1, 
E_V8HImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern821 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PLUS
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 7
      || GET_MODE (x2) != E_SImode)
    return -1;
  return 0;
}

int
pattern825 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != USE
      || !register_operand (operands[1], E_XFmode))
    return -1;
  return pattern824 (x1, pnum_clobbers); /* [-1, 2] */
}

int
pattern829 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !nonmemory_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern831 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  return pattern438 (x1); /* [-1, 1] */
}

int
pattern835 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
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
  return 0;
}

int
pattern842 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 1);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  return 0;
}

int
pattern846 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != VEC_SELECT)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PARALLEL
      || XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != VEC_SELECT)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != PARALLEL
      || XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern854 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != VEC_CONCAT)
    return -1;
  x4 = XEXP (x1, 0);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  x8 = XEXP (x3, 0);
  if (!rtx_equal_p (x8, operands[1]))
    return -1;
  x9 = XEXP (x3, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  x10 = XEXP (x4, 1);
  switch (XVECLEN (x10, 0))
    {
    case 4:
      x11 = XVECEXP (x10, 0, 0);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x12 = XVECEXP (x10, 0, 1);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x13 = XVECEXP (x10, 0, 2);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x14 = XVECEXP (x10, 0, 3);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x15 = XEXP (x2, 1);
      if (XVECLEN (x15, 0) != 4)
        return -1;
      x16 = XVECEXP (x15, 0, 0);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x17 = XVECEXP (x15, 0, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      x18 = XVECEXP (x15, 0, 2);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x19 = XVECEXP (x15, 0, 3);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern853 (x1, 
E_V8HImode, 
E_V4HImode) != 0)
        return -1;
      return 0;

    case 2:
      x11 = XVECEXP (x10, 0, 0);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x12 = XVECEXP (x10, 0, 1);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x15 = XEXP (x2, 1);
      if (XVECLEN (x15, 0) != 2)
        return -1;
      x16 = XVECEXP (x15, 0, 0);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x17 = XVECEXP (x15, 0, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern853 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern884 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern894 (rtx x1, machine_mode i1)
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
    case E_V4SImode:
      if (!nonimmediate_operand (operands[1], E_V4SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!nonimmediate_operand (operands[1], E_V4DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern904 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
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
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
      || GET_MODE (x3) != i2)
    return -1;
  x9 = XEXP (x3, 0);
  if (GET_MODE (x9) != i1)
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      return pattern135 (x1, 
E_V4SImode); /* [-1, 0] */

    case E_V4DImode:
      if (pattern135 (x1, 
E_V4DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern916 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern918 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern917 (x1, 
E_V16SImode); /* [-1, 0] */

    case E_V16SFmode:
      if (pattern917 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 1;

    case E_V8DImode:
      if (pattern917 (x1, 
E_V8DImode) != 0)
        return -1;
      return 2;

    case E_V8DFmode:
      if (pattern917 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 3;

    case E_V8SImode:
      if (pattern917 (x1, 
E_V8SImode) != 0)
        return -1;
      return 4;

    case E_V8SFmode:
      if (pattern917 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 5;

    case E_V4DImode:
      if (pattern917 (x1, 
E_V4DImode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern917 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V4SImode:
      if (pattern917 (x1, 
E_V4SImode) != 0)
        return -1;
      return 8;

    case E_V4SFmode:
      if (pattern917 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 9;

    case E_V2DImode:
      if (pattern917 (x1, 
E_V2DImode) != 0)
        return -1;
      return 10;

    case E_V2DFmode:
      if (pattern917 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 11;

    case E_V64QImode:
      if (pattern917 (x1, 
E_V64QImode) != 0)
        return -1;
      return 12;

    case E_V16QImode:
      if (pattern917 (x1, 
E_V16QImode) != 0)
        return -1;
      return 13;

    case E_V32QImode:
      if (pattern917 (x1, 
E_V32QImode) != 0)
        return -1;
      return 14;

    case E_V32HImode:
      if (pattern917 (x1, 
E_V32HImode) != 0)
        return -1;
      return 15;

    case E_V16HImode:
      if (pattern917 (x1, 
E_V16HImode) != 0)
        return -1;
      return 16;

    case E_V8HImode:
      if (pattern917 (x1, 
E_V8HImode) != 0)
        return -1;
      return 17;

    default:
      return -1;
    }
}

int
pattern942 (rtx x1, machine_mode i1)
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
pattern950 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !general_operand (operands[2], E_QImode)
          || !scratch_operand (operands[0], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !general_operand (operands[2], E_HImode)
          || !scratch_operand (operands[0], E_HImode))
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_general_operand (operands[2], E_SImode)
          || !scratch_operand (operands[0], E_SImode))
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !x86_64_general_operand (operands[2], E_DImode)
          || !scratch_operand (operands[0], E_DImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern966 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern968 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern973 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_QImode)
      || GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V8SImode:
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_V4SImode:
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 1;

    case E_V8DImode:
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 2;

    case E_V4DImode:
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 3;

    case E_V2DImode:
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 4;

    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !nonimmediate_operand (operands[2], E_V8HFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 5;

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode)
          || !nonimmediate_operand (operands[2], E_V8SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 6;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !nonimmediate_operand (operands[2], E_V4SFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 7;

    case E_V8DFmode:
      if (!register_operand (operands[1], E_V8DFmode)
          || !nonimmediate_operand (operands[2], E_V8DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 8;

    case E_V4DFmode:
      if (!register_operand (operands[1], E_V4DFmode)
          || !nonimmediate_operand (operands[2], E_V4DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 9;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !nonimmediate_operand (operands[2], E_V2DFmode)
          || !const_0_to_31_operand (operands[3], E_SImode))
        return -1;
      return 10;

    case E_V8HImode:
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      return 11;

    default:
      return -1;
    }
}

int
pattern998 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1003 (rtx x1, machine_mode i1)
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
  if (GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (!nonimmediate_operand (x5, i1))
    return -1;
  x6 = XEXP (x3, 1);
  if (!nonimmediate_operand (x6, i1))
    return -1;
  return 0;
}

int
pattern1016 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_all_ones_operand (operands[2], i1)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1024 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i1
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  return 0;
}

int
pattern1030 (rtx x1, machine_mode i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i2
      || GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1039 (rtx x1, machine_mode i1)
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
    case E_HImode:
      if (!register_operand (operands[4], E_HImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_HImode)
        return -1;
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
      if (!register_operand (operands[4], E_QImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_QImode)
        return -1;
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
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
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
      x5 = XVECEXP (x1, 0, 1);
      x6 = XEXP (x5, 1);
      if (pattern1038 (x6) != 0)
        return -1;
      return 20;

    default:
      return -1;
    }
}

int
pattern1099 (rtx x1, machine_mode i1)
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
pattern1104 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1111 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1118 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != i1)
    return -1;
  x6 = XEXP (x4, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  x8 = XEXP (x5, 0);
  operands[2] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HImode:
      return pattern1117 (x1, 
E_SImode, 
E_V32HImode, 
E_V32SImode); /* [-1, 0] */

    case E_V16HImode:
      if (pattern1117 (x1, 
E_HImode, 
E_V16HImode, 
E_V16SImode) != 0)
        return -1;
      return 1;

    case E_V8HImode:
      if (pattern1117 (x1, 
E_QImode, 
E_V8HImode, 
E_V8SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1131 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1133 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern1131 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern1131 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1138 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1146 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !memory_operand (operands[1], i1))
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
pattern1155 (rtx x1, machine_mode i1)
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
pattern1163 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (XWINT (x3, 0) != 32L)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != SUBREG
      || maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  return 0;
}

int
pattern1171 (rtx x1, machine_mode i1, int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != UNSPEC_VOLATILE
      || XVECLEN (x1, 0) != 1
      || XINT (x1, 1) != i2
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern1178 (rtx x1)
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
      return pattern555 (x1); /* [-1, 1] */

    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (GET_MODE (x2) != E_DImode)
            return -1;
          return 2;

        case E_TImode:
          if (pattern563 (x2, 
E_TImode) != 0)
            return -1;
          return 3;

        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !const_int_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (GET_MODE (x2) != E_SImode
              || !const_int_operand (operands[2], E_SImode))
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
pattern1194 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30;
  int res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  switch (GET_CODE (x5))
    {
    case COMPARE:
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x7, 1);
      if (GET_MODE (x8) != i1)
        return -1;
      x9 = XEXP (x7, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      x10 = XEXP (x2, 0);
      if (!rtx_equal_p (x10, operands[1]))
        return -1;
      x11 = XEXP (x5, 0);
      switch (GET_CODE (x11))
        {
        case REG:
          return pattern1189 (x1, 
i1); /* [-1, 0] */

        case ZERO_EXTEND:
          if (GET_MODE (x11) != i2)
            return -1;
          x12 = XEXP (x5, 1);
          if (GET_CODE (x12) != PLUS
              || GET_MODE (x12) != i2)
            return -1;
          x13 = XEXP (x12, 0);
          if (!ix86_carry_flag_operator (x13, i2))
            return -1;
          operands[4] = x13;
          x14 = XEXP (x13, 1);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x15 = XEXP (x12, 1);
          if (GET_CODE (x15) != ZERO_EXTEND
              || GET_MODE (x15) != i2
              || GET_MODE (x6) != E_CCCmode
              || GET_MODE (x5) != E_CCCmode)
            return -1;
          x16 = XEXP (x11, 0);
          switch (GET_CODE (x16))
            {
            case PLUS:
              if (GET_MODE (x16) != i1)
                return -1;
              x17 = XEXP (x16, 0);
              if (GET_CODE (x17) != PLUS
                  || GET_MODE (x17) != i1)
                return -1;
              x18 = XEXP (x17, 0);
              if (!ix86_carry_flag_operator (x18, i1))
                return -1;
              operands[5] = x18;
              x19 = XEXP (x18, 1);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
                  || GET_CODE (x8) != PLUS)
                return -1;
              x20 = XEXP (x8, 0);
              if (GET_CODE (x20) != PLUS
                  || GET_MODE (x20) != i1)
                return -1;
              x21 = XEXP (x20, 0);
              switch (GET_CODE (x21))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x21, operands[5]))
                    return -1;
                  x22 = XEXP (x18, 0);
                  operands[3] = x22;
                  if (!flags_reg_operand (operands[3], E_VOIDmode))
                    return -1;
                  x23 = XEXP (x16, 1);
                  operands[2] = x23;
                  if (!memory_operand (operands[2], i1))
                    return -1;
                  x24 = XEXP (x17, 1);
                  if (!rtx_equal_p (x24, operands[0]))
                    return -1;
                  x25 = XEXP (x13, 0);
                  if (!rtx_equal_p (x25, operands[3]))
                    return -1;
                  x26 = XEXP (x15, 0);
                  if (!rtx_equal_p (x26, operands[2]))
                    return -1;
                  x27 = XEXP (x20, 1);
                  if (!rtx_equal_p (x27, operands[0]))
                    return -1;
                  x28 = XEXP (x8, 1);
                  if (!rtx_equal_p (x28, operands[2]))
                    return -1;
                  return 1;

                default:
                  return -1;
                }

            case REG:
              if (!rtx_equal_p (x16, operands[0])
                  || GET_CODE (x8) != MINUS)
                return -1;
              x20 = XEXP (x8, 0);
              if (GET_CODE (x20) != MINUS
                  || GET_MODE (x20) != i1)
                return -1;
              x27 = XEXP (x20, 1);
              if (!ix86_carry_flag_operator (x27, i1))
                return -1;
              operands[5] = x27;
              x29 = XEXP (x27, 1);
              if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x25 = XEXP (x13, 0);
              operands[3] = x25;
              if (!flags_reg_operand (operands[3], E_VOIDmode))
                return -1;
              x26 = XEXP (x15, 0);
              operands[2] = x26;
              if (!memory_operand (operands[2], i1))
                return -1;
              x21 = XEXP (x20, 0);
              if (!rtx_equal_p (x21, operands[0]))
                return -1;
              x30 = XEXP (x27, 0);
              if (!rtx_equal_p (x30, operands[3]))
                return -1;
              x28 = XEXP (x8, 1);
              if (!rtx_equal_p (x28, operands[2]))
                return -1;
              return 2;

            default:
              return -1;
            }

        case PLUS:
          if (pattern1190 (x1, 
i1) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case PLUS:
      res = pattern1192 (x1, 
i1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
      return -1;

    case MINUS:
      res = pattern1193 (x1, 
i1);
      if (res >= 0)
        return res + 6; /* [6, 7] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1263 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i1)
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
pattern1271 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1277 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XVECEXP (x2, 0, 2);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1286 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V8HFmode
      || !register_operand (operands[0], E_V8HFmode)
      || GET_MODE (x1) != E_V8HFmode
      || GET_MODE (x2) != E_V8HFmode
      || !nonimmediate_operand (operands[1], E_V8HFmode)
      || !nonimm_or_0_operand (operands[3], E_V8HFmode)
      || !register_operand (operands[2], E_V8HFmode))
    return -1;
  return 0;
}

int
pattern1296 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x2, 2);
  return pattern1295 (x3, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1304 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1312 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
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
  if (GET_MODE (x3) != i2
      || !register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1320 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!nonimmediate_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!memory_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x1, 0, 0);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_SImode
          || !memory_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (!memory_operand (operands[0], E_DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 0);
      x6 = XEXP (x5, 1);
      if (GET_MODE (x6) != E_DImode
          || !memory_operand (operands[3], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1332 (rtx x1, machine_mode i1)
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
pattern1340 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!mask_reg_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !mask_reg_operand (operands[1], i1)
      || !const_int_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1346 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 17
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  x7 = XEXP (x2, 0);
  if (!rtx_equal_p (x7, operands[0]))
    return -1;
  x8 = PATTERN (peep2_next_insn (2));
  return pattern1345 (x8); /* [-1, 0] */
}

int
pattern1356 (rtx x1, machine_mode i1)
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
pattern1361 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_DImode))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != E_DImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_TImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != E_TImode)
    return -1;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  x8 = XEXP (x5, 1);
  operands[4] = x8;
  if (!const_0_to_255_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1373 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1372 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1381 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x2, 2);
  return pattern1380 (x3, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1391 (rtx x1, machine_mode i1, machine_mode i2)
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
  return pattern1380 (x4, 
i1, 
i2); /* [-1, 0] */
}

int
pattern1400 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
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
          return pattern1399 (x1, 
E_V8HFmode); /* [-1, 0] */

        case E_V4SFmode:
          if (pattern1399 (x1, 
E_V4SFmode) != 0)
            return -1;
          return 1;

        case E_V2DFmode:
          if (pattern1399 (x1, 
E_V2DFmode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x4;
      x7 = XEXP (x3, 0);
      x8 = XEXP (x7, 0);
      x9 = XEXP (x8, 0);
      operands[2] = x9;
      x10 = XEXP (x7, 1);
      operands[1] = x10;
      x5 = XEXP (x3, 2);
      operands[5] = x5;
      x6 = XVECEXP (x1, 0, 1);
      operands[6] = x6;
      x11 = XEXP (x2, 1);
      if (!rtx_equal_p (x11, operands[1]))
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
pattern1423 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return 0;
}

int
pattern1428 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (!rtx_equal_p (x4, operands[2]))
    return -1;
  x5 = XEXP (x3, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!rtx_equal_p (x5, operands[1]))
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

    case ZERO_EXTEND:
      if (GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XVECEXP (x1, 0, 0);
      x7 = XEXP (x6, 1);
      x8 = XEXP (x7, 0);
      if (GET_MODE (x8) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !x86_64_zext_immediate_operand (operands[2], E_SImode)
          || !register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x9 = XEXP (x5, 0);
      if (!rtx_equal_p (x9, operands[1]))
        return -1;
      return 4;

    default:
      return -1;
    }
}

int
pattern1455 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !bcst_vector_operand (operands[3], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1464 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!const_0_to_31_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V32HFmode:
          return pattern1461 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern1461 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern1461 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern1461 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern1461 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern1461 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern1461 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern1461 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern1461 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      if (!const_0_to_7_operand (operands[5], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1462 (x1, 
E_V8SImode, 
E_V8SFmode) != 0)
            return -1;
          return 9;

        case E_V4SFmode:
          if (pattern1462 (x1, 
E_V4SImode, 
E_V4SFmode) != 0)
            return -1;
          return 10;

        case E_V4DFmode:
          if (pattern1462 (x1, 
E_V4DImode, 
E_V4DFmode) != 0)
            return -1;
          return 11;

        case E_V2DFmode:
          if (pattern1462 (x1, 
E_V2DImode, 
E_V2DFmode) != 0)
            return -1;
          return 12;

        case E_V4SImode:
          if (pattern1463 (x1, 
E_V4SImode, 
E_QImode) != 0)
            return -1;
          return 13;

        case E_V2DImode:
          if (pattern1463 (x1, 
E_V2DImode, 
E_QImode) != 0)
            return -1;
          return 14;

        case E_V8SImode:
          if (pattern1463 (x1, 
E_V8SImode, 
E_QImode) != 0)
            return -1;
          return 15;

        case E_V4DImode:
          if (pattern1463 (x1, 
E_V4DImode, 
E_QImode) != 0)
            return -1;
          return 16;

        case E_V32QImode:
          if (pattern1463 (x1, 
E_V32QImode, 
E_SImode) != 0)
            return -1;
          return 17;

        case E_V16QImode:
          if (pattern1463 (x1, 
E_V16QImode, 
E_HImode) != 0)
            return -1;
          return 18;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1513 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  return pattern1512 (x3, 
i1); /* [-1, 0] */
}

int
pattern1521 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode)
      || !const_0_to_3_operand (operands[4], E_VOIDmode)
      || !const_4_to_7_operand (operands[5], E_VOIDmode)
      || !const_4_to_7_operand (operands[6], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1528 (rtx x1, machine_mode i1)
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
  x5 = XVECEXP (x4, 0, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1535 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case COMPARE:
      x4 = XEXP (x3, 0);
      if (!plusminuslogic_operator (x4, i1))
        return -1;
      operands[3] = x4;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return -1;
      x8 = XEXP (x4, 1);
      operands[2] = x8;
      if (!nonmemory_operand (operands[2], i1))
        return -1;
      x9 = XEXP (x4, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return -1;
      x10 = XEXP (x7, 1);
      if (!rtx_equal_p (x10, operands[3]))
        return -1;
      x11 = XEXP (x7, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return -1;
      return 0;

    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      if (peep2_current_count < 4)
        return -1;
      operands[3] = x3;
      if (!plusminuslogic_operator (operands[3], E_SImode))
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != CLOBBER)
        return -1;
      x11 = XEXP (x7, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return -1;
      x6 = XEXP (x2, 0);
      operands[4] = x6;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (!nonmemory_operand (operands[2], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      if (!rtx_equal_p (x4, operands[4]))
        return -1;
      x12 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x12) != SET)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1564 (rtx x1, machine_mode i1)
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
pattern1572 (rtx x1, int *pnum_clobbers)
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
  switch (GET_CODE (operands[3]))
    {
    case REG:
    case SUBREG:
    case MEM:
      if (!nonimmediate_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      return pattern1571 (x6, pnum_clobbers); /* [-1, 2] */

    case CONST_INT:
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      x6 = XVECEXP (x1, 0, 2);
      if (pattern953 (x6, 
E_CCmode, 
17) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1584 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[3], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1597 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  x5 = XEXP (x3, 2);
  if (GET_MODE (x5) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], E_QImode))
    return -1;
  return 0;
}

int
pattern1607 (rtx x1, machine_mode i1)
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
      return pattern1606 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1606 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1619 (rtx x1, int i1, int i2, int i3, int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (XVECLEN (x1, 0) != 4)
    return -1;
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
pattern1629 (rtx x1, machine_mode i1)
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
pattern1638 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XEXP (x1, 1);
  if (!nonimm_or_0_operand (x4, i1))
    return -1;
  return 0;
}

int
pattern1647 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1654 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !register_operand (operands[7], E_QImode)
      || !vsib_mem_operator (operands[6], i1))
    return -1;
  return 0;
}

int
pattern1662 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_SImode:
      return pattern1661 (x1, 
E_SImode); /* [-1, 0] */

    case E_DImode:
      if (pattern1661 (x1, 
E_DImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1673 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !const_0_to_7_operand (operands[3], E_VOIDmode)
      || pattern1672 () != 0)
    return -1;
  return 0;
}

int
pattern1682 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1687 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 2);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || GET_MODE (x4) != E_QImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != AND)
    return -1;
  x6 = XEXP (x5, 0);
  operands[2] = x6;
  x7 = XEXP (x5, 1);
  operands[3] = x7;
  if (!const_int_operand (operands[3], E_VOIDmode))
    return -1;
  x8 = XEXP (x1, 1);
  x9 = XEXP (x8, 0);
  operands[4] = x9;
  switch (GET_MODE (x3))
    {
    case E_SImode:
      return pattern1686 (x5, 
E_SImode); /* [-1, 2] */

    case E_DImode:
      res = pattern1686 (x5, 
E_DImode);
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1699 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1707 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 4);
  if (XWINT (x3, 0) != 6L)
    return -1;
  x4 = XVECEXP (x2, 0, 5);
  if (XWINT (x4, 0) != 14L)
    return -1;
  x5 = XVECEXP (x2, 0, 6);
  if (XWINT (x5, 0) != 7L)
    return -1;
  x6 = XVECEXP (x2, 0, 7);
  if (XWINT (x6, 0) != 15L)
    return -1;
  x7 = XEXP (x1, 0);
  x8 = XEXP (x7, 1);
  operands[2] = x8;
  return 0;
}

int
pattern1717 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[6], i1)
      || !register_operand (operands[2], i2)
      || !scratch_operand (operands[1], i1))
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
pattern1726 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1725 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1725 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1737 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vsib_address_operand (operands[0], i1))
    return -1;
  switch (GET_MODE (operands[2]))
    {
    case E_V8SImode:
      if (!register_operand (operands[2], E_V8SImode)
          || !register_operand (operands[3], E_V8SImode))
        return -1;
      return 0;

    case E_V4DImode:
      if (!register_operand (operands[2], E_V4DImode)
          || !register_operand (operands[3], E_V4SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1743 (machine_mode i1)
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
pattern1752 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!memory_operand (operands[0], i1)
      || !const_int_operand (operands[2], i1)
      || GET_MODE (x1) != i1
      || !const_int_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1760 (rtx x1, machine_mode i1)
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
pattern1768 (machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i3)
      || !register_operand (operands[6], i1)
      || !register_operand (operands[3], i2)
      || !scratch_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1771 (rtx x1)
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

    case E_V16QImode:
      if (!register_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1779 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (!nonimmediate_operand (operands[0], E_V16HImode)
          || GET_MODE (x1) != E_V16HImode
          || !nonimmediate_operand (operands[1], E_V32HImode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[0], E_V16HFmode)
          || GET_MODE (x1) != E_V16HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 1;

    case E_V16BFmode:
      if (!nonimmediate_operand (operands[0], E_V16BFmode)
          || GET_MODE (x1) != E_V16BFmode
          || !nonimmediate_operand (operands[1], E_V32BFmode))
        return -1;
      return 2;

    case E_V16QImode:
      if (!nonimmediate_operand (operands[0], E_V16QImode)
          || GET_MODE (x1) != E_V16QImode
          || !nonimmediate_operand (operands[1], E_V32QImode))
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1796 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1794 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1804 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !memory_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1812 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[2] = x5;
  if (!register_operand (operands[2], i1))
    return -1;
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
pattern1823 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[7], i1)
      || !register_operand (operands[3], i2)
      || !scratch_operand (operands[2], i1))
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
pattern1829 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  if (XWINT (x2, 0) != 6L)
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  if (XWINT (x3, 0) != 22L)
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  if (XWINT (x4, 0) != 7L)
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  if (XWINT (x5, 0) != 23L)
    return -1;
  return 0;
}

int
pattern1832 (rtx x1, machine_mode i1)
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
pattern1836 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  if (XWINT (x2, 0) != 6L)
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  if (XWINT (x3, 0) != 22L)
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  if (XWINT (x4, 0) != 7L)
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  if (XWINT (x5, 0) != 23L)
    return -1;
  return 0;
}

int
pattern1845 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[5] = x1;
  if (!register_operand (operands[5], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[5]))
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
  if (!rtx_equal_p (x9, operands[5]))
    return -1;
  return 0;
}

int
pattern1854 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || !x86_64_immediate_operand (operands[2], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[4], i2)
      || !const_scalar_int_operand (operands[6], i2)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  x9 = XEXP (x8, 1);
  if (GET_MODE (x9) != i1)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_MODE (x10) != i1)
    return -1;
  return 0;
}

int
pattern1862 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != i1
      || !ix86_carry_flag_operator (operands[4], i1)
      || !general_reg_operand (operands[0], i1)
      || !memory_operand (operands[1], i1))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i2
      || !ix86_carry_flag_operator (operands[3], i2))
    return -1;
  x8 = XEXP (x7, 1);
  if (GET_MODE (x8) != i2)
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  x10 = XEXP (x9, 1);
  if (GET_MODE (x10) != i1)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_MODE (x11) != i1)
    return -1;
  x12 = PATTERN (peep2_next_insn (1));
  x13 = XEXP (x12, 1);
  switch (GET_CODE (x13))
    {
    case REG:
      if (!rtx_equal_p (x13, operands[0]))
        return -1;
      x14 = XEXP (x12, 0);
      if (!rtx_equal_p (x14, operands[1]))
        return -1;
      return 0;

    case LTU:
      if (peep2_current_count < 3
          || peep2_current_count < 4
          || GET_MODE (x13) != E_QImode)
        return -1;
      x15 = XEXP (x13, 0);
      if (GET_CODE (x15) != REG
          || REGNO (x15) != 17
          || GET_MODE (x15) != E_CCCmode)
        return -1;
      x16 = XEXP (x13, 1);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x14 = XEXP (x12, 0);
      operands[5] = x14;
      if (!general_reg_operand (operands[5], E_QImode))
        return -1;
      x17 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x17) != SET)
        return -1;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != ZERO_EXTEND
          || GET_MODE (x18) != i1)
        return -1;
      x19 = XEXP (x17, 0);
      operands[6] = x19;
      if (!general_reg_operand (operands[6], i1))
        return -1;
      x20 = XEXP (x18, 0);
      if (!rtx_equal_p (x20, operands[5]))
        return -1;
      x21 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x21) != SET)
        return -1;
      x22 = XEXP (x21, 1);
      if (!rtx_equal_p (x22, operands[0]))
        return -1;
      x23 = XEXP (x21, 0);
      if (!rtx_equal_p (x23, operands[1]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1889 (rtx x1)
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
recog_9 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x3))
    {
    case UNSPEC:
      return recog_8 (x1, insn, pnum_clobbers);

    case AND:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != UNSPEC
          || XVECLEN (x4, 0) != 3
          || XINT (x4, 1) != 59)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x6 = XVECEXP (x4, 0, 0);
      operands[1] = x6;
      x7 = XVECEXP (x4, 0, 1);
      operands[2] = x7;
      x8 = XVECEXP (x4, 0, 2);
      operands[3] = x8;
      x9 = XVECEXP (x2, 0, 1);
      if (!const48_operand (x9, E_SImode))
        return -1;
      x10 = XEXP (x3, 1);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          operands[4] = x10;
          operands[5] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1537 (x2, 
E_HImode) != 0)
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
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 3284; /* avx512f_cmpv16si3_mask_round */

                case E_V16HFmode:
                  if (!register_operand (operands[1], E_V16HFmode)
                      || !nonimmediate_operand (operands[2], E_V16HFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512FP16 && TARGET_AVX512VL)))))
                    return -1;
                  return 3308; /* avx512vl_cmpv16hf3_mask_round */

                case E_V16SFmode:
                  if (!register_operand (operands[1], E_V16SFmode)
                      || !nonimmediate_operand (operands[2], E_V16SFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 3314; /* avx512f_cmpv16sf3_mask_round */

                default:
                  return -1;
                }

            case E_QImode:
              if (pattern1537 (x2, 
E_QImode) != 0)
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
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 3288; /* avx512vl_cmpv8si3_mask_round */

                case E_V8DImode:
                  if (!register_operand (operands[1], E_V8DImode)
                      || !nonimmediate_operand (operands[2], E_V8DImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 3294; /* avx512f_cmpv8di3_mask_round */

                case E_V4DImode:
                  if (!register_operand (operands[1], E_V4DImode)
                      || !nonimmediate_operand (operands[2], E_V4DImode)
                      || !const_0_to_7_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 3298; /* avx512vl_cmpv4di3_mask_round */

                case E_V8SFmode:
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !nonimmediate_operand (operands[2], E_V8SFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 3318; /* avx512vl_cmpv8sf3_mask_round */

                case E_V8DFmode:
                  if (!register_operand (operands[1], E_V8DFmode)
                      || !nonimmediate_operand (operands[2], E_V8DFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_EVEX512)))))
                    return -1;
                  return 3324; /* avx512f_cmpv8df3_mask_round */

                case E_V4DFmode:
                  if (!register_operand (operands[1], E_V4DFmode)
                      || !nonimmediate_operand (operands[2], E_V4DFmode)
                      || !const_0_to_31_operand (operands[3], E_SImode)
                      || !(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 122 "../../src/gcc/config/i386/subst.md"
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
(TARGET_AVX512VL)))))
                    return -1;
                  return 3328; /* avx512vl_cmpv4df3_mask_round */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x10, 0) != 1L
              || pattern1450 (x2) != 0)
            return -1;
          operands[4] = x9;
          switch (pattern1693 ())
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4818 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3659; /* avx512f_vmcmpv8hf3_round */

            case 1:
              if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 3661; /* avx512f_vmcmpv4sf3_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4818 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3663; /* avx512f_vmcmpv2df3_round */

            default:
              return -1;
            }

        case AND:
          if (GET_MODE (x10) != E_QImode)
            return -1;
          x11 = XEXP (x10, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || pattern1450 (x2) != 0)
            return -1;
          x12 = XEXP (x10, 0);
          operands[4] = x12;
          if (!register_operand (operands[4], E_QImode))
            return -1;
          operands[5] = x9;
          switch (pattern1693 ())
            {
            case 0:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4836 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                return -1;
              return 3665; /* avx512f_vmcmpv8hf3_mask_round */

            case 1:
              if (!
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F))
                return -1;
              return 3667; /* avx512f_vmcmpv4sf3_mask_round */

            case 2:
              if (!(
#line 286 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4836 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                return -1;
              return 3669; /* avx512f_vmcmpv2df3_mask_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case COMPARE:
      if (GET_MODE (x3) != E_CCFPmode)
        return -1;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != VEC_SELECT
          || pattern601 (x3) != 0
          || pattern44 (x1, 
E_CCFPmode) != 0)
        return -1;
      x13 = XEXP (x4, 0);
      operands[0] = x13;
      x10 = XEXP (x3, 1);
      x12 = XEXP (x10, 0);
      operands[1] = x12;
      x9 = XVECEXP (x2, 0, 1);
      operands[2] = x9;
      if (!const48_operand (operands[2], E_SImode))
        return -1;
      switch (GET_MODE (x4))
        {
        case E_HFmode:
          if (!register_operand (operands[0], E_V8HFmode)
              || GET_MODE (x10) != E_HFmode
              || !register_operand (operands[1], E_V8HFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (HFmode) || HFmode == E_HFmode) && 
#line 1355 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))))
            return -1;
          return 3683; /* avx512fp16_comi_round */

        case E_SFmode:
          if (!register_operand (operands[0], E_V4SFmode)
              || GET_MODE (x10) != E_SFmode
              || !register_operand (operands[1], E_V4SFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode) || SFmode == E_HFmode)))
            return -1;
          return 3687; /* sse_comi_round */

        case E_DFmode:
          if (!register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x10) != E_DFmode
              || !register_operand (operands[1], E_V2DFmode)
              || !(
#line 296 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 4868 "../../src/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode) || DFmode == E_HFmode)))
            return -1;
          return 3691; /* sse2_comi_round */

        default:
          return -1;
        }

    case FMA:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != NEG)
        return -1;
      x14 = XEXP (x3, 2);
      if (GET_CODE (x14) != NEG)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x13 = XEXP (x4, 0);
      operands[1] = x13;
      x10 = XEXP (x3, 1);
      operands[2] = x10;
      x15 = XEXP (x14, 0);
      operands[3] = x15;
      x9 = XVECEXP (x2, 0, 1);
      operands[4] = x9;
      if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (pattern1352 (x2, 
E_SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
            return -1;
          return 4008; /* *fma_fnmsub_sf */

        case E_DFmode:
          if (pattern1352 (x2, 
E_DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
            return -1;
          return 4010; /* *fma_fnmsub_df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_21 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  res = recog_20 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (XWINT (x4, 0) != 8L
      || XWINT (x3, 0) != 8L
      || pattern419 (x5) != 0)
    return -1;
  x6 = XEXP (x2, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      if (!int248_register_operand (operands[1], E_VOIDmode))
        return -1;
      operands[2] = x2;
      switch (GET_MODE (x5))
        {
        case E_HImode:
          if (!extract_operator (operands[2], E_HImode))
            return -1;
          return 134; /* *insvqi_2 */

        case E_SImode:
          if (!extract_operator (operands[2], E_SImode))
            return -1;
          return 135; /* *insvqi_2 */

        case E_DImode:
          if (!extract_operator (operands[2], E_DImode)
              || !
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 136; /* *insvqi_2 */

        default:
          return -1;
        }

    case AND:
      switch (pattern1199 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 800; /* *andqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 803; /* *andqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 806; /* *andqi_extdi_3 */

        default:
          return -1;
        }

    case IOR:
      switch (pattern1199 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 801; /* *iorqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 804; /* *iorqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 807; /* *iorqi_extdi_3 */

        default:
          return -1;
        }

    case XOR:
      switch (pattern1199 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 802; /* *xorqi_exthi_3 */

        case 1:
          if (!
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])))
            return -1;
          *pnum_clobbers = 1;
          return 805; /* *xorqi_extsi_3 */

        case 2:
          if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 808; /* *xorqi_extdi_3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_26 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_HImode))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (XVECLEN (x3, 0))
    {
    case 3:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      if (!const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      switch (XINT (x3, 1))
        {
        case 59:
          switch (pattern1083 (x3))
            {
            case 0:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3331; /* *avx512f_cmpv16si3_zero_extendhi */

            case 1:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3352; /* *avx512vl_cmpv16hf3_zero_extendhi */

            case 2:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3358; /* *avx512f_cmpv16sf3_zero_extendhi */

            case 3:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3451; /* *avx512vl_cmpv16qi3_zero_extendhi */

            case 4:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3460; /* *avx512vl_cmpv16hi3_zero_extendhi */

            case 5:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3334; /* *avx512vl_cmpv8si3_zero_extendhi */

            case 6:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3337; /* *avx512vl_cmpv4si3_zero_extendhi */

            case 7:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3340; /* *avx512f_cmpv8di3_zero_extendhi */

            case 8:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3343; /* *avx512vl_cmpv4di3_zero_extendhi */

            case 9:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3346; /* *avx512vl_cmpv2di3_zero_extendhi */

            case 10:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 3355; /* *avx512fp16_cmpv8hf3_zero_extendhi */

            case 11:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3361; /* *avx512vl_cmpv8sf3_zero_extendhi */

            case 12:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3364; /* *avx512vl_cmpv4sf3_zero_extendhi */

            case 13:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3367; /* *avx512f_cmpv8df3_zero_extendhi */

            case 14:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3370; /* *avx512vl_cmpv4df3_zero_extendhi */

            case 15:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3373; /* *avx512vl_cmpv2df3_zero_extendhi */

            case 16:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3463; /* *avx512vl_cmpv8hi3_zero_extendhi */

            case 17:
              if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (HImode))) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 3349; /* *avx512bw_cmpv32hf3_zero_extendhi */

            case 18:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3454; /* *avx512vl_cmpv32qi3_zero_extendhi */

            case 19:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3457; /* *avx512bw_cmpv32hi3_zero_extendhi */

            case 20:
              if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3448; /* *avx512bw_cmpv64qi3_zero_extendhi */

            default:
              return -1;
            }

        case 157:
          switch (pattern1085 (x3))
            {
            case 0:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3532; /* *avx512bw_ucmpv64qi3_zero_extendhi */

            case 1:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3535; /* *avx512vl_ucmpv16qi3_zero_extendhi */

            case 2:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3544; /* *avx512vl_ucmpv16hi3_zero_extendhi */

            case 3:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3604; /* *avx512f_ucmpv16si3_zero_extendhi */

            case 4:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3538; /* *avx512vl_ucmpv32qi3_zero_extendhi */

            case 5:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3541; /* *avx512bw_ucmpv32hi3_zero_extendhi */

            case 6:
              if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3547; /* *avx512vl_ucmpv8hi3_zero_extendhi */

            case 7:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3605; /* *avx512vl_ucmpv8si3_zero_extendhi */

            case 8:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3606; /* *avx512vl_ucmpv4si3_zero_extendhi */

            case 9:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3607; /* *avx512f_ucmpv8di3_zero_extendhi */

            case 10:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3608; /* *avx512vl_ucmpv4di3_zero_extendhi */

            case 11:
              if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (HImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (HImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 3609; /* *avx512vl_ucmpv2di3_zero_extendhi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (XINT (x3, 1))
        {
        case 158:
          switch (GET_MODE (x3))
            {
            case E_DImode:
              if (!register_operand (operands[1], E_V64QImode)
                  || !nonimmediate_operand (operands[2], E_V64QImode)
                  || !(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8163; /* *avx512bw_testmv64qi3_zext */

            case E_SImode:
              switch (pattern869 ())
                {
                case 0:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8166; /* *avx512vl_testmv32qi3_zext */

                case 1:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8172; /* *avx512bw_testmv32hi3_zext */

                default:
                  return -1;
                }

            case E_HImode:
              switch (pattern740 ())
                {
                case 0:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8169; /* *avx512vl_testmv16qi3_zext */

                case 1:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8175; /* *avx512vl_testmv16hi3_zext */

                case 2:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8181; /* *avx512f_testmv16si3_zext */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern741 ())
                {
                case 0:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8178; /* *avx512vl_testmv8hi3_zext */

                case 1:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8184; /* *avx512vl_testmv8si3_zext */

                case 2:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8187; /* *avx512vl_testmv4si3_zext */

                case 3:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8190; /* *avx512f_testmv8di3_zext */

                case 4:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8193; /* *avx512vl_testmv4di3_zext */

                case 5:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8196; /* *avx512vl_testmv2di3_zext */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 159:
          switch (GET_MODE (x3))
            {
            case E_DImode:
              if (!register_operand (operands[1], E_V64QImode)
                  || !nonimmediate_operand (operands[2], E_V64QImode)
                  || !(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (DImode))) && 
#line 504 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return -1;
              return 8235; /* *avx512bw_testnmv64qi3_zext */

            case E_SImode:
              switch (pattern869 ())
                {
                case 0:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 505 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8238; /* *avx512vl_testnmv32qi3_zext */

                case 1:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (SImode))) && 
#line 507 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8244; /* *avx512bw_testnmv32hi3_zext */

                default:
                  return -1;
                }

            case E_HImode:
              switch (pattern740 ())
                {
                case 0:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 506 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8241; /* *avx512vl_testnmv16qi3_zext */

                case 1:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 508 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8247; /* *avx512vl_testnmv16hi3_zext */

                case 2:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (HImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8253; /* *avx512f_testnmv16si3_zext */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern741 ())
                {
                case 0:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 509 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return -1;
                  return 8250; /* *avx512vl_testnmv8hi3_zext */

                case 1:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8256; /* *avx512vl_testnmv8si3_zext */

                case 2:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 510 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8259; /* *avx512vl_testnmv4si3_zext */

                case 3:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 8262; /* *avx512f_testnmv8di3_zext */

                case 4:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8265; /* *avx512vl_testnmv4di3_zext */

                case 5:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (2
       > GET_MODE_SIZE (QImode))) && 
#line 511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 8268; /* *avx512vl_testnmv2di3_zext */

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
recog_47 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
    case EQ:
      res = recog_46 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case LT:
      switch (pattern234 (x2))
        {
        case 0:
          if (
#line 3873 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return 2200; /* *mmx_ashrv4hi3_1 */
          break;

        case 1:
          if (
#line 3873 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE && ix86_pre_reload_split ()))
            return 2201; /* *mmx_ashrv2si3_1 */
          break;

        case 2:
          if (
#line 3962 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_pre_reload_split ()))
            return 2213; /* *mmx_ashrv2hi3_1 */
          break;

        default:
          break;
        }
      break;

    case GT:
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V8QImode:
          if (pattern849 (x2, 
E_V8QImode) == 0
              && 
#line 4170 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2223; /* mmx_gtv8qi3 */
          break;

        case E_V4HImode:
          if (pattern849 (x2, 
E_V4HImode) == 0
              && 
#line 4170 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2224; /* mmx_gtv4hi3 */
          break;

        case E_V2SImode:
          if (pattern849 (x2, 
E_V2SImode) == 0
              && 
#line 4170 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return 2225; /* mmx_gtv2si3 */
          break;

        case E_V4QImode:
          if (pattern7 (x2, 
E_V4QImode) == 0
              && 
#line 4185 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2226; /* *gtv4qi3 */
          break;

        case E_V2QImode:
          if (pattern7 (x2, 
E_V2QImode) == 0
              && 
#line 4185 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2227; /* *gtv2qi3 */
          break;

        case E_V2HImode:
          if (pattern7 (x2, 
E_V2HImode) == 0
              && 
#line 4185 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return 2228; /* *gtv2hi3 */
          break;

        default:
          break;
        }
      break;

    default:
      break;
    }
  operands[1] = x2;
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_V8QImode:
      if (pattern850 (
E_V8QImode) != 0
          || !
#line 4198 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2229; /* *xop_maskcmpv8qi3 */

    case E_V4HImode:
      if (pattern850 (
E_V4HImode) != 0
          || !
#line 4198 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2230; /* *xop_maskcmpv4hi3 */

    case E_V2SImode:
      if (pattern850 (
E_V2SImode) != 0
          || !
#line 4198 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2231; /* *xop_maskcmpv2si3 */

    case E_V4QImode:
      if (pattern850 (
E_V4QImode) != 0
          || !
#line 4208 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2232; /* *xop_maskcmpv4qi3 */

    case E_V2QImode:
      if (pattern850 (
E_V2QImode) != 0
          || !
#line 4208 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2233; /* *xop_maskcmpv2qi3 */

    case E_V2HImode:
      if (pattern850 (
E_V2HImode) != 0
          || !
#line 4208 "../../src/gcc/config/i386/mmx.md"
(TARGET_XOP))
        return -1;
      return 2234; /* *xop_maskcmpv2hi3 */

    default:
      return -1;
    }
}

 int
recog_57 (rtx x1 ATTRIBUTE_UNUSED,
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
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x3) != E_HImode
              || !nonimmediate_operand (operands[1], E_HImode)
              || !general_operand (operands[2], E_HImode))
            return -1;
          if ((
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
            return 590; /* *mulhi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
            return -1;
          *pnum_clobbers = 1;
          return 591; /* *mulhi3_1 */

        case E_QImode:
          if (pattern5 (x3, 
E_QImode) != 0)
            return -1;
          if (
#line 10691 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 602; /* *mulqi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 10691 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 603; /* *mulqi3_1 */

        case E_HFmode:
          if (pattern5 (x3, 
E_HFmode) != 0
              || !
#line 23445 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 1678; /* *mulhf */

        case E_V2SImode:
          if (pattern7 (x3, 
E_V2SImode) != 0
              || !
#line 3352 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE4_1 && TARGET_MMX_WITH_SSE))
            return -1;
          return 2158; /* mulv2si3 */

        case E_V4HImode:
          if (pattern8 (x3, 
E_V4HImode) != 0
              || !
#line 3381 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (MULT, V4HImode, operands)))
            return -1;
          return 2159; /* *mmx_mulv4hi3 */

        case E_V2HImode:
          if (pattern7 (x3, 
E_V2HImode) != 0
              || !
#line 3396 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2160; /* mulv2hi3 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != ZERO_EXTEND)
        return -1;
      x6 = XEXP (x4, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
          operands[1] = x6;
          x7 = XEXP (x5, 0);
          operands[2] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (pnum_clobbers == NULL
                  || pattern856 (x3, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 10994 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 618; /* *umulditi3_1 */

            case E_HImode:
              if (pattern856 (x3, 
E_QImode, 
E_HImode) != 0)
                return -1;
              if (
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
                return 625; /* *umulqihi3_1_nf */
              if (pnum_clobbers == NULL
                  || !
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
                return -1;
              *pnum_clobbers = 1;
              return 626; /* *umulqihi3_1 */

            default:
              return -1;
            }

        case VEC_SELECT:
          if (GET_MODE (x6) != E_V1SImode)
            return -1;
          x8 = XEXP (x6, 1);
          if (GET_CODE (x8) != PARALLEL
              || XVECLEN (x8, 0) != 1)
            return -1;
          x9 = XVECEXP (x8, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XEXP (x5, 0);
          if (GET_CODE (x7) != VEC_SELECT
              || GET_MODE (x7) != E_V1SImode)
            return -1;
          x10 = XEXP (x7, 1);
          if (GET_CODE (x10) != PARALLEL
              || XVECLEN (x10, 0) != 1)
            return -1;
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_V1DImode)
              || GET_MODE (x3) != E_V1DImode
              || GET_MODE (x4) != E_V1DImode)
            return -1;
          x12 = XEXP (x6, 0);
          operands[1] = x12;
          if (!register_mmxmem_operand (operands[1], E_V2SImode)
              || GET_MODE (x5) != E_V1DImode)
            return -1;
          x13 = XEXP (x7, 0);
          operands[2] = x13;
          if (!register_mmxmem_operand (operands[2], E_V2SImode)
              || !
#line 3636 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && TARGET_SSE2
   && ix86_binary_operator_ok (MULT, V2SImode, operands)))
            return -1;
          return 2167; /* *sse2_umulv1siv1di3 */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SIGN_EXTEND)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x5, 0);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_TImode:
          if (pattern856 (x3, 
E_DImode, 
E_TImode) != 0)
            return -1;
          if ((
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 621; /* *mulditi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 1199 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && (
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))))
            return -1;
          *pnum_clobbers = 1;
          return 622; /* *mulditi3_1 */

        case E_HImode:
          if (pattern856 (x3, 
E_QImode, 
E_HImode) != 0)
            return -1;
          if (
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 623; /* *mulqihi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 11060 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 624; /* *mulqihi3_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_65 (rtx x1 ATTRIBUTE_UNUSED,
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
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern45 (x3))
        {
        case 0:
          if (!
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)))
            return -1;
          return 2138; /* *mmx_ssaddv8qi3 */

        case 1:
          if (!
#line 3323 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)))
            return -1;
          return 2142; /* *mmx_ssaddv4hi3 */

        case 2:
          if (!
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2146; /* ssaddv4qi3 */

        case 3:
          if (!
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2150; /* ssaddv2qi3 */

        case 4:
          if (!
#line 3339 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2154; /* ssaddv2hi3 */

        default:
          return -1;
        }

    case VEC_SELECT:
      if (pattern101 (x3) != 0
          || !
#line 22628 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8600; /* ssse3_phaddswv4hi3 */

    case MULT:
      if (GET_MODE (x4) != E_V4HImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != ZERO_EXTEND
          || GET_MODE (x5) != E_V4HImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != VEC_SELECT
          || GET_MODE (x6) != E_V4QImode)
        return -1;
      x7 = XEXP (x6, 1);
      if (GET_CODE (x7) != PARALLEL
          || XVECLEN (x7, 0) != 4
          || pattern1076 (x7, 
6, 
4, 
2, 
0) != 0)
        return -1;
      x8 = XEXP (x4, 1);
      if (pattern1271 (x8, 
E_V4QImode, 
E_V4HImode) != 0)
        return -1;
      x9 = XEXP (x8, 0);
      x10 = XEXP (x9, 1);
      if (pattern1619 (x10, 
6, 
4, 
2, 
0) != 0)
        return -1;
      x11 = XEXP (x3, 1);
      if (pattern1783 (x11, 
E_V4QImode, 
E_V4HImode, 
ZERO_EXTEND) != 0
          || !register_operand (operands[0], E_V4HImode)
          || GET_MODE (x3) != E_V4HImode)
        return -1;
      x12 = XEXP (x6, 0);
      operands[1] = x12;
      if (!register_operand (operands[1], E_V8QImode))
        return -1;
      x13 = XEXP (x9, 0);
      operands[2] = x13;
      if (!register_mmxmem_operand (operands[2], E_V8QImode))
        return -1;
      x14 = XEXP (x11, 0);
      x15 = XEXP (x14, 0);
      x16 = XEXP (x15, 0);
      if (!rtx_equal_p (x16, operands[1]))
        return -1;
      x17 = XEXP (x11, 1);
      x18 = XEXP (x17, 0);
      x19 = XEXP (x18, 0);
      if (!rtx_equal_p (x19, operands[2])
          || !
#line 22912 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
        return -1;
      return 8619; /* ssse3_pmaddubsw */

    default:
      return -1;
    }
}

 int
recog_69 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:
      if (pnum_clobbers == NULL
          || !const_int_operand (operands[2], E_QImode)
          || !
#line 17266 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands, TARGET_APX_NDD)))
        return -1;
      *pnum_clobbers = 1;
      return 1170; /* *ashrsi3_cvt_zext */

    case REG:
    case SUBREG:
      if (!register_operand (operands[2], E_SImode)
          || !
#line 17445 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      return 1185; /* *bmi2_ashrsi3_1_zext */

    default:
      return -1;
    }
}

 int
recog_70 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x2) != E_DImode
          || GET_MODE (x3) != E_SImode)
        return -1;
      switch (XINT (x3, 1))
        {
        case 19:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 23193 "../../src/gcc/config/i386/i386.md"
(TARGET_X32))
            return -1;
          return 1660; /* *load_tp_x32_zext */

        case 49:
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              operands[1] = x4;
              switch (GET_MODE (operands[1]))
                {
                case E_V8SFmode:
                  if (register_operand (operands[1], E_V8SFmode)
                      && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8517; /* *avx_movmskps256_uext */
                  break;

                case E_V4SFmode:
                  if (register_operand (operands[1], E_V4SFmode)
                      && 
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return 8519; /* *sse_movmskps_uext */
                  break;

                case E_V4DFmode:
                  if (register_operand (operands[1], E_V4DFmode)
                      && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8521; /* *avx_movmskpd256_uext */
                  break;

                case E_V2DFmode:
                  if (register_operand (operands[1], E_V2DFmode)
                      && (
#line 21959 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return 8523; /* *sse2_movmskpd_uext */
                  break;

                case E_V32QImode:
                  if (register_operand (operands[1], E_V32QImode)
                      && (
#line 22114 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return 8562; /* *avx2_pmovmskb_zext */
                  break;

                case E_V16QImode:
                  if (register_operand (operands[1], E_V16QImode)
                      && 
#line 22114 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return 8563; /* *sse2_pmovmskb_zext */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x4) != SUBREG)
                return -1;
              switch (pattern1082 (x4))
                {
                case 0:
                  if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8541; /* *avx_movmskps256_uext_lt_avx512 */

                case 1:
                  if (!
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8543; /* *sse_movmskps_uext_lt_avx512 */

                case 2:
                  if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8545; /* *avx_movmskpd256_uext_lt_avx512 */

                case 3:
                  if (!(
#line 22041 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8547; /* *sse2_movmskpd_uext_lt_avx512 */

                case 4:
                  if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8553; /* *avx_movmskps256_uext_shift */

                case 5:
                  if (!
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8555; /* *sse_movmskps_uext_shift */

                case 6:
                  if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8557; /* *avx_movmskpd256_uext_shift */

                case 7:
                  if (!(
#line 22080 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8559; /* *sse2_movmskpd_uext_shift */

                default:
                  return -1;
                }

            case LT:
              switch (pattern981 (x4))
                {
                case 0:
                  if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8533; /* *avx_movmskps256_uext_lt */

                case 1:
                  if (!
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE))
                    return -1;
                  return 8535; /* *sse_movmskps_uext_lt */

                case 2:
                  if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return -1;
                  return 8537; /* *avx_movmskpd256_uext_lt */

                case 3:
                  if (!(
#line 22016 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                    return -1;
                  return 8539; /* *sse2_movmskpd_uext_lt */

                case 4:
                  if (!(
#line 22276 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8570; /* *avx2_pmovmskb_zext_lt */

                case 5:
                  if (!
#line 22276 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return -1;
                  return 8571; /* *sse2_pmovmskb_zext_lt */

                default:
                  return -1;
                }

            case VEC_MERGE:
              switch (pattern983 (x4))
                {
                case 0:
                  if (!(
#line 22305 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
                    return -1;
                  return 8572; /* *avx2_pmovmskb_zext_lt_avx512 */

                case 1:
                  if (!
#line 22305 "../../src/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE2))
                    return -1;
                  return 8573; /* *sse2_pmovmskb_zext_lt_avx512 */

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
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      switch (XINT (x3, 1))
        {
        case 95:
          if (GET_MODE (x3) != E_SImode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !register_operand (operands[1], E_SImode)
              || !nonimmediate_operand (operands[2], E_DImode)
              || !
#line 29058 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CRC32))
            return -1;
          return 1894; /* sse4_2_crc32di */

        case 158:
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              switch (pattern870 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8161; /* *avx512bw_testmv64qi3_zext */

                case 1:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8164; /* *avx512vl_testmv32qi3_zext */

                case 2:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8170; /* *avx512bw_testmv32hi3_zext */

                case 3:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8167; /* *avx512vl_testmv16qi3_zext */

                case 4:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8173; /* *avx512vl_testmv16hi3_zext */

                case 5:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8179; /* *avx512f_testmv16si3_zext */

                case 6:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8176; /* *avx512vl_testmv8hi3_zext */

                case 7:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8182; /* *avx512vl_testmv8si3_zext */

                case 8:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8185; /* *avx512vl_testmv4si3_zext */

                case 9:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8188; /* *avx512f_testmv8di3_zext */

                case 10:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8191; /* *avx512vl_testmv4di3_zext */

                case 11:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8194; /* *avx512vl_testmv2di3_zext */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern870 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8162; /* *avx512bw_testmv64qi3_zext */

                case 1:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8165; /* *avx512vl_testmv32qi3_zext */

                case 2:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8171; /* *avx512bw_testmv32hi3_zext */

                case 3:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8168; /* *avx512vl_testmv16qi3_zext */

                case 4:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8174; /* *avx512vl_testmv16hi3_zext */

                case 5:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8180; /* *avx512f_testmv16si3_zext */

                case 6:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8177; /* *avx512vl_testmv8hi3_zext */

                case 7:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8183; /* *avx512vl_testmv8si3_zext */

                case 8:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8186; /* *avx512vl_testmv4si3_zext */

                case 9:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8189; /* *avx512f_testmv8di3_zext */

                case 10:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8192; /* *avx512vl_testmv4di3_zext */

                case 11:
                  if (!(
#line 19088 "../../src/gcc/config/i386/sse.md"
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
                  return 8195; /* *avx512vl_testmv2di3_zext */

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
              switch (pattern870 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (DImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8233; /* *avx512bw_testnmv64qi3_zext */

                case 1:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8236; /* *avx512vl_testnmv32qi3_zext */

                case 2:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (8
       > GET_MODE_SIZE (SImode))) && 
#line 19057 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return -1;
                  return 8242; /* *avx512bw_testnmv32hi3_zext */

                case 3:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8239; /* *avx512vl_testnmv16qi3_zext */

                case 4:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8245; /* *avx512vl_testnmv16hi3_zext */

                case 5:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8251; /* *avx512f_testnmv16si3_zext */

                case 6:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8248; /* *avx512vl_testnmv8hi3_zext */

                case 7:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8254; /* *avx512vl_testnmv8si3_zext */

                case 8:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8257; /* *avx512vl_testnmv4si3_zext */

                case 9:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8260; /* *avx512f_testnmv8di3_zext */

                case 10:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8263; /* *avx512vl_testnmv4di3_zext */

                case 11:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8266; /* *avx512vl_testnmv2di3_zext */

                default:
                  return -1;
                }

            case E_SImode:
              switch (pattern870 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8234; /* *avx512bw_testnmv64qi3_zext */

                case 1:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8237; /* *avx512vl_testnmv32qi3_zext */

                case 2:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8243; /* *avx512bw_testnmv32hi3_zext */

                case 3:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8240; /* *avx512vl_testnmv16qi3_zext */

                case 4:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8246; /* *avx512vl_testnmv16hi3_zext */

                case 5:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8252; /* *avx512f_testnmv16si3_zext */

                case 6:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8249; /* *avx512vl_testnmv8hi3_zext */

                case 7:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8255; /* *avx512vl_testnmv8si3_zext */

                case 8:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8258; /* *avx512vl_testnmv4si3_zext */

                case 9:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8261; /* *avx512f_testnmv8di3_zext */

                case 10:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8264; /* *avx512vl_testnmv4di3_zext */

                case 11:
                  if (!(
#line 19118 "../../src/gcc/config/i386/sse.md"
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
                  return 8267; /* *avx512vl_testnmv2di3_zext */

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
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      x5 = XVECEXP (x3, 0, 1);
      operands[2] = x5;
      x6 = XVECEXP (x3, 0, 2);
      operands[3] = x6;
      if (!const_0_to_7_operand (operands[3], E_SImode))
        return -1;
      switch (XINT (x3, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern1084 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3332; /* *avx512f_cmpv16si3_zero_extendsi */

                case 1:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3353; /* *avx512vl_cmpv16hf3_zero_extendsi */

                case 2:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3359; /* *avx512f_cmpv16sf3_zero_extendsi */

                case 3:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3452; /* *avx512vl_cmpv16qi3_zero_extendsi */

                case 4:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3461; /* *avx512vl_cmpv16hi3_zero_extendsi */

                case 5:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3335; /* *avx512vl_cmpv8si3_zero_extendsi */

                case 6:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3338; /* *avx512vl_cmpv4si3_zero_extendsi */

                case 7:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3341; /* *avx512f_cmpv8di3_zero_extendsi */

                case 8:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3344; /* *avx512vl_cmpv4di3_zero_extendsi */

                case 9:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3347; /* *avx512vl_cmpv2di3_zero_extendsi */

                case 10:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3356; /* *avx512fp16_cmpv8hf3_zero_extendsi */

                case 11:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3362; /* *avx512vl_cmpv8sf3_zero_extendsi */

                case 12:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3365; /* *avx512vl_cmpv4sf3_zero_extendsi */

                case 13:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3368; /* *avx512f_cmpv8df3_zero_extendsi */

                case 14:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3371; /* *avx512vl_cmpv4df3_zero_extendsi */

                case 15:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3374; /* *avx512vl_cmpv2df3_zero_extendsi */

                case 16:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3464; /* *avx512vl_cmpv8hi3_zero_extendsi */

                case 17:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (SImode))) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3350; /* *avx512bw_cmpv32hf3_zero_extendsi */

                case 18:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3455; /* *avx512vl_cmpv32qi3_zero_extendsi */

                case 19:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3458; /* *avx512bw_cmpv32hi3_zero_extendsi */

                case 20:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3449; /* *avx512bw_cmpv64qi3_zero_extendsi */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1084 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3333; /* *avx512f_cmpv16si3_zero_extenddi */

                case 1:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3354; /* *avx512vl_cmpv16hf3_zero_extenddi */

                case 2:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3360; /* *avx512f_cmpv16sf3_zero_extenddi */

                case 3:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3453; /* *avx512vl_cmpv16qi3_zero_extenddi */

                case 4:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V16HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3462; /* *avx512vl_cmpv16hi3_zero_extenddi */

                case 5:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3336; /* *avx512vl_cmpv8si3_zero_extenddi */

                case 6:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3339; /* *avx512vl_cmpv4si3_zero_extenddi */

                case 7:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3342; /* *avx512f_cmpv8di3_zero_extenddi */

                case 8:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3345; /* *avx512vl_cmpv4di3_zero_extenddi */

                case 9:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3348; /* *avx512vl_cmpv2di3_zero_extenddi */

                case 10:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3357; /* *avx512fp16_cmpv8hf3_zero_extenddi */

                case 11:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3363; /* *avx512vl_cmpv8sf3_zero_extenddi */

                case 12:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3366; /* *avx512vl_cmpv4sf3_zero_extenddi */

                case 13:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3369; /* *avx512f_cmpv8df3_zero_extenddi */

                case 14:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3372; /* *avx512vl_cmpv4df3_zero_extenddi */

                case 15:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3375; /* *avx512vl_cmpv2df3_zero_extenddi */

                case 16:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V8HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3465; /* *avx512vl_cmpv8hi3_zero_extenddi */

                case 17:
                  if (!(
#line 4411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V32HFmode)
      < GET_MODE_PRECISION (DImode))) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3351; /* *avx512bw_cmpv32hf3_zero_extenddi */

                case 18:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3456; /* *avx512vl_cmpv32qi3_zero_extenddi */

                case 19:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V32HImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3459; /* *avx512bw_cmpv32hi3_zero_extenddi */

                case 20:
                  if (!(
#line 4501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
   && (GET_MODE_NUNITS (V64QImode)
       < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3450; /* *avx512bw_cmpv64qi3_zero_extenddi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern1086 (x2, 
E_SImode))
                {
                case 0:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3533; /* *avx512bw_ucmpv64qi3_zero_extendsi */

                case 1:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3536; /* *avx512vl_ucmpv16qi3_zero_extendsi */

                case 2:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3545; /* *avx512vl_ucmpv16hi3_zero_extendsi */

                case 3:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3610; /* *avx512f_ucmpv16si3_zero_extendsi */

                case 4:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3539; /* *avx512vl_ucmpv32qi3_zero_extendsi */

                case 5:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3542; /* *avx512bw_ucmpv32hi3_zero_extendsi */

                case 6:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3548; /* *avx512vl_ucmpv8hi3_zero_extendsi */

                case 7:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3611; /* *avx512vl_ucmpv8si3_zero_extendsi */

                case 8:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3612; /* *avx512vl_ucmpv4si3_zero_extendsi */

                case 9:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3613; /* *avx512f_ucmpv8di3_zero_extendsi */

                case 10:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3614; /* *avx512vl_ucmpv4di3_zero_extendsi */

                case 11:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (SImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (SImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3615; /* *avx512vl_ucmpv2di3_zero_extendsi */

                default:
                  return -1;
                }

            case E_DImode:
              switch (pattern1086 (x2, 
E_DImode))
                {
                case 0:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V64QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3534; /* *avx512bw_ucmpv64qi3_zero_extenddi */

                case 1:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3537; /* *avx512vl_ucmpv16qi3_zero_extenddi */

                case 2:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V16HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3546; /* *avx512vl_ucmpv16hi3_zero_extenddi */

                case 3:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V16SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3616; /* *avx512f_ucmpv16si3_zero_extenddi */

                case 4:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32QImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3540; /* *avx512vl_ucmpv32qi3_zero_extenddi */

                case 5:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V32HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3543; /* *avx512bw_ucmpv32hi3_zero_extenddi */

                case 6:
                  if (!(
#line 4611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW
  && (GET_MODE_NUNITS (V8HImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3549; /* *avx512vl_ucmpv8hi3_zero_extenddi */

                case 7:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3617; /* *avx512vl_ucmpv8si3_zero_extenddi */

                case 8:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4SImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3618; /* *avx512vl_ucmpv4si3_zero_extenddi */

                case 9:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V8DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3619; /* *avx512f_ucmpv8di3_zero_extenddi */

                case 10:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V4DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3620; /* *avx512vl_ucmpv4di3_zero_extenddi */

                case 11:
                  if (!(
#line 4700 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (!VALID_MASK_AVX512BW_MODE (DImode) || TARGET_AVX512BW)
   && (GET_MODE_NUNITS (V2DImode)
      < GET_MODE_PRECISION (DImode))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3621; /* *avx512vl_ucmpv2di3_zero_extenddi */

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
recog_131 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_15_operand (operands[2], E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  x7 = XEXP (x2, 2);
  operands[4] = x7;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (pattern466 (x2, 
E_V32HFmode, 
E_SImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
        return -1;
      return 10017; /* avx512bw_getmantv32hf_mask */

    case E_V16HFmode:
      if (pattern466 (x2, 
E_V16HFmode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 10021; /* avx512vl_getmantv16hf_mask */

    case E_V8HFmode:
      if (pattern466 (x2, 
E_V8HFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
        return -1;
      return 10024; /* avx512fp16_getmantv8hf_mask */

    case E_V16SFmode:
      if (pattern466 (x2, 
E_V16SFmode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10027; /* avx512f_getmantv16sf_mask */

    case E_V8SFmode:
      if (pattern466 (x2, 
E_V8SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10031; /* avx512vl_getmantv8sf_mask */

    case E_V4SFmode:
      if (pattern466 (x2, 
E_V4SFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10034; /* avx512vl_getmantv4sf_mask */

    case E_V8DFmode:
      if (pattern466 (x2, 
E_V8DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10037; /* avx512f_getmantv8df_mask */

    case E_V4DFmode:
      if (pattern466 (x2, 
E_V4DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10041; /* avx512vl_getmantv4df_mask */

    case E_V2DFmode:
      if (pattern466 (x2, 
E_V2DFmode, 
E_QImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10044; /* avx512vl_getmantv2df_mask */

    default:
      return -1;
    }
}

 int
recog_136 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10231; /* vpshrdv_v32hi_mask */

    case 1:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10232; /* vpshrdv_v16si_mask */

    case 2:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10233; /* vpshrdv_v8di_mask */

    case 3:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10234; /* vpshrdv_v16hi_mask */

    case 4:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10235; /* vpshrdv_v8si_mask */

    case 5:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10236; /* vpshrdv_v4di_mask */

    case 6:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10237; /* vpshrdv_v8hi_mask */

    case 7:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10238; /* vpshrdv_v4si_mask */

    case 8:
      if (!(
#line 30446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10239; /* vpshrdv_v2di_mask */

    case 9:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10240; /* vpshrdv_v32hi_maskz_1 */

    case 10:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10241; /* vpshrdv_v16si_maskz_1 */

    case 11:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10242; /* vpshrdv_v8di_maskz_1 */

    case 12:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10243; /* vpshrdv_v16hi_maskz_1 */

    case 13:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10244; /* vpshrdv_v8si_maskz_1 */

    case 14:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10245; /* vpshrdv_v4di_maskz_1 */

    case 15:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10246; /* vpshrdv_v8hi_maskz_1 */

    case 16:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10247; /* vpshrdv_v4si_maskz_1 */

    case 17:
      if (!(
#line 30476 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10248; /* vpshrdv_v2di_maskz_1 */

    default:
      return -1;
    }
}

 int
recog_142 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10205; /* vpshld_v32hi_mask */

    case 1:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10207; /* vpshld_v16si_mask */

    case 2:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 10209; /* vpshld_v8di_mask */

    case 3:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10211; /* vpshld_v16hi_mask */

    case 4:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10213; /* vpshld_v8si_mask */

    case 5:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10215; /* vpshld_v4di_mask */

    case 6:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10217; /* vpshld_v8hi_mask */

    case 7:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10219; /* vpshld_v4si_mask */

    case 8:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 10221; /* vpshld_v2di_mask */

    default:
      return -1;
    }
}

 int
recog_150 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V8BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_QImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V8BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V8BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V8BFmode)
              && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2529; /* avx512vl_blendmv8bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V8BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V8BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2553; /* *avx512vl_storev8bf_mask */
}

 int
recog_151 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V16BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_HImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V16BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V16BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V16BFmode)
              && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2528; /* avx512vl_blendmv16bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V16BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2552; /* *avx512vl_storev16bf_mask */
}

 int
recog_152 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V32BFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_SImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V32BFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V32BFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V32BFmode)
              && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 2527; /* avx512bw_blendmv32bf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V32BFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V32BFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 324 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
    return -1;
  return 2551; /* *avx512bw_storev32bf_mask */
}

 int
recog_153 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V8HFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_QImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V8HFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V8HFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V8HFmode)
              && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2526; /* avx512fp16_blendmv8hf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V8HFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V8HFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2550; /* *avx512fp16_storev8hf_mask */
}

 int
recog_154 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V16HFmode)
    return -1;
  x3 = XEXP (x2, 2);
  if (!register_operand (x3, E_HImode))
    return -1;
  operands[3] = x3;
  if (register_operand (operands[0], E_V16HFmode))
    {
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (nonimmediate_operand (operands[2], E_V16HFmode))
        {
          x5 = XEXP (x2, 1);
          operands[1] = x5;
          if (nonimm_or_0_operand (operands[1], E_V16HFmode)
              && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 2525; /* avx512vl_blendmv16hf */
        }
    }
  operands[2] = x3;
  if (!memory_operand (operands[0], E_V16HFmode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_V16HFmode))
    return -1;
  x5 = XEXP (x2, 1);
  if (!rtx_equal_p (x5, operands[0])
      || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
    return -1;
  return 2549; /* *avx512vl_storev16hf_mask */
}

 int
recog_155 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16SImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2506; /* avx512f_blendmv16si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2530; /* *avx512f_storev16si_mask */

    case E_V8SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8SImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2507; /* avx512vl_blendmv8si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2531; /* *avx512vl_storev8si_mask */

    case E_V4SImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4SImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4SImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4SImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2508; /* avx512vl_blendmv4si */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 294 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2532; /* *avx512vl_storev4si_mask */

    case E_V8DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8DImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2509; /* avx512f_blendmv8di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2533; /* *avx512f_storev8di_mask */

    case E_V4DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4DImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2510; /* avx512vl_blendmv4di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2534; /* *avx512vl_storev4di_mask */

    case E_V2DImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V2DImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V2DImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V2DImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V2DImode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2511; /* avx512vl_blendmv2di */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V2DImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 295 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2535; /* *avx512vl_storev2di_mask */

    case E_V16SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16SFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2512; /* avx512f_blendmv16sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2536; /* *avx512f_storev16sf_mask */

    case E_V8SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8SFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2513; /* avx512vl_blendmv8sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2537; /* *avx512vl_storev8sf_mask */

    case E_V4SFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4SFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4SFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4SFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4SFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2514; /* avx512vl_blendmv4sf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4SFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 296 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2538; /* *avx512vl_storev4sf_mask */

    case E_V8DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8DFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2515; /* avx512f_blendmv8df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2539; /* *avx512f_storev8df_mask */

    case E_V4DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V4DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V4DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V4DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V4DFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2516; /* avx512vl_blendmv4df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V4DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V4DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2540; /* *avx512vl_storev4df_mask */

    case E_V2DFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V2DFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V2DFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V2DFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V2DFmode)
                  && (
#line 1749 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2517; /* avx512vl_blendmv2df */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V2DFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1794 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 297 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2541; /* *avx512vl_storev2df_mask */

    case E_V64QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V64QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_DImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V64QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V64QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V64QImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2518; /* avx512bw_blendmv64qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V64QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V64QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2542; /* *avx512bw_storev64qi_mask */

    case E_V16QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16QImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2519; /* avx512vl_blendmv16qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2543; /* *avx512vl_storev16qi_mask */

    case E_V32QImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32QImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32QImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32QImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32QImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2520; /* avx512vl_blendmv32qi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32QImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32QImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 321 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2544; /* *avx512vl_storev32qi_mask */

    case E_V32HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32HImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2521; /* avx512bw_blendmv32hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2545; /* *avx512bw_storev32hi_mask */

    case E_V16HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V16HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_HImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V16HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V16HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V16HImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2522; /* avx512vl_blendmv16hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V16HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V16HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2546; /* *avx512vl_storev16hi_mask */

    case E_V8HImode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V8HImode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_QImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V8HImode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V8HImode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V8HImode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 2523; /* avx512vl_blendmv8hi */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V8HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V8HImode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 322 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 2547; /* *avx512vl_storev8hi_mask */

    case E_V32HFmode:
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_V32HFmode)
        return -1;
      x3 = XEXP (x2, 2);
      if (!register_operand (x3, E_SImode))
        return -1;
      operands[3] = x3;
      if (register_operand (operands[0], E_V32HFmode))
        {
          x4 = XEXP (x2, 0);
          operands[2] = x4;
          if (nonimmediate_operand (operands[2], E_V32HFmode))
            {
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (nonimm_or_0_operand (operands[1], E_V32HFmode)
                  && (
#line 1780 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 2524; /* avx512bw_blendmv32hf */
            }
        }
      operands[2] = x3;
      if (!memory_operand (operands[0], E_V32HFmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_V32HFmode))
        return -1;
      x5 = XEXP (x2, 1);
      if (!rtx_equal_p (x5, operands[0])
          || !(
#line 1822 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 323 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 2548; /* *avx512bw_storev32hf_mask */

    case E_V16HFmode:
      return recog_154 (x1, insn, pnum_clobbers);

    case E_V8HFmode:
      return recog_153 (x1, insn, pnum_clobbers);

    case E_V32BFmode:
      return recog_152 (x1, insn, pnum_clobbers);

    case E_V16BFmode:
      return recog_151 (x1, insn, pnum_clobbers);

    case E_V8BFmode:
      return recog_150 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_163 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XEXP (x2, 2);
  if (!register_operand (x7, E_QImode))
    return -1;
  x8 = XVECEXP (x4, 0, 0);
  switch (XWINT (x8, 0))
    {
    case 2L:
      x9 = XVECEXP (x4, 0, 1);
      if (XWINT (x9, 0) != 6L
          || XWINT (x5, 0) != 3L
          || XWINT (x6, 0) != 7L)
        return -1;
      x10 = XEXP (x3, 0);
      x11 = XEXP (x10, 1);
      operands[2] = x11;
      x12 = XEXP (x2, 1);
      operands[3] = x12;
      operands[4] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1583 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11230 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_AVX512VL)))
            return -1;
          return 5256; /* vec_interleave_highv4sf_mask */

        case E_V4SImode:
          if (pattern1583 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19772 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
            return -1;
          return 8376; /* vec_interleave_highv4si_mask */

        default:
          return -1;
        }

    case 0L:
      x9 = XVECEXP (x4, 0, 1);
      switch (XWINT (x9, 0))
        {
        case 4L:
          switch (XWINT (x5, 0))
            {
            case 1L:
              if (XWINT (x6, 0) != 5L)
                return -1;
              x10 = XEXP (x3, 0);
              x11 = XEXP (x10, 1);
              operands[2] = x11;
              x12 = XEXP (x2, 1);
              operands[3] = x12;
              operands[4] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_V4SFmode:
                  if (pattern1582 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
                      || !
#line 11287 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))
                    return -1;
                  return 5261; /* unpcklps128_mask */

                case E_V4SImode:
                  if (pattern1583 (x2, 
E_V4SImode, 
E_V8SImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19826 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                    return -1;
                  return 8382; /* vec_interleave_lowv4si_mask */

                default:
                  return -1;
                }

            case 2L:
              if (XWINT (x6, 0) != 6L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (pattern1638 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0)
                    return -1;
                  x12 = XEXP (x2, 1);
                  operands[2] = x12;
                  if (nonimmediate_operand (operands[1], E_V4DFmode))
                    {
                      operands[3] = x7;
                      x10 = XEXP (x3, 0);
                      x11 = XEXP (x10, 1);
                      if (rtx_equal_p (x11, operands[1])
                          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13482 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                        return 5416; /* avx_movddup256_mask */
                    }
                  operands[3] = x12;
                  if (!register_operand (operands[1], E_V4DFmode))
                    return -1;
                  x10 = XEXP (x3, 0);
                  x11 = XEXP (x10, 1);
                  operands[2] = x11;
                  if (!nonimmediate_operand (operands[2], E_V4DFmode))
                    return -1;
                  operands[4] = x7;
                  if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                    return -1;
                  return 5418; /* avx_unpcklpd256_mask */

                case E_V4DImode:
                  if (pattern1639 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                    return -1;
                  return 7207; /* avx2_interleave_lowv4di_mask */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (XWINT (x5, 0) != 6L
              || XWINT (x6, 0) != 6L
              || pattern1581 (x2) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11425 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_AVX512VL)))
            return -1;
          return 5272; /* sse3_movsldup_mask */

        default:
          return -1;
        }

    case 1L:
      if (XWINT (x6, 0) != 7L)
        return -1;
      x9 = XVECEXP (x4, 0, 1);
      switch (XWINT (x9, 0))
        {
        case 1L:
          if (XWINT (x5, 0) != 7L
              || pattern1581 (x2) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 11372 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_AVX512VL)))
            return -1;
          return 5266; /* sse3_movshdup_mask */

        case 5L:
          if (XWINT (x5, 0) != 3L)
            return -1;
          x10 = XEXP (x3, 0);
          x11 = XEXP (x10, 1);
          operands[2] = x11;
          x12 = XEXP (x2, 1);
          operands[3] = x12;
          operands[4] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern1582 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 13352 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512VL)))
                return -1;
              return 5408; /* avx_unpckhpd256_mask */

            case E_V4DImode:
              if (pattern1582 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 14478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && TARGET_AVX512VL)))
                return -1;
              return 7201; /* avx2_interleave_highv4di_mask */

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
recog_171 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
  x8 = XVECEXP (x4, 0, 5);
  operands[7] = x8;
  x9 = XVECEXP (x4, 0, 6);
  operands[8] = x9;
  x10 = XVECEXP (x4, 0, 7);
  operands[9] = x10;
  x11 = XEXP (x2, 1);
  operands[10] = x11;
  x12 = XEXP (x2, 2);
  operands[11] = x12;
  if (!register_operand (operands[11], E_QImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || GET_MODE (x3) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || pattern1807 () != 0
          || !nonimm_or_0_operand (operands[10], E_V8DFmode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 8426; /* *avx512f_shuf_f64x2_1_mask_1 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || GET_MODE (x3) != E_V8DImode
          || !nonimm_or_0_operand (operands[10], E_V8DImode))
        return -1;
      if (register_operand (operands[1], E_V8DImode)
          && pattern1807 () == 0
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 8428; /* *avx512f_shuf_i64x2_1_mask_1 */
      if (!nonimmediate_operand (operands[1], E_V8DImode)
          || pattern1808 () != 0
          || !(
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
      return 9180; /* avx512f_permv8di_1_mask */

    case E_V8SImode:
      if (pattern755 (x2, 
E_V8SImode) != 0
          || pattern1808 () != 0
          || !nonimm_or_0_operand (operands[10], E_V8SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 20641 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && TARGET_AVX512VL
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))))
        return -1;
      return 8444; /* avx2_pshufd_1_mask */

    default:
      return -1;
    }
}

 int
recog_183 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SS_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != SS_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x7 = XEXP (x5, 0);
      operands[2] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V16QImode:
          if (pattern1119 (x2, 
E_HImode, 
E_V16QImode, 
E_V8HImode, 
E_V8QImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19225 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8306; /* sse2_packsswb_mask */

        case E_V8HImode:
          if (pattern1119 (x2, 
E_QImode, 
E_V8HImode, 
E_V4SImode, 
E_V4HImode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 19319 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL && TARGET_AVX512BW)))
            return -1;
          return 8312; /* sse2_packssdw_mask */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[2] = x4;
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != VEC_SELECT)
        return -1;
      x10 = XEXP (x5, 1);
      if (GET_CODE (x10) != PARALLEL)
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (XVECLEN (x10, 0))
        {
        case 8:
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x12 = XVECEXP (x10, 0, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
            return -1;
          x13 = XVECEXP (x10, 0, 2);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 10]
              || pattern1413 (x10, 
15, 
14, 
13, 
12, 
11) != 0
              || !register_operand (operands[4], E_HImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1517 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8402; /* vec_set_lo_v16sf_mask */

            case E_V16SImode:
              if (pattern1517 (x2, 
E_V16SImode, 
E_V8SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8404; /* vec_set_lo_v16si_mask */

            default:
              return -1;
            }

        case 4:
          if (pattern1215 (x10, 
7, 
6, 
5, 
4) != 0
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1517 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8410; /* vec_set_lo_v8df_mask */

            case E_V8DImode:
              if (pattern1517 (x2, 
E_V8DImode, 
E_V4DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8412; /* vec_set_lo_v8di_mask */

            case E_V8SImode:
              if (pattern1517 (x2, 
E_V8SImode, 
E_V4SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9474; /* vec_set_lo_v8si_mask */

            case E_V8SFmode:
              if (pattern1517 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9476; /* vec_set_lo_v8sf_mask */

            default:
              return -1;
            }

        case 2:
          x11 = XVECEXP (x10, 0, 0);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
            return -1;
          x12 = XVECEXP (x10, 0, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DImode:
              if (pattern1517 (x2, 
E_V4DImode, 
E_V2DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28445 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9466; /* vec_set_lo_v4di_mask */

            case E_V4DFmode:
              if (pattern1517 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28445 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9468; /* vec_set_lo_v4df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x14 = XEXP (x4, 1);
      if (GET_CODE (x14) != PARALLEL)
        return -1;
      x6 = XEXP (x4, 0);
      operands[1] = x6;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (XVECLEN (x14, 0))
        {
        case 8:
          if (pattern639 (x14) != 0)
            return -1;
          x15 = XVECEXP (x14, 0, 4);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x16 = XVECEXP (x14, 0, 5);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x17 = XVECEXP (x14, 0, 6);
          if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x18 = XVECEXP (x14, 0, 7);
          if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || !register_operand (operands[4], E_HImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V16SFmode:
              if (pattern1471 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8406; /* vec_set_hi_v16sf_mask */

            case E_V16SImode:
              if (pattern1471 (x2, 
E_V16SImode, 
E_V8SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8408; /* vec_set_hi_v16si_mask */

            default:
              return -1;
            }

        case 4:
          if (pattern639 (x14) != 0
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1471 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20155 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8414; /* vec_set_hi_v8df_mask */

            case E_V8DImode:
              if (pattern1471 (x2, 
E_V8DImode, 
E_V4DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 20155 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 8416; /* vec_set_hi_v8di_mask */

            case E_V8SImode:
              if (pattern1471 (x2, 
E_V8SImode, 
E_V4SImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9478; /* vec_set_hi_v8si_mask */

            case E_V8SFmode:
              if (pattern1471 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 9480; /* vec_set_hi_v8sf_mask */

            default:
              return -1;
            }

        case 2:
          x19 = XVECEXP (x14, 0, 0);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XVECEXP (x14, 0, 1);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[4], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DImode:
              if (pattern1471 (x2, 
E_V4DImode, 
E_V2DImode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28469 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9470; /* vec_set_hi_v4di_mask */

            case E_V4DFmode:
              if (pattern1471 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28469 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_AVX512DQ)))
                return -1;
              return 9472; /* vec_set_hi_v4df_mask */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 2
          || XINT (x4, 1) != 150
          || GET_MODE (x4) != E_V4HImode
          || !register_operand (operands[0], E_V8HImode)
          || GET_MODE (x2) != E_V8HImode
          || GET_MODE (x3) != E_V8HImode)
        return -1;
      x21 = XVECEXP (x4, 0, 0);
      operands[1] = x21;
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      x22 = XVECEXP (x4, 0, 1);
      operands[2] = x22;
      if (!const_0_to_255_operand (operands[2], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[3] = x5;
      if (!const0_operand (operands[3], E_V4HImode))
        return -1;
      x8 = XEXP (x2, 1);
      operands[4] = x8;
      if (!nonimm_or_0_operand (operands[4], E_V8HImode))
        return -1;
      x9 = XEXP (x2, 2);
      operands[5] = x9;
      if (!register_operand (operands[5], E_QImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 29158 "../../src/gcc/config/i386/sse.md"
((TARGET_F16C || TARGET_AVX512VL) && TARGET_AVX512VL)))
        return -1;
      return 9663; /* *vcvtps2ph_mask */

    case FLOAT_TRUNCATE:
      x5 = XEXP (x3, 1);
      if (GET_CODE (x5) != FLOAT_TRUNCATE)
        return -1;
      x6 = XEXP (x4, 0);
      operands[2] = x6;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      x8 = XEXP (x2, 1);
      operands[3] = x8;
      x9 = XEXP (x2, 2);
      operands[4] = x9;
      switch (GET_MODE (operands[0]))
        {
        case E_V32BFmode:
          if (pattern1121 (x2, 
E_SImode, 
E_V32BFmode, 
E_V16SFmode, 
E_V16BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 10342; /* avx512f_cvtne2ps2bf16_v32bf_mask */

        case E_V16BFmode:
          if (pattern1121 (x2, 
E_HImode, 
E_V16BFmode, 
E_V8SFmode, 
E_V8BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10344; /* avx512f_cvtne2ps2bf16_v16bf_mask */

        case E_V8BFmode:
          if (pattern1121 (x2, 
E_QImode, 
E_V8BFmode, 
E_V4SFmode, 
E_V4BFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31022 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BF16) && 
#line 30988 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 10346; /* avx512f_cvtne2ps2bf16_v8bf_mask */

        case E_V32HFmode:
          if (pattern1122 (x2, 
E_SImode, 
E_V32HFmode, 
E_V16SFmode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1) && 
#line 561 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10442; /* avx10_2_cvt2ps2phx_v32hf_mask */

        case E_V16HFmode:
          if (pattern1122 (x2, 
E_HImode, 
E_V16HFmode, 
E_V8SFmode, 
E_V8HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10446; /* avx10_2_cvt2ps2phx_v16hf_mask */

        case E_V8HFmode:
          if (pattern1122 (x2, 
E_QImode, 
E_V8HFmode, 
E_V4SFmode, 
E_V4HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 31719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256 && 1)))
            return -1;
          return 10449; /* avx10_2_cvt2ps2phx_v8hf_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_189 (rtx x1 ATTRIBUTE_UNUSED,
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
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      x6 = XEXP (x2, 2);
      operands[3] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HFmode:
              if (!vector_operand (operands[1], E_V8HFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4716; /* avx512fp16_float_extend_phv8df2_mask */

            case E_V8SFmode:
              if (!vector_operand (operands[1], E_V8SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
                return -1;
              return 5192; /* avx512f_cvtps2pd512_mask */

            default:
              return -1;
            }

        case E_V16SFmode:
          if (pattern774 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4720; /* avx512fp16_float_extend_phv16sf2_mask */

        case E_V8SFmode:
          if (pattern774 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8031 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 1003 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4724; /* avx512fp16_float_extend_phv8sf2_mask */

        case E_V4DFmode:
          if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V4HFmode:
              if (!memory_operand (operands[1], E_V4HFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8070 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4733; /* *avx512fp16_float_extend_phv4df2_load_mask */

            case E_V4SFmode:
              if (!vector_operand (operands[1], E_V4SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10234 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && (32 == 64 || TARGET_AVX512VL) && 1)))
                return -1;
              return 5196; /* avx_cvtps2pd256_mask */

            default:
              return -1;
            }

        case E_V4SFmode:
          if (pattern148 (x2, 
E_V4SFmode, 
E_V4HFmode) != 0
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8070 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4735; /* *avx512fp16_float_extend_phv4sf2_load_mask */

        case E_V2DFmode:
          if (pattern773 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V2HFmode:
              if (!memory_operand (operands[1], E_V2HFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8109 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4739; /* *avx512fp16_float_extend_phv2df2_load_mask */

            case E_V2SFmode:
              if (!memory_operand (operands[1], E_V2SFmode)
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10416 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                return -1;
              return 5245; /* sse2_cvtps2pd_mask_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != PARALLEL)
        return -1;
      switch (XVECLEN (x7, 0))
        {
        case 4:
          if (pattern639 (x7) != 0
              || GET_MODE (x4) != E_V4HFmode)
            return -1;
          x8 = XEXP (x4, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_V8HFmode))
            return -1;
          x5 = XEXP (x2, 1);
          operands[2] = x5;
          x6 = XEXP (x2, 2);
          operands[3] = x6;
          if (!register_operand (operands[3], E_QImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern135 (x2, 
E_V4DFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
                return -1;
              return 4728; /* avx512fp16_float_extend_phv4df2_mask */

            case E_V4SFmode:
              if (pattern135 (x2, 
E_V4SFmode) != 0
                  || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8060 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL && 1)))
                return -1;
              return 4731; /* avx512fp16_float_extend_phv4sf2_mask */

            default:
              return -1;
            }

        case 2:
          x9 = XVECEXP (x7, 0, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XVECEXP (x7, 0, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || !register_operand (operands[0], E_V2DFmode)
              || GET_MODE (x2) != E_V2DFmode
              || GET_MODE (x3) != E_V2DFmode)
            return -1;
          x6 = XEXP (x2, 2);
          switch (GET_CODE (x6))
            {
            case REG:
            case SUBREG:
              operands[3] = x6;
              if (!register_operand (operands[3], E_QImode))
                return -1;
              x8 = XEXP (x4, 0);
              operands[1] = x8;
              x5 = XEXP (x2, 1);
              operands[2] = x5;
              if (!nonimm_or_0_operand (operands[2], E_V2DFmode))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_V2HFmode:
                  if (!register_operand (operands[1], E_V8HFmode)
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 8099 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 4737; /* avx512fp16_float_extend_phv2df2_mask */

                case E_V2SFmode:
                  if (!register_operand (operands[1], E_V4SFmode)
                      || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 10402 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_AVX512VL)))
                    return -1;
                  return 5243; /* sse2_cvtps2pd_mask */

                default:
                  return -1;
                }

            case CONST_INT:
              if (XWINT (x6, 0) != 1L
                  || GET_MODE (x4) != E_V2SFmode)
                return -1;
              x8 = XEXP (x4, 0);
              operands[2] = x8;
              if (!nonimmediate_operand (operands[2], E_V4SFmode))
                return -1;
              x5 = XEXP (x2, 1);
              operands[1] = x5;
              if (!register_operand (operands[1], E_V2DFmode)
                  || !
#line 10060 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 5173; /* sse2_cvtss2sd */

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
recog_197 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 2996; /* *smaxv32hf3_mask */

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
      return 3004; /* *smaxv16hf3_mask */

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
      return 3011; /* *smaxv8hf3_mask */

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
      return 3016; /* *smaxv16sf3_mask */

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
      return 3024; /* *smaxv8sf3_mask */

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
      return 3031; /* *smaxv4sf3_mask */

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
      return 3036; /* *smaxv8df3_mask */

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
      return 3044; /* *smaxv4df3_mask */

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
      return 3051; /* *smaxv2df3_mask */

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7775; /* *avx512f_smaxv16si3_mask */

    case 10:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7783; /* *avx512f_smaxv8si3_mask */

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
        return 7791; /* *avx512f_smaxv4si3_mask */
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
      return 7875; /* *sse4_1_smaxv4si3_mask */

    case 12:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7799; /* *avx512f_smaxv8di3_mask */

    case 13:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7807; /* *avx512f_smaxv4di3_mask */

    case 14:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17721 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7815; /* *avx512f_smaxv2di3_mask */

    case 15:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7823; /* *avx512bw_smaxv64qi3_mask */

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
        return 7831; /* *avx512bw_smaxv16qi3_mask */
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
      return 7871; /* *sse4_1_smaxv16qi3_mask */

    case 17:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7839; /* *avx512bw_smaxv32qi3_mask */

    case 18:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 7847; /* *avx512bw_smaxv32hi3_mask */

    case 19:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7855; /* *avx512bw_smaxv16hi3_mask */

    case 20:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17732 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 7863; /* *avx512bw_smaxv8hi3_mask */

    case 21:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
        return -1;
      return 10598; /* avx10_2_smaxbf16_v32bf_mask */

    case 22:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10602; /* avx10_2_smaxbf16_v16bf_mask */

    case 23:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32113 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
        return -1;
      return 10606; /* avx10_2_smaxbf16_v8bf_mask */

    case 24:
      if (!(
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
        return -1;
      return 3133; /* *avx512fp16_vmsmaxv8hf3 */

    case 25:
      if (!
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 3141; /* *sse_vmsmaxv4sf3 */

    case 26:
      if (!(
#line 3466 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 3149; /* *sse2_vmsmaxv2df3 */

    default:
      return -1;
    }
}

 int
recog_209 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 4422; /* avx512fp16_vcvtph2uw_v32hi */

    case 1:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V16HFmode:
          if (!vector_operand (operands[1], E_V16HFmode)
              || !(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4430; /* avx512fp16_vcvtph2udq_v16si */

        case E_V16SFmode:
          if (!nonimmediate_operand (operands[1], E_V16SFmode)
              || !(
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4845; /* *avx512f_fixuns_notruncv16sfv16si */

        default:
          return -1;
        }

    case 2:
      switch (pattern775 (x2, 
E_V8DImode))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4438; /* avx512fp16_vcvtph2uqq_v8di */

        case 1:
          if (!(
#line 8752 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4865; /* *avx512dq_cvtps2uqqv8di */

        case 2:
          if (!(
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5111; /* fixuns_notruncv8dfv8di2 */

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
      return 4446; /* avx512fp16_vcvtph2uw_v16hi */

    case 4:
      switch (pattern775 (x2, 
E_V8SImode))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4454; /* avx512fp16_vcvtph2udq_v8si */

        case 1:
          if (!(
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4849; /* *avx512vl_fixuns_notruncv8sfv8si */

        case 2:
          if (!(
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5017; /* fixuns_notruncv8dfv8si2 */

        default:
          return -1;
        }

    case 5:
      switch (pattern776 (x2, 
E_V4DImode))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4462; /* avx512fp16_vcvtph2uqq_v4di */

        case 1:
          if (!(
#line 8752 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4869; /* *avx512dq_cvtps2uqqv4di */

        case 2:
          if (!(
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5115; /* fixuns_notruncv4dfv4di2 */

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
      return 4470; /* avx512fp16_vcvtph2uw_v8hi */

    case 7:
      switch (pattern776 (x2, 
E_V4SImode))
        {
        case 0:
          if (!(
#line 7630 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4474; /* avx512fp16_vcvtph2udq_v4si */

        case 1:
          if (!(
#line 8719 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 674 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4853; /* *avx512vl_fixuns_notruncv4sfv4si */

        case 2:
          if (!(
#line 9513 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5021; /* fixuns_notruncv4dfv4si2 */

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
          return 4478; /* avx512fp16_vcvtph2uqq_v2di */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[1], E_V2DFmode)
              || !(
#line 9734 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 5119; /* fixuns_notruncv2dfv2di2 */

        default:
          return -1;
        }

    case 9:
      if (!
#line 8765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && TARGET_AVX512VL))
        return -1;
      return 4873; /* *avx512dq_cvtps2uqqv2di */

    default:
      return -1;
    }
}

 int
recog_223 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 1);
  operands[2] = x5;
  x6 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x6, E_SImode))
    return -1;
  x7 = XEXP (x4, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x7;
      switch (pattern1130 (x2))
        {
        case 0:
          if (pattern1590 (x2, 
E_V32HFmode, 
E_SImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 3809; /* fma_fmadd_v32hf_maskz_1_round */

        case 1:
          if (pattern1590 (x2, 
E_V16HFmode, 
E_HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 3813; /* fma_fmadd_v16hf_maskz_1_round */

        case 2:
          if (pattern1590 (x2, 
E_V16SFmode, 
E_HImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3821; /* fma_fmadd_v16sf_maskz_1_round */

        case 3:
          if (pattern1590 (x2, 
E_V8SFmode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3825; /* fma_fmadd_v8sf_maskz_1_round */

        case 4:
          if (pattern1590 (x2, 
E_V8DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 3832; /* fma_fmadd_v8df_maskz_1_round */

        case 5:
          if (pattern1590 (x2, 
E_V4DFmode, 
E_QImode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 3836; /* fma_fmadd_v4df_maskz_1_round */

        case 6:
          if (pattern1591 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && register_operand (operands[3], E_V32HFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3840; /* avx512bw_fmadd_v32hf_mask_round */
            }
          if (!register_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3855; /* avx512bw_fmadd_v32hf_mask3_round */

        case 7:
          if (pattern1591 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && register_operand (operands[3], E_V16HFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3842; /* avx512vl_fmadd_v16hf_mask_round */
            }
          if (!register_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3857; /* avx512vl_fmadd_v16hf_mask3_round */

        case 8:
          if (pattern1591 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && register_operand (operands[3], E_V16SFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3845; /* avx512f_fmadd_v16sf_mask_round */
            }
          if (!register_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3860; /* avx512f_fmadd_v16sf_mask3_round */

        case 9:
          if (pattern1591 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && register_operand (operands[3], E_V8SFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3847; /* avx512vl_fmadd_v8sf_mask_round */
            }
          if (!register_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3862; /* avx512vl_fmadd_v8sf_mask3_round */

        case 10:
          if (pattern1591 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && register_operand (operands[3], E_V8DFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3850; /* avx512f_fmadd_v8df_mask_round */
            }
          if (!register_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3865; /* avx512f_fmadd_v8df_mask3_round */

        case 11:
          if (pattern1591 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && register_operand (operands[3], E_V4DFmode))
            {
              x8 = XEXP (x3, 1);
              if (rtx_equal_p (x8, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5983 "../../src/gcc/config/i386/sse.md"
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
                return 3852; /* avx512vl_fmadd_v4df_mask_round */
            }
          if (!register_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode))
            return -1;
          x8 = XEXP (x3, 1);
          if (!rtx_equal_p (x8, operands[3])
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6000 "../../src/gcc/config/i386/sse.md"
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
          return 3867; /* avx512vl_fmadd_v4df_mask3_round */

        case 12:
          if (pattern1648 (x2, 
E_V8HFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
            return -1;
          return 4225; /* *fmai_fmadd_v8hf */

        case 13:
          if (pattern1648 (x2, 
E_V4SFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
            return -1;
          return 4227; /* *fmai_fmadd_v4sf */

        case 14:
          if (pattern1648 (x2, 
E_V2DFmode) != 0
              || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6596 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 4229; /* *fmai_fmadd_v2df */

        case 15:
          x8 = XEXP (x3, 1);
          switch (GET_CODE (x8))
            {
            case CONST_INT:
            case CONST_DOUBLE:
            case CONST_VECTOR:
              operands[4] = x8;
              x9 = XEXP (x3, 2);
              operands[5] = x9;
              operands[6] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_V32HFmode:
                  if (pattern1593 (x2, 
E_V32HFmode, 
E_SImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V32HFmode == V16SFmode
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                    return -1;
                  return 3878; /* fma_fmsub_v32hf_maskz_1_round */

                case E_V16HFmode:
                  if (pattern1593 (x2, 
E_V16HFmode, 
E_HImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V16HFmode == V16SFmode
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                    return -1;
                  return 3882; /* fma_fmsub_v16hf_maskz_1_round */

                case E_V16SFmode:
                  if (pattern1593 (x2, 
E_V16SFmode, 
E_HImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V16SFmode == V16SFmode
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3890; /* fma_fmsub_v16sf_maskz_1_round */

                case E_V8SFmode:
                  if (pattern1593 (x2, 
E_V8SFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V8SFmode == V16SFmode
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3894; /* fma_fmsub_v8sf_maskz_1_round */

                case E_V8DFmode:
                  if (pattern1593 (x2, 
E_V8DFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && ((V8DFmode == V16SFmode
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                    return -1;
                  return 3901; /* fma_fmsub_v8df_maskz_1_round */

                case E_V4DFmode:
                  if (pattern1593 (x2, 
E_V4DFmode, 
E_QImode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && ((V4DFmode == V16SFmode
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                    return -1;
                  return 3905; /* fma_fmsub_v4df_maskz_1_round */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
            case MEM:
              switch (pattern1129 (x2))
                {
                case 0:
                  if (pattern1594 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V32HFmode)
                      && register_operand (operands[3], E_V32HFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3909; /* avx512bw_fmsub_v32hf_mask_round */
                  if (!register_operand (operands[1], E_V32HFmode)
                      || !nonimmediate_operand (operands[3], E_V32HFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3924; /* avx512bw_fmsub_v32hf_mask3_round */

                case 1:
                  if (pattern1594 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V16HFmode)
                      && register_operand (operands[3], E_V16HFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3911; /* avx512vl_fmsub_v16hf_mask_round */
                  if (!register_operand (operands[1], E_V16HFmode)
                      || !nonimmediate_operand (operands[3], E_V16HFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3926; /* avx512vl_fmsub_v16hf_mask3_round */

                case 2:
                  if (pattern1594 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V16SFmode)
                      && register_operand (operands[3], E_V16SFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3914; /* avx512f_fmsub_v16sf_mask_round */
                  if (!register_operand (operands[1], E_V16SFmode)
                      || !nonimmediate_operand (operands[3], E_V16SFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3929; /* avx512f_fmsub_v16sf_mask3_round */

                case 3:
                  if (pattern1594 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8SFmode)
                      && register_operand (operands[3], E_V8SFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3916; /* avx512vl_fmsub_v8sf_mask_round */
                  if (!register_operand (operands[1], E_V8SFmode)
                      || !nonimmediate_operand (operands[3], E_V8SFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3931; /* avx512vl_fmsub_v8sf_mask3_round */

                case 4:
                  if (pattern1594 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8DFmode)
                      && register_operand (operands[3], E_V8DFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3919; /* avx512f_fmsub_v8df_mask_round */
                  if (!register_operand (operands[1], E_V8DFmode)
                      || !nonimmediate_operand (operands[3], E_V8DFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3934; /* avx512f_fmsub_v8df_mask3_round */

                case 5:
                  if (pattern1594 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V4DFmode)
                      && register_operand (operands[3], E_V4DFmode)
                      && rtx_equal_p (x8, operands[1])
                      && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6088 "../../src/gcc/config/i386/sse.md"
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
                    return 3921; /* avx512vl_fmsub_v4df_mask_round */
                  if (!register_operand (operands[1], E_V4DFmode)
                      || !nonimmediate_operand (operands[3], E_V4DFmode)
                      || !rtx_equal_p (x8, operands[3])
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6106 "../../src/gcc/config/i386/sse.md"
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
                  return 3936; /* avx512vl_fmsub_v4df_mask3_round */

                case 6:
                  if (pattern1649 (x2, 
E_V8HFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16))))
                    return -1;
                  return 4231; /* *fmai_fmsub_v8hf */

                case 7:
                  if (pattern1649 (x2, 
E_V4SFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F)))
                    return -1;
                  return 4233; /* *fmai_fmsub_v4sf */

                case 8:
                  if (pattern1649 (x2, 
E_V2DFmode) != 0
                      || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6614 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
                    return -1;
                  return 4235; /* *fmai_fmsub_v2df */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      return recog_221 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_235 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pattern781 (x3, 
E_V32HFmode) != 0
          || !(
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 7145; /* avx512bw_rndscalev32hf */

    case E_V16HFmode:
      if (pattern781 (x3, 
E_V16HFmode) != 0
          || !(
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7149; /* avx512vl_rndscalev16hf */

    case E_V8HFmode:
      if (pattern781 (x3, 
E_V8HFmode) != 0
          || !(
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 7153; /* avx512fp16_rndscalev8hf */

    case E_V16SFmode:
      if (pattern781 (x3, 
E_V16SFmode) != 0
          || !(
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7155; /* avx512f_rndscalev16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7159; /* avx512vl_rndscalev8sf */
      if (!vector_operand (operands[1], E_V8SFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25489 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8971; /* avx_roundps256 */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7163; /* avx512vl_rndscalev4sf */
      if (!vector_operand (operands[1], E_V4SFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !
#line 25489 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return -1;
      return 8972; /* sse4_1_roundps */

    case E_V8DFmode:
      if (pattern781 (x3, 
E_V8DFmode) != 0
          || !(
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 7165; /* avx512f_rndscalev8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7169; /* avx512vl_rndscalev4df */
      if (!vector_operand (operands[1], E_V4DFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25489 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8973; /* avx_roundpd256 */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DFmode)
          && const_0_to_255_operand (operands[2], E_SImode)
          && (
#line 14237 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7173; /* avx512vl_rndscalev2df */
      if (!vector_operand (operands[1], E_V2DFmode)
          || !const_0_to_15_operand (operands[2], E_SImode)
          || !(
#line 25489 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 8974; /* sse4_1_roundpd */

    default:
      return -1;
    }
}

 int
recog_237 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!const_0_to_15_operand (operands[2], E_SImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      if (!register_operand (operands[0], E_V32HFmode)
          || GET_MODE (x3) != E_V32HFmode
          || !nonimmediate_operand (operands[1], E_V32HFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
        return -1;
      return 10015; /* avx512bw_getmantv32hf */

    case E_V16HFmode:
      if (!register_operand (operands[0], E_V16HFmode)
          || GET_MODE (x3) != E_V16HFmode
          || !nonimmediate_operand (operands[1], E_V16HFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 10019; /* avx512vl_getmantv16hf */

    case E_V8HFmode:
      if (!register_operand (operands[0], E_V8HFmode)
          || GET_MODE (x3) != E_V8HFmode
          || !nonimmediate_operand (operands[1], E_V8HFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
        return -1;
      return 10023; /* avx512fp16_getmantv8hf */

    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x3) != E_V16SFmode
          || !nonimmediate_operand (operands[1], E_V16SFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10025; /* avx512f_getmantv16sf */

    case E_V8SFmode:
      if (!register_operand (operands[0], E_V8SFmode)
          || GET_MODE (x3) != E_V8SFmode
          || !nonimmediate_operand (operands[1], E_V8SFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10029; /* avx512vl_getmantv8sf */

    case E_V4SFmode:
      if (!register_operand (operands[0], E_V4SFmode)
          || GET_MODE (x3) != E_V4SFmode
          || !nonimmediate_operand (operands[1], E_V4SFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10033; /* avx512vl_getmantv4sf */

    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x3) != E_V8DFmode
          || !nonimmediate_operand (operands[1], E_V8DFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10035; /* avx512f_getmantv8df */

    case E_V4DFmode:
      if (!register_operand (operands[0], E_V4DFmode)
          || GET_MODE (x3) != E_V4DFmode
          || !nonimmediate_operand (operands[1], E_V4DFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10039; /* avx512vl_getmantv4df */

    case E_V2DFmode:
      if (!register_operand (operands[0], E_V2DFmode)
          || GET_MODE (x3) != E_V2DFmode
          || !nonimmediate_operand (operands[1], E_V2DFmode)
          || !(
#line 29895 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10043; /* avx512vl_getmantv2df */

    default:
      return -1;
    }
}

 int
recog_239 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_QImode:
      if (register_operand (operands[0], E_QImode)
          && register_operand (operands[1], E_QImode)
          && (
#line 2346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
        return 2614; /* *kortestqi */
      break;

    case E_HImode:
      if (register_operand (operands[0], E_HImode)
          && register_operand (operands[1], E_HImode)
          && 
#line 2346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
        return 2615; /* *kortesthi */
      break;

    case E_SImode:
      if (register_operand (operands[0], E_SImode)
          && register_operand (operands[1], E_SImode)
          && (
#line 2346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 2616; /* *kortestsi */
      break;

    case E_DImode:
      if (register_operand (operands[0], E_DImode)
          && register_operand (operands[1], E_DImode)
          && (
#line 2346 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
        return 2617; /* *kortestdi */
      break;

    default:
      break;
    }
  switch (GET_MODE (x2))
    {
    case E_CCCmode:
      if (GET_MODE (x3) != E_CCCmode)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2618; /* kortestqi_ccc */

        case 1:
          if (!
#line 2358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2619; /* kortesthi_ccc */

        case 2:
          if (!(
#line 2358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2620; /* kortestsi_ccc */

        case 3:
          if (!(
#line 2358 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2621; /* kortestdi_ccc */

        default:
          return -1;
        }

    case E_CCZmode:
      if (GET_MODE (x3) != E_CCZmode)
        return -1;
      switch (pattern965 ())
        {
        case 0:
          if (!(
#line 2366 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ)))
            return -1;
          return 2622; /* kortestqi_ccz */

        case 1:
          if (!
#line 2366 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F))
            return -1;
          return 2623; /* kortesthi_ccz */

        case 2:
          if (!(
#line 2366 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2624; /* kortestsi_ccz */

        case 3:
          if (!(
#line 2366 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 2069 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW)))
            return -1;
          return 2625; /* kortestdi_ccz */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_242 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V8HImode:
      if (GET_MODE (x3) != E_V8HImode
          || !register_operand (operands[1], E_V8SFmode))
        return -1;
      if (register_operand (operands[0], E_V8HImode)
          && 
#line 29180 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return 9665; /* vcvtps2ph256 */
      if (!memory_operand (operands[0], E_V8HImode)
          || !
#line 29192 "../../src/gcc/config/i386/sse.md"
(TARGET_F16C || TARGET_AVX512VL))
        return -1;
      return 9667; /* *vcvtps2ph256 */

    case E_V16HImode:
      if (GET_MODE (x3) != E_V16HImode
          || !register_operand (operands[1], E_V16SFmode))
        return -1;
      if (register_operand (operands[0], E_V16HImode)
          && 
#line 29231 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return 9669; /* *avx512f_vcvtps2ph512 */
      if (!memory_operand (operands[0], E_V16HImode)
          || !
#line 29243 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 9673; /* *avx512f_vcvtps2ph512 */

    default:
      return -1;
    }
}

 int
recog_245 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) != MEM)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 154)
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  x6 = XVECEXP (x4, 0, 2);
  if (!const1248_operand (x6, E_SImode))
    return -1;
  x7 = XVECEXP (x2, 0, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      operands[1] = x7;
      x8 = XVECEXP (x2, 0, 1);
      operands[7] = x8;
      operands[6] = x3;
      x9 = XVECEXP (x4, 0, 0);
      operands[4] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[3] = x10;
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x2) != E_V16SImode
              || !vsib_mem_operator (operands[6], E_SImode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !register_operand (operands[7], E_HImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9759; /* *avx512f_gathersiv16si */

                default:
                  return -1;
                }

            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !register_operand (operands[7], E_QImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9807; /* *avx512f_gatherdiv16si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V16SFmode:
          if (!register_operand (operands[0], E_V16SFmode)
              || GET_MODE (x2) != E_V16SFmode
              || !vsib_mem_operator (operands[6], E_SFmode))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16SFmode:
              if (!register_operand (operands[1], E_V16SFmode)
                  || !register_operand (operands[7], E_HImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9760; /* *avx512f_gathersiv16sf */

                default:
                  return -1;
                }

            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode)
                  || !register_operand (operands[7], E_QImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9808; /* *avx512f_gatherdiv16sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1653 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9809; /* *avx512f_gatherdiv8di */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1653 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9810; /* *avx512f_gatherdiv8df */

            default:
              return -1;
            }

        case E_V8SImode:
          if (pattern1654 (x2, 
E_SImode, 
E_V8SImode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9763; /* *avx512f_gathersiv8si */

                default:
                  return -1;
                }

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9811; /* *avx512f_gatherdiv8si */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V8SFmode:
          if (pattern1654 (x2, 
E_SFmode, 
E_V8SFmode) != 0)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8SFmode:
              if (!register_operand (operands[1], E_V8SFmode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9764; /* *avx512f_gathersiv8sf */

                default:
                  return -1;
                }

            case E_V4SFmode:
              if (!register_operand (operands[1], E_V4SFmode))
                return -1;
              switch (pattern1785 (x4, 
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
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 9812; /* *avx512f_gatherdiv8sf */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1656 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9813; /* *avx512f_gatherdiv4di */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1656 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9814; /* *avx512f_gatherdiv4df */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1658 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9815; /* *avx512f_gatherdiv4si */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1658 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9816; /* *avx512f_gatherdiv4sf */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1658 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9817; /* *avx512f_gatherdiv2di */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1658 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9818; /* *avx512f_gatherdiv2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PC:
      x8 = XVECEXP (x2, 0, 1);
      operands[6] = x8;
      operands[5] = x3;
      x9 = XVECEXP (x4, 0, 0);
      operands[3] = x9;
      x10 = XVECEXP (x4, 0, 1);
      operands[2] = x10;
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          switch (pattern1609 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9831; /* *avx512f_gatherdiv16si_2 */

            default:
              return -1;
            }

        case E_V16SFmode:
          switch (pattern1609 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9832; /* *avx512f_gatherdiv16sf_2 */

            default:
              return -1;
            }

        case E_V8DImode:
          switch (pattern1611 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9833; /* *avx512f_gatherdiv8di_2 */

            default:
              return -1;
            }

        case E_V8DFmode:
          switch (pattern1611 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9834; /* *avx512f_gatherdiv8df_2 */

            default:
              return -1;
            }

        case E_V8SImode:
          switch (pattern1613 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9835; /* *avx512f_gatherdiv8si_2 */

            default:
              return -1;
            }

        case E_V8SFmode:
          switch (pattern1613 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9836; /* *avx512f_gatherdiv8sf_2 */

            default:
              return -1;
            }

        case E_V4DImode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9837; /* *avx512f_gatherdiv4di_2 */

            default:
              return -1;
            }

        case E_V4DFmode:
          switch (pattern1615 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9838; /* *avx512f_gatherdiv4df_2 */

            default:
              return -1;
            }

        case E_V4SImode:
          switch (pattern1617 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9839; /* *avx512f_gatherdiv4si_2 */

            default:
              return -1;
            }

        case E_V4SFmode:
          switch (pattern1617 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9840; /* *avx512f_gatherdiv4sf_2 */

            default:
              return -1;
            }

        case E_V2DImode:
          switch (pattern1617 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
              return 9841; /* *avx512f_gatherdiv2di_2 */

            default:
              return -1;
            }

        case E_V2DFmode:
          switch (pattern1617 (x2, 
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
              *pnum_clobbers = 1;
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
}

 int
recog_277 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern930 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 1L:
          x6 = XVECEXP (x3, 0, 2);
          if (XWINT (x6, 0) != 2L)
            return -1;
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 3L)
            return -1;
          x8 = XVECEXP (x3, 0, 4);
          if (XWINT (x8, 0) != 8L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 9L)
            return -1;
          x10 = XVECEXP (x3, 0, 6);
          if (XWINT (x10, 0) != 10L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 11L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          switch (GET_MODE (operands[0]))
            {
            case E_V8HImode:
              if (pattern1485 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                  || !
#line 11140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HImode, operands)))
                return -1;
              return 5248; /* sse_movlhps_v8hi */

            case E_V8HFmode:
              if (pattern1485 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                  || !
#line 11140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8HFmode, operands)))
                return -1;
              return 5249; /* sse_movlhps_v8hf */

            case E_V8BFmode:
              if (pattern1485 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                  || !
#line 11140 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V8BFmode, operands)))
                return -1;
              return 5250; /* sse_movlhps_v8bf */

            default:
              return -1;
            }

        case 8L:
          x6 = XVECEXP (x3, 0, 2);
          switch (XWINT (x6, 0))
            {
            case 1L:
              x7 = XVECEXP (x3, 0, 3);
              if (XWINT (x7, 0) != 9L)
                return -1;
              x12 = XEXP (x2, 0);
              x13 = XEXP (x12, 1);
              operands[2] = x13;
              x8 = XVECEXP (x3, 0, 4);
              switch (XWINT (x8, 0))
                {
                case 4L:
                  x9 = XVECEXP (x3, 0, 5);
                  if (XWINT (x9, 0) != 12L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 6);
                  if (XWINT (x10, 0) != 5L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 7);
                  if (XWINT (x11, 0) != 13L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8SFmode:
                      if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
                          || !
#line 11270 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                        return -1;
                      return 5259; /* avx_unpcklps256 */

                    case E_V8SImode:
                      if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
                          || !
#line 19792 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                        return -1;
                      return 8377; /* avx2_interleave_lowv8si */

                    default:
                      return -1;
                    }

                case 2L:
                  x9 = XVECEXP (x3, 0, 5);
                  if (XWINT (x9, 0) != 10L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 6);
                  if (XWINT (x10, 0) != 3L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 7);
                  if (XWINT (x11, 0) != 11L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V8HImode:
                      if (pattern1486 (x2, 
E_V8HImode, 
E_V16HImode) != 0
                          || !
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8365; /* vec_interleave_lowv8hi */

                    case E_V8HFmode:
                      if (pattern1486 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
                          || !
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8367; /* vec_interleave_lowv8hf */

                    case E_V8BFmode:
                      if (pattern1486 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
                          || !
#line 19717 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                        return -1;
                      return 8369; /* vec_interleave_lowv8bf */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case 2L:
              x7 = XVECEXP (x3, 0, 3);
              if (XWINT (x7, 0) != 10L)
                return -1;
              x8 = XVECEXP (x3, 0, 4);
              if (XWINT (x8, 0) != 4L)
                return -1;
              x9 = XVECEXP (x3, 0, 5);
              if (XWINT (x9, 0) != 12L)
                return -1;
              x10 = XVECEXP (x3, 0, 6);
              if (XWINT (x10, 0) != 6L)
                return -1;
              x11 = XVECEXP (x3, 0, 7);
              if (XWINT (x11, 0) != 14L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V8DFmode:
                  if (!register_operand (operands[0], E_V8DFmode)
                      || GET_MODE (x2) != E_V8DFmode)
                    return -1;
                  x12 = XEXP (x2, 0);
                  if (GET_MODE (x12) != E_V16DFmode)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V8DFmode))
                    {
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[1])
                          && 
#line 13451 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                        return 5411; /* avx512f_movddup512 */
                    }
                  if (!register_operand (operands[1], E_V8DFmode))
                    return -1;
                  x13 = XEXP (x12, 1);
                  operands[2] = x13;
                  if (!nonimmediate_operand (operands[2], E_V8DFmode)
                      || !
#line 13467 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 5413; /* avx512f_unpcklpd512 */

                case E_V8DImode:
                  if (pattern1618 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                      || !
#line 14544 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 7208; /* *avx512f_interleave_lowv8di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (pattern1659 (x3) != 0
              || pattern1788 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11409 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5269; /* avx_movsldup256 */

        default:
          return -1;
        }

    case 2L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 10L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 11L
          || pattern1707 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1414 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11182 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5253; /* avx_unpckhps256 */

        case E_V8SImode:
          if (pattern1414 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !
#line 19737 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
            return -1;
          return 8371; /* avx2_interleave_highv8si */

        default:
          return -1;
        }

    case 1L:
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 5L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 7L)
        return -1;
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 1L:
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 3L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 5L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 7L
              || pattern1788 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !
#line 11356 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 5263; /* avx_movshdup256 */

        case 9L:
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 11L)
            return -1;
          x9 = XVECEXP (x3, 0, 5);
          if (XWINT (x9, 0) != 13L)
            return -1;
          x11 = XVECEXP (x3, 0, 7);
          if (XWINT (x11, 0) != 15L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          switch (GET_MODE (operands[0]))
            {
            case E_V8DFmode:
              if (pattern1414 (x2, 
E_V8DFmode, 
E_V16DFmode) != 0
                  || !
#line 13337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 5405; /* *avx512f_unpckhpd512 */

            case E_V8DImode:
              if (pattern1414 (x2, 
E_V8DImode, 
E_V16DImode) != 0
                  || !
#line 14494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                return -1;
              return 7202; /* *avx512f_interleave_highv8di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 12L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 5L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 13L
          || pattern1707 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern1486 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8347; /* vec_interleave_highv8hi */

        case E_V8HFmode:
          if (pattern1486 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8349; /* vec_interleave_highv8hf */

        case E_V8BFmode:
          if (pattern1486 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !
#line 19649 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
            return -1;
          return 8351; /* vec_interleave_highv8bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_286 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 1);
  operands[3] = x4;
  x5 = XVECEXP (x3, 0, 2);
  operands[4] = x5;
  x6 = XVECEXP (x3, 0, 3);
  operands[5] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SFmode:
      if (!nonimmediate_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || pattern1487 (
E_V16SFmode) != 0
          || !(
#line 12534 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 5347; /* *avx512f_vextractf32x4_1 */

    case E_V4SImode:
      if (GET_MODE (x2) != E_V4SImode)
        return -1;
      if (nonimmediate_operand (operands[0], E_V4SImode)
          && pattern1487 (
E_V16SImode) == 0
          && (
#line 12534 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && INTVAL (operands[2]) % 4 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 5348; /* *avx512f_vextracti32x4_1 */
      if (!register_operand (operands[0], E_V4SImode)
          || !vector_operand (operands[1], E_V4SImode)
          || pattern1523 () != 0
          || !
#line 20703 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8445; /* sse2_pshufd_1 */

    case E_V4DImode:
      if (!register_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !nonimmediate_operand (operands[1], E_V4DImode)
          || pattern1523 () != 0
          || !
#line 27564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9173; /* avx2_permv4di_1 */

    default:
      return -1;
    }
}

 int
recog_289 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
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
  switch (GET_MODE (operands[0]))
    {
    case E_V8DFmode:
      if (!register_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || pattern1708 () != 0
          || !(
#line 20285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 8425; /* *avx512f_shuf_f64x2_1_1 */

    case E_V8DImode:
      if (!register_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode)
        return -1;
      if (register_operand (operands[1], E_V8DImode)
          && pattern1708 () == 0
          && (
#line 20285 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F
   && (INTVAL (operands[2]) & 1) == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (INTVAL (operands[4]) & 1) == 0
   && INTVAL (operands[4]) == INTVAL (operands[5]) - 1
   && (INTVAL (operands[6]) & 1) == 0
   && INTVAL (operands[6]) == INTVAL (operands[7]) - 1
   && (INTVAL (operands[8]) & 1) == 0
   && INTVAL (operands[8]) == INTVAL (operands[9]) - 1) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return 8427; /* *avx512f_shuf_i64x2_1_1 */
      if (!nonimmediate_operand (operands[1], E_V8DImode)
          || pattern1709 () != 0
          || !(
#line 27635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9179; /* avx512f_permv8di_1 */

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x2) != E_V8SImode
          || !nonimmediate_operand (operands[1], E_V8SImode)
          || pattern1709 () != 0
          || !
#line 20641 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])))
        return -1;
      return 8443; /* avx2_pshufd_1 */

    default:
      return -1;
    }
}

 int
recog_295 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x5) == CONST_INT)
    {
      res = recog_292 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[2] = x4;
  res = recog_294 (x1, insn, pnum_clobbers);
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
      || pattern837 (x3, 
11, 
10, 
9, 
8) != 0
      || !register_operand (operands[0], E_V16HImode)
      || GET_MODE (x2) != E_V16HImode
      || !nonimmediate_operand (operands[1], E_V16HImode)
      || pattern1488 (x3) != 0)
    return -1;
  x8 = XVECEXP (x3, 0, 12);
  operands[6] = x8;
  if (!const_12_to_15_operand (operands[6], E_VOIDmode))
    return -1;
  x9 = XVECEXP (x3, 0, 13);
  operands[7] = x9;
  if (!const_12_to_15_operand (operands[7], E_VOIDmode))
    return -1;
  x10 = XVECEXP (x3, 0, 14);
  operands[8] = x10;
  if (!const_12_to_15_operand (operands[8], E_VOIDmode))
    return -1;
  x11 = XVECEXP (x3, 0, 15);
  operands[9] = x11;
  if (!const_12_to_15_operand (operands[9], E_VOIDmode)
      || !
#line 20950 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2
   && 1 && 1
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])))
    return -1;
  return 8455; /* avx2_pshufhw_1 */
}

 int
recog_298 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      res = recog_285 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 4:
      res = recog_287 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 8:
      res = recog_291 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 16:
      res = recog_295 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    case 32:
      res = recog_296 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      break;

    default:
      break;
    }
  if (XVECLEN (x3, 0) >= 1)
    {
      operands[2] = x3;
      res = recog_297 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  switch (XVECLEN (x3, 0))
    {
    case 4:
      if (pattern674 (x2, 
E_V4DFmode) != 0
          || !
#line 27564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
        return -1;
      return 9175; /* avx2_permv4df_1 */

    case 8:
      if (pattern674 (x2, 
E_V8DFmode) != 0)
        return -1;
      x4 = XVECEXP (x3, 0, 4);
      operands[6] = x4;
      if (!const_4_to_7_operand (operands[6], E_VOIDmode))
        return -1;
      x5 = XVECEXP (x3, 0, 5);
      operands[7] = x5;
      if (!const_4_to_7_operand (operands[7], E_VOIDmode))
        return -1;
      x6 = XVECEXP (x3, 0, 6);
      operands[8] = x6;
      if (!const_4_to_7_operand (operands[8], E_VOIDmode))
        return -1;
      x7 = XVECEXP (x3, 0, 7);
      operands[9] = x7;
      if (!const_4_to_7_operand (operands[9], E_VOIDmode)
          || !(
#line 27635 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1
   && (INTVAL (operands[2]) == (INTVAL (operands[6]) - 4)
       && INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9177; /* avx512f_permv8df_1 */

    default:
      return -1;
    }
}

 int
recog_304 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5542; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5569; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5596; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5623; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5650; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5677; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5704; /* *avx512f_vpternlogv16si_1 */

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
          return 5731; /* *avx512vl_vpternlogv8si_1 */

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
          return 5758; /* *avx512vl_vpternlogv4si_1 */

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
          return 5785; /* *avx512f_vpternlogv8di_1 */

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
          return 5812; /* *avx512vl_vpternlogv4di_1 */

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
          return 5839; /* *avx512vl_vpternlogv2di_1 */

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
          return 5545; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5572; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5599; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5626; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5653; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5680; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5707; /* *avx512f_vpternlogv16si_1 */

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
          return 5734; /* *avx512vl_vpternlogv8si_1 */

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
          return 5761; /* *avx512vl_vpternlogv4si_1 */

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
          return 5788; /* *avx512f_vpternlogv8di_1 */

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
          return 5815; /* *avx512vl_vpternlogv4di_1 */

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
          return 5842; /* *avx512vl_vpternlogv2di_1 */

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
          return 5548; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5575; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5602; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5629; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5656; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5683; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5710; /* *avx512f_vpternlogv16si_1 */

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
          return 5737; /* *avx512vl_vpternlogv8si_1 */

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
          return 5764; /* *avx512vl_vpternlogv4si_1 */

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
          return 5791; /* *avx512f_vpternlogv8di_1 */

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
          return 5818; /* *avx512vl_vpternlogv4di_1 */

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
          return 5845; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6826; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6835; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6844; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6853; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6862; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6871; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6880; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6889; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6898; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6907; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6916; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6925; /* *avx512vl_vpternlogv2di_3 */

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
          return 6190; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6217; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6244; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6271; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6298; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6325; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6352; /* *avx512f_vpternlogv16si_2 */

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
          return 6379; /* *avx512vl_vpternlogv8si_2 */

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
          return 6406; /* *avx512vl_vpternlogv4si_2 */

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
          return 6433; /* *avx512f_vpternlogv8di_2 */

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
          return 6460; /* *avx512vl_vpternlogv4di_2 */

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
          return 6487; /* *avx512vl_vpternlogv2di_2 */

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
          return 6193; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6220; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6247; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6274; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6301; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6328; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6355; /* *avx512f_vpternlogv16si_2 */

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
          return 6382; /* *avx512vl_vpternlogv8si_2 */

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
          return 6409; /* *avx512vl_vpternlogv4si_2 */

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
          return 6436; /* *avx512f_vpternlogv8di_2 */

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
          return 6463; /* *avx512vl_vpternlogv4di_2 */

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
          return 6490; /* *avx512vl_vpternlogv2di_2 */

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
          return 6196; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6223; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6250; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6277; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6304; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6331; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6358; /* *avx512f_vpternlogv16si_2 */

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
          return 6385; /* *avx512vl_vpternlogv8si_2 */

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
          return 6412; /* *avx512vl_vpternlogv4si_2 */

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
          return 6439; /* *avx512f_vpternlogv8di_2 */

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
          return 6466; /* *avx512vl_vpternlogv4di_2 */

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
          return 6493; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_313 (rtx x1 ATTRIBUTE_UNUSED,
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
              return 5848; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5875; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5902; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5929; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5956; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5983; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6010; /* *avx512f_vpternlogv16sf_1 */

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
              return 6037; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6064; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6091; /* *avx512f_vpternlogv8df_1 */

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
              return 6118; /* *avx512vl_vpternlogv4df_1 */

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
              return 6145; /* *avx512vl_vpternlogv2df_1 */

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
              return 5851; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5878; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5905; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5932; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5959; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5986; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6013; /* *avx512f_vpternlogv16sf_1 */

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
              return 6040; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6067; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6094; /* *avx512f_vpternlogv8df_1 */

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
              return 6121; /* *avx512vl_vpternlogv4df_1 */

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
              return 6148; /* *avx512vl_vpternlogv2df_1 */

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
              return 5854; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5881; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5908; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5935; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5962; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5989; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6016; /* *avx512f_vpternlogv16sf_1 */

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
              return 6043; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6070; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6097; /* *avx512f_vpternlogv8df_1 */

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
              return 6124; /* *avx512vl_vpternlogv4df_1 */

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
              return 6151; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6928; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6937; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6946; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6955; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6964; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6973; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6982; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6991; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 7000; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7009; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7018; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7027; /* *avx512vl_vpternlogv2df_3 */

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
              return 6496; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6523; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6550; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6577; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6604; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6631; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6658; /* *avx512f_vpternlogv16sf_2 */

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
              return 6685; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6712; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6739; /* *avx512f_vpternlogv8df_2 */

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
              return 6766; /* *avx512vl_vpternlogv4df_2 */

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
              return 6793; /* *avx512vl_vpternlogv2df_2 */

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
              return 6499; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6526; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6553; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6580; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6607; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6634; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6661; /* *avx512f_vpternlogv16sf_2 */

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
              return 6688; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6715; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6742; /* *avx512f_vpternlogv8df_2 */

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
              return 6769; /* *avx512vl_vpternlogv4df_2 */

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
              return 6796; /* *avx512vl_vpternlogv2df_2 */

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
              return 6502; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6529; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6556; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6583; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6610; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6637; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6664; /* *avx512f_vpternlogv16sf_2 */

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
              return 6691; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6718; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6745; /* *avx512f_vpternlogv8df_2 */

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
              return 6772; /* *avx512vl_vpternlogv4df_2 */

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
              return 6799; /* *avx512vl_vpternlogv2df_2 */

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
              return 5857; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5884; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5911; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5938; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5965; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5992; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6019; /* *avx512f_vpternlogv16sf_1 */

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
              return 6046; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6073; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6100; /* *avx512f_vpternlogv8df_1 */

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
              return 6127; /* *avx512vl_vpternlogv4df_1 */

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
              return 6154; /* *avx512vl_vpternlogv2df_1 */

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
              return 5860; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5887; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5914; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5941; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5968; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5995; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6022; /* *avx512f_vpternlogv16sf_1 */

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
              return 6049; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6076; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6103; /* *avx512f_vpternlogv8df_1 */

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
              return 6130; /* *avx512vl_vpternlogv4df_1 */

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
              return 6157; /* *avx512vl_vpternlogv2df_1 */

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
              return 5863; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5890; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5917; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5944; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5971; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5998; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6025; /* *avx512f_vpternlogv16sf_1 */

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
              return 6052; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6079; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6106; /* *avx512f_vpternlogv8df_1 */

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
              return 6133; /* *avx512vl_vpternlogv4df_1 */

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
              return 6160; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6931; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6940; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6949; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6958; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6967; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6976; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6985; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6994; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 7003; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7012; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7021; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7030; /* *avx512vl_vpternlogv2df_3 */

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
              return 6505; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6532; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6559; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6586; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6613; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6640; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6667; /* *avx512f_vpternlogv16sf_2 */

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
              return 6694; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6721; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6748; /* *avx512f_vpternlogv8df_2 */

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
              return 6775; /* *avx512vl_vpternlogv4df_2 */

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
              return 6802; /* *avx512vl_vpternlogv2df_2 */

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
              return 6508; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6535; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6562; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6589; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6616; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6643; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6670; /* *avx512f_vpternlogv16sf_2 */

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
              return 6697; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6724; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6751; /* *avx512f_vpternlogv8df_2 */

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
              return 6778; /* *avx512vl_vpternlogv4df_2 */

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
              return 6805; /* *avx512vl_vpternlogv2df_2 */

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
              return 6511; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6538; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6565; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6592; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6619; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6646; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6673; /* *avx512f_vpternlogv16sf_2 */

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
              return 6700; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6727; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6754; /* *avx512f_vpternlogv8df_2 */

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
              return 6781; /* *avx512vl_vpternlogv4df_2 */

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
              return 6808; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_310 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_373 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pnum_clobbers == NULL
          || !register_operand (operands[1], E_DImode))
        return -1;
      switch (pattern938 (x1))
        {
        case 0:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 254; /* floatdisf2_i387_with_xmm */

        case 1:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 255; /* floatdidf2_i387_with_xmm */

        case 2:
          if (!
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)))
            return -1;
          *pnum_clobbers = 2;
          return 256; /* floatdixf2_i387_with_xmm */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern682 (x1, 
E_V2SImode, 
E_V2SFmode) != 0
          || !
#line 1600 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2081; /* mmx_floatv2siv2sf2 */

    default:
      return -1;
    }
}

 int
recog_377 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (XWINT (x4, 0) != 0L)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x5))
    {
    case SET:
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      x7 = XEXP (x5, 1);
      switch (GET_CODE (x7))
        {
        case PLUS:
          switch (pattern1425 (x1))
            {
            case 0:
              if (!
#line 7128 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 309; /* *addqi_2 */

            case 1:
              if (!
#line 7128 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 310; /* *addhi_2 */

            case 2:
              if (!
#line 7128 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 311; /* *addsi_2 */

            case 3:
              if (!(
#line 7128 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 312; /* *adddi_2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern1426 (x1, 
PLUS) != 0
              || !
#line 7178 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 313; /* *addsi_2_zext */

        default:
          return -1;
        }

    case CLOBBER:
      x6 = XEXP (x5, 0);
      operands[0] = x6;
      x8 = XEXP (x3, 0);
      switch (pattern950 (x8))
        {
        case 0:
          if (!
#line 7410 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 323; /* *addqi_5 */

        case 1:
          if (!
#line 7410 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 324; /* *addhi_5 */

        case 2:
          if (!
#line 7410 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 325; /* *addsi_5 */

        case 3:
          if (!(
#line 7410 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 326; /* *adddi_5 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_380 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  operands[0] = x8;
  x9 = XEXP (x4, 1);
  switch (GET_CODE (x9))
    {
    case ZERO_EXTEND:
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      x11 = XEXP (x3, 0);
      switch (GET_MODE (x11))
        {
        case E_DImode:
          if (pattern1757 (x4, 
E_SImode, 
E_DImode) != 0
              || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 517; /* subsi3_carry_ccc */

        case E_TImode:
          if (pattern1757 (x4, 
E_DImode, 
E_TImode) != 0
              || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 518; /* subdi3_carry_ccc */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_WIDE_INT:
      operands[2] = x9;
      x11 = XEXP (x3, 0);
      switch (GET_MODE (x11))
        {
        case E_DImode:
          if (pattern1758 (x4, 
E_SImode, 
E_DImode) != 0
              || !
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 519; /* *subsi3_carry_ccc_1 */

        case E_TImode:
          if (pattern1758 (x4, 
E_DImode, 
E_TImode) != 0
              || !
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 520; /* *subdi3_carry_ccc_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_383 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x6;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      x8 = XEXP (x4, 1);
      switch (GET_CODE (x8))
        {
        case CONST_INT:
          res = recog_377 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case REG:
        case SUBREG:
        case MEM:
          res = recog_378 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (GET_MODE (x3) != E_CCCmode
          || GET_MODE (x4) != E_CCCmode)
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x9))
        {
        case CLOBBER:
          x10 = XEXP (x9, 0);
          operands[0] = x10;
          if (!rtx_equal_p (x8, operands[2]))
            return -1;
          switch (pattern950 (x5))
            {
            case 0:
              if (!
#line 10025 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 543; /* *addqi3_cconly_overflow_2 */

            case 1:
              if (!
#line 10025 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 544; /* *addhi3_cconly_overflow_2 */

            case 2:
              if (!
#line 10025 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 545; /* *addsi3_cconly_overflow_2 */

            case 3:
              if (!(
#line 10025 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 546; /* *adddi3_cconly_overflow_2 */

            default:
              return -1;
            }

        case SET:
          x10 = XEXP (x9, 0);
          operands[0] = x10;
          x11 = XEXP (x9, 1);
          switch (GET_CODE (x11))
            {
            case PLUS:
              x12 = XEXP (x11, 0);
              if (!rtx_equal_p (x12, operands[1]))
                return -1;
              x13 = XEXP (x11, 1);
              if (!rtx_equal_p (x13, operands[2]))
                return -1;
              switch (GET_MODE (x5))
                {
                case E_QImode:
                  if (pattern1627 (x1, 
E_QImode) != 0
                      || !
#line 10043 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 547; /* *addqi3_cc_overflow_2 */

                case E_HImode:
                  if (pattern1627 (x1, 
E_HImode) != 0
                      || !
#line 10043 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 548; /* *addhi3_cc_overflow_2 */

                case E_SImode:
                  if (!nonimmediate_operand (operands[1], E_SImode)
                      || !x86_64_general_operand (operands[2], E_SImode)
                      || !nonimmediate_operand (operands[0], E_SImode)
                      || GET_MODE (x11) != E_SImode
                      || !rtx_equal_p (x8, operands[2])
                      || !
#line 10043 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 549; /* *addsi3_cc_overflow_2 */

                case E_DImode:
                  if (!nonimmediate_operand (operands[1], E_DImode)
                      || !nonimmediate_operand (operands[0], E_DImode)
                      || GET_MODE (x11) != E_DImode)
                    return -1;
                  if (x86_64_general_operand (operands[2], E_DImode)
                      && rtx_equal_p (x8, operands[2])
                      && (
#line 10043 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 550; /* *adddi3_cc_overflow_2 */
                  if (!x86_64_hilo_general_operand (operands[2], E_DImode)
                      || !rtx_equal_p (x8, operands[1])
                      || !(
#line 10081 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    return -1;
                  return 552; /* *adddi3_doubleword_cc_overflow_1 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              if (GET_MODE (x11) != E_DImode)
                return -1;
              x12 = XEXP (x11, 0);
              if (GET_CODE (x12) != PLUS
                  || GET_MODE (x12) != E_SImode
                  || GET_MODE (x5) != E_SImode
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !x86_64_general_operand (operands[2], E_SImode)
                  || !register_operand (operands[0], E_DImode)
                  || !rtx_equal_p (x8, operands[2]))
                return -1;
              x14 = XEXP (x12, 0);
              if (!rtx_equal_p (x14, operands[1]))
                return -1;
              x15 = XEXP (x12, 1);
              if (!rtx_equal_p (x15, operands[2])
                  || !
#line 10062 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 551; /* *addsi3_zext_cc_overflow_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      if (XVECLEN (x6, 0) != 2
          || XINT (x6, 1) != 110)
        return -1;
      x8 = XEXP (x4, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != SET)
        return -1;
      switch (pattern1235 (x1, 
PLUS))
        {
        case 0:
          return 11082; /* atomic_add_fetch_cmp_0qi_1 */

        case 1:
          return 11083; /* atomic_add_fetch_cmp_0hi_1 */

        case 2:
          return 11084; /* atomic_add_fetch_cmp_0si_1 */

        case 3:
          if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 11085; /* atomic_add_fetch_cmp_0di_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_388 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (pattern685 (x1, 
PLUS) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          switch (pattern1563 (x1))
            {
            case 0:
              if (!
#line 7660 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 342; /* *addvqi4 */

            case 1:
              if (!
#line 7660 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 343; /* *addvhi4 */

            case 2:
              if (!
#line 7660 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 344; /* *addvsi4 */

            case 3:
              if (x86_64_sext_operand (operands[2], E_DImode)
                  && (
#line 7660 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 345; /* *addvdi4 */
              if (!nonimmediate_operand (operands[2], E_DImode)
                  || !(
#line 7713 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 350; /* *addvdi4_doubleword */

            case 4:
              if (!(
#line 7713 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 351; /* *addvti4_doubleword */

            case 5:
              if (!
#line 7682 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 346; /* addvqi4_1 */

            case 6:
              if (!
#line 7682 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 347; /* addvhi4_1 */

            case 7:
              if (!
#line 7682 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 348; /* addvsi4_1 */

            case 8:
              if (const_int_operand (operands[3], E_TImode)
                  && x86_64_immediate_operand (operands[2], E_DImode)
                  && (
#line 7682 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 349; /* addvdi4_1 */
              if (!const_scalar_int_operand (operands[3], E_TImode)
                  || !x86_64_hilo_general_operand (operands[2], E_DImode)
                  || !(
#line 7759 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 352; /* *addvdi4_doubleword_1 */

            case 9:
              if (!(
#line 7759 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 353; /* *addvti4_doubleword_1 */

            default:
              return -1;
            }

        case PLUS:
          x6 = XEXP (x5, 0);
          switch (GET_CODE (x6))
            {
            case LTU:
            case UNLT:
              operands[4] = x6;
              x7 = XEXP (x6, 1);
              if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x8 = XEXP (x5, 1);
              if (GET_CODE (x8) != SIGN_EXTEND)
                return -1;
              x9 = XEXP (x3, 1);
              x10 = XEXP (x9, 0);
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != PLUS)
                return -1;
              x12 = XEXP (x11, 0);
              switch (GET_CODE (x12))
                {
                case LTU:
                case UNLT:
                  operands[5] = x12;
                  x13 = XEXP (x12, 1);
                  if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return -1;
                  x14 = XVECEXP (x1, 0, 1);
                  x15 = XEXP (x14, 1);
                  x16 = XEXP (x15, 0);
                  if (GET_CODE (x16) != PLUS)
                    return -1;
                  x17 = XEXP (x16, 0);
                  switch (GET_CODE (x17))
                    {
                    case LTU:
                    case UNLT:
                      if (!rtx_equal_p (x17, operands[5]))
                        return -1;
                      x18 = XEXP (x6, 0);
                      operands[3] = x18;
                      if (!flags_reg_operand (operands[3], E_VOIDmode))
                        return -1;
                      x19 = XEXP (x8, 0);
                      operands[1] = x19;
                      x20 = XEXP (x12, 0);
                      if (!rtx_equal_p (x20, operands[3]))
                        return -1;
                      x21 = XEXP (x11, 1);
                      if (!rtx_equal_p (x21, operands[1]))
                        return -1;
                      x22 = XEXP (x16, 1);
                      if (!rtx_equal_p (x22, operands[1]))
                        return -1;
                      switch (pattern1855 (x1))
                        {
                        case 0:
                          if (pattern1871 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 7826 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 354; /* *addvqi4_overflow_1 */

                        case 1:
                          if (pattern1871 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 7826 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 355; /* *addvhi4_overflow_1 */

                        case 2:
                          if (pattern1872 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 7826 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 356; /* *addvsi4_overflow_1 */

                        case 3:
                          if (pattern1872 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 7826 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 357; /* *addvdi4_overflow_1 */

                        case 4:
                          if (pattern1874 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 7859 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 358; /* *addvqi4_overflow_2 */

                        case 5:
                          if (pattern1874 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 7859 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 359; /* *addvhi4_overflow_2 */

                        case 6:
                          if (pattern1874 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 7859 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 360; /* *addvsi4_overflow_2 */

                        case 7:
                          if (pattern1874 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 7859 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 361; /* *addvdi4_overflow_2 */

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

    case MINUS:
      if (pattern685 (x1, 
MINUS) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          switch (pattern1563 (x1))
            {
            case 0:
              if (!
#line 8435 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 425; /* *subvqi4 */

            case 1:
              if (!
#line 8435 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 426; /* *subvhi4 */

            case 2:
              if (!
#line 8435 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 427; /* *subvsi4 */

            case 3:
              if (x86_64_sext_operand (operands[2], E_DImode)
                  && (
#line 8435 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 428; /* *subvdi4 */
              if (!nonimmediate_operand (operands[2], E_DImode)
                  || !(
#line 8485 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 433; /* *subvdi4_doubleword */

            case 4:
              if (!(
#line 8485 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 434; /* *subvti4_doubleword */

            case 5:
              if (!
#line 8457 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 429; /* subvqi4_1 */

            case 6:
              if (!
#line 8457 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 430; /* subvhi4_1 */

            case 7:
              if (!
#line 8457 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                return -1;
              return 431; /* subvsi4_1 */

            case 8:
              if (const_int_operand (operands[3], E_TImode)
                  && x86_64_immediate_operand (operands[2], E_DImode)
                  && (
#line 8457 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 432; /* subvdi4_1 */
              if (!const_scalar_int_operand (operands[3], E_TImode)
                  || !x86_64_hilo_general_operand (operands[2], E_DImode)
                  || !(
#line 8529 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 435; /* *subvdi4_doubleword_1 */

            case 9:
              if (!(
#line 8529 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 436; /* *subvti4_doubleword_1 */

            default:
              return -1;
            }

        case MINUS:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != SIGN_EXTEND)
            return -1;
          x8 = XEXP (x5, 1);
          switch (GET_CODE (x8))
            {
            case LTU:
            case UNLT:
              operands[4] = x8;
              x23 = XEXP (x8, 1);
              if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x9 = XEXP (x3, 1);
              x10 = XEXP (x9, 0);
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != MINUS)
                return -1;
              x21 = XEXP (x11, 1);
              switch (GET_CODE (x21))
                {
                case LTU:
                case UNLT:
                  operands[5] = x21;
                  x24 = XEXP (x21, 1);
                  if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return -1;
                  x14 = XVECEXP (x1, 0, 1);
                  x15 = XEXP (x14, 1);
                  x16 = XEXP (x15, 0);
                  if (GET_CODE (x16) != MINUS)
                    return -1;
                  x22 = XEXP (x16, 1);
                  switch (GET_CODE (x22))
                    {
                    case LTU:
                    case UNLT:
                      if (!rtx_equal_p (x22, operands[5]))
                        return -1;
                      x18 = XEXP (x6, 0);
                      operands[1] = x18;
                      x19 = XEXP (x8, 0);
                      operands[3] = x19;
                      if (!flags_reg_operand (operands[3], E_VOIDmode))
                        return -1;
                      x12 = XEXP (x11, 0);
                      if (!rtx_equal_p (x12, operands[1]))
                        return -1;
                      x25 = XEXP (x21, 0);
                      if (!rtx_equal_p (x25, operands[3]))
                        return -1;
                      x17 = XEXP (x16, 0);
                      if (!rtx_equal_p (x17, operands[1]))
                        return -1;
                      switch (pattern1855 (x1))
                        {
                        case 0:
                          if (pattern1876 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 8594 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 437; /* *subvqi4_overflow_1 */

                        case 1:
                          if (pattern1876 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 8594 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 438; /* *subvhi4_overflow_1 */

                        case 2:
                          if (pattern1877 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 8594 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 439; /* *subvsi4_overflow_1 */

                        case 3:
                          if (pattern1877 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 8594 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 440; /* *subvdi4_overflow_1 */

                        case 4:
                          if (pattern1878 (x1, 
E_QImode, 
E_HImode) != 0
                              || !
#line 8627 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 441; /* *subvqi4_overflow_2 */

                        case 5:
                          if (pattern1878 (x1, 
E_HImode, 
E_SImode) != 0
                              || !
#line 8627 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 442; /* *subvhi4_overflow_2 */

                        case 6:
                          if (pattern1878 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 8627 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])))
                            return -1;
                          return 443; /* *subvsi4_overflow_2 */

                        case 7:
                          if (pattern1878 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 8627 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[6])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 444; /* *subvdi4_overflow_2 */

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

    case MULT:
      if (pattern684 (x1, 
MULT) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SIGN_EXTEND:
          x9 = XEXP (x3, 1);
          if (GET_CODE (x9) != SIGN_EXTEND)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MULT)
            return -1;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          x14 = XVECEXP (x1, 0, 1);
          x15 = XEXP (x14, 1);
          x16 = XEXP (x15, 0);
          if (!rtx_equal_p (x16, operands[1]))
            return -1;
          x26 = XEXP (x4, 1);
          switch (GET_CODE (x26))
            {
            case SIGN_EXTEND:
              x27 = XEXP (x26, 0);
              operands[2] = x27;
              x28 = XEXP (x10, 1);
              if (!rtx_equal_p (x28, operands[2]))
                return -1;
              x29 = XEXP (x15, 1);
              if (!rtx_equal_p (x29, operands[2]))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_DImode:
                  if (pattern1795 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 10742 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 604; /* *mulvsi4 */

                case E_TImode:
                  if (pattern1795 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 10742 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 605; /* *mulvdi4 */

                case E_SImode:
                  if (pattern1796 (x1, 
E_HImode, 
E_SImode) != 0
                      || !
#line 10778 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 606; /* *mulvhi4 */

                case E_HImode:
                  if (pattern1796 (x1, 
E_QImode, 
E_HImode) != 0
                      || !
#line 10916 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                    return -1;
                  return 613; /* *mulvqi4 */

                default:
                  return -1;
                }

            case CONST_INT:
              operands[3] = x26;
              x28 = XEXP (x10, 1);
              operands[2] = x28;
              x29 = XEXP (x15, 1);
              if (!rtx_equal_p (x29, operands[2]))
                return -1;
              switch (GET_MODE (x4))
                {
                case E_SImode:
                  if (GET_MODE (x5) != E_SImode
                      || !nonimmediate_operand (operands[1], E_HImode)
                      || !const_int_operand (operands[3], E_SImode)
                      || GET_MODE (x9) != E_SImode
                      || GET_MODE (x10) != E_HImode
                      || !immediate_operand (operands[2], E_HImode)
                      || !register_operand (operands[0], E_HImode)
                      || GET_MODE (x15) != E_HImode
                      || !
#line 10802 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                    return -1;
                  return 607; /* *mulvhi4_1 */

                case E_DImode:
                  if (pattern1797 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 10802 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])))
                    return -1;
                  return 608; /* *mulvsi4_1 */

                case E_TImode:
                  if (pattern1797 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 10802 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && CONST_INT_P (operands[2])
   && INTVAL (operands[2]) == INTVAL (operands[3])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 609; /* *mulvdi4_1 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ZERO_EXTEND:
          x26 = XEXP (x4, 1);
          if (GET_CODE (x26) != ZERO_EXTEND)
            return -1;
          x9 = XEXP (x3, 1);
          if (GET_CODE (x9) != ZERO_EXTEND)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != MULT)
            return -1;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          x27 = XEXP (x26, 0);
          operands[2] = x27;
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[1]))
            return -1;
          x28 = XEXP (x10, 1);
          if (!rtx_equal_p (x28, operands[2]))
            return -1;
          x14 = XVECEXP (x1, 0, 1);
          x15 = XEXP (x14, 1);
          x16 = XEXP (x15, 0);
          if (!rtx_equal_p (x16, operands[1]))
            return -1;
          x29 = XEXP (x15, 1);
          if (!rtx_equal_p (x29, operands[2]))
            return -1;
          switch (GET_MODE (x4))
            {
            case E_SImode:
              if (pnum_clobbers == NULL
                  || pattern1796 (x1, 
E_HImode, 
E_SImode) != 0
                  || !
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 610; /* *umulvhi4 */

            case E_DImode:
              if (pnum_clobbers == NULL
                  || pattern1796 (x1, 
E_SImode, 
E_DImode) != 0
                  || !
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              *pnum_clobbers = 1;
              return 611; /* *umulvsi4 */

            case E_TImode:
              if (pnum_clobbers == NULL
                  || pattern1796 (x1, 
E_DImode, 
E_TImode) != 0
                  || !(
#line 10872 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 612; /* *umulvdi4 */

            case E_HImode:
              if (pattern1796 (x1, 
E_QImode, 
E_HImode) != 0
                  || !
#line 10916 "../../src/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
                return -1;
              return 614; /* *umulvqi4 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      switch (pattern686 (x1))
        {
        case 0:
          if (!
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
            return -1;
          return 1440; /* *btsi_setncqi_2 */

        case 1:
          if (!(
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1441; /* *btdi_setncqi_2 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      if (!nonimmediate_operand (operands[1], E_V2SFmode))
        return -1;
      x14 = XVECEXP (x1, 0, 1);
      if (pattern381 (x14, 
110, 
0) != 0)
        return -1;
      x30 = XEXP (x2, 0);
      operands[0] = x30;
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode)
        return -1;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      if (!nonimmediate_operand (operands[2], E_V2SFmode)
          || !
#line 1203 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)))
        return -1;
      return 2069; /* *mmx_eqv2sf3 */

    default:
      return -1;
    }
}

 int
recog_411 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 1514; /* ctzsi2 */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1515; /* ctzdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern704 (x1))
        {
        case 0:
          *pnum_clobbers = 1;
          return 1516; /* *ctzsi2_falsedep */

        case 1:
          if (!
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1517; /* *ctzdi2_falsedep */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_414 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
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
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT))
                return -1;
              return 1626; /* popcountsi2 */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x4) != E_DImode
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || !(
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1627; /* popcountdi2 */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x4) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 22516 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && true))
                return -1;
              return 1639; /* popcounthi2 */

            default:
              return -1;
            }

        case UNSPEC:
          switch (pattern704 (x1))
            {
            case 0:
              if (
#line 22342 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT))
                return 1628; /* *popcountsi2_falsedep_nf */
              if (pnum_clobbers == NULL
                  || !
#line 22361 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT))
                return -1;
              *pnum_clobbers = 1;
              return 1630; /* *popcountsi2_falsedep */

            case 1:
              if ((
#line 22342 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF && TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1629; /* *popcountdi2_falsedep_nf */
              if (pnum_clobbers == NULL
                  || !(
#line 22361 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 1631; /* *popcountdi2_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (pattern229 (x6, 
E_CCmode, 
17) != 0
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x4) != E_SImode)
        return -1;
      x8 = XEXP (x5, 0);
      operands[1] = x8;
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !
#line 22481 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()))
        return -1;
      return 1636; /* *popcounthi2_1 */

    default:
      return -1;
    }
}

 int
recog_424 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 0);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 1);
  switch (XVECLEN (x5, 0))
    {
    case 1:
      if (XINT (x5, 1) != 10
          || GET_MODE (x5) != E_DImode)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x2, 1);
      if (pattern813 (x7, 
E_DImode, 
10, 
1, 
UNSPEC_VOLATILE) != 0
          || pattern1172 (x1, 
E_SImode, 
10) != 0
          || !register_operand (operands[0], E_DImode))
        return -1;
      x8 = XEXP (x2, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_DImode))
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      x10 = XEXP (x9, 0);
      operands[2] = x10;
      if (!register_operand (operands[2], E_SImode)
          || !
#line 29120 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return -1;
      return 1900; /* rdtscp_rex64 */

    case 5:
      if (XINT (x5, 1) != 109)
        return -1;
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != UNSPEC_VOLATILE
          || XVECLEN (x7, 0) != 1
          || XINT (x7, 1) != 109
          || pattern1172 (x1, 
E_CCZmode, 
109) != 0)
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17
          || GET_MODE (x10) != E_CCZmode)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[2] = x11;
      x12 = XVECEXP (x5, 0, 2);
      operands[3] = x12;
      x13 = XVECEXP (x5, 0, 3);
      operands[4] = x13;
      x14 = XVECEXP (x5, 0, 4);
      operands[5] = x14;
      if (!const_int_operand (operands[5], E_SImode))
        return -1;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          if (pattern1835 (x1, 
E_DImode, 
E_SImode) != 0
              || !(
#line 486 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 11027; /* atomic_compare_and_swapdi_doubleword */

        case E_TImode:
          if (pattern1835 (x1, 
E_TImode, 
E_DImode) != 0
              || !(
#line 486 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 11028; /* atomic_compare_and_swapti_doubleword */

        default:
          return -1;
        }

    case 4:
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != UNSPEC_VOLATILE
          || XVECLEN (x7, 0) != 1)
        return -1;
      x15 = XVECEXP (x7, 0, 0);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x9) != SET)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 17)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[2] = x11;
      x12 = XVECEXP (x5, 0, 2);
      operands[3] = x12;
      x13 = XVECEXP (x5, 0, 3);
      operands[4] = x13;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (XINT (x5, 1))
        {
        case 109:
          if (XINT (x7, 1) != 109)
            return -1;
          x16 = XEXP (x9, 1);
          if (pattern1171 (x16, 
E_CCZmode, 
109) != 0
              || !const_int_operand (operands[4], E_SImode)
              || GET_MODE (x10) != E_CCZmode)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1825 (x1, 
E_QImode) != 0
                  || !
#line 501 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11029; /* atomic_compare_and_swapqi_1 */

            case E_HImode:
              if (pattern1825 (x1, 
E_HImode) != 0
                  || !
#line 501 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11030; /* atomic_compare_and_swaphi_1 */

            case E_SImode:
              if (pattern1825 (x1, 
E_SImode) != 0
                  || !
#line 501 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG))
                return -1;
              return 11031; /* atomic_compare_and_swapsi_1 */

            case E_DImode:
              if (pattern1825 (x1, 
E_DImode) != 0
                  || !(
#line 501 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 11032; /* atomic_compare_and_swapdi_1 */

            default:
              return -1;
            }

        case 112:
          if (XINT (x7, 1) != 112)
            return -1;
          x16 = XEXP (x9, 1);
          if (GET_CODE (x16) != COMPARE
              || GET_MODE (x16) != E_CCmode
              || !const_0_to_15_operand (operands[4], E_SImode)
              || GET_MODE (x10) != E_CCmode)
            return -1;
          x17 = XEXP (x16, 0);
          if (!rtx_equal_p (x17, operands[1]))
            return -1;
          x18 = XEXP (x16, 1);
          if (!rtx_equal_p (x18, operands[2]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1825 (x1, 
E_SImode) != 0
                  || !
#line 1119 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT))
                return -1;
              return 11102; /* cmpccxadd_si */

            case E_DImode:
              if (pattern1825 (x1, 
E_DImode) != 0
                  || !
#line 1119 "../../src/gcc/config/i386/sync.md"
(TARGET_CMPCCXADD && TARGET_64BIT))
                return -1;
              return 11103; /* cmpccxadd_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 2:
      if (XINT (x5, 1) != 110)
        return -1;
      x7 = XEXP (x2, 1);
      if (GET_CODE (x7) != PLUS)
        return -1;
      x9 = XVECEXP (x1, 0, 2);
      if (pattern953 (x9, 
E_CCmode, 
17) != 0)
        return -1;
      x6 = XVECEXP (x5, 0, 0);
      operands[1] = x6;
      x11 = XVECEXP (x5, 0, 1);
      operands[3] = x11;
      if (!const_int_operand (operands[3], E_SImode))
        return -1;
      x19 = XEXP (x7, 1);
      operands[2] = x19;
      x20 = XEXP (x7, 0);
      if (!rtx_equal_p (x20, operands[1]))
        return -1;
      x8 = XEXP (x2, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (pattern1570 (x1, 
E_QImode) != 0
              || !
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD))
            return -1;
          return 11033; /* atomic_fetch_addqi */

        case E_HImode:
          if (pattern1570 (x1, 
E_HImode) != 0
              || !
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD))
            return -1;
          return 11034; /* atomic_fetch_addhi */

        case E_SImode:
          if (pattern1570 (x1, 
E_SImode) != 0
              || !
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD))
            return -1;
          return 11035; /* atomic_fetch_addsi */

        case E_DImode:
          if (pattern1570 (x1, 
E_DImode) != 0
              || !(
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 11036; /* atomic_fetch_adddi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_434 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case UNSPEC_VOLATILE:
      if (XVECLEN (x2, 0) != 1
          || XINT (x2, 1) != 97)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      operands[0] = x1;
      if (!vzeroall_operation (operands[0], E_VOIDmode)
          || !
#line 27244 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9092; /* *avx_vzeroall */

    case USE:
      operands[0] = x1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (save_multiple (operands[0], E_VOIDmode))
        {
          switch (GET_MODE (operands[1]))
            {
            case E_SImode:
              if (symbol_operand (operands[1], E_SImode)
                  && (
#line 30306 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return 10148; /* *save_multiplesi */
              break;

            case E_DImode:
              if (symbol_operand (operands[1], E_DImode)
                  && (
#line 30306 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return 10149; /* *save_multipledi */
              break;

            default:
              break;
            }
        }
      if (!restore_multiple (operands[0], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!symbol_operand (operands[1], E_SImode)
              || !(
#line 30313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return -1;
          return 10150; /* *restore_multiplesi */

        case E_DImode:
          if (!symbol_operand (operands[1], E_DImode)
              || !(
#line 30313 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return -1;
          return 10151; /* *restore_multipledi */

        default:
          return -1;
        }

    case SET:
      x5 = XEXP (x2, 1);
      if (GET_CODE (x5) != UNSPEC_VOLATILE)
        return -1;
      switch (XVECLEN (x5, 0))
        {
        case 2:
          if (pattern394 (x5, 
107) != 0)
            return -1;
          operands[2] = x1;
          if (!encodekey128_operation (operands[2], E_VOIDmode))
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 31282 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10364; /* *encodekey128u32 */

        case 3:
          if (pattern394 (x5, 
108) != 0)
            return -1;
          x7 = XVECEXP (x5, 0, 2);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 21
              || GET_MODE (x7) != E_V2DImode)
            return -1;
          operands[2] = x1;
          if (!encodekey256_operation (operands[2], E_VOIDmode))
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 31340 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10365; /* *encodekey256u32 */

        case 1:
          x4 = XEXP (x2, 0);
          if (GET_CODE (x4) != REG
              || REGNO (x4) != 17
              || GET_MODE (x4) != E_CCZmode)
            return -1;
          operands[1] = x1;
          if (!aeswidekl_operation (operands[1], E_VOIDmode)
              || GET_MODE (x5) != E_CCZmode)
            return -1;
          x6 = XVECEXP (x5, 0, 0);
          operands[0] = x6;
          if (!memory_operand (operands[0], E_BLKmode))
            return -1;
          switch (XINT (x5, 1))
            {
            case 103:
              if (!
#line 31423 "../../src/gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10370; /* *aesdecwide128klu8 */

            case 105:
              if (!
#line 31423 "../../src/gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10371; /* *aesdecwide256klu8 */

            case 104:
              if (!
#line 31423 "../../src/gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10372; /* *aesencwide128klu8 */

            case 106:
              if (!
#line 31423 "../../src/gcc/config/i386/sse.md"
(TARGET_WIDEKL))
                return -1;
              return 10373; /* *aesencwide256klu8 */

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

 rtx_insn *
split_2 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_DFmode:
      if (!push_operand (operands[0], E_DFmode))
        return NULL;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_DFmode
          || !fp_register_operand (operands[1], E_SFmode))
        return NULL;
      if ((
#line 5258 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
        return gen_split_64 (insn, operands);
      if (!(
#line 5258 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
        return NULL;
      return gen_split_65 (insn, operands);

    case E_XFmode:
      if (!push_operand (operands[0], E_XFmode))
        return NULL;
      x2 = XEXP (x1, 1);
      if (GET_MODE (x2) != E_XFmode)
        return NULL;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!fp_register_operand (operands[1], E_SFmode))
            return NULL;
          if ((
#line 5265 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_66 (insn, operands);
          if (!(
#line 5265 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return NULL;
          return gen_split_67 (insn, operands);

        case E_DFmode:
          if (!fp_register_operand (operands[1], E_DFmode))
            return NULL;
          if ((
#line 5265 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
            return gen_split_68 (insn, operands);
          if (!(
#line 5265 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
            return NULL;
          return gen_split_69 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_4 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LTU)
    {
      switch (pattern43 (x1))
        {
        case 0:
          if ((
#line 9893 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9895 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_196 (insn, operands);
          break;

        case 1:
          if ((
#line 9893 "../../src/gcc/config/i386/i386.md"
(ix86_pre_reload_split ()) && 
#line 9895 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_197 (insn, operands);
          break;

        default:
          break;
        }
    }
  operands[1] = x2;
  if (!add_comparison_operator (operands[1], E_QImode))
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != NOT)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!nonimmediate_operand (operands[0], E_QImode))
    return NULL;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  operands[3] = x6;
  switch (GET_MODE (x3))
    {
    case E_QImode:
      if (!register_operand (operands[2], E_QImode)
          || !nonimmediate_operand (operands[3], E_QImode))
        return NULL;
      return gen_split_846 (insn, operands);

    case E_HImode:
      if (!register_operand (operands[2], E_HImode)
          || !nonimmediate_operand (operands[3], E_HImode))
        return NULL;
      return gen_split_847 (insn, operands);

    case E_SImode:
      if (!register_operand (operands[2], E_SImode)
          || !nonimmediate_operand (operands[3], E_SImode))
        return NULL;
      return gen_split_848 (insn, operands);

    case E_DImode:
      if (!register_operand (operands[2], E_DImode)
          || !nonimmediate_operand (operands[3], E_DImode)
          || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
        return NULL;
      return gen_split_849 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_7 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_23 (insn, operands);

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
          return gen_split_26 (insn, operands);

        case 2:
          if (!(
#line 3748 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && CONST_INT_P (operands[3])
   && UINTVAL (operands[3]) == 0xffffffff00000000ll) && 
#line 3752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_29 (insn, operands);

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
        case MEM:
          x7 = XEXP (x3, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
              operands[3] = x7;
              operands[1] = x6;
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
                  return gen_split_160 (insn, operands);

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
                  return gen_split_162 (insn, operands);

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
                  return gen_split_164 (insn, operands);

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
                    return gen_split_166 (insn, operands);
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
                  return gen_split_467 (insn, operands);

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
                  return gen_split_470 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              operands[1] = x6;
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
                  return gen_split_431 (insn, operands);

                case 1:
                  if (!((
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14062 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_434 (insn, operands);

                default:
                  return NULL;
                }

            case LSHIFTRT:
              operands[4] = x6;
              switch (pattern831 (x3))
                {
                case 0:
                  if (!(
#line 15475 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15479 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_562 (insn, operands);

                case 1:
                  if (!(
#line 15707 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15711 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_566 (insn, operands);

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
              return gen_split_443 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_449 (insn, operands);

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
              return gen_split_473 (insn, operands);

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
              return gen_split_479 (insn, operands);

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
              return gen_split_446 (insn, operands);

            case 1:
              if (!((
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14098 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_452 (insn, operands);

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
              return gen_split_476 (insn, operands);

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
              return gen_split_482 (insn, operands);

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
          return gen_split_437 (insn, operands);

        case 1:
          if (!((
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14079 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_440 (insn, operands);

        case 2:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_455 (insn, operands);

        case 3:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_461 (insn, operands);

        case 4:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_458 (insn, operands);

        case 5:
          if (!((
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 8 * BITS_PER_UNIT) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14123 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_464 (insn, operands);

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
          return gen_split_485 (insn, operands);

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
          return gen_split_488 (insn, operands);

        default:
          return NULL;
        }

    case LSHIFTRT:
      x7 = XEXP (x3, 1);
      if (GET_CODE (x7) != ASHIFT)
        return NULL;
      x6 = XEXP (x4, 0);
      operands[4] = x6;
      x5 = XEXP (x4, 1);
      operands[2] = x5;
      switch (pattern831 (x3))
        {
        case 0:
          if (!(
#line 16860 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_APX_NF
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 16864 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_609 (insn, operands);

        case 1:
          if (!(
#line 17091 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF
   && INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 17095 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_613 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_19 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[0] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          if (register_operand (operands[0], E_DImode))
            {
              if (nonmemory_operand (operands[1], E_DImode)
                  && nonmemory_operand (operands[2], E_QImode)
                  && (
#line 15323 "../../src/gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1195 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_556 (insn, operands);
              if (nonimmediate_operand (operands[1], E_DImode)
                  && register_operand (operands[2], E_QImode)
                  && (
#line 15988 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_573 (insn, operands);
            }
          if (!general_reg_operand (operands[0], E_DImode)
              || !index_reg_operand (operands[1], E_DImode)
              || !const_0_to_3_operand (operands[2], E_VOIDmode)
              || !(
#line 16283 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && REGNO (operands[0]) != REGNO (operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_580 (insn, operands);

        case E_TImode:
          if (!register_operand (operands[0], E_TImode))
            return NULL;
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_TImode
              || !nonmemory_operand (operands[1], E_TImode)
              || !nonmemory_operand (operands[2], E_QImode)
              || !(
#line 15323 "../../src/gcc/config/i386/i386.md"
(epilogue_completed) && 
#line 1196 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_557 (insn, operands);

        default:
          return NULL;
        }

    case STRICT_LOW_PART:
      switch (pattern1251 (x2))
        {
        case 0:
          if (!(
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 16252 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_575 (insn, operands);

        case 1:
          if (!(
#line 16233 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 16252 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_576 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_23 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case PLUS:
      if (pattern581 (x1, 
PLUS, 
E_CCCmode) != 0
          || GET_MODE (x3) != E_CCCmode)
        return NULL;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x9 = XEXP (x3, 1);
      if (!rtx_equal_p (x9, operands[1]))
        return NULL;
      x10 = XEXP (x7, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return NULL;
      x12 = XEXP (x10, 1);
      if (!rtx_equal_p (x12, operands[2]))
        return NULL;
      switch (GET_MODE (x4))
        {
        case E_DImode:
          if (pattern1663 (x10, 
E_DImode) != 0
              || !((
#line 10081 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 10083 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_200 (insn, operands);

        case E_TImode:
          if (pattern1663 (x10, 
E_TImode) != 0
              || !((
#line 10081 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10083 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_201 (insn, operands);

        default:
          return NULL;
        }

    case AND:
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case SUBREG:
          switch (pattern816 (x1))
            {
            case 0:
              if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_340 (insn, operands);

            case 1:
              if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_343 (insn, operands);

            case 2:
              if (!((
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
                return NULL;
              return gen_split_346 (insn, operands);

            default:
              return NULL;
            }

        case NOT:
          if (GET_MODE (x5) != E_SImode)
            return NULL;
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != CLOBBER)
            return NULL;
          x13 = XEXP (x2, 0);
          operands[0] = x13;
          if (!flags_reg_operand (operands[0], E_VOIDmode))
            return NULL;
          operands[1] = x3;
          if (!compare_operator (operands[1], E_VOIDmode)
              || GET_MODE (x4) != E_SImode)
            return NULL;
          x14 = XEXP (x5, 0);
          operands[2] = x14;
          if (!general_reg_operand (operands[2], E_SImode))
            return NULL;
          x6 = XEXP (x4, 1);
          operands[3] = x6;
          if (!nonimmediate_operand (operands[3], E_SImode))
            return NULL;
          x8 = XEXP (x7, 0);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 13416 "../../src/gcc/config/i386/i386.md"
(reload_completed
   && optimize_insn_for_size_p () && optimize_size > 1
   && LEGACY_INT_REG_P (operands[2])
   && !REX_INT_REG_P (operands[3])
   && !reg_overlap_mentioned_p (operands[2], operands[3])))
            return NULL;
          return gen_split_378 (insn, operands);

        case NEG:
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != SET)
            return NULL;
          x10 = XEXP (x7, 1);
          if (GET_CODE (x10) != AND)
            return NULL;
          x11 = XEXP (x10, 0);
          if (GET_CODE (x11) != NEG)
            return NULL;
          x13 = XEXP (x2, 0);
          operands[3] = x13;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return NULL;
          operands[4] = x3;
          if (!compare_operator (operands[4], E_VOIDmode))
            return NULL;
          switch (pattern1505 (x1))
            {
            case 0:
              if (!
#line 21805 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI
   && TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
                return NULL;
              return gen_split_900 (insn, operands);

            case 1:
              if (!(
#line 21805 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI
   && TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_901 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
          x15 = XEXP (x5, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
              || pattern681 (x1, 
SET, 
E_CCZmode) != 0)
            return NULL;
          x7 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x7, 1);
          if (GET_CODE (x10) != AND)
            return NULL;
          x11 = XEXP (x10, 0);
          if (GET_CODE (x11) != PLUS)
            return NULL;
          x16 = XEXP (x11, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + -1]
              || GET_MODE (x3) != E_CCZmode)
            return NULL;
          switch (pattern1505 (x1))
            {
            case 0:
              if (!(
#line 21942 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21944 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_906 (insn, operands);

            case 1:
              if (!((
#line 21942 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21944 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BLS
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_907 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case IOR:
      switch (pattern584 (x1, 
IOR))
        {
        case 0:
          if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_341 (insn, operands);

        case 1:
          if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_344 (insn, operands);

        case 2:
          if (!((
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_347 (insn, operands);

        default:
          return NULL;
        }

    case XOR:
      switch (pattern584 (x1, 
XOR))
        {
        case 0:
          if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_342 (insn, operands);

        case 1:
          if (!(
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_345 (insn, operands);

        case 2:
          if (!((
#line 13137 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13141 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])))))
            return NULL;
          return gen_split_348 (insn, operands);

        default:
          return NULL;
        }

    case NOT:
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != SET)
        return NULL;
      x13 = XEXP (x2, 0);
      operands[0] = x13;
      if (!flags_reg_operand (operands[0], E_VOIDmode))
        return NULL;
      operands[2] = x3;
      if (!compare_operator (operands[2], E_VOIDmode))
        return NULL;
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      x8 = XEXP (x7, 0);
      operands[1] = x8;
      x10 = XEXP (x7, 1);
      switch (GET_CODE (x10))
        {
        case NOT:
          x11 = XEXP (x10, 0);
          if (!rtx_equal_p (x11, operands[3]))
            return NULL;
          switch (GET_MODE (x4))
            {
            case E_QImode:
              if (!nonimmediate_operand (operands[3], E_QImode)
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || GET_MODE (x10) != E_QImode
                  || !
#line 15092 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_544 (insn, operands);

            case E_HImode:
              if (!nonimmediate_operand (operands[3], E_HImode)
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || GET_MODE (x10) != E_HImode
                  || !
#line 15092 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_545 (insn, operands);

            case E_SImode:
              if (!nonimmediate_operand (operands[3], E_SImode)
                  || !nonimmediate_operand (operands[1], E_SImode)
                  || GET_MODE (x10) != E_SImode
                  || !
#line 15092 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
                return NULL;
              return gen_split_546 (insn, operands);

            case E_DImode:
              if (!nonimmediate_operand (operands[3], E_DImode)
                  || !nonimmediate_operand (operands[1], E_DImode)
                  || GET_MODE (x10) != E_DImode
                  || !(
#line 15092 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_547 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (pattern1236 (x1, 
NOT) != 0
              || !nonimmediate_operand (operands[3], E_SImode)
              || !register_operand (operands[1], E_DImode))
            return NULL;
          x11 = XEXP (x10, 0);
          x17 = XEXP (x11, 0);
          if (!rtx_equal_p (x17, operands[3])
              || !
#line 15119 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)))
            return NULL;
          return gen_split_548 (insn, operands);

        default:
          return NULL;
        }

    case REG:
    case SUBREG:
    case MEM:
      operands[1] = x4;
      x9 = XEXP (x3, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern581 (x1, 
CTZ, 
E_CCCmode) != 0
          || GET_MODE (x3) != E_CCCmode)
        return NULL;
      x7 = XVECEXP (x1, 0, 1);
      x8 = XEXP (x7, 0);
      operands[0] = x8;
      x10 = XEXP (x7, 1);
      x11 = XEXP (x10, 0);
      if (!rtx_equal_p (x11, operands[1]))
        return NULL;
      switch (pattern1492 (x10))
        {
        case 0:
          if (!(
#line 20994 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 20996 "../../src/gcc/config/i386/i386.md"
( (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_871 (insn, operands);

        case 1:
          if (!((
#line 20994 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 20996 "../../src/gcc/config/i386/i386.md"
( (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
            return NULL;
          return gen_split_872 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_29 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  rtx_insn *res ATTRIBUTE_UNUSED;
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
            return NULL;
          if (((
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 14603 "../../src/gcc/config/i386/i386.md"
( 1)))
            return gen_split_497 (insn, operands);
          if (!((
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (DImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14691 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_504 (insn, operands);

        case 1:
          if (!register_operand (operands[0], E_TImode)
              || GET_MODE (x4) != E_TImode
              || !general_operand (operands[1], E_TImode)
              || !((
#line 14600 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && ix86_pre_reload_split ()) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 14603 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_498 (insn, operands);

        case 2:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x4) != E_QImode
              || !general_operand (operands[1], E_QImode)
              || !(
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (QImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_501 (insn, operands);

        case 3:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x4) != E_HImode
              || !general_operand (operands[1], E_HImode)
              || !(
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (HImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_502 (insn, operands);

        case 4:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode
              || !general_operand (operands[1], E_SImode)
              || !(
#line 14687 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (SImode != QImode || !TARGET_PARTIAL_REG_STALL)
   && ix86_pre_reload_split ()) && 
#line 14691 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_503 (insn, operands);

        case 5:
          if (GET_MODE (x4) != E_SFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_SFmode)
              && fp_register_operand (operands[1], E_SFmode)
              && 
#line 14817 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_512 (insn, operands);
          if (!general_reg_operand (operands[0], E_SFmode)
              || !general_reg_operand (operands[1], E_SFmode)
              || !
#line 14824 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_518 (insn, operands);

        case 6:
          if (GET_MODE (x4) != E_DFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_DFmode)
              && fp_register_operand (operands[1], E_DFmode)
              && 
#line 14817 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_514 (insn, operands);
          if (!general_reg_operand (operands[0], E_DFmode)
              || !general_reg_operand (operands[1], E_DFmode)
              || !
#line 14824 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_520 (insn, operands);

        case 7:
          if (GET_MODE (x4) != E_XFmode)
            return NULL;
          if (fp_register_operand (operands[0], E_XFmode)
              && fp_register_operand (operands[1], E_XFmode)
              && 
#line 14817 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return gen_split_516 (insn, operands);
          if (!general_reg_operand (operands[0], E_XFmode)
              || !general_reg_operand (operands[1], E_XFmode)
              || !
#line 14824 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
            return NULL;
          return gen_split_522 (insn, operands);

        default:
          return NULL;
        }

    case USE:
      if (pattern833 (x1) != 0
          || !(
#line 14748 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE) && 
#line 14750 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
        return NULL;
      return gen_split_509 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_35 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 2:
      return split_34 (x1, insn);

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x3 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x3) != CLOBBER)
        return NULL;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case SIGN_EXTEND:
          if (pattern242 (x1) != 0)
            return NULL;
          x5 = XEXP (x3, 0);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (GET_MODE (x4) != E_DImode
                  || !register_operand (operands[1], E_SImode))
                return NULL;
              if (memory_operand (operands[0], E_DImode)
                  && register_operand (operands[2], E_SImode)
                  && (
#line 5003 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return gen_split_60 (insn, operands);
              if (!register_operand (operands[0], E_DImode)
                  || !scratch_operand (operands[2], E_SImode)
                  || !(
#line 5077 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_62 (insn, operands);

            case E_TImode:
              if (GET_MODE (x4) != E_TImode
                  || !register_operand (operands[1], E_DImode))
                return NULL;
              if (memory_operand (operands[0], E_TImode)
                  && register_operand (operands[2], E_DImode)
                  && (
#line 5003 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return gen_split_61 (insn, operands);
              if (!register_operand (operands[0], E_TImode)
                  || !scratch_operand (operands[2], E_DImode)
                  || !(
#line 5077 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_63 (insn, operands);

            default:
              return NULL;
            }

        case UNSIGNED_FLOAT:
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != CLOBBER)
            return NULL;
          switch (pattern572 (x1))
            {
            case 0:
              if (!(
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_91 (insn, operands);

            case 1:
              if (!(
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_92 (insn, operands);

            case 2:
              if (!(
#line 6297 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES_TO_VEC) && 
#line 6301 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_93 (insn, operands);

            default:
              return NULL;
            }

        case DIV:
          if (pattern585 (x1, 
MOD) != 0)
            return NULL;
          x7 = XEXP (x2, 0);
          operands[0] = x7;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          x9 = XEXP (x4, 1);
          operands[3] = x9;
          x6 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x6, 0);
          operands[1] = x10;
          x11 = XEXP (x6, 1);
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          switch (GET_CODE (operands[2]))
            {
            case REG:
            case SUBREG:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern388 (x1, 
E_SImode) != 0)
                    return NULL;
                  if (
#line 11380 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_240 (insn, operands);
                  if (!
#line 11604 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_257 (insn, operands);

                case E_DImode:
                  if (pattern388 (x1, 
E_DImode) != 0)
                    return NULL;
                  if ((
#line 11380 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_242 (insn, operands);
                  if (!(
#line 11604 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_258 (insn, operands);

                case E_HImode:
                  if (pattern388 (x1, 
E_HImode) != 0
                      || !(
#line 11604 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                    return NULL;
                  return gen_split_256 (insn, operands);

                default:
                  return NULL;
                }

            case CONST_INT:
              if (!const_int_operand (operands[2], E_SImode)
                  || pattern1495 (x1) != 0
                  || !(
#line 11907 "../../src/gcc/config/i386/i386.md"
(!optimize_function_for_size_p (cfun)) && 
#line 11909 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_270 (insn, operands);

            default:
              return NULL;
            }

        case UDIV:
          if (pattern585 (x1, 
UMOD) != 0)
            return NULL;
          x7 = XEXP (x2, 0);
          operands[0] = x7;
          x8 = XEXP (x4, 0);
          operands[2] = x8;
          x9 = XEXP (x4, 1);
          operands[3] = x9;
          x6 = XVECEXP (x1, 0, 1);
          x10 = XEXP (x6, 0);
          operands[1] = x10;
          x11 = XEXP (x6, 1);
          x12 = XEXP (x11, 0);
          if (!rtx_equal_p (x12, operands[2]))
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[3]))
            return NULL;
          switch (GET_CODE (operands[3]))
            {
            case REG:
            case SUBREG:
            case MEM:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern388 (x1, 
E_SImode) != 0)
                    return NULL;
                  if (
#line 11380 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_241 (insn, operands);
                  if (!
#line 11639 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_260 (insn, operands);

                case E_DImode:
                  if (pattern388 (x1, 
E_DImode) != 0)
                    return NULL;
                  if ((
#line 11380 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return gen_split_243 (insn, operands);
                  if (!(
#line 11639 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_261 (insn, operands);

                case E_HImode:
                  if (pattern388 (x1, 
E_HImode) != 0
                      || !(
#line 11639 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1191 "../../src/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)))
                    return NULL;
                  return gen_split_259 (insn, operands);

                default:
                  return NULL;
                }

            case CONST_INT:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1496 (x1, 
E_SImode) != 0
                      || !(
#line 11660 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11662 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_262 (insn, operands);

                case E_DImode:
                  if (pattern1496 (x1, 
E_DImode) != 0
                      || !((
#line 11660 "../../src/gcc/config/i386/i386.md"
(IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 11662 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_263 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != SET)
            return NULL;
          x5 = XEXP (x3, 0);
          if (GET_CODE (x5) != REG
              || REGNO (x5) != 17
              || GET_MODE (x5) != E_CCmode)
            return NULL;
          switch (pattern1054 (x1))
            {
            case 0:
              if (pattern1530 (x1, 
MOD) != 0)
                return NULL;
              if (
#line 11395 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                return gen_split_244 (insn, operands);
              if (!(
#line 11684 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11686 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_264 (insn, operands);

            case 1:
              x11 = XEXP (x6, 1);
              if (GET_CODE (x11) != UMOD)
                return NULL;
              x7 = XEXP (x2, 0);
              operands[0] = x7;
              x8 = XEXP (x4, 0);
              x14 = XEXP (x8, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x15 = XEXP (x8, 1);
              operands[3] = x15;
              x10 = XEXP (x6, 0);
              operands[1] = x10;
              switch (pattern1621 (x11))
                {
                case 0:
                  if (
#line 11395 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_245 (insn, operands);
                  if (!(
#line 11719 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11721 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_265 (insn, operands);

                case 1:
                  if (!(
#line 11741 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11744 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_266 (insn, operands);

                default:
                  return NULL;
                }

            case 2:
              if (pattern1531 (x1, 
DIV) != 0)
                return NULL;
              if (
#line 11411 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                return gen_split_246 (insn, operands);
              if (!(
#line 11767 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11769 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_267 (insn, operands);

            case 3:
              x11 = XEXP (x6, 1);
              if (GET_CODE (x11) != UDIV)
                return NULL;
              x7 = XEXP (x2, 0);
              operands[1] = x7;
              x8 = XEXP (x4, 0);
              x14 = XEXP (x8, 0);
              operands[2] = x14;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x15 = XEXP (x8, 1);
              operands[3] = x15;
              x10 = XEXP (x6, 0);
              operands[0] = x10;
              switch (pattern1621 (x11))
                {
                case 0:
                  if (
#line 11411 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()))
                    return gen_split_247 (insn, operands);
                  if (!(
#line 11803 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11805 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_268 (insn, operands);

                case 1:
                  if (!(
#line 11825 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && IN_RANGE (exact_log2 (UINTVAL (operands[3])), 1, 31)) && 
#line 11828 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_269 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case ABS:
          switch (pattern586 (x1))
            {
            case 0:
              if (!(
#line 14834 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 14836 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_524 (insn, operands);

            case 1:
              if (sse_reg_operand (operands[0], E_SFmode)
                  && sse_reg_operand (operands[1], E_SFmode)
                  && vector_operand (operands[2], E_V4SFmode)
                  && 
#line 14871 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_526 (insn, operands);
              if (fp_register_operand (operands[0], E_SFmode)
                  && fp_register_operand (operands[1], E_SFmode)
                  && 
#line 14891 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_530 (insn, operands);
              if (!general_reg_operand (operands[0], E_SFmode)
                  || !general_reg_operand (operands[1], E_SFmode)
                  || !
#line 14899 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_534 (insn, operands);

            case 2:
              if (sse_reg_operand (operands[0], E_DFmode)
                  && sse_reg_operand (operands[1], E_DFmode)
                  && vector_operand (operands[2], E_V2DFmode)
                  && 
#line 14871 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_528 (insn, operands);
              if (fp_register_operand (operands[0], E_DFmode)
                  && fp_register_operand (operands[1], E_DFmode)
                  && 
#line 14891 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_532 (insn, operands);
              if (!general_reg_operand (operands[0], E_DFmode)
                  || !general_reg_operand (operands[1], E_DFmode)
                  || !
#line 14899 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_536 (insn, operands);

            default:
              return NULL;
            }

        case NEG:
          switch (pattern586 (x1))
            {
            case 0:
              if (!(
#line 14834 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 14836 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_525 (insn, operands);

            case 1:
              if (sse_reg_operand (operands[0], E_SFmode)
                  && sse_reg_operand (operands[1], E_SFmode)
                  && vector_operand (operands[2], E_V4SFmode)
                  && 
#line 14871 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_527 (insn, operands);
              if (fp_register_operand (operands[0], E_SFmode)
                  && fp_register_operand (operands[1], E_SFmode)
                  && 
#line 14891 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_531 (insn, operands);
              if (!general_reg_operand (operands[0], E_SFmode)
                  || !general_reg_operand (operands[1], E_SFmode)
                  || !
#line 14899 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_535 (insn, operands);

            case 2:
              if (sse_reg_operand (operands[0], E_DFmode)
                  && sse_reg_operand (operands[1], E_DFmode)
                  && vector_operand (operands[2], E_V2DFmode)
                  && 
#line 14871 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed))
                return gen_split_529 (insn, operands);
              if (fp_register_operand (operands[0], E_DFmode)
                  && fp_register_operand (operands[1], E_DFmode)
                  && 
#line 14891 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return gen_split_533 (insn, operands);
              if (!general_reg_operand (operands[0], E_DFmode)
                  || !general_reg_operand (operands[1], E_DFmode)
                  || !
#line 14899 "../../src/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed))
                return NULL;
              return gen_split_537 (insn, operands);

            default:
              return NULL;
            }

        case ROTATE:
          switch (pattern587 (x1))
            {
            case 0:
              if (!(
#line 18357 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_774 (insn, operands);

            case 1:
              if (!(
#line 18357 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_775 (insn, operands);

            default:
              return NULL;
            }

        case ROTATERT:
          switch (pattern587 (x1))
            {
            case 0:
              if (!(
#line 18394 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return NULL;
              return gen_split_776 (insn, operands);

            case 1:
              if (!(
#line 18394 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_777 (insn, operands);

            default:
              return NULL;
            }

        case FFS:
          if (GET_MODE (x4) != E_SImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != CLOBBER
              || pattern711 (x1) != 0
              || !(
#line 20965 "../../src/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 20967 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_870 (insn, operands);

        default:
          return NULL;
        }

    case 4:
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return NULL;
      x16 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x16) != CLOBBER)
        return NULL;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case UNSIGNED_FIX:
          switch (pattern385 (x1))
            {
            case 0:
              if (!(
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 5914 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_74 (insn, operands);

            case 1:
              if (!(
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 5914 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_75 (insn, operands);

            default:
              return NULL;
            }

        case FLOAT:
          switch (pattern387 (x1))
            {
            case 0:
              if (!(
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_84 (insn, operands);

            case 1:
              if (!(
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_85 (insn, operands);

            case 2:
              if (!(
#line 6206 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_INTER_UNIT_MOVES_TO_VEC
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && optimize_function_for_speed_p (cfun)) && 
#line 6210 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_86 (insn, operands);

            default:
              return NULL;
            }

        case DIV:
          switch (pattern589 (x1, 
MOD))
            {
            case 0:
              if (!
#line 11429 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return NULL;
              return gen_split_248 (insn, operands);

            case 1:
              if (!(
#line 11429 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_249 (insn, operands);

            default:
              return NULL;
            }

        case UDIV:
          switch (pattern589 (x1, 
UMOD))
            {
            case 0:
              if (!
#line 11464 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                return NULL;
              return gen_split_250 (insn, operands);

            case 1:
              if (!(
#line 11464 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_251 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return NULL;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != SET)
            return NULL;
          x3 = XVECEXP (x1, 0, 2);
          if (pattern382 (x3, 
32) != 0)
            return NULL;
          x17 = XEXP (x16, 0);
          if (GET_CODE (x17) != REG
              || REGNO (x17) != 17
              || GET_MODE (x17) != E_CCmode)
            return NULL;
          x7 = XEXP (x2, 0);
          if (!register_operand (x7, E_DImode))
            return NULL;
          x8 = XEXP (x4, 0);
          if (GET_MODE (x8) != E_SImode)
            return NULL;
          x10 = XEXP (x6, 0);
          if (!register_operand (x10, E_SImode))
            return NULL;
          x11 = XEXP (x6, 1);
          if (GET_MODE (x11) != E_SImode)
            return NULL;
          switch (GET_CODE (x8))
            {
            case DIV:
              if (pattern1530 (x1, 
MOD) != 0
                  || !(
#line 11485 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11487 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_252 (insn, operands);

            case UDIV:
              if (pattern1530 (x1, 
UMOD) != 0
                  || !(
#line 11521 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11523 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_253 (insn, operands);

            case MOD:
              if (pattern1531 (x1, 
DIV) != 0
                  || !(
#line 11544 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11546 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_254 (insn, operands);

            case UMOD:
              if (pattern1531 (x1, 
UDIV) != 0
                  || !(
#line 11581 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 11583 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_255 (insn, operands);

            default:
              return NULL;
            }

        case PLUS:
          if (pattern393 (x1) != 0)
            return NULL;
          return gen_split_916 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_58 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (GET_CODE (operands[4]))
    {
    case REG:
    case SUBREG:
    case MEM:
      x2 = XEXP (x1, 1);
      switch (pattern1290 (x2))
        {
        case 0:
          if (((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4119 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1316 (insn, operands);
          break;

        case 1:
          if ((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 4119 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1317 (insn, operands);
          break;

        case 2:
          if (((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 4119 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1318 (insn, operands);
          break;

        case 3:
          if (((
#line 4117 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 4119 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_1319 (insn, operands);
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
              if (pattern1532 (x2, 
E_V32HImode, 
E_SImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V32HImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 763 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3226 (insn, operands);
                  if (const1_operand (operands[1], E_V32HImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 763 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                    return gen_split_3245 (insn, operands);
                }
              break;

            case E_V16HImode:
              if (pattern1532 (x2, 
E_V16HImode, 
E_HImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V16HImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3227 (insn, operands);
                  if (const1_operand (operands[1], E_V16HImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 764 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return gen_split_3246 (insn, operands);
                }
              break;

            case E_V8HImode:
              if (pattern1532 (x2, 
E_V8HImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8HImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3228 (insn, operands);
                  if (const1_operand (operands[1], E_V8HImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 765 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && TARGET_AVX512BW)))
                    return gen_split_3247 (insn, operands);
                }
              break;

            case E_V16SImode:
              if (pattern1532 (x2, 
E_V16SImode, 
E_HImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V16SImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3229 (insn, operands);
                  if (const1_operand (operands[1], E_V16SImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return gen_split_3248 (insn, operands);
                }
              break;

            case E_V8SImode:
              if (pattern1532 (x2, 
E_V8SImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8SImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3230 (insn, operands);
                  if (const1_operand (operands[1], E_V8SImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3249 (insn, operands);
                }
              break;

            case E_V4SImode:
              if (pattern1532 (x2, 
E_V4SImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V4SImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3231 (insn, operands);
                  if (const1_operand (operands[1], E_V4SImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 766 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3250 (insn, operands);
                }
              break;

            case E_V8DImode:
              if (pattern1532 (x2, 
E_V8DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V8DImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3232 (insn, operands);
                  if (const1_operand (operands[1], E_V8DImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return gen_split_3251 (insn, operands);
                }
              break;

            case E_V4DImode:
              if (pattern1532 (x2, 
E_V4DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V4DImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3233 (insn, operands);
                  if (const1_operand (operands[1], E_V4DImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3252 (insn, operands);
                }
              break;

            case E_V2DImode:
              if (pattern1532 (x2, 
E_V2DImode, 
E_QImode) == 0)
                {
                  if (vector_all_ones_operand (operands[1], E_V2DImode)
                      && ((
#line 17170 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)) && 
#line 17172 "../../src/gcc/config/i386/sse.md"
( 1)))
                    return gen_split_3234 (insn, operands);
                  if (const1_operand (operands[1], E_V2DImode)
                      && (
#line 17381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 767 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return gen_split_3253 (insn, operands);
                }
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
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3274 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V16QImode)
              && nonimmediate_operand (operands[4], E_V16QImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3296 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V16QImode)
          || !vector_all_ones_operand (operands[2], E_V16QImode)
          || !nonimmediate_operand (operands[3], E_V16QImode)
          || !nonimmediate_operand (operands[4], E_V16QImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3312 (insn, operands);

    case 1:
      if (vector_all_ones_operand (operands[1], E_V8HImode)
          && const0_operand (operands[2], E_V8HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8HImode)
              && nonimm_or_0_operand (operands[4], E_V8HImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3275 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V8HImode)
              && nonimmediate_operand (operands[4], E_V8HImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3298 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V8HImode)
          || !vector_all_ones_operand (operands[2], E_V8HImode)
          || !nonimmediate_operand (operands[3], E_V8HImode)
          || !nonimmediate_operand (operands[4], E_V8HImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3313 (insn, operands);

    case 2:
      if (vector_all_ones_operand (operands[1], E_V4SImode)
          && const0_operand (operands[2], E_V4SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4SImode)
              && nonimm_or_0_operand (operands[4], E_V4SImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3276 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V4SImode)
              && nonimmediate_operand (operands[4], E_V4SImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3300 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V4SImode)
          || !vector_all_ones_operand (operands[2], E_V4SImode)
          || !nonimmediate_operand (operands[3], E_V4SImode)
          || !nonimmediate_operand (operands[4], E_V4SImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3314 (insn, operands);

    case 3:
      if (vector_all_ones_operand (operands[1], E_V2DImode)
          && const0_operand (operands[2], E_V2DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V2DImode)
              && nonimm_or_0_operand (operands[4], E_V2DImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3277 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V2DImode)
              && nonimmediate_operand (operands[4], E_V2DImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3302 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V2DImode)
          || !vector_all_ones_operand (operands[2], E_V2DImode)
          || !nonimmediate_operand (operands[3], E_V2DImode)
          || !nonimmediate_operand (operands[4], E_V2DImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3315 (insn, operands);

    case 4:
      if (vector_all_ones_operand (operands[1], E_V32QImode)
          && const0_operand (operands[2], E_V32QImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V32QImode)
              && nonimm_or_0_operand (operands[4], E_V32QImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3278 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V32QImode)
              && nonimmediate_operand (operands[4], E_V32QImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3304 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V32QImode)
          || !vector_all_ones_operand (operands[2], E_V32QImode)
          || !nonimmediate_operand (operands[3], E_V32QImode)
          || !nonimmediate_operand (operands[4], E_V32QImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3316 (insn, operands);

    case 5:
      if (vector_all_ones_operand (operands[1], E_V16HImode)
          && const0_operand (operands[2], E_V16HImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V16HImode)
              && nonimm_or_0_operand (operands[4], E_V16HImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3279 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V16HImode)
              && nonimmediate_operand (operands[4], E_V16HImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3306 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V16HImode)
          || !vector_all_ones_operand (operands[2], E_V16HImode)
          || !nonimmediate_operand (operands[3], E_V16HImode)
          || !nonimmediate_operand (operands[4], E_V16HImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3317 (insn, operands);

    case 6:
      if (vector_all_ones_operand (operands[1], E_V8SImode)
          && const0_operand (operands[2], E_V8SImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V8SImode)
              && nonimm_or_0_operand (operands[4], E_V8SImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3280 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V8SImode)
              && nonimmediate_operand (operands[4], E_V8SImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3308 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V8SImode)
          || !vector_all_ones_operand (operands[2], E_V8SImode)
          || !nonimmediate_operand (operands[3], E_V8SImode)
          || !nonimmediate_operand (operands[4], E_V8SImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3318 (insn, operands);

    case 7:
      if (vector_all_ones_operand (operands[1], E_V4DImode)
          && const0_operand (operands[2], E_V4DImode))
        {
          if (nonimm_or_0_operand (operands[3], E_V4DImode)
              && nonimm_or_0_operand (operands[4], E_V4DImode)
              && (
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
	   && !MEM_P (operands[4])))) && 
#line 17980 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3281 (insn, operands);
          if (nonimmediate_operand (operands[3], E_V4DImode)
              && nonimmediate_operand (operands[4], E_V4DImode)
              && (
#line 18133 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
   && (INTVAL (operands[5]) == 2 || INTVAL (operands[5]) == 5)) && 
#line 18136 "../../src/gcc/config/i386/sse.md"
( 1)))
            return gen_split_3310 (insn, operands);
        }
      if (!const0_operand (operands[1], E_V4DImode)
          || !vector_all_ones_operand (operands[2], E_V4DImode)
          || !nonimmediate_operand (operands[3], E_V4DImode)
          || !nonimmediate_operand (operands[4], E_V4DImode)
          || !(
#line 18159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL && ix86_pre_reload_split ()
     /* NE is commutative.  */
   && (INTVAL (operands[5]) == 4
	  /* LE, 3 must be register.  */
       || INTVAL (operands[5]) == 2
	  /* NLT aka GE, 4 must be register and we swap operands.  */
       || INTVAL (operands[5]) == 5)) && 
#line 18167 "../../src/gcc/config/i386/sse.md"
( 1)))
        return NULL;
      return gen_split_3319 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_73 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
              return gen_split_1660 (insn, operands);

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
              return gen_split_1687 (insn, operands);

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
              return gen_split_1714 (insn, operands);

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
              return gen_split_1741 (insn, operands);

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
              return gen_split_1768 (insn, operands);

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
              return gen_split_1795 (insn, operands);

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
              return gen_split_1822 (insn, operands);

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
              return gen_split_1849 (insn, operands);

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
              return gen_split_1876 (insn, operands);

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
              return gen_split_1903 (insn, operands);

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
              return gen_split_1930 (insn, operands);

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
              return gen_split_1957 (insn, operands);

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
              return gen_split_1663 (insn, operands);

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
              return gen_split_1690 (insn, operands);

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
              return gen_split_1717 (insn, operands);

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
              return gen_split_1744 (insn, operands);

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
              return gen_split_1771 (insn, operands);

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
              return gen_split_1798 (insn, operands);

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
              return gen_split_1825 (insn, operands);

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
              return gen_split_1852 (insn, operands);

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
              return gen_split_1879 (insn, operands);

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
              return gen_split_1906 (insn, operands);

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
              return gen_split_1933 (insn, operands);

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
              return gen_split_1960 (insn, operands);

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
              return gen_split_1666 (insn, operands);

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
              return gen_split_1693 (insn, operands);

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
              return gen_split_1720 (insn, operands);

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
              return gen_split_1747 (insn, operands);

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
              return gen_split_1774 (insn, operands);

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
              return gen_split_1801 (insn, operands);

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
              return gen_split_1828 (insn, operands);

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
              return gen_split_1855 (insn, operands);

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
              return gen_split_1882 (insn, operands);

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
              return gen_split_1909 (insn, operands);

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
              return gen_split_1936 (insn, operands);

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
              return gen_split_1963 (insn, operands);

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
              return gen_split_2956 (insn, operands);

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
              return gen_split_2965 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2974 (insn, operands);

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
              return gen_split_2983 (insn, operands);

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
              return gen_split_2992 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3001 (insn, operands);

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
              return gen_split_3010 (insn, operands);

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
              return gen_split_3019 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3028 (insn, operands);

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
              return gen_split_3037 (insn, operands);

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
              return gen_split_3046 (insn, operands);

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3055 (insn, operands);

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
              return gen_split_2308 (insn, operands);

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
              return gen_split_2335 (insn, operands);

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
              return gen_split_2362 (insn, operands);

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
              return gen_split_2389 (insn, operands);

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
              return gen_split_2416 (insn, operands);

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
              return gen_split_2443 (insn, operands);

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
              return gen_split_2470 (insn, operands);

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
              return gen_split_2497 (insn, operands);

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
              return gen_split_2524 (insn, operands);

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
              return gen_split_2551 (insn, operands);

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
              return gen_split_2578 (insn, operands);

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
              return gen_split_2605 (insn, operands);

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
              return gen_split_2311 (insn, operands);

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
              return gen_split_2338 (insn, operands);

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
              return gen_split_2365 (insn, operands);

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
              return gen_split_2392 (insn, operands);

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
              return gen_split_2419 (insn, operands);

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
              return gen_split_2446 (insn, operands);

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
              return gen_split_2473 (insn, operands);

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
              return gen_split_2500 (insn, operands);

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
              return gen_split_2527 (insn, operands);

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
              return gen_split_2554 (insn, operands);

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
              return gen_split_2581 (insn, operands);

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
              return gen_split_2608 (insn, operands);

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
              return gen_split_2314 (insn, operands);

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
              return gen_split_2341 (insn, operands);

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
              return gen_split_2368 (insn, operands);

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
              return gen_split_2395 (insn, operands);

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
              return gen_split_2422 (insn, operands);

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
              return gen_split_2449 (insn, operands);

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
              return gen_split_2476 (insn, operands);

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
              return gen_split_2503 (insn, operands);

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
              return gen_split_2530 (insn, operands);

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
              return gen_split_2557 (insn, operands);

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
              return gen_split_2584 (insn, operands);

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
              return gen_split_2611 (insn, operands);

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
              return gen_split_1669 (insn, operands);

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
              return gen_split_1696 (insn, operands);

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
              return gen_split_1723 (insn, operands);

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
              return gen_split_1750 (insn, operands);

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
              return gen_split_1777 (insn, operands);

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
              return gen_split_1804 (insn, operands);

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
              return gen_split_1831 (insn, operands);

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
              return gen_split_1858 (insn, operands);

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
              return gen_split_1885 (insn, operands);

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
              return gen_split_1912 (insn, operands);

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
              return gen_split_1939 (insn, operands);

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
              return gen_split_1966 (insn, operands);

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
              return gen_split_1672 (insn, operands);

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
              return gen_split_1699 (insn, operands);

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
              return gen_split_1726 (insn, operands);

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
              return gen_split_1753 (insn, operands);

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
              return gen_split_1780 (insn, operands);

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
              return gen_split_1807 (insn, operands);

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
              return gen_split_1834 (insn, operands);

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
              return gen_split_1861 (insn, operands);

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
              return gen_split_1888 (insn, operands);

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
              return gen_split_1915 (insn, operands);

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
              return gen_split_1942 (insn, operands);

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
              return gen_split_1969 (insn, operands);

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
              return gen_split_1675 (insn, operands);

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
              return gen_split_1702 (insn, operands);

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
              return gen_split_1729 (insn, operands);

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
              return gen_split_1756 (insn, operands);

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
              return gen_split_1783 (insn, operands);

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
              return gen_split_1810 (insn, operands);

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
              return gen_split_1837 (insn, operands);

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
              return gen_split_1864 (insn, operands);

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
              return gen_split_1891 (insn, operands);

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
              return gen_split_1918 (insn, operands);

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
              return gen_split_1945 (insn, operands);

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
              return gen_split_1972 (insn, operands);

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
              return gen_split_2959 (insn, operands);

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
              return gen_split_2968 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_2977 (insn, operands);

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
              return gen_split_2986 (insn, operands);

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
              return gen_split_2995 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3004 (insn, operands);

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
              return gen_split_3013 (insn, operands);

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
              return gen_split_3022 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3031 (insn, operands);

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
              return gen_split_3040 (insn, operands);

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
              return gen_split_3049 (insn, operands);

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3058 (insn, operands);

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
              return gen_split_2317 (insn, operands);

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
              return gen_split_2344 (insn, operands);

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
              return gen_split_2371 (insn, operands);

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
              return gen_split_2398 (insn, operands);

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
              return gen_split_2425 (insn, operands);

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
              return gen_split_2452 (insn, operands);

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
              return gen_split_2479 (insn, operands);

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
              return gen_split_2506 (insn, operands);

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
              return gen_split_2533 (insn, operands);

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
              return gen_split_2560 (insn, operands);

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
              return gen_split_2587 (insn, operands);

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
              return gen_split_2614 (insn, operands);

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
              return gen_split_2320 (insn, operands);

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
              return gen_split_2347 (insn, operands);

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
              return gen_split_2374 (insn, operands);

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
              return gen_split_2401 (insn, operands);

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
              return gen_split_2428 (insn, operands);

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
              return gen_split_2455 (insn, operands);

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
              return gen_split_2482 (insn, operands);

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
              return gen_split_2509 (insn, operands);

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
              return gen_split_2536 (insn, operands);

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
              return gen_split_2563 (insn, operands);

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
              return gen_split_2590 (insn, operands);

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
              return gen_split_2617 (insn, operands);

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
              return gen_split_2323 (insn, operands);

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
              return gen_split_2350 (insn, operands);

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
              return gen_split_2377 (insn, operands);

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
              return gen_split_2404 (insn, operands);

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
              return gen_split_2431 (insn, operands);

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
              return gen_split_2458 (insn, operands);

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
              return gen_split_2485 (insn, operands);

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
              return gen_split_2512 (insn, operands);

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
              return gen_split_2539 (insn, operands);

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
              return gen_split_2566 (insn, operands);

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
              return gen_split_2593 (insn, operands);

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
              return gen_split_2620 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_67 (x1, insn);

    case VEC_DUPLICATE:
      switch (pattern595 (x2))
        {
        case 0:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 568 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3360 (insn, operands);

        case 1:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 569 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return NULL;
          return gen_split_3361 (insn, operands);

        case 2:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3362 (insn, operands);

        case 3:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 570 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3363 (insn, operands);

        case 4:
          if (!
#line 18661 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3364 (insn, operands);

        case 5:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(64 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return NULL;
          return gen_split_3365 (insn, operands);

        case 6:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 571 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3366 (insn, operands);

        case 7:
          if (!
#line 18661 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3367 (insn, operands);

        case 8:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 572 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3368 (insn, operands);

        case 9:
          if (!
#line 18661 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3369 (insn, operands);

        case 10:
          if (!(
#line 18661 "../../src/gcc/config/i386/sse.md"
(32 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)) && 
#line 573 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return NULL;
          return gen_split_3370 (insn, operands);

        case 11:
          if (!
#line 18661 "../../src/gcc/config/i386/sse.md"
(16 == 64 || TARGET_AVX512VL
   || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256)))
            return NULL;
          return gen_split_3371 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_27 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return NULL;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != AND
      || pattern113 (x2) != 0)
    return NULL;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  if (!general_reg_operand (operands[0], E_SImode))
    return NULL;
  x5 = XEXP (x3, 0);
  if (!rtx_equal_p (x5, operands[0]))
    return NULL;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[0])
      || !
#line 22653 "../../src/gcc/config/i386/i386.md"
(!(TARGET_USE_XCHGB ||
     TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && peep2_regno_dead_p (0, FLAGS_REG)))
    return NULL;
  *pmatch_len_ = 0;
  return gen_peephole2_191 (insn, operands);
}

 rtx_insn *
peephole2_28 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  rtx_insn *res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!general_reg_operand (operands[1], E_QImode))
    return NULL;
  x5 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x5) != PARALLEL
      || XVECLEN (x5, 0) != 2)
    return NULL;
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x7) != CLOBBER)
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return NULL;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != UNSPEC
          || XVECLEN (x8, 0) != 1
          || XINT (x8, 1) != 27
          || GET_MODE (x8) != E_CCmode)
        return NULL;
      x9 = XEXP (x6, 0);
      if (GET_CODE (x9) != REG
          || REGNO (x9) != 17
          || GET_MODE (x9) != E_CCmode)
        return NULL;
      x10 = XVECEXP (x8, 0, 0);
      if (!rtx_equal_p (x10, operands[0]))
        return NULL;
      x11 = XEXP (x7, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_193 (insn, operands);

    case E_SImode:
      if (peep2_current_count < 3
          || peep2_current_count < 4
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return NULL;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != POPCOUNT
          || GET_MODE (x8) != E_SImode)
        return NULL;
      x11 = XEXP (x7, 0);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 17
          || GET_MODE (x11) != E_CCmode)
        return NULL;
      x9 = XEXP (x6, 0);
      operands[2] = x9;
      if (!register_operand (operands[2], E_SImode))
        return NULL;
      x12 = XEXP (x8, 0);
      if (!rtx_equal_p (x12, operands[0]))
        return NULL;
      x13 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x13) != SET
          || pattern1753 (x13) != 0)
        return NULL;
      x14 = XEXP (x13, 1);
      x15 = XEXP (x14, 0);
      x16 = XEXP (x15, 0);
      operands[3] = x16;
      if (!register_operand (operands[3], E_QImode))
        return NULL;
      x17 = PATTERN (peep2_next_insn (3));
      if (GET_CODE (x17) != SET)
        return NULL;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != IF_THEN_ELSE)
        return NULL;
      x19 = XEXP (x18, 0);
      if (!bt_comparison_operator (x19, E_VOIDmode))
        return NULL;
      operands[4] = x19;
      if (pattern1867 (x17) != 0)
        return NULL;
      x20 = XEXP (x18, 1);
      x21 = XEXP (x20, 0);
      operands[5] = x21;
      if (!
#line 22833 "../../src/gcc/config/i386/i386.md"
(REGNO (operands[2]) == REGNO (operands[3])
   && peep2_reg_dead_p (3, operands[0])
   && peep2_reg_dead_p (3, operands[2])
   && peep2_regno_dead_p (4, FLAGS_REG)))
        return NULL;
      *pmatch_len_ = 3;
      return gen_peephole2_194 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_32 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (REGNO (x2) != 17)
    return NULL;
  x3 = XEXP (x1, 1);
  operands[0] = x3;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x4, 1);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return NULL;
  x6 = XEXP (x4, 0);
  operands[1] = x6;
  switch (GET_MODE (operands[1]))
    {
    case E_QImode:
      if (!general_reg_operand (operands[1], E_QImode)
          || !
#line 27012 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_213 (insn, operands);

    case E_HImode:
      if (!general_reg_operand (operands[1], E_HImode)
          || !
#line 27012 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_214 (insn, operands);

    case E_SImode:
      if (!general_reg_operand (operands[1], E_SImode)
          || !
#line 27012 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_215 (insn, operands);

    case E_DImode:
      if (!general_reg_operand (operands[1], E_DImode)
          || !(
#line 27012 "../../src/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)
   && !reg_overlap_mentioned_p (operands[1], operands[0])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_216 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_36 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (XWINT (x2, 0) == -1L)
    {
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (general_reg_operand (operands[0], E_HImode)
              && 
#line 28498 "../../src/gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_335 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_SImode:
          if (general_reg_operand (operands[0], E_SImode)
              && 
#line 28498 "../../src/gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_336 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        case E_DImode:
          if (general_reg_operand (operands[0], E_DImode)
              && (
#line 28498 "../../src/gcc/config/i386/i386.md"
((TARGET_MOVE_M1_VIA_OR || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_337 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
          break;

        default:
          break;
        }
    }
  if (peep2_current_count < 2
      || peep2_current_count < 3)
    return NULL;
  operands[2] = x2;
  x3 = PATTERN (peep2_next_insn (1));
  if (pattern599 (x3, 
2) != 0)
    return NULL;
  x4 = XVECEXP (x3, 0, 0);
  x5 = XEXP (x4, 1);
  if (XINT (x5, 1) != 110)
    return NULL;
  x6 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != PLUS
      || pattern1509 (x3) != 0
      || pattern1691 (x3) != 0)
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  x9 = XEXP (x8, 1);
  x10 = XEXP (x9, 1);
  operands[3] = x10;
  x11 = XEXP (x9, 0);
  if (!rtx_equal_p (x11, operands[0]))
    return NULL;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (pattern1858 (x3, 
E_HImode) != 0
          || !
#line 724 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_416 (insn, operands);

    case E_SImode:
      if (pattern1858 (x3, 
E_SImode) != 0
          || !
#line 724 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_417 (insn, operands);

    case E_DImode:
      if (pattern1858 (x3, 
E_DImode) != 0
          || !(
#line 724 "../../src/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_418 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
peephole2_43 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17)
    return NULL;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return NULL;
  x5 = XEXP (x2, 1);
  x6 = XEXP (x5, 0);
  switch (GET_CODE (x6))
    {
    case REG:
      operands[0] = x6;
      x7 = XEXP (x4, 1);
      if (GET_CODE (x7) != MINUS
          || GET_MODE (x3) != E_CCmode
          || GET_MODE (x5) != E_CCmode)
        return NULL;
      x8 = XEXP (x5, 1);
      operands[1] = x8;
      x9 = XEXP (x7, 0);
      if (!rtx_equal_p (x9, operands[0]))
        return NULL;
      x10 = XEXP (x7, 1);
      if (!rtx_equal_p (x10, operands[1]))
        return NULL;
      x11 = XEXP (x4, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (!general_reg_operand (operands[0], E_QImode)
              || !general_gr_operand (operands[1], E_QImode)
              || GET_MODE (x7) != E_QImode
              || !
#line 8688 "../../src/gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_64 (insn, operands);

        case E_HImode:
          if (!general_reg_operand (operands[0], E_HImode)
              || !general_gr_operand (operands[1], E_HImode)
              || GET_MODE (x7) != E_HImode
              || !
#line 8688 "../../src/gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_65 (insn, operands);

        case E_SImode:
          if (!general_reg_operand (operands[0], E_SImode)
              || !general_gr_operand (operands[1], E_SImode)
              || GET_MODE (x7) != E_SImode
              || !
#line 8688 "../../src/gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_66 (insn, operands);

        case E_DImode:
          if (!general_reg_operand (operands[0], E_DImode)
              || !general_gr_operand (operands[1], E_DImode)
              || GET_MODE (x7) != E_DImode
              || !(
#line 8688 "../../src/gcc/config/i386/i386.md"
(find_regno_note (peep2_next_insn (0), REG_UNUSED, REGNO (operands[0])) != 0) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_67 (insn, operands);

        default:
          return NULL;
        }

    case ZERO_EXTEND:
      if (peep2_current_count < 2)
        return NULL;
      x12 = XEXP (x6, 0);
      if (GET_CODE (x12) != PLUS)
        return NULL;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != PLUS)
        return NULL;
      x14 = XEXP (x13, 0);
      switch (GET_CODE (x14))
        {
        case LTU:
        case UNLT:
          operands[4] = x14;
          x15 = XEXP (x14, 1);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x8 = XEXP (x5, 1);
          if (GET_CODE (x8) != PLUS)
            return NULL;
          x16 = XEXP (x8, 0);
          switch (GET_CODE (x16))
            {
            case LTU:
            case UNLT:
              operands[3] = x16;
              x17 = XEXP (x16, 1);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              x18 = XEXP (x8, 1);
              if (GET_CODE (x18) != ZERO_EXTEND)
                return NULL;
              x7 = XEXP (x4, 1);
              if (GET_CODE (x7) != PLUS)
                return NULL;
              x9 = XEXP (x7, 0);
              if (GET_CODE (x9) != PLUS)
                return NULL;
              x19 = XEXP (x9, 0);
              switch (GET_CODE (x19))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x19, operands[4])
                      || GET_MODE (x3) != E_CCCmode
                      || GET_MODE (x5) != E_CCCmode)
                    return NULL;
                  x20 = XEXP (x14, 0);
                  operands[2] = x20;
                  if (!flags_reg_operand (operands[2], E_VOIDmode))
                    return NULL;
                  x21 = XEXP (x13, 1);
                  operands[0] = x21;
                  x22 = XEXP (x12, 1);
                  operands[1] = x22;
                  x23 = XEXP (x16, 0);
                  if (!rtx_equal_p (x23, operands[2]))
                    return NULL;
                  x24 = XEXP (x18, 0);
                  if (!rtx_equal_p (x24, operands[1]))
                    return NULL;
                  x25 = XEXP (x9, 1);
                  if (!rtx_equal_p (x25, operands[0]))
                    return NULL;
                  x10 = XEXP (x7, 1);
                  if (!rtx_equal_p (x10, operands[1]))
                    return NULL;
                  x11 = XEXP (x4, 0);
                  if (!rtx_equal_p (x11, operands[0]))
                    return NULL;
                  x26 = PATTERN (peep2_next_insn (1));
                  if (GET_CODE (x26) != SET)
                    return NULL;
                  switch (GET_MODE (x6))
                    {
                    case E_DImode:
                      switch (pattern1862 (x1, 
E_SImode, 
E_DImode))
                        {
                        case 0:
                          if (!
#line 9089 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])))
                            return NULL;
                          *pmatch_len_ = 1;
                          return gen_peephole2_84 (insn, operands);

                        case 1:
                          if (!
#line 9183 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])))
                            return NULL;
                          *pmatch_len_ = 3;
                          return gen_peephole2_88 (insn, operands);

                        default:
                          return NULL;
                        }

                    case E_TImode:
                      switch (pattern1862 (x1, 
E_DImode, 
E_TImode))
                        {
                        case 0:
                          if (!(
#line 9089 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return NULL;
                          *pmatch_len_ = 1;
                          return gen_peephole2_85 (insn, operands);

                        case 1:
                          if (!(
#line 9183 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[5])
   && !reg_overlap_mentioned_p (operands[5], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[6])
   && !reg_overlap_mentioned_p (operands[6], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return NULL;
                          *pmatch_len_ = 3;
                          return gen_peephole2_89 (insn, operands);

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

        default:
          return NULL;
        }

    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      if (peep2_current_count < 2)
        return NULL;
      x12 = XEXP (x6, 0);
      operands[0] = x12;
      x27 = XEXP (x6, 1);
      operands[1] = x27;
      x11 = XEXP (x4, 0);
      if (!rtx_equal_p (x11, operands[0]))
        return NULL;
      x26 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x26) != SET)
        return NULL;
      x28 = XEXP (x26, 1);
      if (!rtx_equal_p (x28, operands[0]))
        return NULL;
      x29 = XEXP (x26, 0);
      if (!rtx_equal_p (x29, operands[1]))
        return NULL;
      if (GET_CODE (x6) == PLUS)
        {
          res = peephole2_42 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
        }
      x8 = XEXP (x5, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      operands[2] = x6;
      x7 = XEXP (x4, 1);
      if (!rtx_equal_p (x7, operands[2]))
        return NULL;
      switch (GET_MODE (operands[2]))
        {
        case E_QImode:
          if (!plusminuslogic_operator (operands[2], E_QImode)
              || !register_operand (operands[0], E_QImode)
              || !memory_operand (operands[1], E_QImode)
              || !
#line 28201 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_309 (insn, operands);

        case E_HImode:
          if (!plusminuslogic_operator (operands[2], E_HImode)
              || !register_operand (operands[0], E_HImode)
              || !memory_operand (operands[1], E_HImode)
              || !
#line 28201 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_310 (insn, operands);

        case E_SImode:
          if (!plusminuslogic_operator (operands[2], E_SImode)
              || !register_operand (operands[0], E_SImode)
              || !memory_operand (operands[1], E_SImode)
              || !
#line 28201 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_311 (insn, operands);

        case E_DImode:
          if (!plusminuslogic_operator (operands[2], E_DImode)
              || !register_operand (operands[0], E_DImode)
              || !memory_operand (operands[1], E_DImode)
              || !(
#line 28201 "../../src/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && COMMUTATIVE_ARITH_P (operands[2])
   && peep2_reg_dead_p (2, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (0),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_312 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}
