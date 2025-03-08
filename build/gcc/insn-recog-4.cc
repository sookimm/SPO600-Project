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
pattern3 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  operands[3] = x3;
  if (!const_int_operand (operands[3], E_QImode))
    return -1;
  return pattern2 (x1); /* [-1, 1] */
}

int
pattern10 (rtx x1, int *pnum_clobbers)
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
    case E_TImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_TImode) != 0)
        return -1;
      return 0;

    case E_QImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_QImode) != 0)
        return -1;
      return 1;

    case E_HImode:
      if (pnum_clobbers == NULL
          || pattern6 (x3, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V4HImode:
      if (pattern7 (x3, 
E_V4HImode) != 0)
        return -1;
      return 3;

    case E_V2SImode:
      if (pattern7 (x3, 
E_V2SImode) != 0)
        return -1;
      return 4;

    case E_V8QImode:
      if (pattern8 (x3, 
E_V8QImode) != 0)
        return -1;
      return 5;

    case E_V4QImode:
      if (pattern7 (x3, 
E_V4QImode) != 0)
        return -1;
      return 6;

    case E_V2QImode:
      if (pattern7 (x3, 
E_V2QImode) != 0)
        return -1;
      return 7;

    case E_V2HImode:
      if (pattern7 (x3, 
E_V2HImode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern31 (rtx x1, machine_mode i1)
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
pattern34 (rtx x1)
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (!register_operand (operands[0], E_V16HImode)
              || GET_MODE (x3) != E_V16HImode
              || !nonimmediate_operand (operands[1], E_V16QImode))
            return -1;
          return 0;

        case E_V32HImode:
          if (!register_operand (operands[0], E_V32HImode)
              || GET_MODE (x3) != E_V32HImode
              || !nonimmediate_operand (operands[1], E_V32QImode))
            return -1;
          return 1;

        case E_V8HImode:
          if (!register_operand (operands[0], E_V8HImode)
              || GET_MODE (x3) != E_V8HImode
              || !memory_operand (operands[1], E_V8QImode))
            return -1;
          return 2;

        case E_V16SImode:
          if (!register_operand (operands[0], E_V16SImode)
              || GET_MODE (x3) != E_V16SImode)
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
              || GET_MODE (x3) != E_V8SImode)
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
              || GET_MODE (x3) != E_V4SImode)
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
              || GET_MODE (x3) != E_V8DImode)
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
              || GET_MODE (x3) != E_V4DImode)
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
              || GET_MODE (x3) != E_V2DImode)
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
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != PARALLEL)
        return -1;
      return 18;

    default:
      return -1;
    }
}

int
pattern87 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
  x7 = XEXP (x2, 1);
  operands[1] = x7;
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
pattern93 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_CCZmode)
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCZmode)
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[1] = x5;
  if (!memory_operand (operands[1], E_XImode))
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
pattern104 (rtx x1, machine_mode i1)
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
pattern108 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x2, 1);
  operands[2] = x4;
  return pattern107 (x1, pnum_clobbers); /* [-1, 4] */
}

int
pattern113 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != CONST_INT
      || XWINT (x3, 0) != -65536L)
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_CODE (x4) != LSHIFTRT
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != BSWAP
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x4, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
    return -1;
  return 0;
}

int
pattern120 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_XFmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 0;

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern131 (rtx x1, machine_mode i1)
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
pattern139 (rtx x1)
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
    case E_V64QImode:
      return pattern127 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern127 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern127 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    case E_V32HImode:
      if (pattern127 (x1, 
E_V32HImode, 
E_SImode) != 0)
        return -1;
      return 3;

    case E_V16HImode:
      if (pattern127 (x1, 
E_V16HImode, 
E_HImode) != 0)
        return -1;
      return 4;

    case E_V8HImode:
      if (pattern127 (x1, 
E_V8HImode, 
E_QImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern148 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !memory_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !register_operand (operands[3], E_QImode))
    return -1;
  return 0;
}

int
pattern152 (rtx x1, machine_mode i1)
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
pattern154 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_V32HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_V32HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_V32HImode))
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  operands[2] = x5;
  if (!const_0_to_255_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

int
pattern157 (rtx x1, machine_mode i1)
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
  if (!register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern164 (rtx x1)
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
      return pattern163 (x3, 
E_V32HFmode, 
E_V64QImode, 
E_V32QImode); /* [-1, 0] */

    case E_V16QImode:
      if (pattern163 (x3, 
E_V16HFmode, 
E_V32QImode, 
E_V16QImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern175 (rtx x1)
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
      return pattern170 (x3, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern170 (x3, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern170 (x3, 
E_V4SImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern183 (rtx x1, machine_mode i1)
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
      || !const0_operand (operands[3], i1)
      || !vector_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern188 (rtx x1)
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
      if (GET_CODE (x14) != CONST_INT)
        return -1;
      x15 = XVECEXP (x4, 0, 3);
      if (GET_CODE (x15) != CONST_INT)
        return -1;
      x16 = XVECEXP (x4, 0, 4);
      if (GET_CODE (x16) != CONST_INT)
        return -1;
      x17 = XVECEXP (x4, 0, 5);
      if (GET_CODE (x17) != CONST_INT)
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
      if (GET_CODE (x22) != CONST_INT)
        return -1;
      x23 = XVECEXP (x7, 0, 3);
      if (GET_CODE (x23) != CONST_INT)
        return -1;
      x24 = XVECEXP (x7, 0, 4);
      if (GET_CODE (x24) != CONST_INT)
        return -1;
      x25 = XVECEXP (x7, 0, 5);
      if (GET_CODE (x25) != CONST_INT)
        return -1;
      x26 = XVECEXP (x7, 0, 6);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x27 = XVECEXP (x7, 0, 7);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      switch (XWINT (x14, 0))
        {
        case 4L:
          if (XWINT (x15, 0) != 6L
              || XWINT (x16, 0) != 8L
              || XWINT (x17, 0) != 10L
              || XWINT (x22, 0) != 5L
              || XWINT (x23, 0) != 7L
              || XWINT (x24, 0) != 9L
              || XWINT (x25, 0) != 11L
              || pattern187 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
            return -1;
          return 1;

        case 8L:
          if (XWINT (x15, 0) != 10L
              || XWINT (x16, 0) != 4L
              || XWINT (x17, 0) != 6L
              || XWINT (x22, 0) != 9L
              || XWINT (x23, 0) != 11L
              || XWINT (x24, 0) != 5L
              || XWINT (x25, 0) != 7L
              || pattern185 (x1, 
E_V16SImode, 
E_V8SImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case 4:
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
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6]
          || XVECLEN (x7, 0) != 4)
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
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
          || pattern187 (x1, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern220 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != USE)
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
  x9 = XEXP (x2, 0);
  operands[2] = x9;
  switch (GET_MODE (operands[0]))
    {
    case E_HFmode:
      return pattern219 (x7, 
E_V8HFmode, 
E_HFmode); /* [-1, 0] */

    case E_SFmode:
      if (pattern219 (x7, 
E_V4SFmode, 
E_SFmode) != 0)
        return -1;
      return 1;

    case E_DFmode:
      if (pattern219 (x7, 
E_V2DFmode, 
E_DFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern234 (rtx x1)
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
    case E_V4HImode:
      return pattern233 (x1, 
E_V4HImode); /* [-1, 0] */

    case E_V2SImode:
      if (pattern233 (x1, 
E_V2SImode) != 0)
        return -1;
      return 1;

    case E_V2HImode:
      if (pattern233 (x1, 
E_V2HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern244 (rtx x1)
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
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  return pattern243 (x6); /* [-1, 1] */
}

int
pattern252 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_HImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_HImode
          || !extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_SImode
          || !extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode
          || !extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern262 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  return pattern261 (); /* [-1, 2] */
}

int
pattern267 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case SUBREG:
      if (pnum_clobbers == NULL
          || maybe_ne (SUBREG_BYTE (x2), 0)
          || GET_MODE (x2) != E_QImode)
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case AND:
          x4 = XEXP (x3, 0);
          operands[2] = x4;
          if (!int248_register_operand (operands[2], E_VOIDmode))
            return -1;
          return pattern266 (x1); /* [-1, 1] */

        case PLUS:
          x4 = XEXP (x3, 0);
          operands[2] = x4;
          if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
            return -1;
          res = pattern266 (x1);
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
          res = pattern2 (x1);
          if (res >= 0)
            return res + 4; /* [4, 5] */
          return -1;

        default:
          return -1;
        }

    case CONST_INT:
      return 6;

    default:
      return -1;
    }
}

int
pattern289 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case LTU:
    case UNLT:
      operands[4] = x5;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[3] = x7;
      if (!flags_reg_operand (operands[3], E_VOIDmode))
        return -1;
      return 0;

    case EQ:
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[3] = x7;
      if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern300 (rtx x1)
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
pattern310 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 2);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  x6 = XEXP (x1, 1);
  operands[2] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      return pattern308 (x1, 
E_V16SImode); /* [-1, 0] */

    case E_V8SImode:
      if (pattern308 (x1, 
E_V8SImode) != 0)
        return -1;
      return 1;

    case E_V4SImode:
      if (pattern308 (x1, 
E_V4SImode) != 0)
        return -1;
      return 2;

    case E_V8DImode:
      res = pattern309 (x1, 
E_V8DImode);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    case E_V4DImode:
      res = pattern309 (x1, 
E_V4DImode);
      if (res >= 0)
        return res + 5; /* [5, 6] */
      return -1;

    case E_V2DImode:
      res = pattern309 (x1, 
E_V2DImode);
      if (res >= 0)
        return res + 7; /* [7, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern325 (rtx x1)
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
          || !vector_operand (operands[1], E_V16SFmode))
        return -1;
      return 0;

    case E_V8SImode:
      if (!register_operand (operands[0], E_V8SImode)
          || GET_MODE (x1) != E_V8SImode)
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
          || GET_MODE (x1) != E_V4SImode)
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
          || GET_MODE (x1) != E_V8DImode)
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
          || GET_MODE (x1) != E_V4DImode)
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
          || GET_MODE (x1) != E_V2DImode)
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
pattern342 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_QImode
          || !nonimmediate_operand (operands[1], E_QImode)
          || !x86_64_general_operand (operands[2], E_QImode))
        return -1;
      return 0;

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
          return 1;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
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
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !x86_64_general_operand (operands[2], E_QImode))
            return -1;
          return 3;

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !x86_64_general_operand (operands[2], E_HImode))
            return -1;
          return 4;

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode))
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
pattern359 (rtx x1)
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
  if (!int_nonimmediate_operand (operands[2], E_VOIDmode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[1] = x6;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      return pattern357 (x3, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern357 (x3, 
E_HImode) != 0)
        return -1;
      return 1;

    case E_SImode:
      if (pattern358 (x3, 
E_SImode) != 0)
        return -1;
      return 2;

    case E_DImode:
      if (pattern358 (x3, 
E_DImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern368 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != E_DImode)
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
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x3) != E_DImode)
    return -1;
  x8 = XEXP (x4, 0);
  operands[1] = x8;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  if (!x86_64_zext_immediate_operand (operands[2], E_DImode))
    return -1;
  return 0;
}

int
pattern378 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern383 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 7
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 7
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  return pattern382 (x6, 
37); /* [-1, 0] */
}

int
pattern393 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != UNSPEC
      || XVECLEN (x4, 0) != 3
      || XINT (x4, 1) != 21
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 7
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (GET_CODE (x6) != CONST
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != UNSPEC
      || XVECLEN (x7, 0) != 1
      || XINT (x7, 1) != 6
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 17
      || GET_MODE (x11) != E_CCmode)
    return -1;
  x12 = XEXP (x2, 0);
  operands[0] = x12;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x13 = XVECEXP (x4, 0, 0);
  operands[1] = x13;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x14 = XVECEXP (x4, 0, 1);
  operands[2] = x14;
  if (!constant_call_address_operand (operands[2], E_VOIDmode))
    return -1;
  x15 = XVECEXP (x7, 0, 0);
  operands[3] = x15;
  if (!tls_symbolic_operand (operands[3], E_VOIDmode))
    return -1;
  x16 = XEXP (x8, 0);
  operands[4] = x16;
  if (!scratch_operand (operands[4], E_SImode))
    return -1;
  x17 = XEXP (x9, 0);
  operands[5] = x17;
  if (!scratch_operand (operands[5], E_SImode))
    return -1;
  return 0;
}

int
pattern415 (rtx x1, machine_mode i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != LTU)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  return 0;
}

int
pattern422 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_TImode
      || !nonimmediate_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || GET_MODE (x2) != E_TImode)
    return -1;
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!nonimmediate_operand (operands[1], E_DImode)
      || !const_int_operand (operands[2], E_QImode))
    return -1;
  x5 = XEXP (x1, 1);
  return pattern257 (x5, 
E_DImode, 
E_TImode); /* [-1, 1] */
}

int
pattern432 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern440 (rtx x1, int *pnum_clobbers)
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
      return pattern438 (x1); /* [-1, 1] */

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_QImode)
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
          if (pattern439 (x1, 
E_DImode) != 0)
            return -1;
          return 2;

        case 32L:
          if (pattern439 (x1, 
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
pattern455 (rtx x1, machine_mode i1)
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
pattern461 (rtx x1)
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
      return pattern454 (x1, 
E_V64QImode, 
E_DImode); /* [-1, 0] */

    case E_V32QImode:
      if (pattern454 (x1, 
E_V32QImode, 
E_SImode) != 0)
        return -1;
      return 1;

    case E_V16QImode:
      if (pattern454 (x1, 
E_V16QImode, 
E_HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern471 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimm_or_0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern478 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern487 (rtx x1, machine_mode i1)
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
pattern488 (rtx x1)
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
  if (!const_4_or_8_to_11_operand (operands[3], E_SImode))
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

    case E_V8HFmode:
      if (pattern487 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    case E_V16SFmode:
      if (pattern487 (x1, 
E_V16SFmode) != 0)
        return -1;
      return 3;

    case E_V8SFmode:
      if (pattern487 (x1, 
E_V8SFmode) != 0)
        return -1;
      return 4;

    case E_V4SFmode:
      if (pattern487 (x1, 
E_V4SFmode) != 0)
        return -1;
      return 5;

    case E_V8DFmode:
      if (pattern487 (x1, 
E_V8DFmode) != 0)
        return -1;
      return 6;

    case E_V4DFmode:
      if (pattern487 (x1, 
E_V4DFmode) != 0)
        return -1;
      return 7;

    case E_V2DFmode:
      if (pattern487 (x1, 
E_V2DFmode) != 0)
        return -1;
      return 8;

    default:
      return -1;
    }
}

int
pattern499 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V2SFmode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_V2SFmode
      || !nonimmediate_operand (operands[1], i1)
      || !const0_operand (operands[3], E_V2SFmode)
      || !const0_operand (operands[4], E_V2SFmode))
    return -1;
  return 0;
}

int
pattern503 (rtx x1, machine_mode i1, machine_mode i2)
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
  return 0;
}

int
pattern507 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != i1)
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
pattern517 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
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
pattern522 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V2DImode)
      || GET_MODE (x1) != E_V2DImode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V2HFmode:
      if (!memory_operand (operands[1], E_V2HFmode))
        return -1;
      return 0;

    case E_V2DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern528 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (XINT (x2, 1) != 151)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  operands[1] = x3;
  x4 = XVECEXP (x2, 0, 1);
  operands[2] = x4;
  x5 = XEXP (x1, 1);
  switch (XVECLEN (x5, 0))
    {
    case 16:
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
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x14 = XVECEXP (x5, 0, 8);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x5, 0, 9);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x16 = XVECEXP (x5, 0, 10);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x17 = XVECEXP (x5, 0, 11);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x18 = XVECEXP (x5, 0, 12);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x5, 0, 13);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x20 = XVECEXP (x5, 0, 14);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x21 = XVECEXP (x5, 0, 15);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          return pattern527 (x1, 
E_V32HImode, 
E_V16HImode); /* [-1, 0] */

        case E_V16QImode:
          if (pattern527 (x1, 
E_V32QImode, 
E_V16QImode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case 8:
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
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HImode:
          if (pattern527 (x1, 
E_V16HImode, 
E_V8HImode) != 0)
            return -1;
          return 2;

        case E_V8SImode:
          if (pattern527 (x1, 
E_V16SImode, 
E_V8SImode) != 0)
            return -1;
          return 3;

        default:
          return -1;
        }

    case 32:
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
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      x14 = XVECEXP (x5, 0, 8);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x15 = XVECEXP (x5, 0, 9);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x16 = XVECEXP (x5, 0, 10);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 10])
        return -1;
      x17 = XVECEXP (x5, 0, 11);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 11])
        return -1;
      x18 = XVECEXP (x5, 0, 12);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 12])
        return -1;
      x19 = XVECEXP (x5, 0, 13);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 13])
        return -1;
      x20 = XVECEXP (x5, 0, 14);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 14])
        return -1;
      x21 = XVECEXP (x5, 0, 15);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 15])
        return -1;
      x22 = XVECEXP (x5, 0, 16);
      if (x22 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x23 = XVECEXP (x5, 0, 17);
      if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x24 = XVECEXP (x5, 0, 18);
      if (x24 != const_int_rtx[MAX_SAVED_CONST_INT + 18])
        return -1;
      x25 = XVECEXP (x5, 0, 19);
      if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 19])
        return -1;
      x26 = XVECEXP (x5, 0, 20);
      if (x26 != const_int_rtx[MAX_SAVED_CONST_INT + 20])
        return -1;
      x27 = XVECEXP (x5, 0, 21);
      if (x27 != const_int_rtx[MAX_SAVED_CONST_INT + 21])
        return -1;
      x28 = XVECEXP (x5, 0, 22);
      if (x28 != const_int_rtx[MAX_SAVED_CONST_INT + 22])
        return -1;
      x29 = XVECEXP (x5, 0, 23);
      if (x29 != const_int_rtx[MAX_SAVED_CONST_INT + 23])
        return -1;
      x30 = XVECEXP (x5, 0, 24);
      if (x30 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
        return -1;
      x31 = XVECEXP (x5, 0, 25);
      if (x31 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
        return -1;
      x32 = XVECEXP (x5, 0, 26);
      if (x32 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
        return -1;
      x33 = XVECEXP (x5, 0, 27);
      if (x33 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
        return -1;
      x34 = XVECEXP (x5, 0, 28);
      if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
        return -1;
      x35 = XVECEXP (x5, 0, 29);
      if (x35 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
        return -1;
      x36 = XVECEXP (x5, 0, 30);
      if (x36 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
        return -1;
      x37 = XVECEXP (x5, 0, 31);
      if (x37 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || pattern527 (x1, 
E_V64QImode, 
E_V32QImode) != 0)
        return -1;
      return 4;

    case 4:
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
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 3]
          || pattern527 (x1, 
E_V8SImode, 
E_V4SImode) != 0)
        return -1;
      return 5;

    default:
      return -1;
    }
}

int
pattern606 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
      operands[3] = x2;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          return pattern603 (x1, 
E_QImode); /* [-1, 0] */

        case E_HImode:
          if (pattern603 (x1, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_TImode:
          if (pattern604 (x1, 
E_TImode) != 0)
            return -1;
          return 2;

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pattern605 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern615 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!const_1_to_63_operand (operands[2], E_QImode)
      || !register_operand (operands[0], E_TImode)
      || GET_MODE (x1) != E_TImode
      || !register_operand (operands[1], E_TImode))
    return -1;
  return 0;
}

int
pattern622 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != SUBREG
      || maybe_ne (SUBREG_BYTE (x2), 0)
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case AND:
      return pattern447 (x1); /* [-1, 1] */

    case PLUS:
      res = pattern447 (x1);
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
      if (!int248_register_operand (operands[2], E_VOIDmode))
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
pattern636 (rtx x1)
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
      if (XWINT (x2, 0) != 1L)
        return -1;
      x3 = XEXP (x1, 1);
      if (!rtx_equal_p (x3, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8HFmode:
          return 12;

        case E_V4SFmode:
          return 13;

        case E_V2DFmode:
          return 14;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern648 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XVECEXP (x1, 0, 1);
  if (!const_4_or_8_to_11_operand (x6, E_SImode))
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
          return pattern645 (x1, 
E_V32HFmode, 
E_SImode); /* [-1, 0] */

        case E_V16HFmode:
          if (pattern645 (x1, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          return 1;

        case E_V8HFmode:
          if (pattern645 (x1, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          return 2;

        case E_V16SFmode:
          if (pattern645 (x1, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          return 3;

        case E_V8SFmode:
          if (pattern645 (x1, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          return 4;

        case E_V4SFmode:
          if (pattern645 (x1, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          return 5;

        case E_V8DFmode:
          if (pattern645 (x1, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          return 6;

        case E_V4DFmode:
          if (pattern645 (x1, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          return 7;

        case E_V2DFmode:
          if (pattern645 (x1, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          return 8;

        default:
          return -1;
        }

    case CONST_INT:
      res = pattern647 (x1);
      if (res >= 0)
        return res + 9; /* [9, 11] */
      return -1;

    default:
      return -1;
    }
}

int
pattern666 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  operands[3] = x2;
  switch (GET_MODE (operands[0]))
    {
    case E_V32HFmode:
      return pattern665 (x1, 
E_V32HFmode); /* [-1, 0] */

    case E_V16HFmode:
      if (pattern665 (x1, 
E_V16HFmode) != 0)
        return -1;
      return 1;

    case E_V8HFmode:
      if (pattern665 (x1, 
E_V8HFmode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern675 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_BFmode:
      if (!memory_operand (operands[1], E_BFmode))
        return -1;
      return 0;

    case E_HFmode:
      if (!memory_operand (operands[1], E_HFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern682 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (XVECLEN (x2, 0) != 1
      || XINT (x2, 1) != 110)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
      || !register_operand (operands[0], i2))
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern688 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i1)
    return -1;
  return 0;
}

int
pattern692 (rtx x1)
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
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  switch (GET_CODE (x7))
    {
    case REG:
    case SUBREG:
      return 0;

    case ZERO_EXTRACT:
      return 1;

    default:
      return -1;
    }
}

int
pattern697 (rtx x1, machine_mode i1)
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
pattern705 (rtx x1, int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != i1
      || GET_MODE (x5) != E_DImode
      || !register_operand (operands[0], E_DImode))
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  operands[2] = x6;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x7 = XEXP (x4, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_DImode))
    return -1;
  x8 = XVECEXP (x5, 0, 0);
  if (!rtx_equal_p (x8, operands[2]))
    return -1;
  return 0;
}

int
pattern712 (rtx x1, unsigned int i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != i2)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != i1)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != i1)
    return -1;
  return 0;
}

int
pattern717 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
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
  return 0;
}

int
pattern724 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!memory_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode
          || GET_MODE (x2) != E_V2QImode
          || !register_operand (operands[1], E_V2DImode))
        return -1;
      return 0;

    case E_SImode:
      res = pattern293 (x1);
      if (res >= 0)
        return res + 1; /* [1, 3] */
      return -1;

    case E_DImode:
      res = pattern294 (x1);
      if (res >= 0)
        return res + 4; /* [4, 9] */
      return -1;

    default:
      return -1;
    }
}

int
pattern734 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 2);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[3], i1)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern742 (rtx x1)
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
      return pattern740 (); /* [-1, 2] */

    case E_QImode:
      if (!register_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode)
        return -1;
      x3 = XEXP (x1, 0);
      if (GET_MODE (x3) != E_QImode
          || !register_operand (operands[3], E_QImode))
        return -1;
      res = pattern741 ();
      if (res >= 0)
        return res + 3; /* [3, 8] */
      return -1;

    default:
      return -1;
    }
}

int
pattern755 (rtx x1, machine_mode i1)
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
pattern763 (rtx x1)
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
pattern779 (rtx x1)
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
  if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
    return -1;
  return pattern778 (x1); /* [-1, 2] */
}

int
pattern793 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i3)
      || GET_MODE (x1) != i3)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !vector_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i2
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern805 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !const0_operand (operands[2], i1)
      || !movq_parallel (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern814 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 7
      || GET_MODE (x2) != E_SImode)
    return -1;
  return 0;
}

int
pattern817 (rtx x1)
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
pattern822 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
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
  return pattern543 (x1); /* [-1, 1] */
}

int
pattern827 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
  x9 = XEXP (x8, 0);
  operands[1] = x9;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x10 = XVECEXP (x2, 0, 0);
  operands[2] = x10;
  if (!register_operand (operands[2], E_DImode))
    return -1;
  return 0;
}

int
pattern838 (rtx x1, int i1, int i2, int i3, int i4)
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
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
      || pattern837 (x1, 
i1, 
i2, 
i3, 
i4) != 0)
    return -1;
  return 0;
}

int
pattern849 (rtx x1, machine_mode i1)
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
pattern852 (rtx x1)
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
      return pattern851 (x1, 
E_QImode); /* [-1, 0] */

    case E_HImode:
      if (pattern851 (x1, 
E_HImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern858 (rtx x1, machine_mode i1)
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
pattern862 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[2], i1)
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern869 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V32QImode:
      if (!register_operand (operands[1], E_V32QImode)
          || !nonimmediate_operand (operands[2], E_V32QImode))
        return -1;
      return 0;

    case E_V32HImode:
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern878 (rtx x1, machine_mode i1)
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
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case E_DFmode:
      if (!register_operand (operands[1], E_V2DFmode))
        return -1;
      return 0;

    case E_SFmode:
      if (!register_operand (operands[1], E_V4SFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern887 (rtx x1, machine_mode i1, machine_mode i2)
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
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], i2))
    return -1;
  x4 = XEXP (x1, 1);
  operands[2] = x4;
  if (!reg_or_0_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern898 (rtx x1)
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
    case E_V2HFmode:
      if (!memory_operand (operands[1], E_V2HFmode))
        return -1;
      return 0;

    case E_V2DFmode:
      if (!vector_operand (operands[1], E_V2DFmode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern906 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (maybe_ne (SUBREG_BYTE (x4), 0)
      || !register_operand (operands[3], E_QImode))
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case VEC_CONCAT:
      if (GET_MODE (x5) != E_V2DImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x7 = XEXP (x5, 0);
      operands[1] = x7;
      if (!memory_operand (operands[1], E_DImode))
        return -1;
      x8 = XEXP (x3, 1);
      switch (XVECLEN (x8, 0))
        {
        case 8:
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
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
            return -1;
          x13 = XVECEXP (x8, 0, 4);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
            return -1;
          x14 = XVECEXP (x8, 0, 5);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
            return -1;
          x15 = XVECEXP (x8, 0, 6);
          if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
            return -1;
          x16 = XVECEXP (x8, 0, 7);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 7]
              || GET_MODE (x3) != E_V8QImode
              || GET_MODE (x4) != E_V16QImode)
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
          res = pattern904 (x1, 
E_V8HImode, 
E_V4HImode);
          if (res >= 0)
            return res + 3; /* [3, 4] */
          return -1;

        case 2:
          if (pattern905 (x1, 
E_V4SImode, 
E_V2SImode) != 0)
            return -1;
          return 5;

        default:
          return -1;
        }

    case VEC_MERGE:
      if (GET_MODE (x5) != E_V4SImode)
        return -1;
      x7 = XEXP (x5, 0);
      if (GET_CODE (x7) != VEC_DUPLICATE
          || GET_MODE (x7) != E_V4SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != CONST_VECTOR
          || XVECLEN (x6, 0) != 4
          || GET_MODE (x6) != E_V4SImode)
        return -1;
      x17 = XVECEXP (x6, 0, 0);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x18 = XVECEXP (x6, 0, 1);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x19 = XVECEXP (x6, 0, 2);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XVECEXP (x6, 0, 3);
      if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x21 = XEXP (x5, 2);
      if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x22 = XEXP (x7, 0);
      operands[1] = x22;
      if (!memory_operand (operands[1], E_SImode))
        return -1;
      x8 = XEXP (x3, 1);
      switch (XVECLEN (x8, 0))
        {
        case 4:
          res = pattern904 (x1, 
E_V16QImode, 
E_V4QImode);
          if (res >= 0)
            return res + 6; /* [6, 7] */
          return -1;

        case 2:
          if (pattern905 (x1, 
E_V8HImode, 
E_V2HImode) != 0)
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
pattern955 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_DImode:
      return pattern954 (x1, 
E_SImode, 
E_DImode); /* [-1, 0] */

    case E_TImode:
      if (pattern954 (x1, 
E_DImode, 
E_TImode) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern963 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  operands[1] = x1;
  if (!general_reg_operand (operands[1], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x2) != PARALLEL
      || XVECLEN (x2, 0) != 2)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 17)
    return -1;
  x5 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x3, 1);
  operands[5] = x6;
  x7 = XEXP (x5, 1);
  operands[6] = x7;
  x8 = XEXP (x5, 0);
  if (!rtx_equal_p (x8, operands[0]))
    return -1;
  x9 = PATTERN (peep2_next_insn (3));
  return pattern962 (x9, 
i1); /* [-1, 0] */
}

int
pattern970 (rtx x1, machine_mode i1)
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
pattern974 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  if (XVECLEN (x3, 0) != 1)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 1);
  x6 = XEXP (x5, 1);
  if (XVECLEN (x6, 0) != 1)
    return -1;
  x7 = XVECEXP (x6, 0, 0);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

int
pattern976 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[0], E_HFmode)
      || GET_MODE (x1) != E_HFmode)
    return -1;
  switch (GET_MODE (operands[1]))
    {
    case E_V32HFmode:
      if (!nonimmediate_operand (operands[1], E_V32HFmode))
        return -1;
      return 0;

    case E_V16HFmode:
      if (!nonimmediate_operand (operands[1], E_V16HFmode))
        return -1;
      return 1;

    case E_V8HFmode:
      if (!nonimmediate_operand (operands[1], E_V8HFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern979 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!const_0_to_3_operand (operands[3], E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  operands[4] = x3;
  if (!const_0_to_3_operand (operands[4], E_VOIDmode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V2HFmode:
      return pattern271 (x1, 
E_V2HFmode, 
E_V4HFmode); /* [-1, 0] */

    case E_V2BFmode:
      if (pattern271 (x1, 
E_V2BFmode, 
E_V4BFmode) != 0)
        return -1;
      return 1;

    case E_V2HImode:
      if (pattern271 (x1, 
E_V2HImode, 
E_V4HImode) != 0)
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern986 (rtx x1, machine_mode i1)
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
pattern989 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode
      || !register_operand (operands[1], E_V64QImode)
      || !nonimmediate_operand (operands[2], E_V64QImode)
      || !const_0_to_7_operand (operands[3], E_SImode))
    return -1;
  return 0;
}

int
pattern994 (rtx x1)
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
pattern1005 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !reg_or_0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1013 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !sse_comparison_operator (operands[3], i1)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1019 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1027 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1035 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case E_HImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_HImode
          || !extract_operator (operands[3], E_HImode))
        return -1;
      return 0;

    case E_SImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_SImode
          || !extract_operator (operands[3], E_SImode))
        return -1;
      return 1;

    case E_DImode:
      x3 = XEXP (x1, 1);
      if (GET_MODE (x3) != E_DImode
          || !extract_operator (operands[3], E_DImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1042 ()
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
pattern1046 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1051 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !vector_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1054 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (!register_operand (x3, E_DImode))
    return -1;
  x4 = XEXP (x2, 1);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  if (!register_operand (x7, E_SImode))
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_MODE (x8) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case DIV:
      return 0;

    case UDIV:
      return 1;

    case MOD:
      return 2;

    case UMOD:
      return 3;

    default:
      return -1;
    }
}

int
pattern1064 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 3
      || GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!general_reg_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (!rtx_equal_p (x5, operands[0]))
    return -1;
  x6 = XEXP (x4, 0);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1073 (rtx x1)
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
  return pattern741 (); /* [-1, 5] */
}

int
pattern1080 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  return pattern1079 (x2); /* [-1, 11] */
}

int
pattern1085 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (x1))
    {
    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_V64QImode)
          || !nonimmediate_operand (operands[2], E_V64QImode))
        return -1;
      return 0;

    case E_HImode:
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
pattern1120 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3, machine_mode i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i4
      || !register_operand (operands[1], i3)
      || !nonimm_or_0_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1125 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
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
      || GET_MODE (x3) != E_V8HFmode)
    return -1;
  x7 = XVECEXP (x4, 0, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_V8HFmode))
    return -1;
  x8 = XVECEXP (x4, 0, 1);
  operands[2] = x8;
  if (!register_operand (operands[2], E_V8HFmode))
    return -1;
  x9 = XEXP (x3, 1);
  operands[3] = x9;
  if (!nonimm_or_0_operand (operands[3], E_V8HFmode))
    return -1;
  x10 = XVECEXP (x5, 0, 0);
  operands[4] = x10;
  if (!register_operand (operands[4], E_QImode))
    return -1;
  x11 = XVECEXP (x1, 0, 1);
  operands[5] = x11;
  if (!const_4_or_8_to_11_operand (operands[5], E_SImode))
    return -1;
  x12 = XEXP (x2, 1);
  if (!rtx_equal_p (x12, operands[1]))
    return -1;
  return 0;
}

int
pattern1141 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2)
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1151 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_HImode:
      if (!register_operand (operands[0], E_HImode)
          || GET_MODE (x1) != E_HImode)
        return -1;
      x2 = XEXP (x1, 0);
      if (GET_MODE (x2) != E_QImode)
        return -1;
      return 0;

    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XEXP (x1, 0);
      switch (GET_MODE (x2))
        {
        case E_QImode:
          return 1;

        case E_HImode:
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
          return 3;

        case E_HImode:
          return 4;

        case E_SImode:
          return 5;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
pattern1166 (rtx x1, machine_mode i1)
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
  return pattern1165 (x2, 
i1); /* [-1, 2] */
}

int
pattern1174 (rtx x1)
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
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  return 0;
}

int
pattern1182 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return pattern1181 (); /* [-1, 3] */
}

int
pattern1188 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1195 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != PLUS
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != LTU
      || GET_MODE (x5) != i1)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 17
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x5, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x8 = XEXP (x3, 1);
  if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x9 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XEXP (x9, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 17
      || GET_MODE (x10) != E_CCmode)
    return -1;
  x11 = XEXP (x4, 1);
  if (!rtx_equal_p (x11, operands[0]))
    return -1;
  x12 = XEXP (x2, 0);
  if (!rtx_equal_p (x12, operands[0]))
    return -1;
  x13 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x13) != PARALLEL
      || XVECLEN (x13, 0) != 2)
    return -1;
  x14 = XVECEXP (x13, 0, 0);
  if (GET_CODE (x14) != SET)
    return -1;
  x15 = XEXP (x14, 1);
  if (GET_CODE (x15) != NEG
      || GET_MODE (x15) != i1)
    return -1;
  x16 = XVECEXP (x13, 0, 1);
  if (GET_CODE (x16) != CLOBBER)
    return -1;
  x17 = XEXP (x16, 0);
  if (GET_CODE (x17) != REG
      || REGNO (x17) != 17
      || GET_MODE (x17) != E_CCmode)
    return -1;
  x18 = XEXP (x15, 0);
  if (!rtx_equal_p (x18, operands[0]))
    return -1;
  x19 = XEXP (x14, 0);
  if (!rtx_equal_p (x19, operands[0]))
    return -1;
  return 0;
}

int
pattern1220 (rtx x1)
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
pattern1225 (rtx x1, machine_mode i1)
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
pattern1231 (rtx x1, int i1, int i2, int i3, int i4, int i5)
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
pattern1238 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  x5 = XVECEXP (x1, 0, 0);
  x6 = XEXP (x5, 1);
  x7 = XEXP (x6, 0);
  switch (GET_MODE (x7))
    {
    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode)
          || !nonimmediate_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode)
        return -1;
      return 0;

    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode)
          || !nonimmediate_operand (operands[0], E_HImode)
          || GET_MODE (x3) != E_HImode)
        return -1;
      return 1;

    case E_SImode:
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 2;

    case E_DImode:
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      return 3;

    default:
      return -1;
    }
}

int
pattern1251 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!nonmemory_operand (operands[2], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  return pattern374 (x4); /* [-1, 1] */
}

int
pattern1257 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != PLUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 7
      || GET_MODE (x3) != E_SImode)
    return -1;
  return 0;
}

int
pattern1261 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!vector_all_ones_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[0], i1)
      || !const0_operand (operands[1], i1))
    return -1;
  return 0;
}

int
pattern1267 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!int248_register_operand (operands[1], E_VOIDmode))
    return -1;
  x6 = XEXP (x2, 1);
  x7 = XEXP (x6, 0);
  x8 = XEXP (x7, 0);
  operands[2] = x8;
  if (!int248_register_operand (operands[2], E_VOIDmode))
    return -1;
  x9 = XEXP (x1, 0);
  switch (GET_CODE (x9))
    {
    case STRICT_LOW_PART:
      x10 = XEXP (x9, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      return pattern1266 (); /* [-1, 2] */

    case REG:
    case SUBREG:
      operands[0] = x9;
      if (!register_operand (operands[0], E_QImode))
        return -1;
      res = pattern1266 ();
      if (res >= 0)
        return res + 3; /* [3, 5] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1284 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !memory_operand (operands[1], i2)
      || !nonimm_or_0_operand (operands[2], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1293 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1303 (rtx x1, int i1, int i2, int i3, int i4)
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
pattern1311 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1317 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (maybe_ne (SUBREG_BYTE (x2), 0))
    return -1;
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x1, 1);
  x5 = XEXP (x4, 2);
  operands[2] = x5;
  if (!register_operand (operands[2], E_QImode))
    return -1;
  switch (GET_MODE (x2))
    {
    case E_SImode:
      if (GET_MODE (x4) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DImode:
      if (GET_MODE (x4) != E_DImode
          || !register_operand (operands[1], E_DImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

int
pattern1326 (rtx x1, machine_mode i1)
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
pattern1331 (rtx x1, machine_mode i1)
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
pattern1338 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!const_int_operand (operands[2], E_QImode))
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  return pattern405 (x1); /* [-1, 1] */
}

int
pattern1343 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CALL)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[2] = x4;
  x5 = XEXP (x2, 1);
  operands[3] = x5;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  return 0;
}

int
pattern1351 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[1], i1)
      || !const_int_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1357 (rtx x1, machine_mode i1)
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
pattern1365 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return pattern1364 (); /* [-1, 3] */
}

int
pattern1368 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i2)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1376 (rtx x1, machine_mode i1)
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
      || !nonimmediate_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1386 (rtx x1, machine_mode i1, machine_mode i2)
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
      || pattern1374 (
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1395 (rtx x1, machine_mode i1)
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
      || !nonimm_or_0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1405 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1414 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1419 (rtx x1, machine_mode i1)
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
pattern1426 (rtx x1, rtx_code i1)
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
      || !x86_64_general_operand (operands[2], E_SImode)
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
pattern1440 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[2], i1)
      || !register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != i1
      || !register_operand (operands[5], i1)
      || !register_operand (operands[3], i1)
      || !register_operand (operands[1], i1))
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) != i1)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) != i1
      || !register_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1453 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[2], i2)
      || !register_operand (operands[1], i1)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[4], i3))
    return -1;
  return 0;
}

int
pattern1462 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2
      || !vector_operand (operands[1], i2)
      || !vector_operand (operands[2], i2))
    return -1;
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) != E_QImode
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1))
    return -1;
  return 0;
}

int
pattern1471 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i2)
      || !nonimm_or_0_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1478 (rtx x1, machine_mode i1)
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

    case E_V8SFmode:
      if (!register_operand (operands[1], E_V8SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1488 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  operands[2] = x2;
  if (!const_4_to_7_operand (operands[2], E_VOIDmode))
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  operands[3] = x3;
  if (!const_4_to_7_operand (operands[3], E_VOIDmode))
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  operands[4] = x4;
  if (!const_4_to_7_operand (operands[4], E_VOIDmode))
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  operands[5] = x5;
  if (!const_4_to_7_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1499 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !nonimmediate_operand (operands[2], i1)
      || !scratch_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1511 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !register_operand (operands[1], i2))
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  return 0;
}

int
pattern1520 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i2)
      || GET_MODE (x1) != i2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1529 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !nonimmediate_operand (operands[3], i1)
      || !nonimmediate_operand (operands[4], i1))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
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
pattern1538 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
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
      || !register_operand (operands[1], i2))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[2], i2))
    return -1;
  x7 = XEXP (x3, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  return 0;
}

int
pattern1548 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 4);
  operands[2] = x2;
  if (!const_4_to_7_operand (operands[2], E_VOIDmode))
    return -1;
  x3 = XVECEXP (x1, 0, 5);
  operands[3] = x3;
  if (!const_4_to_7_operand (operands[3], E_VOIDmode))
    return -1;
  x4 = XVECEXP (x1, 0, 6);
  operands[4] = x4;
  if (!const_4_to_7_operand (operands[4], E_VOIDmode))
    return -1;
  x5 = XVECEXP (x1, 0, 7);
  operands[5] = x5;
  if (!const_4_to_7_operand (operands[5], E_VOIDmode))
    return -1;
  return 0;
}

int
pattern1559 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_V4SFmode)
      || GET_MODE (x1) != E_V4SFmode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_V8SFmode
      || !vector_operand (operands[1], E_V4SFmode))
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  return 0;
}

int
pattern1567 (rtx x1, machine_mode i1)
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
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1576 (rtx x1, machine_mode i1)
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
pattern1580 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], i2)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i1
      || !x86_64_dwzext_immediate_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1587 (rtx x1, machine_mode i1, machine_mode i2)
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
pattern1596 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[4], i2))
    return -1;
  return 0;
}

int
pattern1605 (rtx x1, machine_mode i1)
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
      return pattern1604 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1604 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1615 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1614 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1614 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1627 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1)
      || !general_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 1);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

int
pattern1637 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !nonimmediate_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1645 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !register_operand (operands[3], i1)
      || !const0_operand (operands[4], i1)
      || !register_operand (operands[5], i2))
    return -1;
  return 0;
}

int
pattern1656 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1655 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1655 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1669 (rtx x1, machine_mode i1)
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
  x5 = XEXP (x4, 2);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1680 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x4 = XEXP (x1, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_DImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != E_DImode)
    return -1;
  x7 = XEXP (x6, 0);
  operands[2] = x7;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x8 = XEXP (x5, 1);
  operands[4] = x8;
  if (!const_0_to_63_operand (operands[4], E_QImode))
    return -1;
  return 0;
}

int
pattern1693 ()
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[1]))
    {
    case E_V8HFmode:
      if (!register_operand (operands[1], E_V8HFmode)
          || !register_operand (operands[2], E_V8HFmode))
        return -1;
      return 0;

    case E_V4SFmode:
      if (!register_operand (operands[1], E_V4SFmode)
          || !register_operand (operands[2], E_V4SFmode))
        return -1;
      return 1;

    case E_V2DFmode:
      if (!register_operand (operands[1], E_V2DFmode)
          || !register_operand (operands[2], E_V2DFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

int
pattern1705 (rtx x1, machine_mode i1, machine_mode i2)
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
      return pattern1704 (
E_SImode); /* [-1, 1] */

    case E_DImode:
      res = pattern1704 (
E_DImode);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    default:
      return -1;
    }
}

int
pattern1715 (machine_mode i1)
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
pattern1723 (machine_mode i1)
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
pattern1730 (rtx x1)
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
pattern1750 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1
      || !ix86_carry_flag_operator (operands[3], i1)
      || !nonimmediate_operand (operands[1], i1)
      || !x86_64_general_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1757 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !x86_64_sext_operand (operands[2], i1)
      || !scratch_operand (operands[0], i1))
    return -1;
  return 0;
}

int
pattern1766 (rtx x1, machine_mode i1, machine_mode i2)
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
  if (GET_MODE (x4) != i2
      || !register_operand (operands[1], i2)
      || !register_operand (operands[2], i2)
      || !register_operand (operands[3], i1))
    return -1;
  return 0;
}

int
pattern1774 (machine_mode i1)
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
pattern1781 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode
      || !general_reg_operand (operands[4], E_SImode))
    return -1;
  x2 = XEXP (x1, 0);
  if (!rtx_equal_p (x2, operands[2]))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  return 0;
}

int
pattern1788 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i2
      || !nonimmediate_operand (operands[1], i1))
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  return 0;
}

int
pattern1795 (rtx x1, machine_mode i1, machine_mode i2)
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
      || !x86_64_sext_operand (operands[2], i1)
      || pattern1794 (x1, 
i1, 
i2) != 0)
    return -1;
  return 0;
}

int
pattern1803 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  operands[4] = x1;
  if (!register_operand (operands[4], i1))
    return -1;
  x2 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (!rtx_equal_p (x3, operands[4]))
    return -1;
  x4 = XEXP (x2, 0);
  if (!rtx_equal_p (x4, operands[1]))
    return -1;
  return 0;
}

int
pattern1811 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x6 = XEXP (x3, 2);
  if (GET_MODE (x6) != i1
      || !register_operand (operands[3], i1))
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
pattern1820 (machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[4], i1)
      || !register_operand (operands[5], i1)
      || !register_operand (operands[6], i1)
      || !register_operand (operands[0], i1)
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1))
    return -1;
  return 0;
}

int
pattern1825 (rtx x1, machine_mode i1)
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
      || !register_operand (operands[3], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

int
pattern1831 (rtx x1, machine_mode i1, machine_mode i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != i3
      || !vsib_mem_operator (operands[6], i2)
      || !register_operand (operands[4], i1))
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
pattern1840 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  if (!nonimmediate_operand (operands[1], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != i2
      || !ix86_carry_flag_operator (operands[4], i2))
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i2
      || !nonimmediate_operand (operands[2], i1)
      || !nonimmediate_operand (operands[0], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 1);
  if (GET_MODE (x7) != i1)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_MODE (x8) != i1
      || !ix86_carry_flag_operator (operands[5], i1))
    return -1;
  return 0;
}

int
pattern1849 (rtx x1)
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
pattern1856 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != GTU
      || GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 17
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  operands[7] = x5;
  if (!register_operand (operands[7], E_QImode))
    return -1;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) != LTU
      || GET_MODE (x7) != E_QImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 17
      || GET_MODE (x8) != E_CCmode)
    return -1;
  x9 = XEXP (x7, 1);
  if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x10 = XEXP (x6, 0);
  operands[8] = x10;
  if (!register_operand (operands[8], E_QImode))
    return -1;
  x11 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x11) != SET)
    return -1;
  x12 = XEXP (x11, 1);
  if (GET_CODE (x12) != COMPARE)
    return -1;
  x13 = XEXP (x11, 0);
  if (GET_CODE (x13) != REG
      || REGNO (x13) != 17)
    return -1;
  x14 = XEXP (x12, 0);
  if (!rtx_equal_p (x14, operands[7]))
    return -1;
  x15 = XEXP (x12, 1);
  if (!rtx_equal_p (x15, operands[8]))
    return -1;
  return 0;
}

int
pattern1869 ()
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
pattern1881 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      operands[8] = x2;
      if (!ix86_comparison_int_operator (operands[8], E_QImode))
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 17)
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x1, 0);
      operands[7] = x5;
      if (!nonimmediate_operand (operands[7], E_QImode))
        return -1;
      return 0;

    case IF_THEN_ELSE:
      x3 = XEXP (x2, 0);
      if (!ix86_comparison_int_operator (x3, E_VOIDmode))
        return -1;
      operands[7] = x3;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17)
        return -1;
      x7 = XEXP (x3, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x2, 1);
      if (GET_CODE (x4) != LABEL_REF)
        return -1;
      x8 = XEXP (x2, 2);
      if (GET_CODE (x8) != PC)
        return -1;
      x5 = XEXP (x1, 0);
      if (GET_CODE (x5) != PC)
        return -1;
      x9 = XEXP (x4, 0);
      operands[8] = x9;
      return 1;

    default:
      return -1;
    }
}

 int
recog_7 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_HImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_HImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x4) != E_CCFPmode)
    return -1;
  switch (GET_CODE (x4))
    {
    case COMPARE:
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case REG:
        case SUBREG:
        case MEM:
          operands[2] = x6;
          switch (GET_MODE (operands[1]))
            {
            case E_XFmode:
              if (!register_operand (operands[1], E_XFmode)
                  || !reg_or_0_operand (operands[2], E_XFmode)
                  || !
#line 1936 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 35; /* *cmpxf_i387 */

            case E_SFmode:
              if (!register_operand (operands[1], E_SFmode)
                  || !nonimm_or_0_operand (operands[2], E_SFmode)
                  || !
#line 1949 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 36; /* *cmpsf_i387 */

            case E_DFmode:
              if (!register_operand (operands[1], E_DFmode)
                  || !nonimm_or_0_operand (operands[2], E_DFmode)
                  || !
#line 1949 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
                return -1;
              return 37; /* *cmpdf_i387 */

            default:
              return -1;
            }

        case FLOAT:
          x7 = XEXP (x6, 0);
          operands[2] = x7;
          switch (GET_MODE (operands[1]))
            {
            case E_SFmode:
              switch (pattern1263 (x6, 
E_SFmode))
                {
                case 0:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 38; /* *cmpsf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 41; /* *cmpsf_si_i387 */

                default:
                  return -1;
                }

            case E_DFmode:
              switch (pattern1263 (x6, 
E_DFmode))
                {
                case 0:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 39; /* *cmpdf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 42; /* *cmpdf_si_i387 */

                default:
                  return -1;
                }

            case E_XFmode:
              switch (pattern1263 (x6, 
E_XFmode))
                {
                case 0:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 40; /* *cmpxf_hi_i387 */

                case 1:
                  if (!
#line 1963 "../../src/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))))
                    return -1;
                  return 43; /* *cmpxf_si_i387 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 1
          || XINT (x4, 1) != 26)
        return -1;
      x8 = XVECEXP (x4, 0, 0);
      if (GET_CODE (x8) != COMPARE
          || GET_MODE (x8) != E_CCFPmode)
        return -1;
      x9 = XEXP (x8, 0);
      operands[1] = x9;
      x10 = XEXP (x8, 1);
      operands[2] = x10;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!register_operand (operands[1], E_SFmode)
              || !register_operand (operands[2], E_SFmode)
              || !
#line 1981 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 44; /* *cmpusf_i387 */

        case E_DFmode:
          if (!register_operand (operands[1], E_DFmode)
              || !register_operand (operands[2], E_DFmode)
              || !
#line 1981 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 45; /* *cmpudf_i387 */

        case E_XFmode:
          if (!register_operand (operands[1], E_XFmode)
              || !register_operand (operands[2], E_XFmode)
              || !
#line 1981 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 46; /* *cmpuxf_i387 */

        default:
          return -1;
        }

    case REG:
      if (REGNO (x4) != 18
          || !
#line 23858 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 1714; /* x86_fnstsw_1 */

    default:
      return -1;
    }
}

 int
recog_14 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XINT (x2, 1))
    {
    case 24:
      return recog_7 (x1, insn, pnum_clobbers);

    case 25:
      if (pattern55 (x1, 
E_HImode) != 0
          || !
#line 1994 "../../src/gcc/config/i386/i386.md"
(TARGET_SAHF))
        return -1;
      return 47; /* x86_sahf_1 */

    case 26:
      return recog_6 (x1, insn, pnum_clobbers);

    case 44:
      if (GET_MODE (x2) != E_CCFPmode)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x3) != COMPARE
          || GET_MODE (x3) != E_CCFPmode)
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 17
          || GET_MODE (x4) != E_CCFPmode)
        return -1;
      x5 = XEXP (x3, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 1);
      operands[1] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 2045 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 50; /* *cmpxsf */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 2045 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 52; /* *cmpxdf */

        case E_HFmode:
          if (!register_operand (operands[0], E_HFmode)
              || !nonimmediate_operand (operands[1], E_HFmode)
              || !
#line 2058 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX10_2_256))
            return -1;
          return 54; /* *cmpxhf */

        default:
          return -1;
        }

    case 41:
      if (pattern57 (x1, 
E_CCCmode) != 0)
        return -1;
      return 63; /* x86_stc */

    case 42:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!flags_reg_operand (operands[1], E_VOIDmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!push_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !(
#line 2323 "../../src/gcc/config/i386/i386.md"
(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
            return -1;
          return 80; /* pushflsi2 */

        case E_DImode:
          if (!push_operand (operands[0], E_DImode)
              || GET_MODE (x2) != E_DImode
              || !(
#line 2323 "../../src/gcc/config/i386/i386.md"
(GET_MODE_CLASS (GET_MODE (operands[1])) == MODE_CC) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
            return -1;
          return 81; /* pushfldi2 */

        default:
          return -1;
        }

    case 43:
      if (GET_MODE (x2) != E_CCmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!flags_reg_operand (operands[0], E_CCmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_SImode:
          if (!pop_operand (operands[1], E_SImode)
              || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode))
            return -1;
          return 82; /* popflsi1 */

        case E_DImode:
          if (!pop_operand (operands[1], E_DImode)
              || !
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode))
            return -1;
          return 83; /* popfldi1 */

        default:
          return -1;
        }

    case 60:
      if (GET_MODE (x2) != E_SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_BFmode)
          || !
#line 5471 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE2))
        return -1;
      return 203; /* extendbfsf2_1 */

    case 28:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!memory_operand (operands[0], E_HImode)
          || !
#line 6045 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
        return -1;
      return 238; /* x86_fnstcw_1 */

    case 97:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if ((
#line 21718 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)))
        return 1562; /* tzcnt_hi_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21718 "../../src/gcc/config/i386/i386.md"
(true) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)))
        return -1;
      *pnum_clobbers = 1;
      return 1563; /* tzcnt_hi */

    case 96:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      if ((
#line 21718 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NF) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)))
        return 1564; /* lzcnt_hi_nf */
      if (pnum_clobbers == NULL
          || !(
#line 21718 "../../src/gcc/config/i386/i386.md"
(true) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)))
        return -1;
      *pnum_clobbers = 1;
      return 1565; /* lzcnt_hi */

    case 27:
      if (pattern55 (x1, 
E_QImode) != 0)
        return -1;
      return 1648; /* parityqi2_cmp */

    case 54:
      switch (pattern58 (x1))
        {
        case 0:
          if (!
#line 23455 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE && TARGET_SSE_MATH))
            return -1;
          return 1680; /* *rcpsf2_sse */

        case 1:
          if (!
#line 23481 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1681; /* rcphf2 */

        default:
          return -1;
        }

    case 31:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!nonimmediate_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !
#line 23698 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1706; /* truncxfsf2_i387_noop_unspec */

        case E_DFmode:
          if (!nonimmediate_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !
#line 23698 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1707; /* truncxfdf2_i387_noop_unspec */

        default:
          return -1;
        }

    case 55:
      switch (pattern58 (x1))
        {
        case 0:
          if (!
#line 23718 "../../src/gcc/config/i386/i386.md"
(TARGET_SSE))
            return -1;
          return 1709; /* *rsqrtsf2_sse */

        case 1:
          if (!
#line 23754 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
            return -1;
          return 1710; /* rsqrthf2 */

        default:
          return -1;
        }

    case 64:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24021 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1717; /* sinxf2 */

    case 65:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24021 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1718; /* cosxf2 */

    case 71:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24647 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations))
        return -1;
      return 1725; /* *f2xm1xf2_i387 */

    case 69:
      if (GET_MODE (x2) != E_XFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_XFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 24981 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1732; /* rintxf2 */

    case 70:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!nonimmediate_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_XFmode)
          || !
#line 25122 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
        return -1;
      return 1734; /* lrintxfhi2 */

    case 74:
      if (pattern59 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1736; /* frndintxf2_roundeven */

    case 75:
      if (pattern59 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1737; /* frndintxf2_floor */

    case 76:
      if (pattern59 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1738; /* frndintxf2_ceil */

    case 77:
      if (pattern59 (x1, pnum_clobbers, 
E_XFmode) != 0
          || !
#line 25212 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (flag_fp_int_builtin_inexact || !flag_trapping_math)
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1739; /* frndintxf2_trunc */

    case 78:
      if (pattern60 (x1, pnum_clobbers) != 0
          || !
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1744; /* *fisthi2_floor_1 */

    case 79:
      if (pattern60 (x1, pnum_clobbers) != 0
          || !
#line 25329 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 1745; /* *fisthi2_ceil_1 */

    case 73:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_HImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_SFmode:
          if (!register_operand (operands[1], E_SFmode)
              || !
#line 25431 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1756; /* fxamsf2_i387 */

        case E_DFmode:
          if (!register_operand (operands[1], E_DFmode)
              || !
#line 25431 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1757; /* fxamdf2_i387 */

        case E_XFmode:
          if (!register_operand (operands[1], E_XFmode)
              || !
#line 25431 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387))
            return -1;
          return 1758; /* fxamxf2_i387 */

        default:
          return -1;
        }

    case 112:
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2SFmode)
          || !
#line 900 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2059; /* mmx_rcpv2sf2 */

    case 115:
      if (GET_MODE (x2) != E_V2SFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2SFmode)
          || !
#line 948 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2062; /* mmx_rsqrtv2sf2 */

    case 172:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_V4SFmode:
          if (!nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 8463 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSE))
            return -1;
          return 4788; /* unspec_sse_cvttps2pi */

        case E_V2DFmode:
          if (!vector_operand (operands[1], E_V2DFmode)
              || !
#line 8928 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 4904; /* unspec_sse2_cvttpd2pi */

        default:
          return -1;
        }

    case 46:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!vector_operand (operands[1], E_V2DFmode)
          || !
#line 8910 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 4903; /* sse2_cvtpd2pi */

    case 173:
      if (GET_MODE (x2) != E_V2SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_V2SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!nonimmediate_operand (operands[1], E_V2DFmode)
          || !
#line 8969 "../../src/gcc/config/i386/sse.md"
(TARGET_MMX_WITH_SSE && TARGET_AVX512VL))
        return -1;
      return 4906; /* unspec_fixuns_truncv2dfv2si2 */

    case 191:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V16QImode:
              if (!register_operand (operands[1], E_V16QImode)
                  || !(
#line 10273 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5201; /* avx512vl_cvtb2maskv16qi */

            case E_V16HImode:
              if (!register_operand (operands[1], E_V16HImode)
                  || !(
#line 10273 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5204; /* avx512vl_cvtw2maskv16hi */

            case E_V16SImode:
              if (!register_operand (operands[1], E_V16SImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5206; /* avx512f_cvtd2maskv16si */

            default:
              return -1;
            }

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode)
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_V8HImode:
              if (!register_operand (operands[1], E_V8HImode)
                  || !(
#line 10273 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5205; /* avx512vl_cvtw2maskv8hi */

            case E_V8SImode:
              if (!register_operand (operands[1], E_V8SImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5207; /* avx512vl_cvtd2maskv8si */

            case E_V4SImode:
              if (!register_operand (operands[1], E_V4SImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5208; /* avx512vl_cvtd2maskv4si */

            case E_V8DImode:
              if (!register_operand (operands[1], E_V8DImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 5209; /* avx512f_cvtq2maskv8di */

            case E_V4DImode:
              if (!register_operand (operands[1], E_V4DImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5210; /* avx512vl_cvtq2maskv4di */

            case E_V2DImode:
              if (!register_operand (operands[1], E_V2DImode)
                  || !(
#line 10283 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 5211; /* avx512vl_cvtq2maskv2di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 117:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          operands[1] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (!memory_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode)
                  || !
#line 23425 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8675; /* sse4a_movntsf */

            case E_DFmode:
              if (!memory_operand (operands[0], E_DFmode)
                  || GET_MODE (x2) != E_DFmode
                  || !register_operand (operands[1], E_DFmode)
                  || !
#line 23425 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8676; /* sse4a_movntdf */

            default:
              return -1;
            }

        case VEC_SELECT:
          x6 = XEXP (x3, 1);
          if (GET_CODE (x6) != PARALLEL
              || XVECLEN (x6, 0) != 1)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x5 = XEXP (x3, 0);
          operands[1] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern1066 (x2, 
E_V4SFmode, 
E_SFmode) != 0
                  || !
#line 23437 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A))
                return -1;
              return 8677; /* sse4a_vmmovntv4sf */

            case E_DFmode:
              if (pattern1066 (x2, 
E_V2DFmode, 
E_DFmode) != 0
                  || !(
#line 23437 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 8678; /* sse4a_vmmovntv2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 136:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !nonimmediate_operand (operands[1], E_SFmode)
              || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9057; /* xop_frczsf2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !nonimmediate_operand (operands[1], E_DFmode)
              || !
#line 27004 "../../src/gcc/config/i386/sse.md"
(TARGET_XOP))
            return -1;
          return 9058; /* xop_frczdf2 */

        default:
          return -1;
        }

    case 283:
      if (GET_MODE (x2) != E_DFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!memory_operand (operands[1], E_DImode)
          || !
#line 346 "../../src/gcc/config/i386/sync.md"
(TARGET_80387))
        return -1;
      return 11023; /* loaddi_via_fpu */

    case 285:
      if (GET_MODE (x2) != E_DFmode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_DFmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      operands[1] = x3;
      if (!memory_operand (operands[1], E_DImode)
          || !
#line 369 "../../src/gcc/config/i386/sync.md"
(TARGET_SSE))
        return -1;
      return 11025; /* loaddi_via_sse */

    default:
      return -1;
    }
}

 int
recog_31 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (register_operand (operands[0], E_SImode))
        {
          switch (pattern261 ())
            {
            case 0:
              if (
#line 5769 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16))
                return 212; /* fix_trunchfsi2 */
              break;

            case 1:
              if (
#line 5945 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)))
                return 225; /* fix_truncsfsi_sse */
              break;

            case 2:
              if (
#line 5945 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)))
                return 227; /* fix_truncdfsi_sse */
              break;

            default:
              break;
            }
        }
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_SImode)
          || !register_operand (operands[1], E_VOIDmode))
        return -1;
      if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 230; /* fix_truncsi_i387_fisttp */
        }
      if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 233; /* *fix_truncsi_i387_1 */

    case E_DImode:
      if (GET_MODE (x3) != E_DImode)
        return -1;
      if (register_operand (operands[0], E_DImode))
        {
          switch (pattern261 ())
            {
            case 0:
              if ((
#line 5769 "../../src/gcc/config/i386/i386.md"
(TARGET_AVX512FP16) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 214; /* fix_trunchfdi2 */
              break;

            case 1:
              if ((
#line 5945 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 226; /* fix_truncsfdi_sse */
              break;

            case 2:
              if ((
#line 5945 "../../src/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 228; /* fix_truncdfdi_sse */
              break;

            default:
              break;
            }
        }
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_DImode)
          || !register_operand (operands[1], E_VOIDmode))
        return -1;
      if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 231; /* fix_truncdi_i387_fisttp */
        }
      if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 234; /* *fix_truncdi_i387_1 */

    case E_HImode:
      if (pattern260 (x3, pnum_clobbers, 
E_VOIDmode, 
E_HImode) != 0)
        return -1;
      if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
        {
          *pnum_clobbers = 1;
          return 229; /* fix_trunchi_i387_fisttp */
        }
      if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()))
        return -1;
      *pnum_clobbers = 1;
      return 232; /* *fix_trunchi_i387_1 */

    case E_V2SImode:
      if (!register_operand (operands[0], E_V2SImode)
          || GET_MODE (x3) != E_V2SImode
          || !vector_operand (operands[1], E_V2DFmode)
          || !
#line 8945 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 4905; /* sse2_cvttpd2pi */

    default:
      return -1;
    }
}

 int
recog_39 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x3, 0);
      operands[1] = x5;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern743 (x2, 
E_HImode) != 0
              || !
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 835; /* *notxorhi_1 */

        case E_QImode:
          if (pattern743 (x2, 
E_QImode) != 0
              || !
#line 13807 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 871; /* *notxorqi_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern40 (x1))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_TImode:
              if (!nonimmediate_operand (operands[0], E_TImode)
                  || GET_MODE (x2) != E_TImode
                  || !nonimmediate_operand (operands[1], E_TImode)
                  || !(
#line 14976 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1031; /* *one_cmplti2_doubleword */

            case E_HImode:
              if (!nonimmediate_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode
                  || !nonimmediate_operand (operands[1], E_HImode)
                  || !
#line 14989 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1032; /* *one_cmplhi2_1 */

            case E_QImode:
              if (!nonimmediate_operand (operands[0], E_QImode)
                  || GET_MODE (x2) != E_QImode
                  || !nonimmediate_operand (operands[1], E_QImode)
                  || !
#line 15033 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 1041; /* *one_cmplqi2_1 */

            case E_V4QImode:
              if (!register_operand (operands[0], E_V4QImode)
                  || GET_MODE (x2) != E_V4QImode
                  || !register_operand (operands[1], E_V4QImode))
                return -1;
              return 2265; /* one_cmplv4qi2 */

            case E_V2QImode:
              if (!register_operand (operands[0], E_V2QImode)
                  || GET_MODE (x2) != E_V2QImode
                  || !register_operand (operands[1], E_V2QImode))
                return -1;
              return 2266; /* one_cmplv2qi2 */

            case E_V2HImode:
              if (!register_operand (operands[0], E_V2HImode)
                  || GET_MODE (x2) != E_V2HImode
                  || !register_operand (operands[1], E_V2HImode))
                return -1;
              return 2267; /* one_cmplv2hi2 */

            default:
              return -1;
            }

        case 1:
          if (!
#line 15059 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1042; /* *one_cmplqi_1_slp */

        case 2:
          if (!
#line 15059 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
            return -1;
          return 1043; /* *one_cmplhi_1_slp */

        default:
          return -1;
        }

    case ZERO_EXTRACT:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_DImode)
        return -1;
      x6 = XEXP (x3, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != ZERO_EXTRACT
          || GET_MODE (x4) != E_DImode)
        return -1;
      x7 = XEXP (x4, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x8 = XEXP (x4, 0);
      operands[0] = x8;
      if (!nonimmediate_operand (operands[0], E_DImode))
        return -1;
      x9 = XEXP (x4, 2);
      operands[1] = x9;
      if (!const_0_to_63_operand (operands[1], E_QImode)
          || GET_MODE (x2) != E_DImode)
        return -1;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0]))
        return -1;
      x10 = XEXP (x3, 2);
      if (!rtx_equal_p (x10, operands[1])
          || !
#line 19040 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed)))
        return -1;
      *pnum_clobbers = 1;
      return 1415; /* *btcq_imm */

    case UNSPEC:
      if (XVECLEN (x3, 0) != 3)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x11 = XVECEXP (x3, 0, 0);
      operands[1] = x11;
      x12 = XVECEXP (x3, 0, 1);
      operands[2] = x12;
      x13 = XVECEXP (x3, 0, 2);
      operands[3] = x13;
      switch (XINT (x3, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern972 (x2))
                {
                case 0:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3421; /* *avx512f_cmpv16si3 */

                case 1:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 310 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3428; /* *avx512vl_cmpv16hf3 */

                case 2:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3430; /* *avx512f_cmpv16sf3 */

                case 3:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3486; /* *avx512vl_cmpv16qi3 */

                case 4:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3492; /* *avx512vl_cmpv16hi3 */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern973 (x2))
                {
                case 0:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3422; /* *avx512vl_cmpv8si3 */

                case 1:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 307 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3423; /* *avx512vl_cmpv4si3 */

                case 2:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3424; /* *avx512f_cmpv8di3 */

                case 3:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3425; /* *avx512vl_cmpv4di3 */

                case 4:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 308 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3426; /* *avx512vl_cmpv2di3 */

                case 5:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 311 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                    return -1;
                  return 3429; /* *avx512fp16_cmpv8hf3 */

                case 6:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3431; /* *avx512vl_cmpv8sf3 */

                case 7:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3432; /* *avx512vl_cmpv4sf3 */

                case 8:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3433; /* *avx512f_cmpv8df3 */

                case 9:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3434; /* *avx512vl_cmpv4df3 */

                case 10:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 313 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3435; /* *avx512vl_cmpv2df3 */

                case 11:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3494; /* *avx512vl_cmpv8hi3 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              switch (pattern1072 (x2))
                {
                case 0:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3487; /* *avx512vl_cmpv16qi3 */

                case 1:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3493; /* *avx512vl_cmpv16hi3 */

                case 2:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3640; /* *avx512f_ucmpv16si3 */

                default:
                  return -1;
                }

            case E_QImode:
              switch (pattern1073 (x2))
                {
                case 0:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3495; /* *avx512vl_cmpv8hi3 */

                case 1:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3641; /* *avx512vl_ucmpv8si3 */

                case 2:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3642; /* *avx512vl_ucmpv4si3 */

                case 3:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3643; /* *avx512f_ucmpv8di3 */

                case 4:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3644; /* *avx512vl_ucmpv4di3 */

                case 5:
                  if (!(
#line 4761 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3645; /* *avx512vl_ucmpv2di3 */

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
recog_56 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
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
      operands[1] = x3;
      res = recog_55 (x1, insn, pnum_clobbers);
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
          if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x7 = XEXP (x2, 1);
          if (pattern600 (x7) != 0)
            return -1;
          x8 = XEXP (x7, 0);
          operands[4] = x8;
          x9 = XEXP (x8, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
            return -1;
          x10 = XEXP (x8, 2);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 8]
              || GET_MODE (x2) != E_QImode)
            return -1;
          switch (pattern1267 (x1))
            {
            case 0:
              if (!
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 408; /* *subqi_exthi_2_slp */

            case 1:
              if (!
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              *pnum_clobbers = 1;
              return 409; /* *subqi_extsi_2_slp */

            case 2:
              if (!(
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 410; /* *subqi_extdi_2_slp */

            case 3:
              *pnum_clobbers = 1;
              return 419; /* *subqi_ext2hi_0 */

            case 4:
              *pnum_clobbers = 1;
              return 420; /* *subqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 421; /* *subqi_ext2di_0 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x11 = XEXP (x1, 0);
      operands[0] = x11;
      switch (pattern289 (x2))
        {
        case 0:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1358 (x2, 
E_QImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 487; /* subqi3_carry */

            case E_HImode:
              if (pattern1358 (x2, 
E_HImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 488; /* subhi3_carry */

            default:
              return -1;
            }

        case 1:
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1272 (x2, 
E_QImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 570; /* *subqi3_eq */

            case E_HImode:
              if (pattern1272 (x2, 
E_HImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 571; /* *subhi3_eq */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case VEC_SELECT:
      switch (pattern91 (x1))
        {
        case 0:
          x4 = XEXP (x3, 0);
          operands[1] = x4;
          if (pattern974 (x2) != 0)
            return -1;
          x7 = XEXP (x2, 1);
          x8 = XEXP (x7, 0);
          if (!rtx_equal_p (x8, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SFmode:
              if (pattern1511 (x2, 
E_SFmode, 
E_V2SFmode) != 0
                  || !
#line 1058 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE3 && TARGET_MMX_WITH_SSE && ix86_partial_vec_fp_math
   && ix86_pre_reload_split ()))
                return -1;
              return 2067; /* *mmx_hsubv2sf3_low */

            case E_DFmode:
              if (pattern1511 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 3768 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_V2DF_REDUCTION_PREFER_HADDPD))
                return -1;
              return 3190; /* *sse3_hsubv2df3_low */

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
              return 8601; /* ssse3_phsubwv4hi3 */

            case 1:
              if (!
#line 22715 "../../src/gcc/config/i386/sse.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE) && TARGET_SSSE3))
                return -1;
              return 8608; /* ssse3_phsubdv2si3 */

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
recog_64 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[1] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_V2SFmode:
          if (!register_operand (operands[0], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 1722 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2089; /* *vec_dupv2sf */

        case E_V4HFmode:
          if (!register_operand (operands[0], E_V4HFmode)
              || GET_MODE (x3) != E_V4HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 5674 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2344; /* *vec_dupv4hf */

        case E_V4BFmode:
          if (!register_operand (operands[0], E_V4BFmode)
              || GET_MODE (x3) != E_V4BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 5674 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2345; /* *vec_dupv4bf */

        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x3) != E_V4HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 5674 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX_WITH_SSE))
            return -1;
          return 2346; /* *vec_dupv4hi */

        case E_V2SImode:
          if (!register_operand (operands[0], E_V2SImode)
              || GET_MODE (x3) != E_V2SImode
              || !register_operand (operands[1], E_SImode)
              || !
#line 5685 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX || TARGET_MMX_WITH_SSE))
            return -1;
          return 2347; /* *vec_dupv2si */

        case E_V2HFmode:
          if (!register_operand (operands[0], E_V2HFmode)
              || GET_MODE (x3) != E_V2HFmode
              || !register_operand (operands[1], E_HFmode)
              || !
#line 6266 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2375; /* *vec_dupv2hf */

        case E_V2BFmode:
          if (!register_operand (operands[0], E_V2BFmode)
              || GET_MODE (x3) != E_V2BFmode
              || !register_operand (operands[1], E_BFmode)
              || !
#line 6266 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2376; /* *vec_dupv2bf */

        case E_V2HImode:
          if (!register_operand (operands[0], E_V2HImode)
              || GET_MODE (x3) != E_V2HImode
              || !register_operand (operands[1], E_HImode)
              || !
#line 6266 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2377; /* *vec_dupv2hi */

        default:
          return -1;
        }

    case TRUNCATE:
      if (GET_MODE (x4) != E_HImode)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4HImode:
          if (!register_operand (operands[0], E_V4HImode)
              || GET_MODE (x3) != E_V4HImode
              || !
#line 5659 "../../src/gcc/config/i386/mmx.md"
((TARGET_MMX || TARGET_MMX_WITH_SSE)
   && (TARGET_SSE || TARGET_3DNOW_A)))
            return -1;
          return 2343; /* *vec_dupv4hi */

        case E_V2HImode:
          if (!register_operand (operands[0], E_V2HImode)
              || GET_MODE (x3) != E_V2HImode
              || !
#line 6256 "../../src/gcc/config/i386/mmx.md"
(TARGET_SSE2))
            return -1;
          return 2374; /* *vec_dupv2hi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_68 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
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
      switch (pattern434 (x3))
        {
        case 0:
          if (pnum_clobbers != NULL
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && (
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            {
              *pnum_clobbers = 1;
              return 266; /* *adddi3_doubleword */
            }
          if (x86_64_general_operand (operands[2], E_DImode))
            {
              if ((
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 284; /* *adddi_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
  && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 285; /* *adddi_1 */
                }
            }
          break;

        case 1:
          if (
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && TARGET_APX_NF))
            return 282; /* *addsi_1_nf */
          if (pnum_clobbers != NULL
              && 
#line 6615 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
  && true))
            {
              *pnum_clobbers = 1;
              return 283; /* *addsi_1 */
            }
          break;

        default:
          break;
        }
      if (!register_operand (operands[1], E_SImode)
          || pattern435 (x3, 
22) != 0)
        return -1;
      x6 = XEXP (x5, 0);
      x7 = XVECEXP (x6, 0, 0);
      operands[2] = x7;
      if (!tls_symbolic_operand (operands[2], E_VOIDmode)
          || !
#line 23272 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
        return -1;
      return 1664; /* *tls_dynamic_gnu2_lea_32 */

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      switch (pattern277 (x3, pnum_clobbers, 
E_DImode, 
E_SImode))
        {
        case 0:
          if (!(
#line 6511 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (UNKNOWN, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 268; /* *adddi3_doubleword_zext */

        case 1:
          if (!(
#line 14077 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 898; /* *concatsidi3_2 */

        case 2:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 916; /* *concatsidi3_4 */

        case 3:
          if (!(
#line 14121 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          return 919; /* *concatsidi3_4 */

        case 4:
          if (!(
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
          return 946; /* *concatsidi3_7 */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x8 = XEXP (x4, 0);
      switch (GET_CODE (x8))
        {
        case ASHIFT:
          if (GET_MODE (x8) != E_DImode)
            return -1;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != ZERO_EXTEND
              || GET_MODE (x9) != E_DImode)
            return -1;
          x10 = XEXP (x4, 1);
          if (GET_CODE (x10) != ZERO_EXTEND
              || GET_MODE (x10) != E_DImode
              || !register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode)
            return -1;
          switch (pattern84 (x3, 
E_DImode, 
E_SImode))
            {
            case 0:
              if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 270; /* *adddi3_doubleword_concat */

            case 1:
              if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 276; /* *adddi3_doubleword_concat_zext */

            default:
              return -1;
            }

        case LTU:
        case UNLT:
          operands[4] = x8;
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1273 (x3, 
E_SImode) != 0
                  || !
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              *pnum_clobbers = 1;
              return 455; /* addsi3_carry */

            case E_DImode:
              if (pattern1273 (x3, 
E_DImode) != 0
                  || !(
#line 8793 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 456; /* adddi3_carry */

            default:
              return -1;
            }

        case EQ:
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1202 (x3, 
E_SImode) != 0
                  || !
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 556; /* *addsi3_eq */

            case E_DImode:
              if (pattern1202 (x3, 
E_DImode) != 0
                  || !(
#line 10136 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 557; /* *adddi3_eq */

            default:
              return -1;
            }

        case NE:
          x11 = XEXP (x8, 1);
          if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x9 = XEXP (x8, 0);
          operands[3] = x9;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[1] = x10;
          x5 = XEXP (x3, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1203 (x3, 
E_SImode) != 0
                  || !
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 560; /* *addsi3_ne */

            case E_DImode:
              if (pattern1203 (x3, 
E_DImode) != 0
                  || !(
#line 10157 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (DImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              *pnum_clobbers = 1;
              return 561; /* *adddi3_ne */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case IOR:
      switch (pattern102 (x3, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 271; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 277; /* *adddi3_doubleword_concat_zext */

        default:
          return -1;
        }

    case XOR:
      switch (pattern102 (x3, pnum_clobbers))
        {
        case 0:
          if (!(
#line 6542 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 272; /* *adddi3_doubleword_concat */

        case 1:
          if (!(
#line 6573 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 278; /* *adddi3_doubleword_concat_zext */

        default:
          return -1;
        }

    case LTU:
    case UNLT:
      switch (pattern103 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1077 (x3, 
E_SImode) != 0
              || !
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 459; /* *addsi3_carry_0 */

        case 1:
          if (pattern1077 (x3, 
E_DImode) != 0
              || !(
#line 8865 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 460; /* *adddi3_carry_0 */

        default:
          return -1;
        }

    case GE:
    case GEU:
      switch (pattern103 (x3, pnum_clobbers))
        {
        case 0:
          if (pattern1078 (x3, 
E_SImode) != 0
              || !
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])))
            return -1;
          *pnum_clobbers = 1;
          return 463; /* *addsi3_carry_0r */

        case 1:
          if (pattern1078 (x3, 
E_DImode) != 0
              || !(
#line 8879 "../../src/gcc/config/i386/i386.md"
(!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[1])) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 464; /* *adddi3_carry_0r */

        default:
          return -1;
        }

    case EQ:
      switch (pattern105 (x3, pnum_clobbers))
        {
        case 0:
          if (!
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 564; /* *addsi3_eq_0 */

        case 1:
          if (!(
#line 10183 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 565; /* *adddi3_eq_0 */

        default:
          return -1;
        }

    case NE:
      switch (pattern105 (x3, pnum_clobbers))
        {
        case 0:
          if (!
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, SImode, operands)
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 568; /* *addsi3_ne_0 */

        case 1:
          if (!(
#line 10204 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (PLUS, DImode, operands)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 569; /* *adddi3_ne_0 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      x10 = XEXP (x4, 1);
      switch (GET_CODE (x10))
        {
        case NE:
          switch (pattern750 (x3))
            {
            case 0:
              if (!
#line 10252 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 576; /* *subsi3_ne */

            case 1:
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
              *pnum_clobbers = 1;
              return 577; /* *subdi3_ne */

            default:
              return -1;
            }

        case EQ:
          switch (pattern750 (x3))
            {
            case 0:
              if (!
#line 10281 "../../src/gcc/config/i386/i386.md"
(CONST_INT_P (operands[2])
   && (SImode != DImode
       || INTVAL (operands[2]) != HOST_WIDE_INT_C (-0x80000000))
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              *pnum_clobbers = 1;
              return 580; /* *subsi3_eq_1 */

            case 1:
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
              *pnum_clobbers = 1;
              return 581; /* *subdi3_eq_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ASHIFT:
      if (GET_MODE (x4) != E_DImode
          || !nonimmediate_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x10 = XEXP (x4, 1);
      operands[2] = x10;
      if (!const_int_operand (operands[2], E_QImode))
        return -1;
      x8 = XEXP (x4, 0);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[1] = x8;
          if (!register_operand (operands[1], E_DImode))
            return -1;
          x5 = XEXP (x3, 1);
          switch (pattern257 (x5, 
E_SImode, 
E_DImode))
            {
            case 0:
              if (!(
#line 14060 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 892; /* *concatsidi3_1 */

            case 1:
              if (!(
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
              return 928; /* *concatsidi3_5 */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern980 (x3))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 904; /* *concatsidi3_3 */

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
              return 934; /* *concatsidi3_6 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern980 (x3))
            {
            case 0:
              if (!(
#line 14096 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 4 * BITS_PER_UNIT) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                return -1;
              return 907; /* *concatsidi3_3 */

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
              return 937; /* *concatsidi3_6 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case LSHIFTRT:
      if (pnum_clobbers == NULL)
        return -1;
      x10 = XEXP (x4, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XEXP (x3, 1);
      if (pattern415 (x5, 
E_CCCmode, 
ASHIFT) != 0)
        return -1;
      x12 = XEXP (x5, 1);
      if (GET_CODE (x12) != CONST_INT)
        return -1;
      x8 = XEXP (x4, 0);
      operands[1] = x8;
      switch (XWINT (x12, 0))
        {
        case 31L:
          if (pattern1451 (x3, 
E_SImode) != 0)
            return -1;
          *pnum_clobbers = 1;
          return 1385; /* rcrsi2 */

        case 63L:
          if (pattern1451 (x3, 
E_DImode) != 0
              || !
#line 18754 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1386; /* rcrdi2 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pnum_clobbers == NULL)
        return -1;
      switch (XVECLEN (x4, 0))
        {
        case 3:
          x13 = XVECEXP (x4, 0, 2);
          if (GET_CODE (x13) != REG
              || REGNO (x13) != 7)
            return -1;
          x5 = XEXP (x3, 1);
          if (GET_CODE (x5) != CONST)
            return -1;
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != UNSPEC
              || XVECLEN (x6, 0) != 1
              || XINT (x6, 1) != 6)
            return -1;
          x7 = XVECEXP (x6, 0, 0);
          if (!tls_symbolic_operand (x7, E_VOIDmode))
            return -1;
          switch (XINT (x4, 1))
            {
            case 21:
              if (GET_MODE (x4) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return -1;
              x14 = XVECEXP (x4, 0, 0);
              operands[1] = x14;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x15 = XVECEXP (x4, 0, 1);
              operands[2] = x15;
              if (!constant_call_address_operand (operands[2], E_VOIDmode)
                  || GET_MODE (x13) != E_SImode
                  || GET_MODE (x5) != E_SImode
                  || GET_MODE (x6) != E_SImode)
                return -1;
              operands[3] = x7;
              *pnum_clobbers = 3;
              return 1657; /* *tls_local_dynamic_32_once */

            case 22:
              x14 = XVECEXP (x4, 0, 0);
              operands[2] = x14;
              if (!tls_modbase_operand (operands[2], E_VOIDmode))
                return -1;
              x15 = XVECEXP (x4, 0, 1);
              operands[3] = x15;
              operands[1] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern1635 (x3, 
E_SImode) != 0
                      || !(
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1671; /* *tls_dynamic_gnu2_combine_64_si */

                case E_DImode:
                  if (pattern1635 (x3, 
E_DImode) != 0
                      || !(
#line 23365 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS) && 
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1672; /* *tls_dynamic_gnu2_combine_64_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 1:
          if (XINT (x4, 1) != 19)
            return -1;
          x14 = XVECEXP (x4, 0, 0);
          if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern752 (x3))
            {
            case 0:
              if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == SImode))
                return -1;
              *pnum_clobbers = 1;
              return 1661; /* *add_tp_si */

            case 1:
              if (!
#line 1408 "../../src/gcc/config/i386/i386.md"
(ptr_mode == DImode))
                return -1;
              *pnum_clobbers = 1;
              return 1662; /* *add_tp_di */

            default:
              return -1;
            }

        case 4:
          if (XINT (x4, 1) != 22
              || GET_MODE (x4) != E_SImode)
            return -1;
          x16 = XVECEXP (x4, 0, 3);
          if (GET_CODE (x16) != REG
              || REGNO (x16) != 7
              || GET_MODE (x16) != E_SImode
              || pattern435 (x3, 
6) != 0)
            return -1;
          x14 = XVECEXP (x4, 0, 0);
          operands[3] = x14;
          if (!tls_modbase_operand (operands[3], E_VOIDmode))
            return -1;
          x15 = XVECEXP (x4, 0, 1);
          operands[4] = x15;
          x13 = XVECEXP (x4, 0, 2);
          operands[2] = x13;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x5 = XEXP (x3, 1);
          x6 = XEXP (x5, 0);
          x7 = XVECEXP (x6, 0, 0);
          operands[1] = x7;
          if (!tls_symbolic_operand (operands[1], E_VOIDmode)
              || !
#line 23306 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS))
            return -1;
          *pnum_clobbers = 1;
          return 1666; /* *tls_dynamic_gnu2_combine_32 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_88 (rtx x1 ATTRIBUTE_UNUSED,
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
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern618 (x3, 
E_SImode) != 0)
            return -1;
          if (
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF))
            return 592; /* *mulsi3_1_nf */
          if (pnum_clobbers == NULL
              || !
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true))
            return -1;
          *pnum_clobbers = 1;
          return 593; /* *mulsi3_1 */

        case E_DImode:
          if (pattern618 (x3, 
E_DImode) != 0)
            return -1;
          if ((
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return 594; /* *muldi3_1_nf */
          if (pnum_clobbers == NULL
              || !(
#line 10604 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1192 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 595; /* *muldi3_1 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (pnum_clobbers == NULL
          || pattern114 (x3, 
ZERO_EXTEND) != 0
          || !(
#line 10994 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 617; /* *umulsidi3_1 */

    case SIGN_EXTEND:
      if (pattern114 (x3, 
SIGN_EXTEND) != 0)
        return -1;
      if ((
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && TARGET_APX_NF) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return 619; /* *mulsidi3_1_nf */
      if (pnum_clobbers == NULL
          || !(
#line 11040 "../../src/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))
   && true) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
        return -1;
      *pnum_clobbers = 1;
      return 620; /* *mulsidi3_1 */

    default:
      return -1;
    }
}

 int
recog_92 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case XOR:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x4, 0);
      operands[1] = x5;
      x6 = XEXP (x4, 1);
      operands[2] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern762 (x3, 
E_SImode) != 0
              || !
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)))
            return -1;
          *pnum_clobbers = 1;
          return 836; /* *notxorsi_1 */

        case E_DImode:
          if (pattern762 (x3, 
E_DImode) != 0
              || !(
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 837; /* *notxordi_1 */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern115 (x3))
        {
        case 0:
          if ((
#line 14976 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
            return 1030; /* *one_cmpldi2_doubleword */
          if (!(
#line 14989 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1034; /* *one_cmpldi2_1 */

        case 1:
          if (!
#line 14989 "../../src/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 1033; /* *one_cmplsi2_1 */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x4, 0) != 3)
        return -1;
      x7 = XVECEXP (x4, 0, 0);
      operands[1] = x7;
      x8 = XVECEXP (x4, 0, 1);
      operands[2] = x8;
      x9 = XVECEXP (x4, 0, 2);
      operands[3] = x9;
      switch (XINT (x4, 1))
        {
        case 59:
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              switch (pattern988 (x3))
                {
                case 0:
                  if (!(
#line 4468 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_pre_reload_split ()) && 
#line 309 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                    return -1;
                  return 3427; /* *avx512bw_cmpv32hf3 */

                case 1:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3488; /* *avx512vl_cmpv32qi3 */

                case 2:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3490; /* *avx512bw_cmpv32hi3 */

                default:
                  return -1;
                }

            case E_DImode:
              if (pattern989 (x3) != 0
                  || !(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3484; /* *avx512bw_cmpv64qi3 */

            default:
              return -1;
            }

        case 157:
          if (!const_0_to_7_operand (operands[3], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_DImode:
              if (pattern1089 (x3, 
E_V64QImode, 
E_DImode) != 0
                  || !(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 3485; /* *avx512bw_cmpv64qi3 */

            case E_SImode:
              switch (pattern1090 (x3))
                {
                case 0:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return -1;
                  return 3489; /* *avx512vl_cmpv32qi3 */

                case 1:
                  if (!(
#line 4563 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_pre_reload_split ()) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return -1;
                  return 3491; /* *avx512bw_cmpv32hi3 */

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
recog_98 (rtx x1 ATTRIBUTE_UNUSED,
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
E_DImode) == 0
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
          return 1122; /* *lshrdi3_doubleword_mask */
        }
      operands[2] = x4;
      res = recog_97 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (pnum_clobbers != NULL)
        {
          switch (GET_CODE (x4))
            {
            case CONST_INT:
              if (XWINT (x4, 0) == 32L)
                {
                  x5 = XEXP (x1, 0);
                  if (GET_CODE (x5) == SUBREG
                      && known_eq (SUBREG_BYTE (x5), 0)
                      && GET_MODE (x5) == E_DImode)
                    {
                      x6 = XEXP (x5, 0);
                      operands[0] = x6;
                      if (register_operand (operands[0], E_SImode)
                          && GET_MODE (x2) == E_DImode
                          && nonimmediate_operand (operands[1], E_DImode)
                          && 
#line 17361 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                        {
                          *pnum_clobbers = 1;
                          return 1179; /* *highpartdisi2 */
                        }
                    }
                }
              break;

            case SUBREG:
              switch (pattern445 (x1, 
E_SImode))
                {
                case 0:
                  if (
#line 17840 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1245; /* *lshrsi3_mask */
                    }
                  break;

                case 1:
                  if (
#line 17888 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1257; /* *lshrsi3_add */
                    }
                  break;

                case 2:
                  if (
#line 17934 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
                    {
                      *pnum_clobbers = 1;
                      return 1269; /* *lshrsi3_sub */
                    }
                  break;

                default:
                  break;
                }
              break;

            default:
              break;
            }
        }
      operands[2] = x4;
      if (nonmemory_operand (operands[2], E_QImode))
        {
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          if (nonimmediate_operand (operands[0], E_DImode)
              && GET_MODE (x2) == E_DImode
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if ((
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && TARGET_APX_NF) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 1182; /* *lshrdi3_1_nf */
              if (pnum_clobbers != NULL
                  && (
#line 17385 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands, TARGET_APX_NDD)
   && true) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                {
                  *pnum_clobbers = 1;
                  return 1183; /* *lshrdi3_1 */
                }
            }
        }
      if (pnum_clobbers == NULL
          || GET_CODE (x4) != SUBREG)
        return -1;
      switch (pattern445 (x1, 
E_DImode))
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
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
          *pnum_clobbers = 1;
          return 1272; /* *lshrdi3_sub */

        default:
          return -1;
        }

    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern116 (x2))
        {
        case 0:
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
              return 1126; /* *lshrdi3_doubleword_mask_1 */
            }
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
          *pnum_clobbers = 1;
          return 1254; /* *lshrdi3_mask_1 */

        case 1:
          if (!
#line 17865 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1))
      == 4 * BITS_PER_UNIT - 1
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1251; /* *lshrsi3_mask_1 */

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern18 (x2))
        {
        case 0:
          if (!
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1263; /* *lshrsi3_add_1 */

        case 1:
          if (!(
#line 17912 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1266; /* *lshrdi3_add_1 */

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern117 (x2))
        {
        case 0:
          if (!
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (4 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()))
            return -1;
          *pnum_clobbers = 1;
          return 1275; /* *lshrsi3_sub_1 */

        case 1:
          if (!(
#line 17964 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (8 * BITS_PER_UNIT - 1)) == 0
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          *pnum_clobbers = 1;
          return 1278; /* *lshrdi3_sub_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_111 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x1, 0);
  operands[0] = x4;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  x6 = XEXP (x2, 1);
  operands[2] = x6;
  if (call_insn_operand (operands[1], E_SImode)
      && (
#line 20326 "../../src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
    return 1475; /* *call_value */
  if (call_insn_operand (operands[1], E_DImode)
      && (
#line 20326 "../../src/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
    return 1476; /* *call_value */
  switch (GET_CODE (x5))
    {
    case ZERO_EXTEND:
      if (GET_MODE (x5) == E_DImode)
        {
          x7 = XEXP (x5, 0);
          operands[1] = x7;
          if (GOT_memory_operand (operands[1], E_SImode))
            {
              operands[2] = x6;
              if (
#line 20337 "../../src/gcc/config/i386/i386.md"
(TARGET_X32 && !TARGET_INDIRECT_BRANCH_REGISTER))
                return 1477; /* *call_value_got_x32 */
            }
        }
      break;

    case MEM:
      if (GET_MODE (x5) == E_SImode)
        {
          x7 = XEXP (x5, 0);
          if (GET_CODE (x7) == PLUS
              && GET_MODE (x7) == E_SImode)
            {
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              if (register_no_elim_operand (operands[1], E_SImode))
                {
                  x9 = XEXP (x7, 1);
                  operands[2] = x9;
                  if (GOT32_symbol_operand (operands[2], E_SImode))
                    {
                      operands[3] = x6;
                      if (
#line 20353 "../../src/gcc/config/i386/i386.md"
(!TARGET_MACHO
   && !TARGET_64BIT && !TARGET_INDIRECT_BRANCH_REGISTER
   && SIBLING_CALL_P (insn)))
                        return 1478; /* *sibcall_value_GOT_32 */
                    }
                }
            }
        }
      break;

    default:
      break;
    }
  operands[1] = x5;
  operands[2] = x6;
  if (sibcall_insn_operand (operands[1], E_SImode)
      && (
#line 20367 "../../src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == SImode)))
    return 1479; /* *sibcall_value */
  if (!sibcall_insn_operand (operands[1], E_DImode)
      || !(
#line 20367 "../../src/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 1403 "../../src/gcc/config/i386/i386.md"
(word_mode == DImode)))
    return -1;
  return 1480; /* *sibcall_value */
}

 int
recog_117 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (XVECLEN (x3, 0))
    {
    case 1:
      switch (XINT (x3, 1))
        {
        case 2:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern302 (x3))
            {
            case 0:
              if (!(
#line 27196 "../../src/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1859; /* allocate_stack_worker_probe_si */

            case 1:
              if (!(
#line 27196 "../../src/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              *pnum_clobbers = 1;
              return 1860; /* allocate_stack_worker_probe_di */

            default:
              return -1;
            }

        case 11:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 29069 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1895; /* rdpmc */

        case 9:
          if (GET_MODE (x3) != E_DImode)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_DImode)
              || !
#line 29088 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1897; /* rdtsc */

        case 36:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 29312 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1925; /* xgetbv */

        case 13:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!(
#line 29406 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1933; /* lwp_slwpcbsi */

            case 1:
              if (!(
#line 29406 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1934; /* lwp_slwpcbdi */

            default:
              return -1;
            }

        case 16:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29454 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1939; /* rdfsbasesi */

            case 1:
              if (!(
#line 29454 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1941; /* rdfsbasedi */

            default:
              return -1;
            }

        case 17:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29454 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1940; /* rdgsbasesi */

            case 1:
              if (!(
#line 29454 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1942; /* rdgsbasedi */

            default:
              return -1;
            }

        case 59:
          switch (pattern302 (x3))
            {
            case 0:
              if (!
#line 29522 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)))
                return -1;
              return 1956; /* rdsspsi */

            case 1:
              if (!(
#line 29522 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1957; /* rdsspdi */

            default:
              return -1;
            }

        case 57:
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          switch (pattern23 (x3))
            {
            case 0:
              if (!
#line 29762 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_RDPID))
                return -1;
              return 1982; /* rdpid */

            case 1:
              if (!
#line 29769 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_RDPID))
                return -1;
              return 1983; /* rdpid_rex64 */

            default:
              return -1;
            }

        case 85:
          if (GET_MODE (x3) != E_DImode
              || !register_operand (operands[0], E_DImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!x86_64_szext_nonmemory_operand (operands[1], E_DImode)
              || !
#line 30045 "../../src/gcc/config/i386/i386.md"
(TARGET_USER_MSR && TARGET_64BIT))
            return -1;
          return 2011; /* urdmsr */

        case 89:
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !memory_operand (operands[1], E_SImode)
                  || !
#line 30083 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2017; /* movrssi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x3) != E_DImode
                  || !memory_operand (operands[1], E_DImode)
                  || !
#line 30083 "../../src/gcc/config/i386/i386.md"
(TARGET_MOVRS && TARGET_64BIT))
                return -1;
              return 2018; /* movrsdi */

            default:
              return -1;
            }

        case 93:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !memory_operand (operands[0], E_SImode)
              || !
#line 22508 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8586; /* sse_stmxcsr */

        default:
          return -1;
        }

    case 2:
      switch (XINT (x3, 1))
        {
        case 3:
          if (pnum_clobbers == NULL)
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          x5 = XVECEXP (x3, 0, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern880 (x3, 
E_SImode) != 0
                  || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))
                return -1;
              *pnum_clobbers = 1;
              return 1865; /* probe_stack_range_si */

            case E_DImode:
              if (pattern880 (x3, 
E_DImode) != 0
                  || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))
                return -1;
              *pnum_clobbers = 1;
              return 1866; /* probe_stack_range_di */

            default:
              return -1;
            }

        case 113:
          x5 = XVECEXP (x3, 0, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case AND:
              switch (pattern625 (x3))
                {
                case 0:
                  if (!
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11045; /* rao_aandsi */

                case 1:
                  if (!(
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11049; /* rao_aanddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern625 (x3))
                {
                case 0:
                  if (!
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11046; /* rao_aorsi */

                case 1:
                  if (!(
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11050; /* rao_aordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern625 (x3))
                {
                case 0:
                  if (!
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11047; /* rao_axorsi */

                case 1:
                  if (!(
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11051; /* rao_axordi */

                default:
                  return -1;
                }

            case PLUS:
              switch (pattern625 (x3))
                {
                case 0:
                  if (!
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT))
                    return -1;
                  return 11048; /* rao_aaddsi */

                case 1:
                  if (!(
#line 821 "../../src/gcc/config/i386/sync.md"
(TARGET_RAOINT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 11052; /* rao_aadddi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 111:
          if (pnum_clobbers == NULL)
            return -1;
          x5 = XVECEXP (x3, 0, 1);
          operands[2] = x5;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          switch (GET_CODE (x4))
            {
            case PLUS:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11055; /* atomic_addsi */

                case 1:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11056; /* atomic_adddi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11059; /* atomic_subsi */

                case 1:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11060; /* atomic_subdi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11067; /* atomic_andsi */

                case 1:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11070; /* atomic_anddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11068; /* atomic_orsi */

                case 1:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11071; /* atomic_ordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern881 (x3))
                {
                case 0:
                  *pnum_clobbers = 1;
                  return 11069; /* atomic_xorsi */

                case 1:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11072; /* atomic_xordi */

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
recog_132 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XVECEXP (x3, 0, 2);
  operands[3] = x4;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      x6 = XEXP (x2, 2);
      operands[4] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern1001 (x2, 
E_V16SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16SImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28157 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9367; /* *avx512f_vpermi2varv16si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16SImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28143 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9433; /* avx512f_vpermt2varv16si3_mask */
            }
          break;

        case E_V8DImode:
          if (pattern1001 (x2, 
E_V8DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28157 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9368; /* *avx512f_vpermi2varv8di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return 9435; /* avx512f_vpermt2varv8di3_mask */
            }
          break;

        case E_V8SImode:
          if (pattern1001 (x2, 
E_V8SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9369; /* *avx512vl_vpermi2varv8si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9437; /* avx512vl_vpermt2varv8si3_mask */
            }
          break;

        case E_V4SImode:
          if (pattern1001 (x2, 
E_V4SImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V4SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28158 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9370; /* *avx512vl_vpermi2varv4si3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V4SImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28147 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9441; /* avx512vl_vpermt2varv4si3_mask */
            }
          break;

        case E_V4DImode:
          if (pattern1001 (x2, 
E_V4DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V4DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9371; /* *avx512vl_vpermi2varv4di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V4DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9439; /* avx512vl_vpermt2varv4di3_mask */
            }
          break;

        case E_V2DImode:
          if (pattern1001 (x2, 
E_V2DImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V2DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28159 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9372; /* *avx512vl_vpermi2varv2di3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V2DImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return 9443; /* avx512vl_vpermt2varv2di3_mask */
            }
          break;

        case E_V32HImode:
          if (pattern1001 (x2, 
E_V32HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V32HImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28160 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9373; /* *avx512bw_vpermi2varv32hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V32HImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28149 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
                return 9445; /* avx512bw_vpermt2varv32hi3_mask */
            }
          break;

        case E_V16HImode:
          if (pattern1001 (x2, 
E_V16HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16HImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28161 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9374; /* *avx512vl_vpermi2varv16hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16HImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28150 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9446; /* avx512vl_vpermt2varv16hi3_mask */
            }
          break;

        case E_V8HImode:
          if (pattern1001 (x2, 
E_V8HImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V8HImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28162 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9375; /* *avx512vl_vpermi2varv8hi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V8HImode)
                  && register_operand (operands[4], E_QImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
                return 9447; /* avx512vl_vpermt2varv8hi3_mask */
            }
          break;

        case E_V64QImode:
          if (pattern1001 (x2, 
E_V64QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V64QImode)
                  && register_operand (operands[4], E_DImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28163 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
                return 9376; /* *avx512bw_vpermi2varv64qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V64QImode)
                  && register_operand (operands[4], E_DImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28152 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
                return 9448; /* avx512bw_vpermt2varv64qi3_mask */
            }
          break;

        case E_V32QImode:
          if (pattern1001 (x2, 
E_V32QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V32QImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28164 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9377; /* *avx512vl_vpermi2varv32qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V32QImode)
                  && register_operand (operands[4], E_SImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28153 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9449; /* avx512vl_vpermt2varv32qi3_mask */
            }
          break;

        case E_V16QImode:
          if (pattern1001 (x2, 
E_V16QImode) == 0)
            {
              x7 = XVECEXP (x3, 0, 1);
              operands[1] = x7;
              x8 = XVECEXP (x3, 0, 0);
              operands[2] = x8;
              if (nonimmediate_operand (operands[3], E_V16QImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28193 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9378; /* *avx512vl_vpermi2varv16qi3_mask */
              operands[2] = x7;
              operands[1] = x8;
              if (nonimmediate_operand (operands[3], E_V16QImode)
                  && register_operand (operands[4], E_HImode)
                  && rtx_equal_p (x5, operands[2])
                  && (
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28154 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
                return 9450; /* avx512vl_vpermt2varv16qi3_mask */
            }
          break;

        default:
          break;
        }
      if (GET_CODE (x5) == SUBREG
          && known_eq (SUBREG_BYTE (x5), 0))
        {
          x8 = XVECEXP (x3, 0, 0);
          operands[2] = x8;
          x7 = XVECEXP (x3, 0, 1);
          operands[1] = x7;
          x9 = XEXP (x5, 0);
          if (rtx_equal_p (x9, operands[2]))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1453 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9379; /* *avx512f_vpermi2varv16sf3_mask */
                  break;

                case E_V8SFmode:
                  if (pattern1453 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9380; /* *avx512vl_vpermi2varv8sf3_mask */
                  break;

                case E_V4SFmode:
                  if (pattern1453 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 520 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9381; /* *avx512vl_vpermi2varv4sf3_mask */
                  break;

                case E_V8DFmode:
                  if (pattern1453 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 9382; /* *avx512f_vpermi2varv8df3_mask */
                  break;

                case E_V4DFmode:
                  if (pattern1453 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9383; /* *avx512vl_vpermi2varv4df3_mask */
                  break;

                case E_V2DFmode:
                  if (pattern1453 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) == 0
                      && (
#line 28209 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 521 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                    return 9384; /* *avx512vl_vpermi2varv2df3_mask */
                  break;

                default:
                  break;
                }
            }
        }
      x8 = XVECEXP (x3, 0, 0);
      operands[1] = x8;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      if (!rtx_equal_p (x5, operands[2]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1278 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28143 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9434; /* avx512f_vpermt2varv16sf3_mask */

        case E_V8DFmode:
          if (pattern1278 (x2, 
E_V8DFmode, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9436; /* avx512f_vpermt2varv8df3_mask */

        case E_V8SFmode:
          if (pattern1278 (x2, 
E_V8SFmode, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9438; /* avx512vl_vpermt2varv8sf3_mask */

        case E_V4DFmode:
          if (pattern1278 (x2, 
E_V4DFmode, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9440; /* avx512vl_vpermt2varv4df3_mask */

        case E_V4SFmode:
          if (pattern1278 (x2, 
E_V4SFmode, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28147 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9442; /* avx512vl_vpermt2varv4sf3_mask */

        case E_V2DFmode:
          if (pattern1278 (x2, 
E_V2DFmode, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 28269 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9444; /* avx512vl_vpermt2varv2df3_mask */

        default:
          return -1;
        }

    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x5;
      x8 = XVECEXP (x3, 0, 0);
      operands[1] = x8;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      x6 = XEXP (x2, 2);
      operands[5] = x6;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SImode:
          if (pattern480 (x2, 
E_V16SImode, 
E_HImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28143 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9386; /* avx512f_vpermt2varv16si3_maskz_1 */

        case E_V16SFmode:
          if (pattern1279 (x2, 
E_V16SFmode, 
E_HImode, 
E_V16SImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28143 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9388; /* avx512f_vpermt2varv16sf3_maskz_1 */

        case E_V8DImode:
          if (pattern480 (x2, 
E_V8DImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9390; /* avx512f_vpermt2varv8di3_maskz_1 */

        case E_V8DFmode:
          if (pattern1279 (x2, 
E_V8DFmode, 
E_QImode, 
E_V8DImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28144 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9392; /* avx512f_vpermt2varv8df3_maskz_1 */

        case E_V8SImode:
          if (pattern480 (x2, 
E_V8SImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9394; /* avx512vl_vpermt2varv8si3_maskz_1 */

        case E_V8SFmode:
          if (pattern1279 (x2, 
E_V8SFmode, 
E_QImode, 
E_V8SImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28145 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9396; /* avx512vl_vpermt2varv8sf3_maskz_1 */

        case E_V4DImode:
          if (pattern480 (x2, 
E_V4DImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9398; /* avx512vl_vpermt2varv4di3_maskz_1 */

        case E_V4DFmode:
          if (pattern1279 (x2, 
E_V4DFmode, 
E_QImode, 
E_V4DImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28146 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9400; /* avx512vl_vpermt2varv4df3_maskz_1 */

        case E_V4SImode:
          if (pattern480 (x2, 
E_V4SImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28147 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9402; /* avx512vl_vpermt2varv4si3_maskz_1 */

        case E_V4SFmode:
          if (pattern1279 (x2, 
E_V4SFmode, 
E_QImode, 
E_V4SImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28147 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9404; /* avx512vl_vpermt2varv4sf3_maskz_1 */

        case E_V2DImode:
          if (pattern480 (x2, 
E_V2DImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9406; /* avx512vl_vpermt2varv2di3_maskz_1 */

        case E_V2DFmode:
          if (pattern1279 (x2, 
E_V2DFmode, 
E_QImode, 
E_V2DImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28148 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9408; /* avx512vl_vpermt2varv2df3_maskz_1 */

        case E_V32HImode:
          if (pattern480 (x2, 
E_V32HImode, 
E_SImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28149 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512)))
            return -1;
          return 9410; /* avx512bw_vpermt2varv32hi3_maskz_1 */

        case E_V16HImode:
          if (pattern480 (x2, 
E_V16HImode, 
E_HImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28150 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9412; /* avx512vl_vpermt2varv16hi3_maskz_1 */

        case E_V8HImode:
          if (pattern480 (x2, 
E_V8HImode, 
E_QImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_AVX512VL)))
            return -1;
          return 9414; /* avx512vl_vpermt2varv8hi3_maskz_1 */

        case E_V64QImode:
          if (pattern480 (x2, 
E_V64QImode, 
E_DImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28152 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_EVEX512)))
            return -1;
          return 9416; /* avx512bw_vpermt2varv64qi3_maskz_1 */

        case E_V32QImode:
          if (pattern480 (x2, 
E_V32QImode, 
E_SImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28153 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9418; /* avx512vl_vpermt2varv32qi3_maskz_1 */

        case E_V16QImode:
          if (pattern480 (x2, 
E_V16QImode, 
E_HImode) != 0
              || !(
#line 28236 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 28154 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI && TARGET_AVX512VL)))
            return -1;
          return 9420; /* avx512vl_vpermt2varv16qi3_maskz_1 */

        case E_V32HFmode:
          if (pattern1279 (x2, 
E_V32HFmode, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 557 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9422; /* avx512bw_vpermt2varv32hf3_maskz_1 */

        case E_V16HFmode:
          if (pattern1279 (x2, 
E_V16HFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 557 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9424; /* avx512vl_vpermt2varv16hf3_maskz_1 */

        case E_V8HFmode:
          if (pattern1279 (x2, 
E_V8HFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 557 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9426; /* avx512fp16_vpermt2varv8hf3_maskz_1 */

        case E_V32BFmode:
          if (pattern1279 (x2, 
E_V32BFmode, 
E_SImode, 
E_V32HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 9428; /* avx512bw_vpermt2varv32bf3_maskz_1 */

        case E_V16BFmode:
          if (pattern1279 (x2, 
E_V16BFmode, 
E_HImode, 
E_V16HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9430; /* avx512vl_vpermt2varv16bf3_maskz_1 */

        case E_V8BFmode:
          if (pattern1279 (x2, 
E_V8BFmode, 
E_QImode, 
E_V8HImode) != 0
              || !(
#line 28251 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 558 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 9432; /* avx512vl_vpermt2varv8bf3_maskz_1 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_159 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      operands[4] = x3;
      x4 = XEXP (x2, 2);
      switch (GET_CODE (x4))
        {
        case REG:
        case SUBREG:
          operands[5] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1389 (x2, 
E_V4SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4SFmode)
                  && nonimmediate_operand (operands[2], E_V4SFmode)
                  && nonimmediate_operand (operands[3], E_V4SFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4012; /* *fma_fnmsub_v4sf */
              if (!bcst_vector_operand (operands[1], E_V4SFmode)
                  || !bcst_vector_operand (operands[2], E_V4SFmode)
                  || !bcst_vector_operand (operands[3], E_V4SFmode)
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4048; /* fma_fnmsub_v4sf_maskz_1 */

            case E_V2DFmode:
              if (pattern1389 (x2, 
E_V2DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V2DFmode)
                  && nonimmediate_operand (operands[2], E_V2DFmode)
                  && nonimmediate_operand (operands[3], E_V2DFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4016; /* *fma_fnmsub_v2df */
              if (!bcst_vector_operand (operands[1], E_V2DFmode)
                  || !bcst_vector_operand (operands[2], E_V2DFmode)
                  || !bcst_vector_operand (operands[3], E_V2DFmode)
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4059; /* fma_fnmsub_v2df_maskz_1 */

            case E_V8SFmode:
              if (pattern1389 (x2, 
E_V8SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4020; /* *fma_fnmsub_v8sf */
              if (!bcst_vector_operand (operands[1], E_V8SFmode)
                  || !bcst_vector_operand (operands[2], E_V8SFmode)
                  || !bcst_vector_operand (operands[3], E_V8SFmode)
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4044; /* fma_fnmsub_v8sf_maskz_1 */

            case E_V4DFmode:
              if (pattern1389 (x2, 
E_V4DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4))
                return 4024; /* *fma_fnmsub_v4df */
              if (!bcst_vector_operand (operands[1], E_V4DFmode)
                  || !bcst_vector_operand (operands[2], E_V4DFmode)
                  || !bcst_vector_operand (operands[3], E_V4DFmode)
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
                return -1;
              return 4055; /* fma_fnmsub_v4df_maskz_1 */

            case E_V32HFmode:
              if (pattern1390 (x2, 
E_SImode, 
E_V32HFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
                return -1;
              return 4028; /* fma_fnmsub_v32hf_maskz_1 */

            case E_V16HFmode:
              if (pattern1390 (x2, 
E_HImode, 
E_V16HFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4032; /* fma_fnmsub_v16hf_maskz_1 */

            case E_V8HFmode:
              if (pattern1390 (x2, 
E_QImode, 
E_V8HFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 5929 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
                return -1;
              return 4036; /* fma_fnmsub_v8hf_maskz_1 */

            case E_V16SFmode:
              if (pattern1390 (x2, 
E_HImode, 
E_V16SFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4040; /* fma_fnmsub_v16sf_maskz_1 */

            case E_V8DFmode:
              if (pattern1390 (x2, 
E_QImode, 
E_V8DFmode) != 0
                  || !(
#line 6259 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                return -1;
              return 4051; /* fma_fnmsub_v8df_maskz_1 */

            case E_V32BFmode:
              if (pattern1391 (x2, 
E_SImode, 
E_V32BFmode) != 0
                  || !(
#line 32342 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
                return -1;
              return 10670; /* avx10_2_fnmsubbf16_v32bf_maskz_1 */

            case E_V16BFmode:
              if (pattern1391 (x2, 
E_HImode, 
E_V16BFmode) != 0
                  || !
#line 32342 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10672; /* avx10_2_fnmsubbf16_v16bf_maskz_1 */

            case E_V8BFmode:
              if (pattern1391 (x2, 
E_QImode, 
E_V8BFmode) != 0
                  || !
#line 32342 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
                return -1;
              return 10674; /* avx10_2_fnmsubbf16_v8bf_maskz_1 */

            default:
              return -1;
            }

        case CONST_INT:
          if (XWINT (x4, 0) != 1L)
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1392 (x2, 
E_V4SFmode) != 0
                  || !
#line 7004 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4))
                return -1;
              return 4326; /* *fma4i_vmfnmsub_v4sf */

            case E_V2DFmode:
              if (pattern1392 (x2, 
E_V2DFmode) != 0
                  || !(
#line 7004 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 474 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 4327; /* *fma4i_vmfnmsub_v2df */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case REG:
    case SUBREG:
    case MEM:
      switch (pattern636 (x2))
        {
        case 0:
          if (pattern1299 (x2, 
E_V32HFmode, 
E_SImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V32HFmode)
              && vector_operand (operands[3], E_V32HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return 4060; /* avx512bw_fnmsub_v32hf_mask */
          if (!vector_operand (operands[1], E_V32HFmode)
              || !nonimmediate_operand (operands[3], E_V32HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512)))
            return -1;
          return 4075; /* avx512bw_fnmsub_v32hf_mask3 */

        case 1:
          if (pattern1299 (x2, 
E_V16HFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16HFmode)
              && vector_operand (operands[3], E_V16HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 4062; /* avx512vl_fnmsub_v16hf_mask */
          if (!vector_operand (operands[1], E_V16HFmode)
              || !nonimmediate_operand (operands[3], E_V16HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4077; /* avx512vl_fnmsub_v16hf_mask3 */

        case 2:
          if (pattern1299 (x2, 
E_V8HFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8HFmode)
              && vector_operand (operands[3], E_V8HFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return 4064; /* avx512fp16_fnmsub_v8hf_mask */
          if (!vector_operand (operands[1], E_V8HFmode)
              || !nonimmediate_operand (operands[3], E_V8HFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL)))
            return -1;
          return 4079; /* avx512fp16_fnmsub_v8hf_mask3 */

        case 3:
          if (pattern1299 (x2, 
E_V16SFmode, 
E_HImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V16SFmode)
              && vector_operand (operands[3], E_V16SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4065; /* avx512f_fnmsub_v16sf_mask */
          if (!vector_operand (operands[1], E_V16SFmode)
              || !nonimmediate_operand (operands[3], E_V16SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4080; /* avx512f_fnmsub_v16sf_mask3 */

        case 4:
          if (pattern1299 (x2, 
E_V8SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8SFmode)
              && vector_operand (operands[3], E_V8SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4067; /* avx512vl_fnmsub_v8sf_mask */
          if (!vector_operand (operands[1], E_V8SFmode)
              || !nonimmediate_operand (operands[3], E_V8SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4082; /* avx512vl_fnmsub_v8sf_mask3 */

        case 5:
          if (pattern1299 (x2, 
E_V4SFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4SFmode)
              && vector_operand (operands[3], E_V4SFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4069; /* avx512vl_fnmsub_v4sf_mask */
          if (!vector_operand (operands[1], E_V4SFmode)
              || !nonimmediate_operand (operands[3], E_V4SFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4084; /* avx512vl_fnmsub_v4sf_mask3 */

        case 6:
          if (pattern1299 (x2, 
E_V8DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V8DFmode)
              && vector_operand (operands[3], E_V8DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return 4070; /* avx512f_fnmsub_v8df_mask */
          if (!vector_operand (operands[1], E_V8DFmode)
              || !nonimmediate_operand (operands[3], E_V8DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 4085; /* avx512f_fnmsub_v8df_mask3 */

        case 7:
          if (pattern1299 (x2, 
E_V4DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V4DFmode)
              && vector_operand (operands[3], E_V4DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4072; /* avx512vl_fnmsub_v4df_mask */
          if (!vector_operand (operands[1], E_V4DFmode)
              || !nonimmediate_operand (operands[3], E_V4DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4087; /* avx512vl_fnmsub_v4df_mask3 */

        case 8:
          if (pattern1299 (x2, 
E_V2DFmode, 
E_QImode) != 0)
            return -1;
          if (nonimmediate_operand (operands[1], E_V2DFmode)
              && vector_operand (operands[3], E_V2DFmode)
              && rtx_equal_p (x3, operands[1])
              && (
#line 6304 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return 4074; /* avx512vl_fnmsub_v2df_mask */
          if (!vector_operand (operands[1], E_V2DFmode)
              || !nonimmediate_operand (operands[3], E_V2DFmode)
              || !rtx_equal_p (x3, operands[3])
              || !(
#line 6323 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 4089; /* avx512vl_fnmsub_v2df_mask3 */

        case 9:
          if (pattern1300 (x2, 
E_SImode, 
E_V32BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && (
#line 32362 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return 10675; /* avx10_2_fnmsubbf16_v32bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !(
#line 32381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
            return -1;
          return 10678; /* avx10_2_fnmsubbf16_v32bf_mask3 */

        case 10:
          if (pattern1300 (x2, 
E_HImode, 
E_V16BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && 
#line 32362 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10676; /* avx10_2_fnmsubbf16_v16bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !
#line 32381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10679; /* avx10_2_fnmsubbf16_v16bf_mask3 */

        case 11:
          if (pattern1300 (x2, 
E_QImode, 
E_V8BFmode) != 0)
            return -1;
          if (rtx_equal_p (x3, operands[1])
              && 
#line 32362 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return 10677; /* avx10_2_fnmsubbf16_v8bf_mask */
          if (!rtx_equal_p (x3, operands[3])
              || !
#line 32381 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
            return -1;
          return 10680; /* avx10_2_fnmsubbf16_v8bf_mask3 */

        case 12:
          if (pattern1393 (x2, 
E_V8HFmode) != 0
              || !(
#line 6651 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 4242; /* *fmai_fnmsub_v8hf */

        case 13:
          if (pattern1393 (x2, 
E_V4SFmode) != 0
              || !
#line 6651 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F))
            return -1;
          return 4244; /* *fmai_fnmsub_v4sf */

        case 14:
          if (pattern1393 (x2, 
E_V2DFmode) != 0
              || !(
#line 6651 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_AVX512F) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 4246; /* *fmai_fnmsub_v2df */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_167 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  operands[2] = x5;
  if (const_0_to_7_operand (operands[2], E_VOIDmode))
    {
      x6 = XVECEXP (x4, 0, 1);
      operands[3] = x6;
      if (const_0_to_7_operand (operands[3], E_VOIDmode))
        {
          x7 = XEXP (x2, 1);
          operands[4] = x7;
          x8 = XEXP (x2, 2);
          operands[5] = x8;
          if (register_operand (operands[5], E_QImode))
            {
              switch (GET_MODE (operands[0]))
                {
                case E_V2DFmode:
                  if (pattern1546 (x2, 
E_V2DFmode, 
E_V8DFmode) == 0
                      && (
#line 12448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[4]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5341; /* avx512dq_vextractf64x2_1_mask */
                  break;

                case E_V2DImode:
                  if (pattern1546 (x2, 
E_V2DImode, 
E_V8DImode) == 0
                      && (
#line 12448 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && INTVAL (operands[2]) % 2 == 0
   && INTVAL (operands[2]) == INTVAL (operands[3]) - 1
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[4]))) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
                    return 5342; /* avx512dq_vextracti64x2_1_mask */
                  break;

                default:
                  break;
                }
            }
        }
    }
  x6 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XEXP (x2, 1);
  operands[2] = x7;
  x8 = XEXP (x2, 2);
  operands[3] = x8;
  if (!register_operand (operands[3], E_QImode))
    return -1;
  switch (XWINT (x5, 0))
    {
    case 0L:
      if (XWINT (x6, 0) != 1L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || pattern1547 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 12878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5365; /* vec_extract_lo_v4di_mask */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || pattern1547 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 12878 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5366; /* vec_extract_lo_v4df_mask */

        default:
          return -1;
        }

    case 2L:
      if (XWINT (x6, 0) != 3L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V2DImode:
          if (!nonimmediate_operand (operands[0], E_V2DImode)
              || pattern1547 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 12915 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5369; /* vec_extract_hi_v4di_mask */

        case E_V2DFmode:
          if (!nonimmediate_operand (operands[0], E_V2DFmode)
              || pattern1547 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 12915 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ
   && TARGET_AVX512VL
   && (!MEM_P (operands[0]) || rtx_equal_p (operands[0], operands[2]))))
            return -1;
          return 5370; /* vec_extract_hi_v4df_mask */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_174 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20;
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
  x11 = XVECEXP (x4, 0, 8);
  operands[10] = x11;
  x12 = XVECEXP (x4, 0, 9);
  operands[11] = x12;
  x13 = XVECEXP (x4, 0, 10);
  operands[12] = x13;
  x14 = XVECEXP (x4, 0, 11);
  operands[13] = x14;
  x15 = XVECEXP (x4, 0, 12);
  operands[14] = x15;
  x16 = XVECEXP (x4, 0, 13);
  operands[15] = x16;
  x17 = XVECEXP (x4, 0, 14);
  operands[16] = x17;
  x18 = XVECEXP (x4, 0, 15);
  operands[17] = x18;
  x19 = XEXP (x2, 1);
  operands[18] = x19;
  x20 = XEXP (x2, 2);
  operands[19] = x20;
  if (!register_operand (operands[19], E_HImode))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SFmode:
      if (!register_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || GET_MODE (x3) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || pattern1852 () != 0
          || !nonimm_or_0_operand (operands[18], E_V16SFmode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return -1;
      return 8438; /* *avx512f_shuf_f32x4_1_mask_1 */

    case E_V16SImode:
      if (!register_operand (operands[0], E_V16SImode)
          || GET_MODE (x2) != E_V16SImode
          || GET_MODE (x3) != E_V16SImode
          || !nonimm_or_0_operand (operands[18], E_V16SImode))
        return -1;
      if (register_operand (operands[1], E_V16SImode)
          && pattern1852 () == 0
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
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
(TARGET_EVEX512))))
        return 8440; /* *avx512f_shuf_i32x4_1_mask_1 */
      if (!nonimmediate_operand (operands[1], E_V16SImode)
          || pattern1808 () != 0
          || !const_8_to_11_operand (operands[10], E_VOIDmode)
          || !const_8_to_11_operand (operands[11], E_VOIDmode)
          || !const_8_to_11_operand (operands[12], E_VOIDmode)
          || !const_8_to_11_operand (operands[13], E_VOIDmode)
          || !const_12_to_15_operand (operands[14], E_VOIDmode)
          || !const_12_to_15_operand (operands[15], E_VOIDmode)
          || !const_12_to_15_operand (operands[16], E_VOIDmode)
          || !const_12_to_15_operand (operands[17], E_VOIDmode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
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
   && INTVAL (operands[5]) + 12 == INTVAL (operands[17]))))
        return -1;
      return 8442; /* avx512f_pshufd_1_mask */

    default:
      return -1;
    }
}

 int
recog_185 (rtx x1 ATTRIBUTE_UNUSED,
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
  switch (GET_MODE (operands[0]))
    {
    case E_V16HImode:
      if (pattern129 (x2, 
E_HImode, 
E_V16HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7613; /* ashrv16hi3_mask */
      if (!register_operand (operands[1], E_V16HImode)
          || !nonimmediate_operand (operands[2], E_V16HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9571; /* avx512vl_ashrvv16hi_mask */

    case E_V8HImode:
      if (pattern129 (x2, 
E_QImode, 
E_V8HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL) && 
#line 793 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW))))
        return 7615; /* ashrv8hi3_mask */
      if (!register_operand (operands[1], E_V8HImode)
          || !nonimmediate_operand (operands[2], E_V8HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9569; /* avx512vl_ashrvv8hi_mask */

    case E_V8SImode:
      if (pattern129 (x2, 
E_QImode, 
E_V8SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7617; /* ashrv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9559; /* avx2_ashrvv8si_mask */

    case E_V4SImode:
      if (pattern129 (x2, 
E_QImode, 
E_V4SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7619; /* ashrv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9557; /* avx2_ashrvv4si_mask */

    case E_V2DImode:
      if (pattern129 (x2, 
E_QImode, 
E_V2DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17107 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7621; /* ashrv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL)) && 
#line 681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9563; /* avx2_ashrvv2di_mask */

    case E_V32HImode:
      if (pattern129 (x2, 
E_SImode, 
E_V32HImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V32HImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 788 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && TARGET_EVEX512))))
        return 7631; /* ashrv32hi3_mask */
      if (!register_operand (operands[1], E_V32HImode)
          || !nonimmediate_operand (operands[2], E_V32HImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28925 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW) && 
#line 685 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 9573; /* avx512bw_ashrvv32hi_mask */

    case E_V4DImode:
      if (pattern129 (x2, 
E_QImode, 
E_V4DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return 7633; /* ashrv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL)) && 
#line 681 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
        return -1;
      return 9565; /* avx2_ashrvv4di_mask */

    case E_V16SImode:
      if (pattern129 (x2, 
E_HImode, 
E_V16SImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V16SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7635; /* ashrv16si3_mask */
      if (!register_operand (operands[1], E_V16SImode)
          || !nonimmediate_operand (operands[2], E_V16SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 680 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9561; /* avx512f_ashrvv16si_mask */

    case E_V8DImode:
      if (pattern129 (x2, 
E_QImode, 
E_V8DImode) != 0)
        return -1;
      if (nonimmediate_operand (operands[1], E_V8DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 17151 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 789 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return 7637; /* ashrv8di3_mask */
      if (!register_operand (operands[1], E_V8DImode)
          || !nonimmediate_operand (operands[2], E_V8DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 28914 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (64 == 64 || TARGET_AVX512VL)) && 
#line 682 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
        return -1;
      return 9567; /* avx512f_ashrvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_187 (rtx x1 ATTRIBUTE_UNUSED,
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
        return 7650; /* lshrv16hi3_mask */
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
      return 9605; /* avx512vl_lshrvv16hi_mask */

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
        return 7654; /* lshrv8hi3_mask */
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
      return 9601; /* avx512vl_lshrvv8hi_mask */

    case 2:
      if (nonimmediate_operand (operands[1], E_V8SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7658; /* lshrv8si3_mask */
      if (!register_operand (operands[1], E_V8SImode)
          || !nonimmediate_operand (operands[2], E_V8SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9581; /* avx2_lshrvv8si_mask */

    case 3:
      if (nonimmediate_operand (operands[1], E_V4SImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7662; /* lshrv4si3_mask */
      if (!register_operand (operands[1], E_V4SImode)
          || !nonimmediate_operand (operands[2], E_V4SImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9585; /* avx2_lshrvv4si_mask */

    case 4:
      if (nonimmediate_operand (operands[1], E_V4DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7666; /* lshrv4di3_mask */
      if (!register_operand (operands[1], E_V4DImode)
          || !nonimmediate_operand (operands[2], E_V4DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (32 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9593; /* avx2_lshrvv4di_mask */

    case 5:
      if (nonimmediate_operand (operands[1], E_V2DImode)
          && nonmemory_operand (operands[2], E_DImode)
          && (
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 17303 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return 7670; /* lshrv2di3_mask */
      if (!register_operand (operands[1], E_V2DImode)
          || !nonimmediate_operand (operands[2], E_V2DImode)
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 28936 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && (16 == 64 || TARGET_AVX512VL))))
        return -1;
      return 9597; /* avx2_lshrvv2di_mask */

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
        return 7690; /* lshrv32hi3_mask */
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
      return 9609; /* avx512bw_lshrvv32hi_mask */

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
        return 7694; /* lshrv16si3_mask */
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
      return 9577; /* avx512f_lshrvv16si_mask */

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
        return 7698; /* lshrv8di3_mask */
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
      return 9589; /* avx512f_lshrvv8di_mask */

    default:
      return -1;
    }
}

 int
recog_192 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case REG:
    case SUBREG:
    case MEM:
      switch (pattern486 (x2))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V32HFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 389 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
            return -1;
          return 2689; /* *subv32hf3_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16HFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 390 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2697; /* *subv16hf3_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8HFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 391 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
            return -1;
          return 2705; /* *subv8hf3_mask */

        case 3:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V16SFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2713; /* *subv16sf3_mask */

        case 4:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 392 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2721; /* *subv8sf3_mask */

        case 5:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1)))
            return -1;
          return 2729; /* *subv4sf3_mask */

        case 6:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8DFmode, operands)
   && (64 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))))
            return -1;
          return 2737; /* *subv8df3_mask */

        case 7:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)
   && (32 == 64 || TARGET_AVX512VL) && 1) && 
#line 393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))))
            return -1;
          return 2745; /* *subv4df3_mask */

        case 8:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 2660 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)
   && (16 == 64 || TARGET_AVX512VL) && 1) && 
#line 394 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))))
            return -1;
          return 2753; /* *subv2df3_mask */

        case 9:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V16SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7491; /* *subv16si3_mask */

        case 10:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7493; /* *subv8si3_mask */

        case 11:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4SImode, operands)) && 
#line 500 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7495; /* *subv4si3_mask */

        case 12:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V8DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7497; /* *subv8di3_mask */

        case 13:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7499; /* *subv4di3_mask */

        case 14:
          if (!(
#line 16298 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && ix86_binary_operator_ok (MINUS, V2DImode, operands)) && 
#line 501 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7501; /* *subv2di3_mask */

        case 15:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V64QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7503; /* *subv64qi3_mask */

        case 16:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7505; /* *subv16qi3_mask */

        case 17:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7507; /* *subv32qi3_mask */

        case 18:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V32HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 7509; /* *subv32hi3_mask */

        case 19:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7511; /* *subv16hi3_mask */

        case 20:
          if (!(
#line 16312 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512BW && ix86_binary_operator_ok (MINUS, V8HImode, operands)) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
            return -1;
          return 7513; /* *subv8hi3_mask */

        case 21:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))))
            return -1;
          return 10612; /* avx10_2_subbf16_v32bf_mask */

        case 22:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10620; /* avx10_2_subbf16_v16bf_mask */

        case 23:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 32123 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256)))
            return -1;
          return 10628; /* avx10_2_subbf16_v8bf_mask */

        case 24:
          if (!(
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16)))
            return -1;
          return 2765; /* avx512fp16_vmsubv8hf3 */

        case 25:
          if (!
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 2773; /* sse_vmsubv4sf3 */

        case 26:
          if (!(
#line 2709 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 479 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 2781; /* sse2_vmsubv2df3 */

        default:
          return -1;
        }

    case PLUS:
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != CONST_INT)
        return -1;
      x8 = XEXP (x6, 0);
      if (!rtx_equal_p (x8, operands[1]))
        return -1;
      x9 = XEXP (x6, 1);
      if (!rtx_equal_p (x9, operands[2]))
        return -1;
      switch (XWINT (x7, 0))
        {
        case 85L:
          if (pattern1110 (x2, 
E_V8SFmode) != 0
              || !(
#line 3506 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 3181; /* vec_addsubv8sf3 */

        case 5L:
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1110 (x2, 
E_V4SFmode) != 0
                  || !
#line 3506 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3))
                return -1;
              return 3182; /* vec_addsubv4sf3 */

            case E_V4DFmode:
              if (pattern1110 (x2, 
E_V4DFmode) != 0
                  || !(
#line 3506 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 3183; /* vec_addsubv4df3 */

            default:
              return -1;
            }

        case 1L:
          if (pattern1110 (x2, 
E_V2DFmode) != 0
              || !(
#line 3506 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return -1;
          return 3184; /* vec_addsubv2df3 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_201 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 4485; /* avx512fp16_vcvtuw2ph_v8hi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4508; /* avx512fp16_vcvtudq2ph_v8si_mask */

        case 2:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 695 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4524; /* avx512fp16_vcvtuqq2ph_v8di_mask */

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
          return 4492; /* avx512fp16_vcvtuw2ph_v16hi_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 7646 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && 1) && 
#line 694 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4516; /* avx512fp16_vcvtudq2ph_v16si_mask */

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
      return 4500; /* avx512fp16_vcvtuw2ph_v32hi_mask */

    case 3:
      if (pattern147 (x2, 
E_V16SFmode, 
E_V16SImode, 
E_HImode) != 0
          || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
        return -1;
      return 4827; /* floatunsv16siv16sf2_mask */

    case 4:
      switch (pattern893 (x2, 
E_V8SFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4831; /* floatunsv8siv8sf2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4979; /* floatunsv8div8sf2_mask */

        default:
          return -1;
        }

    case 5:
      switch (pattern894 (x2, 
E_V4SFmode))
        {
        case 0:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 8663 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && 1) && 
#line 539 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4834; /* floatunsv4siv4sf2_mask */

        case 1:
          if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9198 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 626 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4987; /* floatunsv4div4sf2_mask */

        default:
          return -1;
        }

    case 6:
      if (pattern773 (x2, 
E_V8DFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V8DImode:
          if (!nonimmediate_operand (operands[1], E_V8DImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4959; /* floatunsv8div8df2_mask */

        case E_V8SImode:
          if (!nonimmediate_operand (operands[1], E_V8SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9348 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
            return -1;
          return 4996; /* floatunsv8siv8df2_mask */

        default:
          return -1;
        }

    case 7:
      if (pattern773 (x2, 
E_V4DFmode, 
E_QImode) != 0)
        return -1;
      switch (GET_MODE (operands[1]))
        {
        case E_V4DImode:
          if (!nonimmediate_operand (operands[1], E_V4DImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9184 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ && 1) && 
#line 536 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4967; /* floatunsv4div4df2_mask */

        case E_V4SImode:
          if (!nonimmediate_operand (operands[1], E_V4SImode)
              || !(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 9348 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 470 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
            return -1;
          return 4998; /* floatunsv4siv4df2_mask */

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
      return 4972; /* floatunsv2div2df2_mask */

    case 9:
      if (!(
#line 84 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 9360 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 5000; /* floatunsv2siv2df2_mask */

    default:
      return -1;
    }
}

 int
recog_211 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V16SFmode:
      if (!memory_operand (operands[0], E_V16SFmode)
          || GET_MODE (x2) != E_V16SFmode
          || !register_operand (operands[1], E_V16SFmode)
          || !(
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2563; /* avx512f_movntv16sf */

    case E_V8SFmode:
      if (!memory_operand (operands[0], E_V8SFmode)
          || GET_MODE (x2) != E_V8SFmode
          || !register_operand (operands[1], E_V8SFmode)
          || !(
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 374 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2564; /* avx_movntv8sf */

    case E_V4SFmode:
      if (!memory_operand (operands[0], E_V4SFmode)
          || GET_MODE (x2) != E_V4SFmode
          || !register_operand (operands[1], E_V4SFmode)
          || !
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 2565; /* sse_movntv4sf */

    case E_V8DFmode:
      if (!memory_operand (operands[0], E_V8DFmode)
          || GET_MODE (x2) != E_V8DFmode
          || !register_operand (operands[1], E_V8DFmode)
          || !(
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2566; /* avx512f_movntv8df */

    case E_V4DFmode:
      if (!memory_operand (operands[0], E_V4DFmode)
          || GET_MODE (x2) != E_V4DFmode
          || !register_operand (operands[1], E_V4DFmode)
          || !(
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 375 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2567; /* avx_movntv4df */

    case E_V2DFmode:
      if (!memory_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !register_operand (operands[1], E_V2DFmode)
          || !(
#line 2019 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 376 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
        return -1;
      return 2568; /* sse2_movntv2df */

    case E_V8DImode:
      if (!memory_operand (operands[0], E_V8DImode)
          || GET_MODE (x2) != E_V8DImode
          || !register_operand (operands[1], E_V8DImode)
          || !(
#line 2029 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 614 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
        return -1;
      return 2569; /* avx512f_movntv8di */

    case E_V4DImode:
      if (!memory_operand (operands[0], E_V4DImode)
          || GET_MODE (x2) != E_V4DImode
          || !register_operand (operands[1], E_V4DImode)
          || !(
#line 2029 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 614 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 2570; /* avx_movntv4di */

    case E_V2DImode:
      if (!memory_operand (operands[0], E_V2DImode)
          || GET_MODE (x2) != E_V2DImode
          || !register_operand (operands[1], E_V2DImode)
          || !
#line 2029 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
        return -1;
      return 2571; /* sse2_movntv2di */

    default:
      return -1;
    }
}

 int
recog_218 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 1);
  if (!const_4_or_8_to_11_operand (x3, E_SImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  x5 = XEXP (x4, 0);
  x6 = XVECEXP (x5, 0, 2);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[3] = x6;
      x7 = XEXP (x4, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x4, 2);
          operands[5] = x8;
          operands[6] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1645 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4097; /* fma_fmaddsub_v32hf_maskz_1_round */

            case E_V16HFmode:
              if (pattern1645 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4101; /* fma_fmaddsub_v16hf_maskz_1_round */

            case E_V16SFmode:
              if (pattern1645 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4107; /* fma_fmaddsub_v16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1645 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4111; /* fma_fmaddsub_v8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1645 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4117; /* fma_fmaddsub_v8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1645 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6421 "../../src/gcc/config/i386/sse.md"
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4121; /* fma_fmaddsub_v4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x4, 2);
          operands[4] = x8;
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1587 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V32HFmode)
                  && register_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4125; /* avx512bw_fmaddsub_v32hf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V32HFmode)
                  || !nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4140; /* avx512bw_fmaddsub_v32hf_mask3_round */

            case E_V16HFmode:
              if (pattern1587 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16HFmode)
                  && register_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4127; /* avx512vl_fmaddsub_v16hf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V16HFmode)
                  || !nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4142; /* avx512vl_fmaddsub_v16hf_mask3_round */

            case E_V16SFmode:
              if (pattern1587 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V16SFmode)
                  && register_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4130; /* avx512f_fmaddsub_v16sf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V16SFmode)
                  || !nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4145; /* avx512f_fmaddsub_v16sf_mask3_round */

            case E_V8SFmode:
              if (pattern1587 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8SFmode)
                  && register_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4132; /* avx512vl_fmaddsub_v8sf_mask_round */
              if (!nonimmediate_operand (operands[1], E_V8SFmode)
                  || !nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4147; /* avx512vl_fmaddsub_v8sf_mask3_round */

            case E_V8DFmode:
              if (pattern1587 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V8DFmode)
                  && register_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4135; /* avx512f_fmaddsub_v8df_mask_round */
              if (!nonimmediate_operand (operands[1], E_V8DFmode)
                  || !nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4150; /* avx512f_fmaddsub_v8df_mask3_round */

            case E_V4DFmode:
              if (pattern1587 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[1], E_V4DFmode)
                  && register_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6440 "../../src/gcc/config/i386/sse.md"
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
                return 4137; /* avx512vl_fmaddsub_v4df_mask_round */
              if (!nonimmediate_operand (operands[1], E_V4DFmode)
                  || !nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6458 "../../src/gcc/config/i386/sse.md"
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
              return 4152; /* avx512vl_fmaddsub_v4df_mask3_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[3] = x9;
      x7 = XEXP (x4, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          operands[4] = x7;
          x8 = XEXP (x4, 2);
          operands[5] = x8;
          operands[6] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1646 (x2, 
E_V32HFmode, 
E_SImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4161; /* fma_fmsubadd_v32hf_maskz_1_round */

            case E_V16HFmode:
              if (pattern1646 (x2, 
E_V16HFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4165; /* fma_fmsubadd_v16hf_maskz_1_round */

            case E_V16SFmode:
              if (pattern1646 (x2, 
E_V16SFmode, 
E_HImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4171; /* fma_fmsubadd_v16sf_maskz_1_round */

            case E_V8SFmode:
              if (pattern1646 (x2, 
E_V8SFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4175; /* fma_fmsubadd_v8sf_maskz_1_round */

            case E_V8DFmode:
              if (pattern1646 (x2, 
E_V8DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4181; /* fma_fmsubadd_v8df_maskz_1_round */

            case E_V4DFmode:
              if (pattern1646 (x2, 
E_V4DFmode, 
E_QImode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6491 "../../src/gcc/config/i386/sse.md"
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
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4185; /* fma_fmsubadd_v4df_maskz_1_round */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          x8 = XEXP (x4, 2);
          operands[4] = x8;
          operands[5] = x3;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1588 (x2, 
E_V32HFmode, 
E_SImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V32HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return 4189; /* avx512bw_fmsubadd_v32hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V32HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 524 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4207; /* avx512bw_fmsubadd_v32hf_mask3_round */

            case E_V16HFmode:
              if (pattern1588 (x2, 
E_V16HFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V16HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return 4191; /* avx512vl_fmsubadd_v16hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V16HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 525 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4209; /* avx512vl_fmsubadd_v16hf_mask3_round */

            case E_V8HFmode:
              if (pattern1588 (x2, 
E_V8HFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8HFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return 4193; /* avx512fp16_fmsubadd_v8hf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8HFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 526 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4211; /* avx512fp16_fmsubadd_v8hf_mask3_round */

            case E_V16SFmode:
              if (pattern1588 (x2, 
E_V16SFmode, 
E_HImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V16SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return 4195; /* avx512f_fmsubadd_v16sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V16SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4213; /* avx512f_fmsubadd_v16sf_mask3_round */

            case E_V8SFmode:
              if (pattern1588 (x2, 
E_V8SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4197; /* avx512vl_fmsubadd_v8sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4215; /* avx512vl_fmsubadd_v8sf_mask3_round */

            case E_V4SFmode:
              if (pattern1588 (x2, 
E_V4SFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V4SFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4199; /* avx512vl_fmsubadd_v4sf_mask_round */
              if (!nonimmediate_operand (operands[3], E_V4SFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 527 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4217; /* avx512vl_fmsubadd_v4sf_mask3_round */

            case E_V8DFmode:
              if (pattern1588 (x2, 
E_V8DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V8DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return 4201; /* avx512f_fmsubadd_v8df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V8DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4219; /* avx512f_fmsubadd_v8df_mask3_round */

            case E_V4DFmode:
              if (pattern1588 (x2, 
E_V4DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V4DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4203; /* avx512vl_fmsubadd_v4df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V4DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4221; /* avx512vl_fmsubadd_v4df_mask3_round */

            case E_V2DFmode:
              if (pattern1588 (x2, 
E_V2DFmode, 
E_QImode) != 0)
                return -1;
              if (register_operand (operands[3], E_V2DFmode)
                  && rtx_equal_p (x7, operands[1])
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6511 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return 4205; /* avx512vl_fmsubadd_v2df_mask_round */
              if (!nonimmediate_operand (operands[3], E_V2DFmode)
                  || !rtx_equal_p (x7, operands[3])
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6530 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4223; /* avx512vl_fmsubadd_v2df_mask3_round */

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
recog_230 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XVECEXP (x2, 0, 1);
  operands[4] = x5;
  if (!const_4_or_8_to_11_operand (operands[4], E_SImode))
    return -1;
  x6 = XEXP (x3, 0);
  switch (GET_CODE (x6))
    {
    case REG:
    case SUBREG:
      operands[1] = x6;
      x7 = XEXP (x3, 2);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1408 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3808; /* *fma_fmadd_v32hf_round */

            case E_V16HFmode:
              if (pattern1408 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3812; /* *fma_fmadd_v16hf_round */

            case E_V16SFmode:
              if (pattern1408 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3820; /* *fma_fmadd_v16sf_round */

            case E_V8SFmode:
              if (pattern1408 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3824; /* *fma_fmadd_v8sf_round */

            case E_V8DFmode:
              if (pattern1408 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3831; /* *fma_fmadd_v8df_round */

            case E_V4DFmode:
              if (pattern1408 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 5942 "../../src/gcc/config/i386/sse.md"
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3835; /* *fma_fmadd_v4df_round */

            default:
              return -1;
            }

        case NEG:
          x8 = XEXP (x7, 0);
          operands[3] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1409 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3877; /* *fma_fmsub_v32hf_round */

            case E_V16HFmode:
              if (pattern1409 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3881; /* *fma_fmsub_v16hf_round */

            case E_V16SFmode:
              if (pattern1409 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3889; /* *fma_fmsub_v16sf_round */

            case E_V8SFmode:
              if (pattern1409 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3893; /* *fma_fmsub_v8sf_round */

            case E_V8DFmode:
              if (pattern1409 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3900; /* *fma_fmsub_v8df_round */

            case E_V4DFmode:
              if (pattern1409 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6045 "../../src/gcc/config/i386/sse.md"
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3904; /* *fma_fmsub_v4df_round */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NEG:
      x9 = XEXP (x6, 0);
      operands[1] = x9;
      x7 = XEXP (x3, 2);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
          operands[3] = x7;
          switch (GET_MODE (operands[0]))
            {
            case E_V32HFmode:
              if (pattern1410 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 3946; /* *fma_fnmadd_v32hf_round */

            case E_V16HFmode:
              if (pattern1410 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 3950; /* *fma_fnmadd_v16hf_round */

            case E_V16SFmode:
              if (pattern1410 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3958; /* *fma_fnmadd_v16sf_round */

            case E_V8SFmode:
              if (pattern1410 (x2, 
E_V8SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3962; /* *fma_fnmadd_v8sf_round */

            case E_V8DFmode:
              if (pattern1410 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 3969; /* *fma_fnmadd_v8df_round */

            case E_V4DFmode:
              if (pattern1410 (x2, 
E_V4DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6151 "../../src/gcc/config/i386/sse.md"
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 3973; /* *fma_fnmadd_v4df_round */

            default:
              return -1;
            }

        case NEG:
          x8 = XEXP (x7, 0);
          operands[3] = x8;
          switch (GET_MODE (operands[0]))
            {
            case E_V4SFmode:
              if (pattern1352 (x2, 
E_V4SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4013; /* *fma_fnmsub_v4sf */

            case E_V2DFmode:
              if (pattern1352 (x2, 
E_V2DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return -1;
              return 4017; /* *fma_fnmsub_v2df */

            case E_V8SFmode:
              if (pattern1411 (x2, 
E_V8SFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V8SFmode)
                  && nonimmediate_operand (operands[2], E_V8SFmode)
                  && nonimmediate_operand (operands[3], E_V8SFmode)
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return 4021; /* *fma_fnmsub_v8sf */
              if (!register_operand (operands[1], E_V8SFmode)
                  || !register_operand (operands[2], E_V8SFmode)
                  || !register_operand (operands[3], E_V8SFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5932 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4045; /* *fma_fnmsub_v8sf_round */

            case E_V4DFmode:
              if (pattern1411 (x2, 
E_V4DFmode) != 0)
                return -1;
              if (nonimmediate_operand (operands[1], E_V4DFmode)
                  && nonimmediate_operand (operands[2], E_V4DFmode)
                  && nonimmediate_operand (operands[3], E_V4DFmode)
                  && (
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && 
#line 6226 "../../src/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)))
                return 4025; /* *fma_fnmsub_v4df */
              if (!register_operand (operands[1], E_V4DFmode)
                  || !register_operand (operands[2], E_V4DFmode)
                  || !register_operand (operands[3], E_V4DFmode)
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5934 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL))))
                return -1;
              return 4056; /* *fma_fnmsub_v4df_round */

            case E_V32HFmode:
              if (pattern1412 (x2, 
E_V32HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5927 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_EVEX512))))
                return -1;
              return 4029; /* *fma_fnmsub_v32hf_round */

            case E_V16HFmode:
              if (pattern1412 (x2, 
E_V16HFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5928 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512FP16 && TARGET_AVX512VL))))
                return -1;
              return 4033; /* *fma_fnmsub_v16hf_round */

            case E_V16SFmode:
              if (pattern1412 (x2, 
E_V16SFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5931 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4041; /* *fma_fnmsub_v16sf_round */

            case E_V8DFmode:
              if (pattern1412 (x2, 
E_V8DFmode) != 0
                  || !(
#line 234 "../../src/gcc/config/i386/subst.md"
(TARGET_AVX512F) && (
#line 6259 "../../src/gcc/config/i386/sse.md"
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
#line 5933 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512))))
                return -1;
              return 4052; /* *fma_fnmsub_v8df_round */

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
recog_248 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XVECEXP (x3, 0, 2);
  switch (GET_CODE (x4))
    {
    case LT:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (pattern657 (x3))
        {
        case 0:
          if ((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3063; /* *minmaxv8sf3_2 */
          break;

        case 1:
          if (
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))))
            return 3064; /* *minmaxv4sf3_2 */
          break;

        case 2:
          if ((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 3065; /* *minmaxv4df3_2 */
          break;

        case 3:
          if ((
#line 3360 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_pre_reload_split ()
   && ((rtx_equal_p (operands[1], operands[3])
	&& rtx_equal_p (operands[2], operands[4]))
       || (rtx_equal_p (operands[1], operands[4])
	   && rtx_equal_p (operands[2], operands[3])))) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 3066; /* *minmaxv2df3_2 */
          break;

        case 4:
          if ((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8693; /* *avx_blendvps256_lt */
          break;

        case 5:
          if (
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8694; /* *sse4_1_blendvps_lt */
          break;

        case 6:
          if ((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8695; /* *avx_blendvpd256_lt */
          break;

        case 7:
          if ((
#line 23594 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8696; /* *sse4_1_blendvpd_lt */
          break;

        case 8:
          if ((
#line 23924 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8740; /* *avx2_pblendvb_lt */
          break;

        case 9:
          if (
#line 23924 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8741; /* *sse4_1_pblendvb_lt */
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != SUBREG)
        return -1;
      switch (pattern659 (x3))
        {
        case 0:
          if (!(
#line 23974 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8744; /* *avx2_pblendvb_lt_subreg_not */

        case 1:
          if (!
#line 23974 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()))
            return -1;
          return 8745; /* *sse4_1_pblendvb_lt_subreg_not */

        default:
          return -1;
        }

    case REG:
    case SUBREG:
      operands[3] = x4;
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      x7 = XVECEXP (x3, 0, 1);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_V8SFmode:
          if (pattern1025 (x3, 
E_V8SFmode) == 0
              && (
#line 23530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8687; /* avx_blendvps256 */
          break;

        case E_V4SFmode:
          if (pattern1025 (x3, 
E_V4SFmode) == 0
              && 
#line 23530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8688; /* sse4_1_blendvps */
          break;

        case E_V4DFmode:
          if (pattern1025 (x3, 
E_V4DFmode) == 0
              && (
#line 23530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8689; /* avx_blendvpd256 */
          break;

        case E_V2DFmode:
          if (pattern1025 (x3, 
E_V2DFmode) == 0
              && (
#line 23530 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8690; /* sse4_1_blendvpd */
          break;

        default:
          break;
        }
      operands[1] = x5;
      operands[2] = x7;
      if (GET_CODE (x4) == SUBREG
          && known_eq (SUBREG_BYTE (x4), 0))
        {
          x6 = XEXP (x4, 0);
          switch (GET_CODE (x6))
            {
            case LT:
              x8 = XEXP (x6, 0);
              operands[3] = x8;
              switch (pattern1226 (x3))
                {
                case 0:
                  if (
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8701; /* *sse4_1_blendvps_ltint */
                  break;

                case 1:
                  if (
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8702; /* *sse4_1_blendvpd_ltint */
                  break;

                case 2:
                  if ((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8703; /* *avx_blendvps256_ltint */
                  break;

                case 3:
                  if ((
#line 23654 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8704; /* *avx_blendvpd256_ltint */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x8) == SUBREG)
                {
                  switch (pattern1227 (x3))
                    {
                    case 0:
                      if (
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8709; /* *sse4_1_blendvps_not_ltint */
                      break;

                    case 1:
                      if (
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8710; /* *sse4_1_blendvpd_not_ltint */
                      break;

                    case 2:
                      if ((
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8711; /* *avx_blendvps256_not_ltint */
                      break;

                    case 3:
                      if ((
#line 23721 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8712; /* *avx_blendvpd256_not_ltint */
                      break;

                    default:
                      break;
                    }
                }
              break;

            case GT:
              x8 = XEXP (x6, 0);
              operands[3] = x8;
              switch (pattern1228 (x3))
                {
                case 0:
                  if (
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8705; /* *sse4_1_blendvps_gtint */
                  break;

                case 1:
                  if (
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
                    return 8706; /* *sse4_1_blendvpd_gtint */
                  break;

                case 2:
                  if ((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8707; /* *avx_blendvps256_gtint */
                  break;

                case 3:
                  if ((
#line 23686 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                    return 8708; /* *avx_blendvpd256_gtint */
                  break;

                default:
                  break;
                }
              if (GET_CODE (x8) == SUBREG)
                {
                  switch (pattern1229 (x3))
                    {
                    case 0:
                      if (
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8713; /* *sse4_1_blendvps_not_gtint */
                      break;

                    case 1:
                      if (
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()))
                        return 8714; /* *sse4_1_blendvpd_not_gtint */
                      break;

                    case 2:
                      if ((
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8715; /* *avx_blendvps256_not_gtint */
                      break;

                    case 3:
                      if ((
#line 23747 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_pre_reload_split ()) && 
#line 611 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                        return 8716; /* *avx_blendvpd256_not_gtint */
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
      switch (GET_MODE (operands[0]))
        {
        case E_V32QImode:
          if (pattern1025 (x3, 
E_V32QImode) != 0
              || !(
#line 23873 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8738; /* avx2_pblendvb */

        case E_V16QImode:
          if (pattern1025 (x3, 
E_V16QImode) != 0
              || !
#line 23873 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return -1;
          return 8739; /* sse4_1_pblendvb */

        default:
          return -1;
        }

    case GT:
      x5 = XVECEXP (x3, 0, 0);
      operands[1] = x5;
      switch (pattern662 (x3))
        {
        case 0:
          if ((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 421 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8697; /* *avx_blendvps256_gt */
          break;

        case 1:
          if (
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8698; /* *sse4_1_blendvps_gt */
          break;

        case 2:
          if ((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return 8699; /* *avx_blendvpd256_gt */
          break;

        case 3:
          if ((
#line 23620 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 422 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
            return 8700; /* *sse4_1_blendvpd_gt */
          break;

        case 4:
          if ((
#line 23948 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return 8742; /* *avx2_pblendvb_gt */
          break;

        case 5:
          if (
#line 23948 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
            return 8743; /* *sse4_1_pblendvb_gt */
          break;

        default:
          break;
        }
      x6 = XEXP (x4, 0);
      if (GET_CODE (x6) != SUBREG)
        return -1;
      switch (pattern664 (x3))
        {
        case 0:
          if (!(
#line 23996 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 32
   && ix86_pre_reload_split ()) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
            return -1;
          return 8746; /* *avx2_pblendvb_gt_subreg_not */

        case 1:
          if (!
#line 23996 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && GET_MODE_CLASS (GET_MODE (operands[3])) == MODE_VECTOR_INT
   && GET_MODE_SIZE (GET_MODE (operands[3])) == 16
   && ix86_pre_reload_split ()))
            return -1;
          return 8747; /* *sse4_1_pblendvb_gt_subreg_not */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_251 (rtx x1 ATTRIBUTE_UNUSED,
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
  x5 = XVECEXP (x3, 0, 2);
  operands[2] = x5;
  x6 = XVECEXP (x3, 0, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  switch (GET_MODE (operands[0]))
    {
    case E_V16SImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16SImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9909; /* avx512f_compressstorev16si_mask */

    case E_V16SFmode:
      if (pattern916 (x3, 
E_HImode, 
E_V16SFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1009 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9910; /* avx512f_compressstorev16sf_mask */

    case E_V8DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8DImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9911; /* avx512f_compressstorev8di_mask */

    case E_V8DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V8DFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1010 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9912; /* avx512f_compressstorev8df_mask */

    case E_V8SImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8SImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9913; /* avx512vl_compressstorev8si_mask */

    case E_V8SFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V8SFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1011 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9914; /* avx512vl_compressstorev8sf_mask */

    case E_V4DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V4DImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9915; /* avx512vl_compressstorev4di_mask */

    case E_V4DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V4DFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1012 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9916; /* avx512vl_compressstorev4df_mask */

    case E_V4SImode:
      if (pattern916 (x3, 
E_QImode, 
E_V4SImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9917; /* avx512vl_compressstorev4si_mask */

    case E_V4SFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V4SFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1013 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9918; /* avx512vl_compressstorev4sf_mask */

    case E_V2DImode:
      if (pattern916 (x3, 
E_QImode, 
E_V2DImode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9919; /* avx512vl_compressstorev2di_mask */

    case E_V2DFmode:
      if (pattern916 (x3, 
E_QImode, 
E_V2DFmode) != 0
          || !(
#line 29693 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1014 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9920; /* avx512vl_compressstorev2df_mask */

    case E_V64QImode:
      if (pattern916 (x3, 
E_DImode, 
E_V64QImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9921; /* compressstorev64qi_mask */

    case E_V16QImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16QImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9922; /* compressstorev16qi_mask */

    case E_V32QImode:
      if (pattern916 (x3, 
E_SImode, 
E_V32QImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 317 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9923; /* compressstorev32qi_mask */

    case E_V32HImode:
      if (pattern916 (x3, 
E_SImode, 
E_V32HImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 9924; /* compressstorev32hi_mask */

    case E_V16HImode:
      if (pattern916 (x3, 
E_HImode, 
E_V16HImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9925; /* compressstorev16hi_mask */

    case E_V8HImode:
      if (pattern916 (x3, 
E_QImode, 
E_V8HImode) != 0
          || !(
#line 29707 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 318 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 9926; /* compressstorev8hi_mask */

    default:
      return -1;
    }
}

 int
recog_253 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32HFmode:
      if (pattern150 (x3, 
E_V32HFmode) != 0
          || !(
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 531 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10941; /* avx10_2_minmaxpv32hf */

    case E_V16HFmode:
      if (pattern150 (x3, 
E_V16HFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10945; /* avx10_2_minmaxpv16hf */

    case E_V8HFmode:
      if (pattern150 (x3, 
E_V8HFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10949; /* avx10_2_minmaxpv8hf */

    case E_V16SFmode:
      if (pattern150 (x3, 
E_V16SFmode) != 0
          || !(
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 532 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10953; /* avx10_2_minmaxpv16sf */

    case E_V8SFmode:
      if (pattern150 (x3, 
E_V8SFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10957; /* avx10_2_minmaxpv8sf */

    case E_V4SFmode:
      if (pattern150 (x3, 
E_V4SFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10961; /* avx10_2_minmaxpv4sf */

    case E_V8DFmode:
      if (pattern150 (x3, 
E_V8DFmode) != 0
          || !(
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 533 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512)))
        return -1;
      return 10965; /* avx10_2_minmaxpv8df */

    case E_V4DFmode:
      if (pattern150 (x3, 
E_V4DFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10969; /* avx10_2_minmaxpv4df */

    case E_V2DFmode:
      if (pattern150 (x3, 
E_V2DFmode) != 0
          || !
#line 32648 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 10973; /* avx10_2_minmaxpv2df */

    default:
      return -1;
    }
}

 int
recog_257 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (pattern173 (x1))
    {
    case 0:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10204; /* vpshld_v32hi */

    case 1:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10206; /* vpshld_v16si */

    case 2:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 757 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
        return -1;
      return 10208; /* vpshld_v8di */

    case 3:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10210; /* vpshld_v16hi */

    case 4:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 758 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10212; /* vpshld_v8si */

    case 5:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10214; /* vpshld_v4di */

    case 6:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 759 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10216; /* vpshld_v8hi */

    case 7:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10218; /* vpshld_v4si */

    case 8:
      if (!(
#line 30420 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VBMI2) && 
#line 760 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL)))
        return -1;
      return 10220; /* vpshld_v2di */

    default:
      return -1;
    }
}

 int
recog_262 (rtx x1 ATTRIBUTE_UNUSED,
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
    case E_V32QImode:
      if (pattern150 (x3, 
E_V32QImode) != 0)
        return -1;
      if ((
#line 23808 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 629 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2)))
        return 8724; /* avx2_mpsadbw */
      if (!(
#line 23842 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256) && 
#line 600 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
        return -1;
      return 8728; /* *avx2_mpsadbw */

    case E_V16QImode:
      if (pattern150 (x3, 
E_V16QImode) != 0)
        return -1;
      if (
#line 23808 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
        return 8725; /* sse4_1_mpsadbw */
      if (!
#line 23842 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_256))
        return -1;
      return 8730; /* *sse4_1_mpsadbw */

    case E_V64QImode:
      if (pattern150 (x3, 
E_V64QImode) != 0
          || !
#line 23830 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX10_2_512))
        return -1;
      return 8726; /* avx10_2_mpsadbw */

    default:
      return -1;
    }
}

 int
recog_267 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x2, 0);
  operands[2] = x5;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  switch (XVECLEN (x4, 0))
    {
    case 2:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 3])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (!nonimmediate_operand (operands[0], E_V4SFmode)
              || GET_MODE (x2) != E_V4SFmode
              || !nonimmediate_operand (operands[2], E_V2SFmode)
              || GET_MODE (x3) != E_V2SFmode
              || !nonimmediate_operand (operands[1], E_V4SFmode)
              || !
#line 11688 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5283; /* sse_loadlps */

        case E_V4DImode:
          if (pattern1230 (x2, 
E_V4DImode, 
E_V2DImode) != 0
              || !
#line 28445 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9465; /* vec_set_lo_v4di */

        case E_V4DFmode:
          if (pattern1230 (x2, 
E_V4DFmode, 
E_V2DFmode) != 0
              || !
#line 28445 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9467; /* vec_set_lo_v4df */

        default:
          return -1;
        }

    case 1:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
          || !nonimmediate_operand (operands[0], E_V2DFmode)
          || GET_MODE (x2) != E_V2DFmode
          || !nonimmediate_operand (operands[2], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !nonimm_or_0_operand (operands[1], E_V2DFmode)
          || !
#line 14800 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 7219; /* sse2_loadlpd */

    case 8:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 8])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 9])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 10]
          || pattern1231 (x4, 
15, 
14, 
13, 
12, 
11) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1230 (x2, 
E_V16SFmode, 
E_V8SFmode) != 0
              || !(
#line 20108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8401; /* vec_set_lo_v16sf */

        case E_V16SImode:
          if (pattern1230 (x2, 
E_V16SImode, 
E_V8SImode) != 0
              || !(
#line 20108 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8403; /* vec_set_lo_v16si */

        case E_V16HImode:
          if (pattern1230 (x2, 
E_V16HImode, 
E_V8HImode) != 0
              || !
#line 28542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9481; /* vec_set_lo_v16hi */

        case E_V16HFmode:
          if (pattern1230 (x2, 
E_V16HFmode, 
E_V8HFmode) != 0
              || !
#line 28542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9482; /* vec_set_lo_v16hf */

        case E_V16BFmode:
          if (pattern1230 (x2, 
E_V16BFmode, 
E_V8BFmode) != 0
              || !
#line 28542 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9483; /* vec_set_lo_v16bf */

        default:
          return -1;
        }

    case 4:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 5])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 6])
        return -1;
      x10 = XVECEXP (x4, 0, 3);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 7])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1230 (x2, 
E_V8DFmode, 
E_V4DFmode) != 0
              || !(
#line 20140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8409; /* vec_set_lo_v8df */

        case E_V8DImode:
          if (pattern1230 (x2, 
E_V8DImode, 
E_V4DImode) != 0
              || !(
#line 20140 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8411; /* vec_set_lo_v8di */

        case E_V8SImode:
          if (pattern1230 (x2, 
E_V8SImode, 
E_V4SImode) != 0
              || !
#line 28494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9473; /* vec_set_lo_v8si */

        case E_V8SFmode:
          if (pattern1230 (x2, 
E_V8SFmode, 
E_V4SFmode) != 0
              || !
#line 28494 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9475; /* vec_set_lo_v8sf */

        default:
          return -1;
        }

    case 16:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 16])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 17])
        return -1;
      x9 = XVECEXP (x4, 0, 2);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 18]
          || pattern1231 (x4, 
23, 
22, 
21, 
20, 
19) != 0)
        return -1;
      x11 = XVECEXP (x4, 0, 8);
      if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 24])
        return -1;
      x12 = XVECEXP (x4, 0, 9);
      if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 25])
        return -1;
      x13 = XVECEXP (x4, 0, 10);
      if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 26])
        return -1;
      x14 = XVECEXP (x4, 0, 11);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 27])
        return -1;
      x15 = XVECEXP (x4, 0, 12);
      if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 28])
        return -1;
      x16 = XVECEXP (x4, 0, 13);
      if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 29])
        return -1;
      x17 = XVECEXP (x4, 0, 14);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 30])
        return -1;
      x18 = XVECEXP (x4, 0, 15);
      if (x18 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || pattern1230 (x2, 
E_V32QImode, 
E_V16QImode) != 0
          || !
#line 28590 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9487; /* vec_set_lo_v32qi */

    default:
      return -1;
    }
}

 int
recog_270 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PARALLEL)
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  x6 = XEXP (x2, 1);
  operands[2] = x6;
  switch (XVECLEN (x4, 0))
    {
    case 1:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      switch (GET_CODE (operands[2]))
        {
        case CONST_INT:
        case CONST_DOUBLE:
        case CONST_VECTOR:
          switch (GET_MODE (operands[0]))
            {
            case E_V2DImode:
              if (pattern1139 (x2, 
E_DImode, 
E_V2DImode) != 0
                  || !
#line 1845 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 2554; /* *sse2_movq128_v2di */

            case E_V2DFmode:
              if (pattern1139 (x2, 
E_DFmode, 
E_V2DFmode) != 0
                  || !
#line 1845 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
                return -1;
              return 2555; /* *sse2_movq128_v2df */

            default:
              return -1;
            }

        case REG:
        case SUBREG:
        case MEM:
          if (!nonimmediate_operand (operands[2], E_DFmode)
              || pattern1140 (x2, 
E_V2DFmode, 
E_DFmode) != 0
              || !
#line 14741 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
            return -1;
          return 7218; /* sse2_loadhpd */

        default:
          return -1;
        }

    case 2:
      x7 = XVECEXP (x4, 0, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x8 = XVECEXP (x4, 0, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V4SFmode:
          if (pattern1140 (x2, 
E_V4SFmode, 
E_V2SFmode) != 0
              || !nonimmediate_operand (operands[2], E_V2SFmode)
              || !
#line 11635 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 5281; /* sse_loadhps */

        case E_V4DImode:
          if (pattern1141 (x2, 
E_V2DImode, 
E_V4DImode) != 0
              || !
#line 28469 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9469; /* vec_set_hi_v4di */

        case E_V4DFmode:
          if (pattern1141 (x2, 
E_V2DFmode, 
E_V4DFmode) != 0
              || !
#line 28469 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
            return -1;
          return 9471; /* vec_set_hi_v4df */

        default:
          return -1;
        }

    case 8:
      if (pattern670 (x4) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1141 (x2, 
E_V8SFmode, 
E_V16SFmode) != 0
              || !(
#line 20125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8405; /* vec_set_hi_v16sf */

        case E_V16SImode:
          if (pattern1141 (x2, 
E_V8SImode, 
E_V16SImode) != 0
              || !(
#line 20125 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512DQ) && 
#line 721 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8407; /* vec_set_hi_v16si */

        case E_V16HImode:
          if (pattern1141 (x2, 
E_V8HImode, 
E_V16HImode) != 0
              || !
#line 28564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9484; /* vec_set_hi_v16hi */

        case E_V16HFmode:
          if (pattern1141 (x2, 
E_V8HFmode, 
E_V16HFmode) != 0
              || !
#line 28564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9485; /* vec_set_hi_v16hf */

        case E_V16BFmode:
          if (pattern1141 (x2, 
E_V8BFmode, 
E_V16BFmode) != 0
              || !
#line 28564 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9486; /* vec_set_hi_v16bf */

        default:
          return -1;
        }

    case 4:
      if (pattern671 (x4, 
3, 
2, 
1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V8DFmode:
          if (pattern1141 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
              || !(
#line 20155 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8413; /* vec_set_hi_v8df */

        case E_V8DImode:
          if (pattern1141 (x2, 
E_V4DImode, 
E_V8DImode) != 0
              || !(
#line 20155 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 717 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 8415; /* vec_set_hi_v8di */

        case E_V8SImode:
          if (pattern1141 (x2, 
E_V4SImode, 
E_V8SImode) != 0
              || !
#line 28517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9477; /* vec_set_hi_v8si */

        case E_V8SFmode:
          if (pattern1141 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
              || !
#line 28517 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 9479; /* vec_set_hi_v8sf */

        default:
          return -1;
        }

    case 16:
      if (pattern791 (x4, 
6, 
5, 
4) != 0
          || pattern1482 (x4, 
11, 
10, 
9, 
8, 
7) != 0
          || pattern1141 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 28616 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
        return -1;
      return 9488; /* vec_set_hi_v32qi */

    default:
      return -1;
    }
}

 int
recog_274 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  x5 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 0);
  switch (XWINT (x6, 0))
    {
    case 6L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 7L
          || XWINT (x4, 0) != 2L
          || XWINT (x5, 0) != 3L
          || pattern1558 (x2) != 0
          || !
#line 11073 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))))
        return -1;
      return 5246; /* sse_movhlps */

    case 0L:
      x7 = XVECEXP (x3, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          if (XWINT (x4, 0) != 4L
              || XWINT (x5, 0) != 5L
              || pattern1558 (x2) != 0
              || !
#line 11118 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)))
            return -1;
          return 5247; /* sse_movlhps */

        case 4L:
          switch (XWINT (x4, 0))
            {
            case 1L:
              if (XWINT (x5, 0) != 5L
                  || pattern1316 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
                  || !
#line 11335 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
                return -1;
              return 5262; /* vec_interleave_lowv4sf */

            case 2L:
              if (XWINT (x5, 0) != 6L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V4DFmode:
                  if (!register_operand (operands[0], E_V4DFmode)
                      || GET_MODE (x2) != E_V4DFmode)
                    return -1;
                  x8 = XEXP (x2, 0);
                  if (GET_MODE (x8) != E_V8DFmode)
                    return -1;
                  if (nonimmediate_operand (operands[1], E_V4DFmode))
                    {
                      x9 = XEXP (x8, 1);
                      if (rtx_equal_p (x9, operands[1])
                          && 
#line 13482 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                        return 5415; /* avx_movddup256 */
                    }
                  if (!register_operand (operands[1], E_V4DFmode))
                    return -1;
                  x9 = XEXP (x8, 1);
                  operands[2] = x9;
                  if (!nonimmediate_operand (operands[2], E_V4DFmode)
                      || !
#line 13496 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                    return -1;
                  return 5417; /* avx_unpcklpd256 */

                case E_V4DImode:
                  if (pattern1618 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                      || !
#line 14528 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                    return -1;
                  return 7206; /* avx2_interleave_lowv4di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 0L:
          if (XWINT (x4, 0) != 6L
              || XWINT (x5, 0) != 6L
              || pattern1559 (x2) != 0
              || !
#line 11425 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && 1))
            return -1;
          return 5271; /* sse3_movsldup */

        default:
          return -1;
        }

    case 2L:
      x7 = XVECEXP (x3, 0, 1);
      if (XWINT (x7, 0) != 6L
          || XWINT (x4, 0) != 3L
          || XWINT (x5, 0) != 7L
          || pattern1316 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 11230 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE && 1))
        return -1;
      return 5255; /* vec_interleave_highv4sf */

    case 1L:
      if (XWINT (x5, 0) != 7L)
        return -1;
      x7 = XVECEXP (x3, 0, 1);
      switch (XWINT (x7, 0))
        {
        case 1L:
          if (XWINT (x4, 0) != 7L
              || pattern1559 (x2) != 0
              || !
#line 11372 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE3 && 1))
            return -1;
          return 5265; /* sse3_movshdup */

        case 5L:
          if (XWINT (x4, 0) != 3L)
            return -1;
          x8 = XEXP (x2, 0);
          x9 = XEXP (x8, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_V4DFmode:
              if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0
                  || !
#line 13352 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
                return -1;
              return 5407; /* avx_unpckhpd256 */

            case E_V4DImode:
              if (pattern1414 (x2, 
E_V4DImode, 
E_V8DImode) != 0
                  || !
#line 14478 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1))
                return -1;
              return 7200; /* avx2_interleave_highv4di */

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
recog_275 (rtx x1 ATTRIBUTE_UNUSED,
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
  x6 = XVECEXP (x5, 0, 1);
  operands[4] = x6;
  x7 = XVECEXP (x5, 0, 2);
  operands[5] = x7;
  x8 = XVECEXP (x5, 0, 3);
  operands[6] = x8;
  switch (GET_MODE (operands[0]))
    {
    case E_V4SImode:
      if (pattern1522 (x2, 
E_V4SImode, 
E_V8SImode) != 0
          || !
#line 11569 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 5278; /* sse_shufps_v4si */

    case E_V4SFmode:
      if (pattern1522 (x2, 
E_V4SFmode, 
E_V8SFmode) != 0
          || !
#line 11569 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
        return -1;
      return 5279; /* sse_shufps_v4sf */

    case E_V4DFmode:
      if (pattern1414 (x2, 
E_V4DFmode, 
E_V8DFmode) != 0)
        return -1;
      if (const_0_to_1_operand (operands[3], E_VOIDmode)
          && const_4_to_5_operand (operands[4], E_VOIDmode)
          && const_2_to_3_operand (operands[5], E_VOIDmode)
          && const_6_to_7_operand (operands[6], E_VOIDmode)
          && 
#line 14411 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && 1))
        return 7197; /* avx_shufpd256_1 */
      if (!const_0_to_3_operand (operands[3], E_VOIDmode)
          || !const_0_to_3_operand (operands[4], E_VOIDmode)
          || !const_4_to_7_operand (operands[5], E_VOIDmode)
          || !const_4_to_7_operand (operands[6], E_VOIDmode)
          || !
#line 20192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1))
        return -1;
      return 8419; /* *avx512dq_shuf_f64x2_1 */

    case E_V4DImode:
      if (pattern1414 (x2, 
E_V4DImode, 
E_V8DImode) != 0
          || pattern1521 () != 0
          || !
#line 20192 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512VL
   && (INTVAL (operands[3]) & 1) == 0
   && INTVAL (operands[3]) == INTVAL (operands[4]) - 1
   && (INTVAL (operands[5]) & 1) == 0
   && INTVAL (operands[5]) == INTVAL (operands[6]) - 1))
        return -1;
      return 8417; /* *avx512dq_shuf_i64x2_1 */

    default:
      return -1;
    }
}

 int
recog_276 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_274 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  operands[3] = x4;
  res = recog_275 (x1, insn, pnum_clobbers);
  if (res >= 0)
    return res;
  if (GET_CODE (x5) != CONST_INT)
    return -1;
  x6 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x6) != CONST_INT)
    return -1;
  x7 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x7) != CONST_INT
      || pattern1316 (x2, 
E_V4SImode, 
E_V8SImode) != 0)
    return -1;
  switch (XWINT (x4, 0))
    {
    case 2L:
      if (XWINT (x5, 0) != 6L
          || XWINT (x6, 0) != 3L
          || XWINT (x7, 0) != 7L
          || !
#line 19772 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8375; /* vec_interleave_highv4si */

    case 0L:
      if (XWINT (x5, 0) != 4L
          || XWINT (x6, 0) != 1L
          || XWINT (x7, 0) != 5L
          || !
#line 19826 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1))
        return -1;
      return 8381; /* vec_interleave_lowv4si */

    default:
      return -1;
    }
}

 int
recog_279 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (pattern931 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 2L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 18L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 19L
          || pattern1829 (x3) != 0)
        return -1;
      x8 = XVECEXP (x3, 0, 8);
      if (XWINT (x8, 0) != 10L)
        return -1;
      x9 = XVECEXP (x3, 0, 9);
      if (XWINT (x9, 0) != 26L)
        return -1;
      x10 = XVECEXP (x3, 0, 10);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x3, 0, 11);
      if (XWINT (x11, 0) != 27L
          || pattern1864 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16SFmode:
          if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !
#line 11165 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5251; /* *avx512f_unpckhps512 */

        case E_V16SImode:
          if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
              || !
#line 19757 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 8373; /* *avx512f_interleave_highv16si */

        default:
          return -1;
        }

    case 0L:
      x5 = XVECEXP (x3, 0, 1);
      switch (XWINT (x5, 0))
        {
        case 16L:
          x6 = XVECEXP (x3, 0, 2);
          if (XWINT (x6, 0) != 1L)
            return -1;
          x7 = XVECEXP (x3, 0, 3);
          if (XWINT (x7, 0) != 17L)
            return -1;
          x12 = XEXP (x2, 0);
          x13 = XEXP (x12, 1);
          operands[2] = x13;
          x14 = XVECEXP (x3, 0, 4);
          switch (XWINT (x14, 0))
            {
            case 4L:
              x15 = XVECEXP (x3, 0, 5);
              if (XWINT (x15, 0) != 20L)
                return -1;
              x16 = XVECEXP (x3, 0, 6);
              if (XWINT (x16, 0) != 5L)
                return -1;
              x17 = XVECEXP (x3, 0, 7);
              if (XWINT (x17, 0) != 21L)
                return -1;
              x8 = XVECEXP (x3, 0, 8);
              if (XWINT (x8, 0) != 8L)
                return -1;
              x9 = XVECEXP (x3, 0, 9);
              if (XWINT (x9, 0) != 24L)
                return -1;
              x10 = XVECEXP (x3, 0, 10);
              if (XWINT (x10, 0) != 9L)
                return -1;
              x11 = XVECEXP (x3, 0, 11);
              if (XWINT (x11, 0) != 25L)
                return -1;
              x18 = XVECEXP (x3, 0, 12);
              if (XWINT (x18, 0) != 12L)
                return -1;
              x19 = XVECEXP (x3, 0, 13);
              if (XWINT (x19, 0) != 28L)
                return -1;
              x20 = XVECEXP (x3, 0, 14);
              if (XWINT (x20, 0) != 13L)
                return -1;
              x21 = XVECEXP (x3, 0, 15);
              if (XWINT (x21, 0) != 29L)
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_V16SFmode:
                  if (pattern1414 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
                      || !
#line 11253 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 5257; /* *avx512f_unpcklps512 */

                case E_V16SImode:
                  if (pattern1414 (x2, 
E_V16SImode, 
E_V32SImode) != 0
                      || !
#line 19812 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
                    return -1;
                  return 8379; /* *avx512f_interleave_lowv16si */

                default:
                  return -1;
                }

            case 2L:
              x15 = XVECEXP (x3, 0, 5);
              if (XWINT (x15, 0) != 18L)
                return -1;
              x16 = XVECEXP (x3, 0, 6);
              if (XWINT (x16, 0) != 3L)
                return -1;
              x17 = XVECEXP (x3, 0, 7);
              if (XWINT (x17, 0) != 19L)
                return -1;
              x8 = XVECEXP (x3, 0, 8);
              switch (XWINT (x8, 0))
                {
                case 4L:
                  x9 = XVECEXP (x3, 0, 9);
                  if (XWINT (x9, 0) != 20L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 10);
                  if (XWINT (x10, 0) != 5L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 11);
                  if (XWINT (x11, 0) != 21L)
                    return -1;
                  x18 = XVECEXP (x3, 0, 12);
                  if (XWINT (x18, 0) != 6L)
                    return -1;
                  x19 = XVECEXP (x3, 0, 13);
                  if (XWINT (x19, 0) != 22L)
                    return -1;
                  x20 = XVECEXP (x3, 0, 14);
                  if (XWINT (x20, 0) != 7L)
                    return -1;
                  x21 = XVECEXP (x3, 0, 15);
                  if (XWINT (x21, 0) != 23L
                      || pattern1486 (x2, 
E_V16QImode, 
E_V32QImode) != 0
                      || !
#line 19581 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
                    return -1;
                  return 8333; /* vec_interleave_lowv16qi */

                case 8L:
                  x9 = XVECEXP (x3, 0, 9);
                  if (XWINT (x9, 0) != 24L)
                    return -1;
                  x10 = XVECEXP (x3, 0, 10);
                  if (XWINT (x10, 0) != 9L)
                    return -1;
                  x11 = XVECEXP (x3, 0, 11);
                  if (XWINT (x11, 0) != 25L)
                    return -1;
                  x18 = XVECEXP (x3, 0, 12);
                  if (XWINT (x18, 0) != 10L)
                    return -1;
                  x19 = XVECEXP (x3, 0, 13);
                  if (XWINT (x19, 0) != 26L)
                    return -1;
                  x20 = XVECEXP (x3, 0, 14);
                  if (XWINT (x20, 0) != 11L)
                    return -1;
                  x21 = XVECEXP (x3, 0, 15);
                  if (XWINT (x21, 0) != 27L)
                    return -1;
                  switch (GET_MODE (operands[0]))
                    {
                    case E_V16HImode:
                      if (pattern1414 (x2, 
E_V16HImode, 
E_V32HImode) != 0
                          || !
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8359; /* avx2_interleave_lowv16hi */

                    case E_V16HFmode:
                      if (pattern1414 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
                          || !
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8361; /* avx2_interleave_lowv16hf */

                    case E_V16BFmode:
                      if (pattern1414 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
                          || !
#line 19701 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
                        return -1;
                      return 8363; /* avx2_interleave_lowv16bf */

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
          if (pattern1659 (x3) != 0)
            return -1;
          x8 = XVECEXP (x3, 0, 8);
          if (XWINT (x8, 0) != 8L)
            return -1;
          x9 = XVECEXP (x3, 0, 9);
          if (XWINT (x9, 0) != 8L)
            return -1;
          x10 = XVECEXP (x3, 0, 10);
          if (XWINT (x10, 0) != 10L)
            return -1;
          x11 = XVECEXP (x3, 0, 11);
          if (XWINT (x11, 0) != 10L)
            return -1;
          x18 = XVECEXP (x3, 0, 12);
          if (XWINT (x18, 0) != 12L)
            return -1;
          x19 = XVECEXP (x3, 0, 13);
          if (XWINT (x19, 0) != 12L)
            return -1;
          x20 = XVECEXP (x3, 0, 14);
          if (XWINT (x20, 0) != 14L)
            return -1;
          x21 = XVECEXP (x3, 0, 15);
          if (XWINT (x21, 0) != 14L
              || pattern1788 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
              || !
#line 11446 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
            return -1;
          return 5273; /* *avx512f_movsldup512 */

        default:
          return -1;
        }

    case 1L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 1L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 3L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 3L)
        return -1;
      x14 = XVECEXP (x3, 0, 4);
      if (XWINT (x14, 0) != 5L)
        return -1;
      x15 = XVECEXP (x3, 0, 5);
      if (XWINT (x15, 0) != 5L)
        return -1;
      x16 = XVECEXP (x3, 0, 6);
      if (XWINT (x16, 0) != 7L)
        return -1;
      x17 = XVECEXP (x3, 0, 7);
      if (XWINT (x17, 0) != 7L)
        return -1;
      x8 = XVECEXP (x3, 0, 8);
      if (XWINT (x8, 0) != 9L)
        return -1;
      x9 = XVECEXP (x3, 0, 9);
      if (XWINT (x9, 0) != 9L)
        return -1;
      x10 = XVECEXP (x3, 0, 10);
      if (XWINT (x10, 0) != 11L)
        return -1;
      x11 = XVECEXP (x3, 0, 11);
      if (XWINT (x11, 0) != 11L)
        return -1;
      x18 = XVECEXP (x3, 0, 12);
      if (XWINT (x18, 0) != 13L)
        return -1;
      x19 = XVECEXP (x3, 0, 13);
      if (XWINT (x19, 0) != 13L)
        return -1;
      x20 = XVECEXP (x3, 0, 14);
      if (XWINT (x20, 0) != 15L)
        return -1;
      x21 = XVECEXP (x3, 0, 15);
      if (XWINT (x21, 0) != 15L
          || pattern1788 (x2, 
E_V16SFmode, 
E_V32SFmode) != 0
          || !
#line 11393 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512))
        return -1;
      return 5267; /* *avx512f_movshdup512 */

    case 8L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 24L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 9L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 25L)
        return -1;
      x14 = XVECEXP (x3, 0, 4);
      if (XWINT (x14, 0) != 10L)
        return -1;
      x15 = XVECEXP (x3, 0, 5);
      if (XWINT (x15, 0) != 26L)
        return -1;
      x16 = XVECEXP (x3, 0, 6);
      if (XWINT (x16, 0) != 11L)
        return -1;
      x17 = XVECEXP (x3, 0, 7);
      if (XWINT (x17, 0) != 27L
          || pattern1849 (x3) != 0)
        return -1;
      x18 = XVECEXP (x3, 0, 12);
      if (XWINT (x18, 0) != 14L)
        return -1;
      x19 = XVECEXP (x3, 0, 13);
      if (XWINT (x19, 0) != 30L)
        return -1;
      x20 = XVECEXP (x3, 0, 14);
      if (XWINT (x20, 0) != 15L)
        return -1;
      x21 = XVECEXP (x3, 0, 15);
      if (XWINT (x21, 0) != 31L
          || pattern1316 (x2, 
E_V16QImode, 
E_V32QImode) != 0
          || !
#line 19485 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
        return -1;
      return 8327; /* vec_interleave_highv16qi */

    case 4L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 20L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 5L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 21L
          || pattern1829 (x3) != 0
          || pattern1849 (x3) != 0
          || pattern1864 (x2) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (pattern1414 (x2, 
E_V16HImode, 
E_V32HImode) != 0
              || !
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8341; /* avx2_interleave_highv16hi */

        case E_V16HFmode:
          if (pattern1414 (x2, 
E_V16HFmode, 
E_V32HFmode) != 0
              || !
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8343; /* avx2_interleave_highv16hf */

        case E_V16BFmode:
          if (pattern1414 (x2, 
E_V16BFmode, 
E_V32BFmode) != 0
              || !
#line 19633 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX2 && 1 && 1))
            return -1;
          return 8345; /* avx2_interleave_highv16bf */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_290 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) != CONST_INT)
    return -1;
  operands[6] = x4;
  res = recog_289 (x1, insn, pnum_clobbers);
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
      || !register_operand (operands[0], E_V8HImode)
      || GET_MODE (x2) != E_V8HImode
      || !vector_operand (operands[1], E_V8HImode)
      || pattern673 (x3) != 0
      || !
#line 20859 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2 && 1 && 1))
    return -1;
  return 8451; /* sse2_pshuflw_1 */
}

 int
recog_292 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (pattern931 (x3) != 0)
    return -1;
  x4 = XVECEXP (x3, 0, 0);
  switch (XWINT (x4, 0))
    {
    case 0L:
      if (pattern1767 (x3) != 0)
        return -1;
      switch (pattern1779 (x2))
        {
        case 0:
          if (!(
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5381; /* vec_extract_lo_v32hi */

        case 1:
          if (!(
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5382; /* vec_extract_lo_v32hf */

        case 2:
          if (!(
#line 13038 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5383; /* vec_extract_lo_v32bf */

        case 3:
          if (!
#line 13208 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))))
            return -1;
          return 5395; /* vec_extract_lo_v32qi */

        default:
          return -1;
        }

    case 16L:
      x5 = XVECEXP (x3, 0, 1);
      if (XWINT (x5, 0) != 17L)
        return -1;
      x6 = XVECEXP (x3, 0, 2);
      if (XWINT (x6, 0) != 18L)
        return -1;
      x7 = XVECEXP (x3, 0, 3);
      if (XWINT (x7, 0) != 19L)
        return -1;
      x8 = XVECEXP (x3, 0, 4);
      if (XWINT (x8, 0) != 20L)
        return -1;
      x9 = XVECEXP (x3, 0, 5);
      if (XWINT (x9, 0) != 21L)
        return -1;
      x10 = XVECEXP (x3, 0, 6);
      if (XWINT (x10, 0) != 22L)
        return -1;
      x11 = XVECEXP (x3, 0, 7);
      if (XWINT (x11, 0) != 23L)
        return -1;
      x12 = XVECEXP (x3, 0, 8);
      if (XWINT (x12, 0) != 24L)
        return -1;
      x13 = XVECEXP (x3, 0, 9);
      if (XWINT (x13, 0) != 25L)
        return -1;
      x14 = XVECEXP (x3, 0, 10);
      if (XWINT (x14, 0) != 26L)
        return -1;
      x15 = XVECEXP (x3, 0, 11);
      if (XWINT (x15, 0) != 27L)
        return -1;
      x16 = XVECEXP (x3, 0, 12);
      if (XWINT (x16, 0) != 28L)
        return -1;
      x17 = XVECEXP (x3, 0, 13);
      if (XWINT (x17, 0) != 29L)
        return -1;
      x18 = XVECEXP (x3, 0, 14);
      if (XWINT (x18, 0) != 30L)
        return -1;
      x19 = XVECEXP (x3, 0, 15);
      if (XWINT (x19, 0) != 31L)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_V16HImode:
          if (!nonimmediate_operand (operands[0], E_V16HImode)
              || GET_MODE (x2) != E_V16HImode
              || !register_operand (operands[1], E_V32HImode)
              || !(
#line 13079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5384; /* vec_extract_hi_v32hi */

        case E_V16HFmode:
          if (!nonimmediate_operand (operands[0], E_V16HFmode)
              || GET_MODE (x2) != E_V16HFmode
              || !register_operand (operands[1], E_V32HFmode)
              || !(
#line 13079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5385; /* vec_extract_hi_v32hf */

        case E_V16BFmode:
          if (!nonimmediate_operand (operands[0], E_V16BFmode)
              || GET_MODE (x2) != E_V16BFmode
              || !register_operand (operands[1], E_V32BFmode)
              || !(
#line 13079 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F) && 
#line 1032 "../../src/gcc/config/i386/sse.md"
(TARGET_EVEX512)))
            return -1;
          return 5386; /* vec_extract_hi_v32bf */

        case E_V16QImode:
          if (!nonimmediate_operand (operands[0], E_V16QImode)
              || GET_MODE (x2) != E_V16QImode
              || !register_operand (operands[1], E_V32QImode)
              || !
#line 13226 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX))
            return -1;
          return 5396; /* vec_extract_hi_v32qi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_302 (rtx x1 ATTRIBUTE_UNUSED,
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
          return 5532; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5559; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5586; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5613; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5640; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5667; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5694; /* *avx512f_vpternlogv16si_1 */

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
          return 5721; /* *avx512vl_vpternlogv8si_1 */

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
          return 5748; /* *avx512vl_vpternlogv4si_1 */

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
          return 5775; /* *avx512f_vpternlogv8di_1 */

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
          return 5802; /* *avx512vl_vpternlogv4di_1 */

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
          return 5829; /* *avx512vl_vpternlogv2di_1 */

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
          return 5535; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5562; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5589; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5616; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5643; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5670; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5697; /* *avx512f_vpternlogv16si_1 */

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
          return 5724; /* *avx512vl_vpternlogv8si_1 */

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
          return 5751; /* *avx512vl_vpternlogv4si_1 */

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
          return 5778; /* *avx512f_vpternlogv8di_1 */

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
          return 5805; /* *avx512vl_vpternlogv4di_1 */

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
          return 5832; /* *avx512vl_vpternlogv2di_1 */

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
          return 5538; /* *avx512bw_vpternlogv64qi_1 */

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
          return 5565; /* *avx512vl_vpternlogv32qi_1 */

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
          return 5592; /* *avx512vl_vpternlogv16qi_1 */

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
          return 5619; /* *avx512bw_vpternlogv32hi_1 */

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
          return 5646; /* *avx512vl_vpternlogv16hi_1 */

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
          return 5673; /* *avx512vl_vpternlogv8hi_1 */

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
          return 5700; /* *avx512f_vpternlogv16si_1 */

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
          return 5727; /* *avx512vl_vpternlogv8si_1 */

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
          return 5754; /* *avx512vl_vpternlogv4si_1 */

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
          return 5781; /* *avx512f_vpternlogv8di_1 */

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
          return 5808; /* *avx512vl_vpternlogv4di_1 */

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
          return 5835; /* *avx512vl_vpternlogv2di_1 */

        case 36:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6822; /* *avx512bw_vpternlogv64qi_3 */

        case 37:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 331 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6831; /* *avx512vl_vpternlogv32qi_3 */

        case 38:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6840; /* *avx512vl_vpternlogv16qi_3 */

        case 39:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6849; /* *avx512bw_vpternlogv32hi_3 */

        case 40:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 332 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6858; /* *avx512vl_vpternlogv16hi_3 */

        case 41:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6867; /* *avx512vl_vpternlogv8hi_3 */

        case 42:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6876; /* *avx512f_vpternlogv16si_3 */

        case 43:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 333 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6885; /* *avx512vl_vpternlogv8si_3 */

        case 44:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6894; /* *avx512vl_vpternlogv4si_3 */

        case 45:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
            return -1;
          return 6903; /* *avx512f_vpternlogv8di_3 */

        case 46:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 334 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
            return -1;
          return 6912; /* *avx512vl_vpternlogv4di_3 */

        case 47:
          if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
            return -1;
          return 6921; /* *avx512vl_vpternlogv2di_3 */

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
          return 6180; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6207; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6234; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6261; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6288; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6315; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6342; /* *avx512f_vpternlogv16si_2 */

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
          return 6369; /* *avx512vl_vpternlogv8si_2 */

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
          return 6396; /* *avx512vl_vpternlogv4si_2 */

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
          return 6423; /* *avx512f_vpternlogv8di_2 */

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
          return 6450; /* *avx512vl_vpternlogv4di_2 */

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
          return 6477; /* *avx512vl_vpternlogv2di_2 */

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
          return 6183; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6210; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6237; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6264; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6291; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6318; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6345; /* *avx512f_vpternlogv16si_2 */

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
          return 6372; /* *avx512vl_vpternlogv8si_2 */

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
          return 6399; /* *avx512vl_vpternlogv4si_2 */

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
          return 6426; /* *avx512f_vpternlogv8di_2 */

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
          return 6453; /* *avx512vl_vpternlogv4di_2 */

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
          return 6480; /* *avx512vl_vpternlogv2di_2 */

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
          return 6186; /* *avx512bw_vpternlogv64qi_2 */

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
          return 6213; /* *avx512vl_vpternlogv32qi_2 */

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
          return 6240; /* *avx512vl_vpternlogv16qi_2 */

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
          return 6267; /* *avx512bw_vpternlogv32hi_2 */

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
          return 6294; /* *avx512vl_vpternlogv16hi_2 */

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
          return 6321; /* *avx512vl_vpternlogv8hi_2 */

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
          return 6348; /* *avx512f_vpternlogv16si_2 */

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
          return 6375; /* *avx512vl_vpternlogv8si_2 */

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
          return 6402; /* *avx512vl_vpternlogv4si_2 */

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
          return 6429; /* *avx512f_vpternlogv8di_2 */

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
          return 6456; /* *avx512vl_vpternlogv4di_2 */

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
          return 6483; /* *avx512vl_vpternlogv2di_2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_312 (rtx x1 ATTRIBUTE_UNUSED,
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
              return 5849; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5876; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5903; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5930; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5957; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5984; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6011; /* *avx512f_vpternlogv16sf_1 */

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
              return 6038; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6065; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6092; /* *avx512f_vpternlogv8df_1 */

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
              return 6119; /* *avx512vl_vpternlogv4df_1 */

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
              return 6146; /* *avx512vl_vpternlogv2df_1 */

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
              return 5852; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5879; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5906; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5933; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5960; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5987; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6014; /* *avx512f_vpternlogv16sf_1 */

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
              return 6041; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6068; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6095; /* *avx512f_vpternlogv8df_1 */

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
              return 6122; /* *avx512vl_vpternlogv4df_1 */

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
              return 6149; /* *avx512vl_vpternlogv2df_1 */

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
              return 5855; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5882; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5909; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5936; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5963; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5990; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6017; /* *avx512f_vpternlogv16sf_1 */

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
              return 6044; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6071; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6098; /* *avx512f_vpternlogv8df_1 */

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
              return 6125; /* *avx512vl_vpternlogv4df_1 */

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
              return 6152; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6929; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6938; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6947; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6956; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6965; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6974; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6983; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6992; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 7001; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7010; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7019; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7028; /* *avx512vl_vpternlogv2df_3 */

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
              return 6497; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6524; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6551; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6578; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6605; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6632; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6659; /* *avx512f_vpternlogv16sf_2 */

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
              return 6686; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6713; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6740; /* *avx512f_vpternlogv8df_2 */

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
              return 6767; /* *avx512vl_vpternlogv4df_2 */

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
              return 6794; /* *avx512vl_vpternlogv2df_2 */

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
              return 6500; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6527; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6554; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6581; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6608; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6635; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6662; /* *avx512f_vpternlogv16sf_2 */

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
              return 6689; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6716; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6743; /* *avx512f_vpternlogv8df_2 */

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
              return 6770; /* *avx512vl_vpternlogv4df_2 */

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
              return 6797; /* *avx512vl_vpternlogv2df_2 */

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
              return 6503; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6530; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6557; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6584; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6611; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6638; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6665; /* *avx512f_vpternlogv16sf_2 */

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
              return 6692; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6719; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6746; /* *avx512f_vpternlogv8df_2 */

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
              return 6773; /* *avx512vl_vpternlogv4df_2 */

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
              return 6800; /* *avx512vl_vpternlogv2df_2 */

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
              return 5858; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5885; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5912; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5939; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5966; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5993; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6020; /* *avx512f_vpternlogv16sf_1 */

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
              return 6047; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6074; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6101; /* *avx512f_vpternlogv8df_1 */

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
              return 6128; /* *avx512vl_vpternlogv4df_1 */

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
              return 6155; /* *avx512vl_vpternlogv2df_1 */

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
              return 5861; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5888; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5915; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5942; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5969; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5996; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6023; /* *avx512f_vpternlogv16sf_1 */

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
              return 6050; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6077; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6104; /* *avx512f_vpternlogv8df_1 */

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
              return 6131; /* *avx512vl_vpternlogv4df_1 */

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
              return 6158; /* *avx512vl_vpternlogv2df_1 */

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
              return 5864; /* *avx512bw_vpternlogv32hf_1 */

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
              return 5891; /* *avx512vl_vpternlogv16hf_1 */

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
              return 5918; /* *avx512fp16_vpternlogv8hf_1 */

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
              return 5945; /* *avx512bw_vpternlogv32bf_1 */

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
              return 5972; /* *avx512vl_vpternlogv16bf_1 */

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
              return 5999; /* *avx512vl_vpternlogv8bf_1 */

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
              return 6026; /* *avx512f_vpternlogv16sf_1 */

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
              return 6053; /* *avx512vl_vpternlogv8sf_1 */

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
              return 6080; /* *avx512vl_vpternlogv4sf_1 */

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
              return 6107; /* *avx512f_vpternlogv8df_1 */

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
              return 6134; /* *avx512vl_vpternlogv4df_1 */

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
              return 6161; /* *avx512vl_vpternlogv2df_1 */

            case 36:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6932; /* *avx512bw_vpternlogv32hf_3 */

            case 37:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 335 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6941; /* *avx512vl_vpternlogv16hf_3 */

            case 38:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6950; /* *avx512fp16_vpternlogv8hf_3 */

            case 39:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6959; /* *avx512bw_vpternlogv32bf_3 */

            case 40:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 336 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6968; /* *avx512vl_vpternlogv16bf_3 */

            case 41:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 6977; /* *avx512vl_vpternlogv8bf_3 */

            case 42:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 6986; /* *avx512f_vpternlogv16sf_3 */

            case 43:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 337 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 6995; /* *avx512vl_vpternlogv8sf_3 */

            case 44:
              if (!
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()))
                return -1;
              return 7004; /* *avx512vl_vpternlogv4sf_3 */

            case 45:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((64 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX512F && TARGET_EVEX512)))
                return -1;
              return 7013; /* *avx512f_vpternlogv8df_3 */

            case 46:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((32 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_AVX)))
                return -1;
              return 7022; /* *avx512vl_vpternlogv4df_3 */

            case 47:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 338 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2)))
                return -1;
              return 7031; /* *avx512vl_vpternlogv2df_3 */

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
              return 6506; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6533; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6560; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6587; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6614; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6641; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6668; /* *avx512f_vpternlogv16sf_2 */

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
              return 6695; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6722; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6749; /* *avx512f_vpternlogv8df_2 */

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
              return 6776; /* *avx512vl_vpternlogv4df_2 */

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
              return 6803; /* *avx512vl_vpternlogv2df_2 */

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
              return 6509; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6536; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6563; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6590; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6617; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6644; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6671; /* *avx512f_vpternlogv16sf_2 */

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
              return 6698; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6725; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6752; /* *avx512f_vpternlogv8df_2 */

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
              return 6779; /* *avx512vl_vpternlogv4df_2 */

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
              return 6806; /* *avx512vl_vpternlogv2df_2 */

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
              return 6512; /* *avx512bw_vpternlogv32hf_2 */

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
              return 6539; /* *avx512vl_vpternlogv16hf_2 */

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
              return 6566; /* *avx512fp16_vpternlogv8hf_2 */

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
              return 6593; /* *avx512bw_vpternlogv32bf_2 */

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
              return 6620; /* *avx512vl_vpternlogv16bf_2 */

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
              return 6647; /* *avx512vl_vpternlogv8bf_2 */

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
              return 6674; /* *avx512f_vpternlogv16sf_2 */

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
              return 6701; /* *avx512vl_vpternlogv8sf_2 */

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
              return 6728; /* *avx512vl_vpternlogv4sf_2 */

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
              return 6755; /* *avx512f_vpternlogv8df_2 */

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
              return 6782; /* *avx512vl_vpternlogv4df_2 */

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
              return 6809; /* *avx512vl_vpternlogv2df_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case XOR:
      return recog_311 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

 int
recog_371 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x3, 0);
  operands[3] = x6;
  x7 = XEXP (x4, 0);
  operands[4] = x7;
  switch (GET_MODE (operands[3]))
    {
    case E_SFmode:
      if (!nonimmediate_operand (operands[3], E_SFmode)
          || !nonimmediate_operand (operands[4], E_V4SFmode)
          || !
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
        return -1;
      *pnum_clobbers = 2;
      return 223; /* *fixuns_truncsf_1 */

    case E_DFmode:
      if (!nonimmediate_operand (operands[3], E_DFmode)
          || !nonimmediate_operand (operands[4], E_V2DFmode)
          || !
#line 5911 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)))
        return -1;
      *pnum_clobbers = 2;
      return 224; /* *fixuns_truncdf_1 */

    default:
      return -1;
    }
}

 int
recog_372 (rtx x1 ATTRIBUTE_UNUSED,
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
      if (!register_operand (operands[1], E_VOIDmode))
        return -1;
      x7 = XEXP (x6, 0);
      operands[2] = x7;
      if (scratch_operand (operands[2], E_XFmode))
        {
          switch (pattern547 (x4))
            {
            case 0:
              if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)))
                return 229; /* fix_trunchi_i387_fisttp */
              break;

            case 1:
              if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)))
                return 230; /* fix_truncsi_i387_fisttp */
              break;

            case 2:
              if (
#line 5975 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)))
                return 231; /* fix_truncdi_i387_fisttp */
              break;

            default:
              break;
            }
        }
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 17
          || GET_MODE (x7) != E_CCmode)
        return -1;
      switch (pattern547 (x4))
        {
        case 0:
          if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 232; /* *fix_trunchi_i387_1 */

        case 1:
          if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 233; /* *fix_truncsi_i387_1 */

        case 2:
          if (!
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()))
            return -1;
          return 234; /* *fix_truncdi_i387_1 */

        default:
          return -1;
        }

    case UNSPEC:
      if (pattern682 (x1, 
E_V2SFmode, 
E_V2SImode) != 0
          || !
#line 1558 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
        return -1;
      return 2080; /* mmx_fix_truncv2sfv2si2 */

    default:
      return -1;
    }
}

 int
recog_379 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x2))
    {
    case CLOBBER:
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      switch (GET_MODE (operands[1]))
        {
        case E_DImode:
          if (!nonimmediate_operand (operands[1], E_DImode)
              || !x86_64_immediate_operand (operands[2], E_DImode)
              || !scratch_operand (operands[0], E_DImode)
              || !
#line 7326 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 319; /* *adddi_4 */

        case E_QImode:
          if (!nonimmediate_operand (operands[1], E_QImode)
              || !const_int_operand (operands[2], E_QImode)
              || !scratch_operand (operands[0], E_QImode)
              || !
#line 7371 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 320; /* *addqi_4 */

        case E_HImode:
          if (!nonimmediate_operand (operands[1], E_HImode)
              || !const_int_operand (operands[2], E_HImode)
              || !scratch_operand (operands[0], E_HImode)
              || !
#line 7371 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 321; /* *addhi_4 */

        case E_SImode:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode)
              || !scratch_operand (operands[0], E_SImode)
              || !
#line 7371 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)))
            return -1;
          return 322; /* *addsi_4 */

        default:
          return -1;
        }

    case SET:
      x3 = XEXP (x2, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case MINUS:
          x5 = XEXP (x4, 0);
          if (!rtx_equal_p (x5, operands[1]))
            return -1;
          x6 = XEXP (x4, 1);
          if (!rtx_equal_p (x6, operands[2]))
            return -1;
          switch (GET_MODE (operands[1]))
            {
            case E_QImode:
              if (pattern1490 (x4, 
E_QImode) != 0
                  || !
#line 8670 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 445; /* *subqi_3 */

            case E_HImode:
              if (pattern1490 (x4, 
E_HImode) != 0
                  || !
#line 8670 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 446; /* *subhi_3 */

            case E_SImode:
              if (pattern1491 (x4, 
E_SImode) != 0
                  || !
#line 8670 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 447; /* *subsi_3 */

            case E_DImode:
              if (pattern1491 (x4, 
E_DImode) != 0
                  || !(
#line 8670 "../../src/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 448; /* *subdi_3 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_DImode)
            return -1;
          x5 = XEXP (x4, 0);
          if (GET_CODE (x5) != MINUS
              || GET_MODE (x5) != E_SImode
              || !nonimmediate_operand (operands[1], E_SImode)
              || !x86_64_general_operand (operands[2], E_SImode)
              || !register_operand (operands[0], E_DImode))
            return -1;
          x7 = XEXP (x5, 0);
          if (!rtx_equal_p (x7, operands[1]))
            return -1;
          x8 = XEXP (x5, 1);
          if (!rtx_equal_p (x8, operands[2])
              || !
#line 8772 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
            return -1;
          return 452; /* *subsi_3_zext */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

 int
recog_384 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != PLUS)
    return -1;
  x5 = XEXP (x4, 0);
  switch (GET_CODE (x5))
    {
    case LTU:
    case UNLT:
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || pattern815 (x2, 
E_CCCmode) != 0)
        return -1;
      x7 = XEXP (x3, 0);
      x8 = XEXP (x7, 0);
      switch (GET_CODE (x8))
        {
        case PLUS:
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != PLUS)
            return -1;
          x10 = XEXP (x9, 0);
          switch (GET_CODE (x10))
            {
            case LTU:
            case UNLT:
              operands[5] = x10;
              x11 = XEXP (x10, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x12 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x12) != SET)
                return -1;
              x13 = XEXP (x12, 1);
              if (GET_CODE (x13) != PLUS)
                return -1;
              x14 = XEXP (x13, 0);
              if (GET_CODE (x14) != PLUS)
                return -1;
              x15 = XEXP (x14, 0);
              switch (GET_CODE (x15))
                {
                case LTU:
                case UNLT:
                  if (!rtx_equal_p (x15, operands[5]))
                    return -1;
                  x16 = XEXP (x10, 0);
                  operands[3] = x16;
                  if (!flags_reg_operand (operands[3], E_VOIDmode))
                    return -1;
                  x17 = XEXP (x9, 1);
                  operands[1] = x17;
                  x18 = XEXP (x8, 1);
                  operands[2] = x18;
                  operands[4] = x5;
                  x19 = XEXP (x12, 0);
                  operands[0] = x19;
                  x20 = XEXP (x5, 0);
                  if (!rtx_equal_p (x20, operands[3]))
                    return -1;
                  x21 = XEXP (x14, 1);
                  if (!rtx_equal_p (x21, operands[1]))
                    return -1;
                  x22 = XEXP (x13, 1);
                  if (!rtx_equal_p (x22, operands[2]))
                    return -1;
                  switch (GET_CODE (operands[2]))
                    {
                    case REG:
                    case SUBREG:
                    case MEM:
                      x23 = XEXP (x4, 1);
                      if (GET_CODE (x23) != ZERO_EXTEND)
                        return -1;
                      x24 = XEXP (x23, 0);
                      if (!rtx_equal_p (x24, operands[2]))
                        return -1;
                      switch (GET_MODE (x7))
                        {
                        case E_DImode:
                          if (pattern1857 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 9056 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)))
                            return -1;
                          return 483; /* addcarrysi */

                        case E_TImode:
                          if (pattern1857 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 9056 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 484; /* addcarrydi */

                        default:
                          return -1;
                        }

                    case CONST_INT:
                    case CONST:
                    case LABEL_REF:
                    case SYMBOL_REF:
                      x23 = XEXP (x4, 1);
                      operands[6] = x23;
                      switch (GET_MODE (x7))
                        {
                        case E_DImode:
                          if (pattern1854 (x1, 
E_SImode, 
E_DImode) != 0
                              || !
#line 9242 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      SImode to DImode.  */
   && ((SImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (SImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))))
                            return -1;
                          return 485; /* *addcarrysi_1 */

                        case E_TImode:
                          if (pattern1854 (x1, 
E_DImode, 
E_TImode) != 0
                              || !(
#line 9242 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is operands[2] zero extended from
      DImode to TImode.  */
   && ((DImode == SImode || INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && UINTVAL (operands[6]) == (UINTVAL (operands[2])
				       & GET_MODE_MASK (DImode)))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == UINTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                            return -1;
                          return 486; /* *addcarrydi_1 */

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

        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x8;
          if (GET_CODE (x5) == LTU)
            {
              res = recog_380 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
            }
          x12 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x12) != SET)
            return -1;
          operands[4] = x5;
          x20 = XEXP (x5, 0);
          operands[3] = x20;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          x19 = XEXP (x12, 0);
          operands[0] = x19;
          x23 = XEXP (x4, 1);
          switch (GET_CODE (x23))
            {
            case ZERO_EXTEND:
              x13 = XEXP (x12, 1);
              if (pattern1676 (x13, 
MINUS) != 0)
                return -1;
              x24 = XEXP (x23, 0);
              operands[2] = x24;
              x14 = XEXP (x13, 0);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              x21 = XEXP (x14, 1);
              x25 = XEXP (x21, 0);
              if (!rtx_equal_p (x25, operands[3]))
                return -1;
              x22 = XEXP (x13, 1);
              if (!rtx_equal_p (x22, operands[2]))
                return -1;
              switch (GET_MODE (x7))
                {
                case E_DImode:
                  if (pattern1840 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 9590 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                    return -1;
                  return 523; /* subborrowsi */

                case E_TImode:
                  if (pattern1840 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 9590 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 524; /* subborrowdi */

                default:
                  return -1;
                }

            case CONST_INT:
            case CONST_WIDE_INT:
              operands[6] = x23;
              x13 = XEXP (x12, 1);
              if (pattern1676 (x13, 
PLUS) != 0)
                return -1;
              x22 = XEXP (x13, 1);
              operands[2] = x22;
              x14 = XEXP (x13, 0);
              x15 = XEXP (x14, 0);
              if (!rtx_equal_p (x15, operands[1]))
                return -1;
              x21 = XEXP (x14, 1);
              x25 = XEXP (x21, 0);
              if (!rtx_equal_p (x25, operands[3]))
                return -1;
              switch (GET_MODE (x7))
                {
                case E_DImode:
                  if (pattern1841 (x1, 
E_SImode, 
E_DImode) != 0
                      || !
#line 9775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is -operands[2] zero extended from
      SImode to DImode.  */
   && ((SImode == SImode || -INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && (UINTVAL (operands[6])
	      == ((unsigned HOST_WIDE_INT) -INTVAL (operands[2])
		  & GET_MODE_MASK (SImode))))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == (unsigned HOST_WIDE_INT) -INTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))))
                    return -1;
                  return 525; /* *subborrowsi_1 */

                case E_TImode:
                  if (pattern1841 (x1, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 9775 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_INT_P (operands[2])
   /* Check that operands[6] is -operands[2] zero extended from
      DImode to TImode.  */
   && ((DImode == SImode || -INTVAL (operands[2]) >= 0)
       ? (CONST_INT_P (operands[6])
	  && (UINTVAL (operands[6])
	      == ((unsigned HOST_WIDE_INT) -INTVAL (operands[2])
		  & GET_MODE_MASK (DImode))))
       : (CONST_WIDE_INT_P (operands[6])
	  && CONST_WIDE_INT_NUNITS (operands[6]) == 2
	  && ((unsigned HOST_WIDE_INT) CONST_WIDE_INT_ELT (operands[6], 0)
	      == (unsigned HOST_WIDE_INT) -INTVAL (operands[2]))
	  && CONST_WIDE_INT_ELT (operands[6], 1) == 0))) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 526; /* *subborrowdi_1 */

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
recog_391 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_390 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != CLOBBER)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 17
          || GET_MODE (x6) != E_CCmode)
        return -1;
      switch (GET_CODE (x4))
        {
        case SUBREG:
          switch (pattern1045 (x2))
            {
            case 0:
              if (!
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 408; /* *subqi_exthi_2_slp */

            case 1:
              if (!
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 409; /* *subqi_extsi_2_slp */

            case 2:
              if (!(
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 410; /* *subqi_extdi_2_slp */

            case 3:
              return 419; /* *subqi_ext2hi_0 */

            case 4:
              return 420; /* *subqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 421; /* *subqi_ext2di_0 */

            default:
              return -1;
            }

        case CONST_INT:
          x7 = XEXP (x3, 1);
          if (GET_CODE (x7) != CLZ)
            return -1;
          x8 = XEXP (x2, 0);
          operands[0] = x8;
          x9 = XEXP (x7, 0);
          operands[1] = x9;
          switch (XWINT (x4, 0))
            {
            case 63L:
              if (pattern1429 (x3, 
E_DImode) != 0
                  || !
#line 21235 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT))
                return -1;
              return 1525; /* bsr_rex64_1 */

            case 31L:
              if (pattern1429 (x3, 
E_SImode) != 0
                  || !
#line 21276 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT))
                return -1;
              return 1528; /* bsr_1 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      x5 = XVECEXP (x1, 0, 1);
      if (pattern351 (x5) != 0)
        return -1;
      x8 = XEXP (x2, 0);
      operands[0] = x8;
      x10 = XEXP (x4, 0);
      operands[1] = x10;
      x7 = XEXP (x3, 1);
      operands[2] = x7;
      x11 = XEXP (x4, 1);
      switch (GET_CODE (x11))
        {
        case LTU:
        case UNLT:
          operands[4] = x11;
          x12 = XEXP (x11, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XEXP (x11, 0);
          operands[3] = x13;
          if (!flags_reg_operand (operands[3], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1629 (x3, 
E_QImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)))
                return -1;
              return 487; /* subqi3_carry */

            case E_HImode:
              if (pattern1629 (x3, 
E_HImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)))
                return -1;
              return 488; /* subhi3_carry */

            case E_SImode:
              if (pattern1630 (x3, 
E_SImode) != 0
                  || !
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)))
                return -1;
              return 489; /* subsi3_carry */

            case E_DImode:
              if (pattern1630 (x3, 
E_DImode) != 0
                  || !(
#line 9277 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 490; /* subdi3_carry */

            default:
              return -1;
            }

        case EQ:
          x12 = XEXP (x11, 1);
          if (x12 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x13 = XEXP (x11, 0);
          operands[3] = x13;
          if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (pattern1566 (x3, 
E_QImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 570; /* *subqi3_eq */

            case E_HImode:
              if (pattern1566 (x3, 
E_HImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 571; /* *subhi3_eq */

            case E_SImode:
              if (pattern1567 (x3, 
E_SImode) != 0
                  || !
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()))
                return -1;
              return 572; /* *subsi3_eq */

            case E_DImode:
              if (pattern1567 (x3, 
E_DImode) != 0
                  || !(
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
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
recog_399 (rtx x1 ATTRIBUTE_UNUSED,
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
      res = recog_397 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
      if (GET_CODE (x4) != SUBREG
          || maybe_ne (SUBREG_BYTE (x4), 0))
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
          x8 = XVECEXP (x1, 0, 1);
          if (pattern229 (x8, 
E_CCmode, 
17) != 0
              || GET_MODE (x3) != E_QImode
              || GET_MODE (x4) != E_QImode)
            return -1;
          x9 = XEXP (x5, 0);
          operands[2] = x9;
          switch (pattern1623 (x2))
            {
            case 0:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 731; /* *andqi_exthi_1_slp */
              break;

            case 1:
              if (
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return 734; /* *andqi_extsi_1_slp */
              break;

            case 2:
              if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return 737; /* *andqi_extdi_1_slp */
              break;

            case 3:
              return 755; /* *andqi_exthi_0 */

            case 4:
              return 758; /* *andqi_extsi_0 */

            case 5:
              if (
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return 761; /* *andqi_extdi_0 */
              break;

            default:
              break;
            }
          x10 = XEXP (x3, 1);
          if (GET_CODE (x10) != SUBREG)
            return -1;
          switch (pattern1624 (x2))
            {
            case 0:
              if (!
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 740; /* *andqi_exthi_2_slp */

            case 1:
              if (!
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
                return -1;
              return 743; /* *andqi_extsi_2_slp */

            case 2:
              if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 746; /* *andqi_extdi_2_slp */

            case 3:
              return 764; /* *andqi_ext2hi_0 */

            case 4:
              return 767; /* *andqi_ext2si_0 */

            case 5:
              if (!
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                return -1;
              return 770; /* *andqi_ext2di_0 */

            default:
              return -1;
            }

        case ROTATE:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern372 (x8) != 0)
            return -1;
          switch (pattern1431 (x2))
            {
            case 0:
              if (!
#line 18942 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1409; /* *btrqi_1 */

            case 1:
              if (!
#line 18942 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1410; /* *btrhi_1 */

            default:
              return -1;
            }

        case CTZ:
          switch (pattern819 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 21118 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
                return -1;
              return 1518; /* *ctzsi2_zext */

            case 1:
              if (!
#line 21148 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI && TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1519; /* *ctzsi2_zext_falsedep */

            default:
              return -1;
            }

        case CLZ:
          if (GET_MODE (x5) != E_SImode)
            return -1;
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 63])
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
          if (!register_operand (operands[0], E_DImode)
              || GET_MODE (x3) != E_DImode
              || GET_MODE (x4) != E_DImode)
            return -1;
          x9 = XEXP (x5, 0);
          operands[1] = x9;
          x8 = XVECEXP (x1, 0, 1);
          switch (pattern818 (x8, pnum_clobbers))
            {
            case 0:
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21557 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT && TARGET_64BIT))
                return -1;
              return 1540; /* *clzsi2_lzcnt_zext */

            case 1:
              switch (GET_MODE (operands[1]))
                {
                case E_SImode:
                  if (!nonimmediate_operand (operands[1], E_SImode)
                      || !
#line 21585 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1541; /* *clzsi2_lzcnt_zext_falsedep */

                case E_DImode:
                  if (!nonimmediate_operand (operands[1], E_DImode)
                      || !(
#line 21585 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  *pnum_clobbers = 1;
                  return 1542; /* *clzsi2_lzcnt_zext_falsedep */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case POPCOUNT:
          switch (pattern819 (x1, pnum_clobbers))
            {
            case 0:
              if (!
#line 22382 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              return 1632; /* *popcountsi2_zext */

            case 1:
              if (!
#line 22416 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT && TARGET_64BIT))
                return -1;
              *pnum_clobbers = 1;
              return 1633; /* *popcountsi2_zext_falsedep */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case NOT:
      x11 = XEXP (x2, 0);
      operands[0] = x11;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
          operands[1] = x5;
          res = recog_398 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          if (GET_CODE (x5) != SUBREG
              || maybe_ne (SUBREG_BYTE (x5), 0)
              || GET_MODE (x5) != E_QImode)
            return -1;
          x9 = XEXP (x5, 0);
          if (GET_CODE (x9) != LSHIFTRT)
            return -1;
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern229 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1527 (x3))
            {
            case 0:
              if (!
#line 19344 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1436; /* *btsi_setncqi */

            case 1:
              if (!(
#line 19344 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1437; /* *btdi_setncqi */

            default:
              return -1;
            }

        case LSHIFTRT:
          x10 = XEXP (x3, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern229 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1244 (x3))
            {
            case 0:
              if (!
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return -1;
              return 1438; /* *btsi_setncsi */

            case 1:
              if (!(
#line 19362 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1439; /* *btdi_setncdi */

            default:
              return -1;
            }

        case ASHIFT:
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
            return -1;
          x8 = XVECEXP (x1, 0, 1);
          if (pattern229 (x8, 
E_CCmode, 
17) != 0)
            return -1;
          switch (pattern1246 (x3))
            {
            case 0:
              if (!
#line 22084 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              return 1596; /* *bmi2_bzhi_si3_3 */

            case 1:
              if (!(
#line 22084 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1597; /* *bmi2_bzhi_di3_3 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ROTATE:
      switch (pattern371 (x1, 
-2))
        {
        case 0:
          x12 = XEXP (x4, 1);
          operands[2] = x12;
          if (register_operand (operands[2], E_QImode))
            {
              switch (pattern946 (x3))
                {
                case 0:
                  if (
#line 18873 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT))
                    return 1403; /* *btrsi */
                  break;

                case 1:
                  if ((
#line 18873 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return 1404; /* *btrdi */
                  break;

                default:
                  break;
                }
            }
          if (GET_CODE (x12) != SUBREG)
            return -1;
          switch (pattern1329 (x3))
            {
            case 0:
              if (!
#line 18892 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT
   && (INTVAL (operands[2]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()))
                return -1;
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
          return 1408; /* *btrdi_mask_1 */

        default:
          return -1;
        }

    case NEG:
      x8 = XVECEXP (x1, 0, 1);
      if (pattern372 (x8) != 0)
        return -1;
      switch (pattern952 (x2))
        {
        case 0:
          if (!
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
            return -1;
          return 1570; /* *bmi_blsi_si */

        case 1:
          if (!(
#line 21761 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return -1;
          return 1571; /* *bmi_blsi_di */

        default:
          return -1;
        }

    case PLUS:
      x12 = XEXP (x4, 1);
      if (GET_CODE (x12) != CONST_INT
          || pattern338 (x1) != 0)
        return -1;
      x5 = XEXP (x4, 0);
      switch (GET_CODE (x5))
        {
        case REG:
        case SUBREG:
        case MEM:
          operands[1] = x5;
          switch (XWINT (x12, 0))
            {
            case -1L:
              switch (pattern1328 (x3))
                {
                case 0:
                  if (!
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI))
                    return -1;
                  return 1582; /* *bmi_blsr_si */

                case 1:
                  if (!(
#line 21906 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1583; /* *bmi_blsr_di */

                case 2:
                  if (!
#line 22277 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1622; /* *tbm_tzmsk_si */

                case 3:
                  if (!(
#line 22277 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1623; /* *tbm_tzmsk_di */

                default:
                  return -1;
                }

            case 1L:
              switch (pattern1328 (x3))
                {
                case 0:
                  if (!
#line 22168 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1606; /* *tbm_blcfill_si */

                case 1:
                  if (!(
#line 22168 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1607; /* *tbm_blcfill_di */

                case 2:
                  if (!
#line 22196 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM))
                    return -1;
                  return 1610; /* *tbm_blcic_si */

                case 3:
                  if (!(
#line 22196 "../../src/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return -1;
                  return 1611; /* *tbm_blcic_di */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ASHIFT:
          x9 = XEXP (x5, 0);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || XWINT (x12, 0) != -1L)
            return -1;
          switch (pattern1246 (x3))
            {
            case 0:
              if (!
#line 22070 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2))
                return -1;
              return 1594; /* *bmi2_bzhi_si3_2 */

            case 1:
              if (!(
#line 22070 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1595; /* *bmi2_bzhi_di3_2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_DImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != PLUS
          || pattern693 (x5) != 0)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x13 = XEXP (x8, 0);
      if (GET_CODE (x13) != REG
          || REGNO (x13) != 17
          || GET_MODE (x13) != E_CCmode)
        return -1;
      x11 = XEXP (x2, 0);
      operands[0] = x11;
      if (!register_operand (operands[0], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x9 = XEXP (x5, 0);
      x14 = XEXP (x9, 1);
      operands[2] = x14;
      if (!register_operand (operands[2], E_QImode))
        return -1;
      x10 = XEXP (x3, 1);
      operands[1] = x10;
      if (!nonimmediate_operand (operands[1], E_DImode)
          || !
#line 22116 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2))
        return -1;
      return 1599; /* *bmi2_bzhi_zero_extendsidi_5 */

    default:
      return -1;
    }
}

 int
recog_412 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_DImode))
    return -1;
  x5 = XEXP (x3, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  switch (GET_CODE (x5))
    {
    case CTZ:
      switch (pattern937 (x1, pnum_clobbers))
        {
        case 0:
          if (!
#line 21161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1520; /* *ctzsidi2_sext */

        case 1:
          if (!
#line 21201 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          *pnum_clobbers = 1;
          return 1522; /* *ctzsidi2_sext_falsedep */

        default:
          return -1;
        }

    case XOR:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != MINUS
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x8 = XEXP (x6, 1);
      if (GET_CODE (x8) != CLZ
          || GET_MODE (x8) != E_SImode)
        return -1;
      x9 = XEXP (x5, 1);
      if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      if (pattern229 (x10, 
E_CCmode, 
17) != 0)
        return -1;
      x11 = XEXP (x8, 0);
      operands[1] = x11;
      if (!nonimmediate_operand (operands[1], E_SImode)
          || !
#line 21333 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()))
        return -1;
      return 1531; /* *bsr_2 */

    default:
      return -1;
    }
}

 int
recog_415 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  x4 = XEXP (x2, 1);
  switch (XVECLEN (x4, 0))
    {
    case 1:
      switch (XINT (x4, 1))
        {
        case 2:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x4) != E_SImode
                  || !register_operand (operands[1], E_SImode)
                  || !(
#line 27196 "../../src/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1859; /* allocate_stack_worker_probe_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || GET_MODE (x4) != E_DImode
                  || !register_operand (operands[1], E_DImode)
                  || !(
#line 27196 "../../src/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1860; /* allocate_stack_worker_probe_di */

            default:
              return -1;
            }

        case 11:
          if (pattern705 (x1, 
11) != 0
              || !
#line 29080 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1896; /* rdpmc_rex64 */

        case 9:
          if (pattern706 (x1, 
E_DImode, 
9) != 0
              || !
#line 29098 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
            return -1;
          return 1898; /* rdtsc_rex64 */

        case 10:
          if (pattern706 (x1, 
E_SImode, 
10) != 0
              || !
#line 29108 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT))
            return -1;
          return 1899; /* rdtscp */

        case 36:
          if (pattern705 (x1, 
36) != 0
              || !
#line 29322 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1926; /* xgetbv_rex64 */

        case 44:
          switch (pattern707 (x1, 
44))
            {
            case 0:
              if (!
#line 29483 "../../src/gcc/config/i386/i386.md"
(TARGET_RDRND))
                return -1;
              return 1949; /* rdrandhi */

            case 1:
              if (!
#line 29483 "../../src/gcc/config/i386/i386.md"
(TARGET_RDRND))
                return -1;
              return 1950; /* rdrandsi */

            case 2:
              if (!(
#line 29483 "../../src/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1951; /* rdranddi */

            default:
              return -1;
            }

        case 45:
          switch (pattern707 (x1, 
45))
            {
            case 0:
              if (!
#line 29493 "../../src/gcc/config/i386/i386.md"
(TARGET_RDSEED))
                return -1;
              return 1952; /* rdseedhi */

            case 1:
              if (!
#line 29493 "../../src/gcc/config/i386/i386.md"
(TARGET_RDSEED))
                return -1;
              return 1953; /* rdseedsi */

            case 2:
              if (!(
#line 29493 "../../src/gcc/config/i386/i386.md"
(TARGET_RDSEED) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1954; /* rdseeddi */

            default:
              return -1;
            }

        case 56:
          if (GET_MODE (x4) != E_SImode)
            return -1;
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != SET)
            return -1;
          x7 = XEXP (x5, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_SImode))
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[2] = x6;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x8 = XEXP (x5, 0);
          operands[1] = x8;
          if (!register_operand (operands[1], E_SImode)
              || !
#line 29736 "../../src/gcc/config/i386/i386.md"
(TARGET_PKU))
            return -1;
          return 1980; /* *rdpkru */

        default:
          return -1;
        }

    case 2:
      switch (XINT (x4, 1))
        {
        case 3:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x9 = XVECEXP (x4, 0, 1);
          operands[2] = x9;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern1436 (x4, 
E_SImode) != 0
                  || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode))
                return -1;
              return 1865; /* probe_stack_range_si */

            case E_DImode:
              if (pattern1436 (x4, 
E_DImode) != 0
                  || !
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode))
                return -1;
              return 1866; /* probe_stack_range_di */

            default:
              return -1;
            }

        case 99:
          if (pattern708 (x1, 
99) != 0
              || !
#line 31361 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10366; /* aesdec128klu8 */

        case 101:
          if (pattern708 (x1, 
101) != 0
              || !
#line 31361 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10367; /* aesdec256klu8 */

        case 100:
          if (pattern708 (x1, 
100) != 0
              || !
#line 31361 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10368; /* aesenc128klu8 */

        case 102:
          if (pattern708 (x1, 
102) != 0
              || !
#line 31361 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
            return -1;
          return 10369; /* aesenc256klu8 */

        case 110:
          x5 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x5) != SET)
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          operands[1] = x6;
          x9 = XVECEXP (x4, 0, 1);
          operands[3] = x9;
          if (!const_int_operand (operands[3], E_SImode))
            return -1;
          x8 = XEXP (x5, 0);
          if (!rtx_equal_p (x8, operands[1]))
            return -1;
          x7 = XEXP (x5, 1);
          switch (GET_CODE (x7))
            {
            case PLUS:
              if (pnum_clobbers == NULL)
                return -1;
              x10 = XEXP (x7, 1);
              operands[2] = x10;
              x11 = XEXP (x7, 0);
              if (!rtx_equal_p (x11, operands[1]))
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
                  *pnum_clobbers = 1;
                  return 11033; /* atomic_fetch_addqi */

                case E_HImode:
                  if (pattern1570 (x1, 
E_HImode) != 0
                      || !
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD))
                    return -1;
                  *pnum_clobbers = 1;
                  return 11034; /* atomic_fetch_addhi */

                case E_SImode:
                  if (pattern1570 (x1, 
E_SImode) != 0
                      || !
#line 703 "../../src/gcc/config/i386/sync.md"
(TARGET_XADD))
                    return -1;
                  *pnum_clobbers = 1;
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
                  *pnum_clobbers = 1;
                  return 11036; /* atomic_fetch_adddi */

                default:
                  return -1;
                }

            case REG:
            case SUBREG:
              operands[2] = x7;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1498 (x4, 
E_QImode) != 0)
                    return -1;
                  return 11041; /* atomic_exchangeqi */

                case E_HImode:
                  if (pattern1498 (x4, 
E_HImode) != 0)
                    return -1;
                  return 11042; /* atomic_exchangehi */

                case E_SImode:
                  if (pattern1498 (x4, 
E_SImode) != 0)
                    return -1;
                  return 11043; /* atomic_exchangesi */

                case E_DImode:
                  if (pattern1498 (x4, 
E_DImode) != 0
                      || !
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11044; /* atomic_exchangedi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 111:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return -1;
          x9 = XVECEXP (x4, 0, 1);
          operands[2] = x9;
          if (!const_int_operand (operands[2], E_SImode))
            return -1;
          x6 = XVECEXP (x4, 0, 0);
          switch (GET_CODE (x6))
            {
            case PLUS:
              switch (pattern1438 (x4))
                {
                case 0:
                  return 11053; /* atomic_addqi */

                case 1:
                  return 11054; /* atomic_addhi */

                case 2:
                  return 11055; /* atomic_addsi */

                case 3:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11056; /* atomic_adddi */

                default:
                  return -1;
                }

            case MINUS:
              switch (pattern1438 (x4))
                {
                case 0:
                  return 11057; /* atomic_subqi */

                case 1:
                  return 11058; /* atomic_subhi */

                case 2:
                  return 11059; /* atomic_subsi */

                case 3:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11060; /* atomic_subdi */

                default:
                  return -1;
                }

            case AND:
              switch (pattern1438 (x4))
                {
                case 0:
                  return 11061; /* atomic_andqi */

                case 1:
                  return 11064; /* atomic_andhi */

                case 2:
                  return 11067; /* atomic_andsi */

                case 3:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11070; /* atomic_anddi */

                default:
                  return -1;
                }

            case IOR:
              switch (pattern1438 (x4))
                {
                case 0:
                  return 11062; /* atomic_orqi */

                case 1:
                  return 11065; /* atomic_orhi */

                case 2:
                  return 11068; /* atomic_orsi */

                case 3:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11071; /* atomic_ordi */

                default:
                  return -1;
                }

            case XOR:
              switch (pattern1438 (x4))
                {
                case 0:
                  return 11063; /* atomic_xorqi */

                case 1:
                  return 11066; /* atomic_xorhi */

                case 2:
                  return 11069; /* atomic_xorsi */

                case 3:
                  if (!
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT))
                    return -1;
                  return 11072; /* atomic_xordi */

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
recog_437 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  switch (XVECLEN (x1, 0))
    {
    case 1:
      switch (XINT (x1, 1))
        {
        case 1:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1486; /* blockage */

        case 5:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          return 1488; /* prologue_use */

        case 8:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_int_operand (operands[0], E_VOIDmode)
              || !
#line 20696 "../../src/gcc/config/i386/i386.md"
(reload_completed))
            return -1;
          return 1496; /* nops */

        case 6:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_int_operand (operands[0], E_SImode))
            return -1;
          return 1506; /* split_stack_return */

        case 7:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1760; /* cld */

        case 0:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1886; /* ud2 */

        case 21:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29155 "../../src/gcc/config/i386/i386.md"
(TARGET_FXSR))
            return -1;
          return 1903; /* fxrstor */

        case 23:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29165 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR))
            return -1;
          return 1904; /* fxrstor64 */

        case 41:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 29363 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          *pnum_clobbers = 8;
          return 1928; /* fldenv */

        case 43:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29382 "../../src/gcc/config/i386/i386.md"
(TARGET_80387))
            return -1;
          return 1930; /* fnclex */

        case 12:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29397 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1931; /* lwp_llwpcbsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29397 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1932; /* lwp_llwpcbdi */

            default:
              return -1;
            }

        case 18:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29463 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1943; /* wrfsbasesi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29463 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1945; /* wrfsbasedi */

            default:
              return -1;
            }

        case 19:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29463 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE))
                return -1;
              return 1944; /* wrgsbasesi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29463 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1946; /* wrgsbasedi */

            default:
              return -1;
            }

        case 78:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!nonimmediate_operand (operands[0], E_SImode)
                  || !
#line 29472 "../../src/gcc/config/i386/i386.md"
(TARGET_PTWRITE))
                return -1;
              return 1947; /* ptwritesi */

            case E_DImode:
              if (!nonimmediate_operand (operands[0], E_DImode)
                  || !(
#line 29472 "../../src/gcc/config/i386/i386.md"
(TARGET_PTWRITE) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1948; /* ptwritedi */

            default:
              return -1;
            }

        case 60:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29530 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)))
                return -1;
              return 1958; /* incsspsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29530 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK || (flag_cf_protection & CF_RETURN)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1959; /* incsspdi */

            default:
              return -1;
            }

        case 61:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29537 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1960; /* saveprevssp */

        case 62:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_DImode)
              || !
#line 29545 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1961; /* rstorssp */

        case 65:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29570 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1966; /* setssbsy */

        case 66:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_DImode)
              || !
#line 29578 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
            return -1;
          return 1967; /* clrssbsy */

        case 58:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29585 "../../src/gcc/config/i386/i386.md"
((flag_cf_protection & CF_BRANCH)))
            return -1;
          return 1968; /* nop_endbr */

        case 47:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29631 "../../src/gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1970; /* xend */

        case 48:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!const_0_to_255_operand (operands[0], E_SImode)
              || !
#line 29639 "../../src/gcc/config/i386/i386.md"
(TARGET_RTM))
            return -1;
          return 1971; /* xabort */

        case 51:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29667 "../../src/gcc/config/i386/i386.md"
(TARGET_CLWB))
            return -1;
          return 1973; /* clwb */

        case 52:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29676 "../../src/gcc/config/i386/i386.md"
(TARGET_CLFLUSHOPT))
            return -1;
          return 1974; /* clflushopt */

        case 55:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29712 "../../src/gcc/config/i386/i386.md"
(TARGET_CLZERO) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1978; /* clzero_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29712 "../../src/gcc/config/i386/i386.md"
(TARGET_CLZERO) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1979; /* clzero_di */

            default:
              return -1;
            }

        case 38:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 1984; /* wbinvd */

        case 39:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29783 "../../src/gcc/config/i386/i386.md"
(TARGET_WBNOINVD))
            return -1;
          return 1985; /* wbnoinvd */

        case 67:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29811 "../../src/gcc/config/i386/i386.md"
(TARGET_TSXLDTRK))
            return -1;
          return 1990; /* xsusldtrk */

        case 68:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29811 "../../src/gcc/config/i386/i386.md"
(TARGET_TSXLDTRK))
            return -1;
          return 1991; /* xresldtrk */

        case 72:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29836 "../../src/gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1996; /* clui */

        case 73:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29836 "../../src/gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1997; /* stui */

        case 75:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!register_operand (operands[0], E_DImode)
              || !
#line 29853 "../../src/gcc/config/i386/i386.md"
(TARGET_UINTR && TARGET_64BIT))
            return -1;
          return 1999; /* senduipi */

        case 70:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !(
#line 29882 "../../src/gcc/config/i386/i386.md"
(TARGET_WAITPKG) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 2002; /* umonitor_si */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29882 "../../src/gcc/config/i386/i386.md"
(TARGET_WAITPKG) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 2003; /* umonitor_di */

            default:
              return -1;
            }

        case 76:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 29909 "../../src/gcc/config/i386/i386.md"
(TARGET_CLDEMOTE))
            return -1;
          return 2006; /* cldemote */

        case 77:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 2007; /* speculation_barrier */

        case 81:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 29923 "../../src/gcc/config/i386/i386.md"
(TARGET_SERIALIZE))
            return -1;
          return 2008; /* serialize */

        case 83:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!register_operand (operands[0], E_SImode)
              || !
#line 29945 "../../src/gcc/config/i386/i386.md"
(TARGET_HRESET))
            return -1;
          return 2010; /* hreset */

        case 87:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_BLKmode)
              || !
#line 30063 "../../src/gcc/config/i386/i386.md"
(TARGET_AMX_TILE))
            return -1;
          return 2013; /* ldtilecfg */

        case 90:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 6868 "../../src/gcc/config/i386/mmx.md"
(TARGET_MMX))
            return -1;
          *pnum_clobbers = 16;
          return 2387; /* *mmx_emms */

        case 91:
          if (pnum_clobbers == NULL)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !
#line 6869 "../../src/gcc/config/i386/mmx.md"
(TARGET_3DNOW))
            return -1;
          *pnum_clobbers = 16;
          return 2388; /* *mmx_femms */

        case 92:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!memory_operand (operands[0], E_SImode)
              || !
#line 22496 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE))
            return -1;
          return 8585; /* sse_ldmxcsr */

        case 94:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!address_operand (operands[0], E_VOIDmode)
              || !
#line 22520 "../../src/gcc/config/i386/sse.md"
(TARGET_SSE2))
            return -1;
          return 8587; /* sse2_clflush */

        default:
          return -1;
        }

    case 2:
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      switch (XINT (x1, 1))
        {
        case 4:
          return 1497; /* max_skip_align */

        case 84:
          if (!local_func_symbolic_operand (operands[0], E_VOIDmode)
              || !const_int_operand (operands[1], E_SImode)
              || !
#line 29002 "../../src/gcc/config/i386/i386.md"
(TARGET_PREFETCHI && TARGET_64BIT))
            return -1;
          return 1889; /* prefetchi */

        case 25:
          if (GET_MODE (x1) != E_BLKmode
              || !memory_operand (operands[0], E_BLKmode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 29254 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1917; /* xrstor */

        case 31:
          if (GET_MODE (x1) != E_BLKmode
              || !memory_operand (operands[0], E_BLKmode)
              || !register_operand (operands[1], E_DImode)
              || !(
#line 29254 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 29197 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1918; /* xrstors */

        case 37:
          if (GET_MODE (x1) != E_SImode
              || !register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 29294 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1923; /* xsetbv */

        case 63:
          switch (pattern395 ())
            {
            case 0:
              if (!
#line 29554 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
                return -1;
              return 1962; /* wrsssi */

            case 1:
              if (!(
#line 29554 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1963; /* wrssdi */

            default:
              return -1;
            }

        case 64:
          switch (pattern395 ())
            {
            case 0:
              if (!
#line 29563 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK))
                return -1;
              return 1964; /* wrusssi */

            case 1:
              if (!(
#line 29563 "../../src/gcc/config/i386/i386.md"
(TARGET_SHSTK) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1965; /* wrussdi */

            default:
              return -1;
            }

        case 82:
          if (!const_int_operand (operands[0], E_VOIDmode)
              || !const_int_operand (operands[1], E_VOIDmode))
            return -1;
          return 2009; /* patchable_area */

        case 86:
          if (!x86_64_szext_nonmemory_operand (operands[0], E_DImode)
              || !register_operand (operands[1], E_DImode)
              || !
#line 30055 "../../src/gcc/config/i386/i386.md"
(TARGET_USER_MSR && TARGET_64BIT))
            return -1;
          return 2012; /* uwrmsr */

        case 96:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !
#line 22533 "../../src/gcc/config/i386/sse.md"
(TARGET_MWAIT))
            return -1;
          return 8588; /* sse3_mwait */

        default:
          return -1;
        }

    case 3:
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      x4 = XVECEXP (x1, 0, 2);
      operands[2] = x4;
      switch (XINT (x1, 1))
        {
        case 25:
          if (pattern573 (x1) != 0
              || !
#line 29267 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1919; /* xrstor_rex64 */

        case 31:
          if (pattern573 (x1) != 0
              || !(
#line 29267 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29197 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1920; /* xrstors_rex64 */

        case 27:
          if (pattern573 (x1) != 0
              || !
#line 29281 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1921; /* xrstor64 */

        case 33:
          if (pattern573 (x1) != 0
              || !(
#line 29281 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 29201 "../../src/gcc/config/i386/i386.md"
(TARGET_XSAVES)))
            return -1;
          return 1922; /* xrstors64 */

        case 37:
          if (pattern574 (x1) != 0
              || !
#line 29304 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE))
            return -1;
          return 1924; /* xsetbv_rex64 */

        case 14:
          if (!nonimmediate_operand (operands[1], E_SImode)
              || !const_int_operand (operands[2], E_SImode))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !
#line 29417 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP))
                return -1;
              return 1935; /* lwp_lwpvalsi */

            case E_DImode:
              if (!register_operand (operands[0], E_DImode)
                  || !(
#line 29417 "../../src/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return -1;
              return 1936; /* lwp_lwpvaldi */

            default:
              return -1;
            }

        case 54:
          if (!register_operand (operands[0], E_SImode)
              || !register_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode)
              || !
#line 29688 "../../src/gcc/config/i386/i386.md"
(TARGET_MWAITX))
            return -1;
          return 1975; /* mwaitx */

        case 53:
          switch (pattern575 ())
            {
            case 0:
              if (!(
#line 29700 "../../src/gcc/config/i386/i386.md"
(TARGET_MWAITX) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 1976; /* monitorx_si */

            case 1:
              if (!(
#line 29700 "../../src/gcc/config/i386/i386.md"
(TARGET_MWAITX) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 1977; /* monitorx_di */

            default:
              return -1;
            }

        case 56:
          if (pattern574 (x1) != 0
              || !
#line 29755 "../../src/gcc/config/i386/i386.md"
(TARGET_PKU))
            return -1;
          return 1981; /* *wrpkru */

        case 95:
          switch (pattern575 ())
            {
            case 0:
              if (!(
#line 22545 "../../src/gcc/config/i386/sse.md"
(TARGET_MWAIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == SImode)))
                return -1;
              return 8589; /* sse3_monitor_si */

            case 1:
              if (!(
#line 22545 "../../src/gcc/config/i386/sse.md"
(TARGET_MWAIT) && 
#line 1398 "../../src/gcc/config/i386/i386.md"
(Pmode == DImode)))
                return -1;
              return 8590; /* sse3_monitor_di */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case 4:
      if (pnum_clobbers == NULL
          || XINT (x1, 1) != 98
          || GET_MODE (x1) != E_V2DImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      operands[0] = x2;
      if (!register_operand (operands[0], E_V2DImode))
        return -1;
      x3 = XVECEXP (x1, 0, 1);
      operands[1] = x3;
      if (!register_operand (operands[1], E_V2DImode))
        return -1;
      x4 = XVECEXP (x1, 0, 2);
      operands[2] = x4;
      if (!register_operand (operands[2], E_V2DImode))
        return -1;
      x5 = XVECEXP (x1, 0, 3);
      operands[3] = x5;
      if (!register_operand (operands[3], E_SImode)
          || !
#line 31227 "../../src/gcc/config/i386/sse.md"
(TARGET_KL))
        return -1;
      *pnum_clobbers = 1;
      return 10363; /* loadiwkey */

    default:
      return -1;
    }
}

 rtx_insn *
split_15 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (pattern1176 (x2))
    {
    case 0:
      switch (GET_MODE (operands[0]))
        {
        case E_DImode:
          x3 = XEXP (x2, 1);
          if (GET_MODE (x3) != E_DImode)
            return NULL;
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode)
              && x86_64_hilo_general_operand (operands[2], E_DImode)
              && ((
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 6467 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_98 (insn, operands);
          if (!register_operand (operands[0], E_DImode)
              || !register_operand (operands[1], E_DImode)
              || !x86_64_nonmemory_operand (operands[2], E_DImode))
            return NULL;
          if ((
#line 7053 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return gen_split_123 (insn, operands);
          if (!(
#line 7079 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
            return NULL;
          return gen_split_128 (insn, operands);

        case E_TImode:
          x3 = XEXP (x2, 1);
          if (pattern563 (x3, 
E_TImode) != 0
              || !((
#line 6465 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 6467 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_99 (insn, operands);

        case E_SImode:
          x3 = XEXP (x2, 1);
          if (pattern1504 (x3, 
E_SImode) != 0)
            return NULL;
          if (
#line 7053 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)))
            return gen_split_122 (insn, operands);
          if (!
#line 7079 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_127 (insn, operands);

        case E_QImode:
          x3 = XEXP (x2, 1);
          if (pattern1250 (x3, 
E_QImode) != 0
              || !
#line 7079 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_125 (insn, operands);

        case E_HImode:
          if (!register_operand (operands[0], E_HImode))
            return NULL;
          x3 = XEXP (x2, 1);
          if (GET_MODE (x3) != E_HImode
              || !register_operand (operands[1], E_HImode)
              || !nonmemory_operand (operands[2], E_HImode)
              || !
#line 7079 "../../src/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)))
            return NULL;
          return gen_split_126 (insn, operands);

        default:
          return NULL;
        }

    case 1:
      if (!(
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6969 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
        return NULL;
      return gen_split_114 (insn, operands);

    case 2:
      if (!(
#line 6946 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 6969 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
        return NULL;
      return gen_split_115 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_22 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
            return gen_split_288 (insn, operands);
          break;

        case 1:
          if ((
#line 12741 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12745 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
            return gen_split_291 (insn, operands);
          break;

        case 2:
          if (nonimmediate_operand (operands[0], E_DImode)
              && nonimmediate_operand (operands[1], E_DImode))
            {
              if (x86_64_hilo_general_operand (operands[2], E_DImode)
                  && ((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 13529 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_387 (insn, operands);
              if (const_int_operand (operands[2], E_DImode)
                  && (
#line 13633 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_USE_BT
   && ix86_binary_operator_ok (IOR, DImode, operands)
   && IN_RANGE (exact_log2 (INTVAL (operands[2])), 31, 63)) && 
#line 13637 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return gen_split_394 (insn, operands);
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
                return gen_split_422 (insn, operands);
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
                return gen_split_428 (insn, operands);
            }
          break;

        case 3:
          if (((
#line 13527 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13529 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return gen_split_389 (insn, operands);
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
            return gen_split_418 (insn, operands);
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
            return gen_split_424 (insn, operands);
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
            return gen_split_420 (insn, operands);
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
            return gen_split_426 (insn, operands);
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
            return gen_split_294 (insn, operands);
          break;

        case 1:
          if ((
#line 12768 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12772 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !rtx_equal_p (operands[0], operands[1]))))
            return gen_split_297 (insn, operands);
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
            return gen_split_300 (insn, operands);
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
          return gen_split_303 (insn, operands);

        case 1:
          if (!(
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_306 (insn, operands);

        case 2:
          if (!((
#line 12801 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 12803 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_309 (insn, operands);

        case 3:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_323 (insn, operands);

        case 4:
          if (!
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed))
            return NULL;
          return gen_split_326 (insn, operands);

        case 5:
          if (!(
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 13044 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
            return NULL;
          return gen_split_329 (insn, operands);

        default:
          return NULL;
        }

    case ASHIFT:
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      x6 = XEXP (x5, 0);
      switch (GET_CODE (x6))
        {
        case REG:
        case SUBREG:
        case MEM:
          x9 = XEXP (x4, 1);
          if (GET_CODE (x9) != LSHIFTRT)
            return NULL;
          switch (pattern1242 (x4))
            {
            case 0:
              if (!(
#line 15531 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15535 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_563 (insn, operands);

            case 1:
              if (!(
#line 15763 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 15766 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_567 (insn, operands);

            case 2:
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (nonimmediate_operand (operands[0], E_DImode))
                {
                  x11 = XEXP (x5, 1);
                  operands[2] = x11;
                  if (rtx_equal_p (x6, operands[0]))
                    {
                      x12 = XEXP (x9, 1);
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && (
#line 15584 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 15586 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_564 (insn, operands);
                    }
                }
              operands[2] = x10;
              if (!register_operand (operands[0], E_DImode))
                return NULL;
              operands[1] = x6;
              if (!nonimmediate_operand (operands[1], E_DImode))
                return NULL;
              x11 = XEXP (x5, 1);
              operands[3] = x11;
              x12 = XEXP (x9, 1);
              x13 = XEXP (x12, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 15605 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 15608 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_565 (insn, operands);

            case 3:
              x10 = XEXP (x9, 0);
              operands[1] = x10;
              if (nonimmediate_operand (operands[0], E_SImode))
                {
                  x11 = XEXP (x5, 1);
                  operands[2] = x11;
                  if (rtx_equal_p (x6, operands[0]))
                    {
                      x12 = XEXP (x9, 1);
                      x13 = XEXP (x12, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && (
#line 15815 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 15817 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_568 (insn, operands);
                    }
                }
              operands[2] = x10;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              operands[1] = x6;
              if (!nonimmediate_operand (operands[1], E_SImode))
                return NULL;
              x11 = XEXP (x5, 1);
              operands[3] = x11;
              x12 = XEXP (x9, 1);
              x13 = XEXP (x12, 1);
              if (!rtx_equal_p (x13, operands[3])
                  || !(
#line 15836 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 15839 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_569 (insn, operands);

            default:
              return NULL;
            }

        case CONST_INT:
          if (XWINT (x6, 0) != 1L)
            return NULL;
          switch (pattern1057 (x4))
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
              return gen_split_796 (insn, operands);

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
              return gen_split_798 (insn, operands);

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
              return gen_split_800 (insn, operands);

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
              return gen_split_802 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case LSHIFTRT:
      x9 = XEXP (x4, 1);
      if (GET_CODE (x9) != ASHIFT)
        return NULL;
      x8 = XEXP (x3, 0);
      operands[0] = x8;
      switch (pattern1242 (x4))
        {
        case 0:
          if (!(
#line 16916 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[3]) == 64 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 16920 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_610 (insn, operands);

        case 1:
          if (!(
#line 17147 "../../src/gcc/config/i386/i386.md"
(INTVAL (operands[3]) == 32 - INTVAL (operands[2])
   && ix86_pre_reload_split ()) && 
#line 17150 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_614 (insn, operands);

        case 2:
          x10 = XEXP (x9, 0);
          operands[1] = x10;
          if (nonimmediate_operand (operands[0], E_DImode))
            {
              x11 = XEXP (x5, 1);
              operands[2] = x11;
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x12 = XEXP (x9, 1);
                  x13 = XEXP (x12, 1);
                  if (rtx_equal_p (x13, operands[2])
                      && (
#line 16969 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 16971 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_611 (insn, operands);
                }
            }
          operands[2] = x10;
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_DImode))
            return NULL;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          x12 = XEXP (x9, 1);
          x13 = XEXP (x12, 1);
          if (!rtx_equal_p (x13, operands[2])
              || !(
#line 16990 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
  && ix86_pre_reload_split ()) && 
#line 16993 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_612 (insn, operands);

        case 3:
          x10 = XEXP (x9, 0);
          operands[1] = x10;
          if (nonimmediate_operand (operands[0], E_SImode))
            {
              x11 = XEXP (x5, 1);
              operands[2] = x11;
              x6 = XEXP (x5, 0);
              if (rtx_equal_p (x6, operands[0]))
                {
                  x12 = XEXP (x9, 1);
                  x13 = XEXP (x12, 1);
                  if (rtx_equal_p (x13, operands[2])
                      && (
#line 17199 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 17201 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return gen_split_615 (insn, operands);
                }
            }
          operands[2] = x10;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x6 = XEXP (x5, 0);
          operands[1] = x6;
          if (!nonimmediate_operand (operands[1], E_SImode))
            return NULL;
          x11 = XEXP (x5, 1);
          operands[3] = x11;
          x12 = XEXP (x9, 1);
          x13 = XEXP (x12, 1);
          if (!rtx_equal_p (x13, operands[3])
              || !(
#line 17220 "../../src/gcc/config/i386/i386.md"
(TARGET_APX_NDD
   && ix86_pre_reload_split ()) && 
#line 17223 "../../src/gcc/config/i386/i386.md"
( 1)))
            return NULL;
          return gen_split_616 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_34 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case SIGN_EXTRACT:
        case ZERO_EXTRACT:
          x4 = XEXP (x3, 1);
          if (GET_CODE (x4) != CONST_INT)
            return NULL;
          if (XWINT (x4, 0) == 1L)
            {
              res = split_14 (x1, insn);
              if (res != NULL_RTX)
                return res;
            }
          if (XWINT (x4, 0) != 8L
              || pattern717 (x2) != 0)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          switch (pattern1418 (x2))
            {
            case 0:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_358 (insn, operands);

            case 1:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_361 (insn, operands);

            case 2:
              if (!((
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_364 (insn, operands);

            case 3:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_359 (insn, operands);

            case 4:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_362 (insn, operands);

            case 5:
              if (!((
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_365 (insn, operands);

            case 6:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_360 (insn, operands);

            case 7:
              if (!(
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_363 (insn, operands);

            case 8:
              if (!((
#line 13228 "../../src/gcc/config/i386/i386.md"
(GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13232 "../../src/gcc/config/i386/i386.md"
( reload_completed
   && !(rtx_equal_p (operands[0], operands[1])
	|| rtx_equal_p (operands[0], operands[2])))))
                return NULL;
              return gen_split_366 (insn, operands);

            default:
              return NULL;
            }

        case ZERO_EXTEND:
          return split_30 (x1, insn);

        case FIX:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x7 = XEXP (x3, 0);
          operands[1] = x7;
          if (!register_operand (operands[1], E_VOIDmode))
            return NULL;
          switch (pattern547 (x3))
            {
            case 0:
              if (!(
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_76 (insn, operands);

            case 1:
              if (!(
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_77 (insn, operands);

            case 2:
              if (!(
#line 5993 "../../src/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && ix86_pre_reload_split ()) && 
#line 5999 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_78 (insn, operands);

            default:
              return NULL;
            }

        case MULT:
          if (pattern338 (x1) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
          switch (GET_CODE (x7))
            {
            case REG:
              if (!rtx_equal_p (x7, operands[0]))
                return NULL;
              x4 = XEXP (x3, 1);
              operands[1] = x4;
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (!general_reg_operand (operands[0], E_SImode)
                      || GET_MODE (x3) != E_SImode
                      || !const1248_operand (operands[1], E_SImode)
                      || !
#line 6420 "../../src/gcc/config/i386/i386.md"
(reload_completed))
                    return NULL;
                  return gen_split_94 (insn, operands);

                case E_DImode:
                  if (!general_reg_operand (operands[0], E_DImode)
                      || GET_MODE (x3) != E_DImode
                      || !const1248_operand (operands[1], E_DImode)
                      || !(
#line 6420 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_95 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) != ZERO_EXTEND)
                return NULL;
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              x9 = XEXP (x4, 0);
              operands[2] = x9;
              switch (GET_MODE (operands[0]))
                {
                case E_DImode:
                  if (pattern561 (x3, 
E_SImode, 
E_DImode) != 0
                      || !(
#line 11021 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)))
                    return NULL;
                  return gen_split_238 (insn, operands);

                case E_TImode:
                  if (pattern561 (x3, 
E_DImode, 
E_TImode) != 0
                      || !(
#line 11021 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && REGNO (operands[1]) == DX_REG) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                    return NULL;
                  return gen_split_239 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case PLUS:
          return split_25 (x1, insn);

        case SUBREG:
          return split_24 (x1, insn);

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
          if (GET_CODE (x3) == EQ)
            {
              x7 = XEXP (x3, 0);
              switch (GET_CODE (x7))
                {
                case PLUS:
                  switch (pattern721 (x1, 
PLUS))
                    {
                    case 0:
                      if (((
#line 7713 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 7715 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_146 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 7713 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7715 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_147 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 7759 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 7763 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_148 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 7759 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 7763 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_149 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                case MINUS:
                  switch (pattern721 (x1, 
MINUS))
                    {
                    case 0:
                      if (((
#line 8485 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8487 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_186 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 8485 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8487 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_187 (insn, operands);
                      break;

                    case 2:
                      if (((
#line 8529 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1235 "../../src/gcc/config/i386/i386.md"
(!TARGET_64BIT)) && 
#line 8533 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_188 (insn, operands);
                      break;

                    case 3:
                      if (((
#line 8529 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && CONST_SCALAR_INT_P (operands[2])
   && rtx_equal_p (operands[2], operands[3])) && 
#line 1236 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8533 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                        return gen_split_189 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                case ZERO_EXTRACT:
                  switch (pattern686 (x1))
                    {
                    case 0:
                      if ((
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 19386 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_842 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 19384 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19386 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_843 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  break;

                default:
                  break;
                }
            }
          operands[1] = x3;
          switch (pattern367 (x1))
            {
            case 0:
              if (!(
#line 19497 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 19500 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_852 (insn, operands);

            case 1:
              if (!(
#line 19497 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 19500 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_853 (insn, operands);

            default:
              return NULL;
            }

        case MINUS:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x7 = XEXP (x3, 0);
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
            case MEM:
            case LABEL_REF:
            case SYMBOL_REF:
            case HIGH:
              operands[1] = x7;
              res = split_16 (x1, insn);
              if (res != NULL_RTX)
                return res;
              if (GET_CODE (x7) != SUBREG)
                return NULL;
              switch (pattern1045 (x2))
                {
                case 0:
                  if (!(
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8250 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_177 (insn, operands);

                case 1:
                  if (!(
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 8250 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_178 (insn, operands);

                case 2:
                  if (!((
#line 8248 "../../src/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8250 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_179 (insn, operands);

                case 3:
                  if (!
#line 8339 "../../src/gcc/config/i386/i386.md"
( reload_completed))
                    return NULL;
                  return gen_split_180 (insn, operands);

                case 4:
                  if (!
#line 8339 "../../src/gcc/config/i386/i386.md"
( reload_completed))
                    return NULL;
                  return gen_split_181 (insn, operands);

                case 5:
                  if (!(
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 8339 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_182 (insn, operands);

                default:
                  return NULL;
                }

            case MINUS:
              x10 = XEXP (x7, 1);
              if (GET_CODE (x10) != EQ)
                return NULL;
              x11 = XEXP (x10, 1);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return NULL;
              x6 = XEXP (x2, 0);
              operands[0] = x6;
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              x12 = XEXP (x10, 0);
              operands[3] = x12;
              if (!int_nonimmediate_operand (operands[3], E_VOIDmode))
                return NULL;
              x4 = XEXP (x3, 1);
              operands[2] = x4;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern1566 (x3, 
E_QImode) != 0
                      || !(
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_218 (insn, operands);

                case E_HImode:
                  if (pattern1566 (x3, 
E_HImode) != 0
                      || !(
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_219 (insn, operands);

                case E_SImode:
                  if (pattern1567 (x3, 
E_SImode) != 0
                      || !(
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 10233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_220 (insn, operands);

                case E_DImode:
                  if (pattern1567 (x3, 
E_DImode) != 0
                      || !((
#line 10230 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands, TARGET_APX_NDD)
   && ix86_pre_reload_split ()) && 
#line 1161 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_221 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case IF_THEN_ELSE:
          x7 = XEXP (x3, 0);
          if (!bt_comparison_operator (x7, E_VOIDmode))
            return NULL;
          x10 = XEXP (x7, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          switch (pattern692 (x1))
            {
            case 0:
              x8 = XEXP (x7, 0);
              operands[2] = x8;
              x4 = XEXP (x3, 1);
              if (GET_CODE (x4) != PLUS)
                return NULL;
              x13 = XEXP (x4, 1);
              if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + -1])
                return NULL;
              x6 = XEXP (x2, 0);
              operands[0] = x6;
              operands[1] = x7;
              switch (pattern1577 (x3))
                {
                case 0:
                  if (!(
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 8752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_190 (insn, operands);

                case 1:
                  if (!(
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 8752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_191 (insn, operands);

                case 2:
                  if (!((
#line 8750 "../../src/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 8752 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                    return NULL;
                  return gen_split_192 (insn, operands);

                default:
                  return NULL;
                }

            case 1:
              x8 = XEXP (x7, 0);
              x14 = XEXP (x8, 1);
              if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return NULL;
              switch (pattern1337 (x2))
                {
                case 0:
                  x15 = XEXP (x8, 2);
                  operands[2] = x15;
                  switch (pattern1685 (x3))
                    {
                    case 0:
                      if ((
#line 19189 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], SImode))
   && ix86_pre_reload_split ()) && 
#line 19197 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_820 (insn, operands);
                      break;

                    case 1:
                      if (((
#line 19189 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (CONST_INT_P (operands[2])
       ? (INTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)
	  && INTVAL (operands[2])
	       >= (optimize_function_for_size_p (cfun) ? 8 : 32))
       : !memory_operand (operands[1], DImode))
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19197 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return gen_split_821 (insn, operands);
                      break;

                    default:
                      break;
                    }
                  if (GET_CODE (x15) != SUBREG)
                    return NULL;
                  switch (pattern1687 (x3))
                    {
                    case 0:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_824 (insn, operands);

                    case 1:
                      if (!(
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_826 (insn, operands);

                    case 2:
                      if (!((
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_828 (insn, operands);

                    case 3:
                      if (!((
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_825 (insn, operands);

                    case 4:
                      if (!((
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_827 (insn, operands);

                    case 5:
                      if (!((
#line 19265 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19270 "../../src/gcc/config/i386/i386.md"
( 1)))
                        return NULL;
                      return gen_split_829 (insn, operands);

                    default:
                      return NULL;
                    }

                case 1:
                  if (!(
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1
   && ix86_pre_reload_split ()) && 
#line 19233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_822 (insn, operands);

                case 2:
                  if (!((
#line 19228 "../../src/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1
   && ix86_pre_reload_split ()) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 19233 "../../src/gcc/config/i386/i386.md"
( 1)))
                    return NULL;
                  return gen_split_823 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case COMPARE:
          return split_23 (x1, insn);

        case AND:
          return split_21 (x1, insn);

        case IOR:
          return split_22 (x1, insn);

        case XOR:
          return split_20 (x1, insn);

        case NOT:
          x7 = XEXP (x3, 0);
          if (GET_CODE (x7) != XOR
              || pattern339 (x1) != 0)
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (pattern1330 (x3, 
E_HImode) != 0
                  || !(
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands, TARGET_APX_NDD)) && 
#line 13609 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_391 (insn, operands);

            case E_SImode:
              if (pattern1331 (x3, 
E_SImode) != 0
                  || !(
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands, TARGET_APX_NDD)) && 
#line 13609 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_392 (insn, operands);

            case E_DImode:
              if (pattern1331 (x3, 
E_DImode) != 0
                  || !((
#line 13607 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands, TARGET_APX_NDD)) && 
#line 1164 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 13609 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_393 (insn, operands);

            case E_QImode:
              if (pattern1330 (x3, 
E_QImode) != 0
                  || !(
#line 13807 "../../src/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands, TARGET_APX_NDD)) && 
#line 13809 "../../src/gcc/config/i386/i386.md"
( reload_completed)))
                return NULL;
              return gen_split_399 (insn, operands);

            default:
              return NULL;
            }

        case NEG:
          return split_27 (x1, insn);

        case ABS:
          return split_29 (x1, insn);

        case ASHIFT:
          return split_26 (x1, insn);

        case LSHIFTRT:
          return split_28 (x1, insn);

        case ASHIFTRT:
          return split_31 (x1, insn);

        case ROTATE:
          return split_33 (x1, insn);

        case ROTATERT:
          return split_32 (x1, insn);

        case CONST_INT:
          if (XWINT (x3, 0) != 0L)
            return NULL;
          x6 = XEXP (x2, 0);
          if (GET_CODE (x6) != ZERO_EXTRACT
              || GET_MODE (x6) != E_HImode)
            return NULL;
          x16 = XEXP (x6, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x17 = XEXP (x6, 0);
          operands[0] = x17;
          x18 = XEXP (x6, 2);
          operands[1] = x18;
          if (!register_operand (operands[1], E_QImode))
            return NULL;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (nonimmediate_operand (operands[0], E_QImode)
                  && (
#line 18963 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18965 "../../src/gcc/config/i386/i386.md"
( MEM_P (operands[0]))))
                return gen_split_810 (insn, operands);
              if (!register_operand (operands[0], E_QImode)
                  || !
#line 18987 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_812 (insn, operands);

            case E_HImode:
              if (nonimmediate_operand (operands[0], E_HImode)
                  && (
#line 18963 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()) && 
#line 18965 "../../src/gcc/config/i386/i386.md"
( MEM_P (operands[0]))))
                return gen_split_811 (insn, operands);
              if (!register_operand (operands[0], E_HImode)
                  || !
#line 18987 "../../src/gcc/config/i386/i386.md"
(TARGET_USE_BT && ix86_pre_reload_split ()))
                return NULL;
              return gen_split_813 (insn, operands);

            default:
              return NULL;
            }

        case CTZ:
          switch (pattern406 (x1))
            {
            case 0:
              if (!
#line 21063 "../../src/gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
                return NULL;
              return gen_split_873 (insn, operands);

            case 1:
              if (!(
#line 21063 "../../src/gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)))
                return NULL;
              return gen_split_874 (insn, operands);

            default:
              return NULL;
            }

        case SIGN_EXTEND:
          if (GET_MODE (x3) != E_DImode)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          if (!register_operand (operands[0], E_DImode))
            return NULL;
          x7 = XEXP (x3, 0);
          if (GET_MODE (x7) != E_SImode)
            return NULL;
          switch (GET_CODE (x7))
            {
            case CTZ:
              x8 = XEXP (x7, 0);
              operands[1] = x8;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !
#line 21171 "../../src/gcc/config/i386/i386.md"
((TARGET_BMI || TARGET_CPU_P (GENERIC))
   && (TARGET_AVOID_FALSE_DEP_FOR_BMI || TARGET_AVOID_FALSE_DEP_FOR_TZCNT)
   && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1])))
                return NULL;
              return gen_split_876 (insn, operands);

            case XOR:
              x8 = XEXP (x7, 0);
              if (GET_CODE (x8) != MINUS
                  || GET_MODE (x8) != E_SImode)
                return NULL;
              x19 = XEXP (x8, 0);
              if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x14 = XEXP (x8, 1);
              if (GET_CODE (x14) != CLZ
                  || GET_MODE (x14) != E_SImode)
                return NULL;
              x10 = XEXP (x7, 1);
              if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x20 = XEXP (x14, 0);
              operands[1] = x20;
              if (!nonimmediate_operand (operands[1], E_SImode)
                  || !(
#line 21333 "../../src/gcc/config/i386/i386.md"
(!TARGET_LZCNT && TARGET_64BIT && ix86_pre_reload_split ()) && 
#line 21335 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_879 (insn, operands);

            default:
              return NULL;
            }

        case CLZ:
          switch (pattern406 (x1))
            {
            case 0:
              if (!(
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 21506 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_886 (insn, operands);

            case 1:
              if (!((
#line 21504 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21506 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                return NULL;
              return gen_split_887 (insn, operands);

            default:
              return NULL;
            }

        case UNSPEC:
          if (XVECLEN (x3, 0) != 1)
            return NULL;
          x5 = XVECEXP (x1, 0, 1);
          if (pattern229 (x5, 
E_CCmode, 
17) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x21 = XVECEXP (x3, 0, 0);
          operands[1] = x21;
          switch (XINT (x3, 1))
            {
            case 97:
              switch (pattern1339 (x3))
                {
                case 0:
                  if (!(
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 21668 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_894 (insn, operands);

                case 1:
                  if (!((((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21628 "../../src/gcc/config/i386/i386.md"
(TARGET_BMI)) && 
#line 21668 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_896 (insn, operands);

                default:
                  return NULL;
                }

            case 96:
              switch (pattern1339 (x3))
                {
                case 0:
                  if (!(
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 21668 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_895 (insn, operands);

                case 1:
                  if (!((((
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 21629 "../../src/gcc/config/i386/i386.md"
(TARGET_LZCNT)) && 
#line 21668 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_897 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case POPCOUNT:
          x5 = XVECEXP (x1, 0, 1);
          if (pattern351 (x5) != 0)
            return NULL;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          x7 = XEXP (x3, 0);
          switch (GET_CODE (x7))
            {
            case REG:
            case SUBREG:
            case MEM:
              operands[1] = x7;
              switch (pattern405 (x3))
                {
                case 0:
                  if (!(
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 22319 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_910 (insn, operands);

                case 1:
                  if (!((
#line 22311 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 1167 "../../src/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 22319 "../../src/gcc/config/i386/i386.md"
( TARGET_AVOID_FALSE_DEP_FOR_BMI && epilogue_completed
   && optimize_function_for_speed_p (cfun)
   && !reg_mentioned_p (operands[0], operands[1]))))
                    return NULL;
                  return gen_split_911 (insn, operands);

                default:
                  return NULL;
                }

            case ZERO_EXTEND:
              if (pattern1175 (x3, 
E_HImode, 
E_SImode) != 0
                  || !(
#line 22481 "../../src/gcc/config/i386/i386.md"
(TARGET_POPCNT
   && ix86_pre_reload_split ()) && 
#line 22484 "../../src/gcc/config/i386/i386.md"
( 1)))
                return NULL;
              return gen_split_914 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case SIMPLE_RETURN:
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != USE)
        return NULL;
      x22 = XEXP (x5, 0);
      operands[0] = x22;
      if (!const_int_operand (operands[0], E_SImode)
          || !(
#line 20657 "../../src/gcc/config/i386/i386.md"
(reload_completed) && 
#line 20659 "../../src/gcc/config/i386/i386.md"
( cfun->machine->function_return_type != indirect_branch_keep)))
        return NULL;
      return gen_split_868 (insn, operands);

    default:
      return NULL;
    }
}

 rtx_insn *
split_67 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
          return gen_split_1678 (insn, operands);

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
          return gen_split_1705 (insn, operands);

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
          return gen_split_1732 (insn, operands);

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
          return gen_split_1759 (insn, operands);

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
          return gen_split_1786 (insn, operands);

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
          return gen_split_1813 (insn, operands);

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
          return gen_split_1840 (insn, operands);

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
          return gen_split_1867 (insn, operands);

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
          return gen_split_1894 (insn, operands);

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
          return gen_split_1921 (insn, operands);

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
          return gen_split_1948 (insn, operands);

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
          return gen_split_1975 (insn, operands);

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
          return gen_split_1681 (insn, operands);

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
          return gen_split_1708 (insn, operands);

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
          return gen_split_1735 (insn, operands);

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
          return gen_split_1762 (insn, operands);

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
          return gen_split_1789 (insn, operands);

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
          return gen_split_1816 (insn, operands);

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
          return gen_split_1843 (insn, operands);

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
          return gen_split_1870 (insn, operands);

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
          return gen_split_1897 (insn, operands);

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
          return gen_split_1924 (insn, operands);

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
          return gen_split_1951 (insn, operands);

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
          return gen_split_1978 (insn, operands);

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
          return gen_split_1684 (insn, operands);

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
          return gen_split_1711 (insn, operands);

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
          return gen_split_1738 (insn, operands);

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
          return gen_split_1765 (insn, operands);

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
          return gen_split_1792 (insn, operands);

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
          return gen_split_1819 (insn, operands);

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
          return gen_split_1846 (insn, operands);

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
          return gen_split_1873 (insn, operands);

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
          return gen_split_1900 (insn, operands);

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
          return gen_split_1927 (insn, operands);

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
          return gen_split_1954 (insn, operands);

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
          return gen_split_1981 (insn, operands);

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
          return gen_split_2962 (insn, operands);

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
          return gen_split_2971 (insn, operands);

        case 38:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_2980 (insn, operands);

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
          return gen_split_2989 (insn, operands);

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
          return gen_split_2998 (insn, operands);

        case 41:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3007 (insn, operands);

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
          return gen_split_3016 (insn, operands);

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
          return gen_split_3025 (insn, operands);

        case 44:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3034 (insn, operands);

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
          return gen_split_3043 (insn, operands);

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
          return gen_split_3052 (insn, operands);

        case 47:
          if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
            return NULL;
          return gen_split_3061 (insn, operands);

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
          return gen_split_2326 (insn, operands);

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
          return gen_split_2353 (insn, operands);

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
          return gen_split_2380 (insn, operands);

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
          return gen_split_2407 (insn, operands);

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
          return gen_split_2434 (insn, operands);

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
          return gen_split_2461 (insn, operands);

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
          return gen_split_2488 (insn, operands);

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
          return gen_split_2515 (insn, operands);

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
          return gen_split_2542 (insn, operands);

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
          return gen_split_2569 (insn, operands);

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
          return gen_split_2596 (insn, operands);

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
          return gen_split_2623 (insn, operands);

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
          return gen_split_2329 (insn, operands);

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
          return gen_split_2356 (insn, operands);

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
          return gen_split_2383 (insn, operands);

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
          return gen_split_2410 (insn, operands);

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
          return gen_split_2437 (insn, operands);

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
          return gen_split_2464 (insn, operands);

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
          return gen_split_2491 (insn, operands);

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
          return gen_split_2518 (insn, operands);

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
          return gen_split_2545 (insn, operands);

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
          return gen_split_2572 (insn, operands);

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
          return gen_split_2599 (insn, operands);

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
          return gen_split_2626 (insn, operands);

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
          return gen_split_2332 (insn, operands);

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
          return gen_split_2359 (insn, operands);

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
          return gen_split_2386 (insn, operands);

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
          return gen_split_2413 (insn, operands);

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
          return gen_split_2440 (insn, operands);

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
          return gen_split_2467 (insn, operands);

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
          return gen_split_2494 (insn, operands);

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
          return gen_split_2521 (insn, operands);

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
          return gen_split_2548 (insn, operands);

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
          return gen_split_2575 (insn, operands);

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
          return gen_split_2602 (insn, operands);

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
          return gen_split_2629 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

 rtx_insn *
split_76 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
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
              return gen_split_1983 (insn, operands);

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
              return gen_split_2010 (insn, operands);

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
              return gen_split_2037 (insn, operands);

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
              return gen_split_2064 (insn, operands);

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
              return gen_split_2091 (insn, operands);

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
              return gen_split_2118 (insn, operands);

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
              return gen_split_2145 (insn, operands);

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
              return gen_split_2172 (insn, operands);

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
              return gen_split_2199 (insn, operands);

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
              return gen_split_2226 (insn, operands);

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
              return gen_split_2253 (insn, operands);

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
              return gen_split_2280 (insn, operands);

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
              return gen_split_1986 (insn, operands);

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
              return gen_split_2013 (insn, operands);

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
              return gen_split_2040 (insn, operands);

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
              return gen_split_2067 (insn, operands);

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
              return gen_split_2094 (insn, operands);

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
              return gen_split_2121 (insn, operands);

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
              return gen_split_2148 (insn, operands);

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
              return gen_split_2175 (insn, operands);

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
              return gen_split_2202 (insn, operands);

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
              return gen_split_2229 (insn, operands);

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
              return gen_split_2256 (insn, operands);

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
              return gen_split_2283 (insn, operands);

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
              return gen_split_1989 (insn, operands);

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
              return gen_split_2016 (insn, operands);

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
              return gen_split_2043 (insn, operands);

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
              return gen_split_2070 (insn, operands);

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
              return gen_split_2097 (insn, operands);

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
              return gen_split_2124 (insn, operands);

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
              return gen_split_2151 (insn, operands);

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
              return gen_split_2178 (insn, operands);

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
              return gen_split_2205 (insn, operands);

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
              return gen_split_2232 (insn, operands);

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
              return gen_split_2259 (insn, operands);

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
              return gen_split_2286 (insn, operands);

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
              return gen_split_3063 (insn, operands);

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
              return gen_split_3072 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3081 (insn, operands);

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
              return gen_split_3090 (insn, operands);

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
              return gen_split_3099 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3108 (insn, operands);

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
              return gen_split_3117 (insn, operands);

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
              return gen_split_3126 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3135 (insn, operands);

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
              return gen_split_3144 (insn, operands);

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
              return gen_split_3153 (insn, operands);

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
              return gen_split_3162 (insn, operands);

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
              return gen_split_2631 (insn, operands);

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
              return gen_split_2658 (insn, operands);

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
              return gen_split_2685 (insn, operands);

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
              return gen_split_2712 (insn, operands);

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
              return gen_split_2739 (insn, operands);

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
              return gen_split_2766 (insn, operands);

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
              return gen_split_2793 (insn, operands);

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
              return gen_split_2820 (insn, operands);

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
              return gen_split_2847 (insn, operands);

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
              return gen_split_2874 (insn, operands);

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
              return gen_split_2901 (insn, operands);

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
              return gen_split_2928 (insn, operands);

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
              return gen_split_2634 (insn, operands);

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
              return gen_split_2661 (insn, operands);

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
              return gen_split_2688 (insn, operands);

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
              return gen_split_2715 (insn, operands);

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
              return gen_split_2742 (insn, operands);

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
              return gen_split_2769 (insn, operands);

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
              return gen_split_2796 (insn, operands);

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
              return gen_split_2823 (insn, operands);

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
              return gen_split_2850 (insn, operands);

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
              return gen_split_2877 (insn, operands);

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
              return gen_split_2904 (insn, operands);

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
              return gen_split_2931 (insn, operands);

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
              return gen_split_2637 (insn, operands);

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
              return gen_split_2664 (insn, operands);

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
              return gen_split_2691 (insn, operands);

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
              return gen_split_2718 (insn, operands);

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
              return gen_split_2745 (insn, operands);

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
              return gen_split_2772 (insn, operands);

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
              return gen_split_2799 (insn, operands);

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
              return gen_split_2826 (insn, operands);

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
              return gen_split_2853 (insn, operands);

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
              return gen_split_2880 (insn, operands);

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
              return gen_split_2907 (insn, operands);

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
              return gen_split_2934 (insn, operands);

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
              return gen_split_1992 (insn, operands);

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
              return gen_split_2019 (insn, operands);

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
              return gen_split_2046 (insn, operands);

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
              return gen_split_2073 (insn, operands);

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
              return gen_split_2100 (insn, operands);

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
              return gen_split_2127 (insn, operands);

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
              return gen_split_2154 (insn, operands);

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
              return gen_split_2181 (insn, operands);

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
              return gen_split_2208 (insn, operands);

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
              return gen_split_2235 (insn, operands);

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
              return gen_split_2262 (insn, operands);

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
              return gen_split_2289 (insn, operands);

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
              return gen_split_1995 (insn, operands);

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
              return gen_split_2022 (insn, operands);

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
              return gen_split_2049 (insn, operands);

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
              return gen_split_2076 (insn, operands);

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
              return gen_split_2103 (insn, operands);

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
              return gen_split_2130 (insn, operands);

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
              return gen_split_2157 (insn, operands);

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
              return gen_split_2184 (insn, operands);

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
              return gen_split_2211 (insn, operands);

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
              return gen_split_2238 (insn, operands);

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
              return gen_split_2265 (insn, operands);

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
              return gen_split_2292 (insn, operands);

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
              return gen_split_1998 (insn, operands);

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
              return gen_split_2025 (insn, operands);

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
              return gen_split_2052 (insn, operands);

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
              return gen_split_2079 (insn, operands);

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
              return gen_split_2106 (insn, operands);

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
              return gen_split_2133 (insn, operands);

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
              return gen_split_2160 (insn, operands);

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
              return gen_split_2187 (insn, operands);

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
              return gen_split_2214 (insn, operands);

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
              return gen_split_2241 (insn, operands);

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
              return gen_split_2268 (insn, operands);

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
              return gen_split_2295 (insn, operands);

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
              return gen_split_3066 (insn, operands);

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
              return gen_split_3075 (insn, operands);

            case 38:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3084 (insn, operands);

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
              return gen_split_3093 (insn, operands);

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
              return gen_split_3102 (insn, operands);

            case 41:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3111 (insn, operands);

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
              return gen_split_3120 (insn, operands);

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
              return gen_split_3129 (insn, operands);

            case 44:
              if (!(
#line 13959 "../../src/gcc/config/i386/sse.md"
((16 == 64 || TARGET_AVX512VL
    || (TARGET_AVX512F && TARGET_EVEX512 && !TARGET_PREFER_AVX256))
   && ix86_pre_reload_split ()) && 
#line 13963 "../../src/gcc/config/i386/sse.md"
( 1)))
                return NULL;
              return gen_split_3138 (insn, operands);

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
              return gen_split_3147 (insn, operands);

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
              return gen_split_3156 (insn, operands);

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
              return gen_split_3165 (insn, operands);

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
              return gen_split_2640 (insn, operands);

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
              return gen_split_2667 (insn, operands);

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
              return gen_split_2694 (insn, operands);

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
              return gen_split_2721 (insn, operands);

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
              return gen_split_2748 (insn, operands);

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
              return gen_split_2775 (insn, operands);

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
              return gen_split_2802 (insn, operands);

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
              return gen_split_2829 (insn, operands);

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
              return gen_split_2856 (insn, operands);

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
              return gen_split_2883 (insn, operands);

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
              return gen_split_2910 (insn, operands);

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
              return gen_split_2937 (insn, operands);

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
              return gen_split_2643 (insn, operands);

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
              return gen_split_2670 (insn, operands);

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
              return gen_split_2697 (insn, operands);

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
              return gen_split_2724 (insn, operands);

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
              return gen_split_2751 (insn, operands);

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
              return gen_split_2778 (insn, operands);

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
              return gen_split_2805 (insn, operands);

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
              return gen_split_2832 (insn, operands);

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
              return gen_split_2859 (insn, operands);

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
              return gen_split_2886 (insn, operands);

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
              return gen_split_2913 (insn, operands);

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
              return gen_split_2940 (insn, operands);

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
              return gen_split_2646 (insn, operands);

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
              return gen_split_2673 (insn, operands);

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
              return gen_split_2700 (insn, operands);

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
              return gen_split_2727 (insn, operands);

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
              return gen_split_2754 (insn, operands);

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
              return gen_split_2781 (insn, operands);

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
              return gen_split_2808 (insn, operands);

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
              return gen_split_2835 (insn, operands);

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
              return gen_split_2862 (insn, operands);

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
              return gen_split_2889 (insn, operands);

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
              return gen_split_2916 (insn, operands);

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
              return gen_split_2943 (insn, operands);

            default:
              return NULL;
            }

        default:
          return NULL;
        }

    case XOR:
      return split_70 (x1, insn);

    default:
      return NULL;
    }
}
